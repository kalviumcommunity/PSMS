-- Advanced Queries and Subqueries

-- INNER JOIN to retrieve information about cases along with assigned officer details

SELECT
    Reports_Case.ReportID,
    Reports_Case.IncidentType,
    Reports_Case.IncidentDate,
    CONCAT( 
        PolicePersonal.FirstName,
        ' ',
        PolicePersonal.LastName
    ) AS AssignedOfficerName
FROM Reports_Case
    INNER JOIN PolicePersonal ON Reports_Case.AssignedOfficerID = PolicePersonal.OfficerID;

-- LEFT JOIN to retrieve all police stations and the cases reported in each station

SELECT
    PoliceStation.StationID,
    PoliceStation.StationName,
    COUNT(Reports_Case.ReportID) AS NumberOfCases
FROM PoliceStation
    LEFT JOIN Reports_Case ON PoliceStation.StationID = Reports_Case.StationID
GROUP BY
    PoliceStation.StationID,
    PoliceStation.StationName;

-- RIGHT JOIN to retrieve all officers and their assigned cases

SELECT
    PolicePersonal.FirstName,
    PolicePersonal.LastName,
    Reports_Case.ReportID,
    Reports_Case.IncidentType
FROM PolicePersonal
    RIGHT JOIN Reports_Case ON PolicePersonal.OfficerID = Reports_Case.AssignedOfficerID;

-- Subquery to find the police station with the highest number of cases

SELECT StationID, StationName
FROM PoliceStation
WHERE StationID = (
        SELECT StationID
        FROM (
                SELECT
                    StationID,
                    COUNT(ReportID) AS TotalCases
                FROM
                    Reports_Case
                GROUP BY
                    StationID
                ORDER BY
                    TotalCases DESC
                LIMIT
                    1
            ) AS StationCasesAlias
    );