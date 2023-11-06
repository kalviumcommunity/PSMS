-- Insert data into the Role table to cover all possible roles
INSERT INTO Role (RoleID, RoleName)
VALUES
(1, 'Constable'),
(2, 'Inspector'),
(3, 'Superintendent'),
(4, 'Deputy Superintendent'),
(5, 'Inspector General'),
(6, 'Constable Assistant'),
(7, 'Deputy Inspector'),
(8, 'Chief Superintendent'),
(9, 'Sub-Inspector'),
(10, 'Commander'),
(11, 'Traffic Officer'),
(12, 'Investigator'),
(13, 'Patrol Supervisor'),
(14, 'Forensic Expert');

-- Insert data into the ReportCategory table to cover all possible categories
INSERT INTO ReportCategory (CategoryID, CategoryName, CategoryDescription)
VALUES
(1, 'Theft', 'Incidents involving theft or stolen property'),
(2, 'Riot', 'Public disturbances or civil unrest incidents'),
(3, 'Cybercrime', 'Crimes involving computers and technology'),
(4, 'Homicide', 'Incidents involving unlawful killings'),
(5, 'Fraud', 'Deceptive activities for financial gain'),
(6, 'Domestic Violence', 'Incidents of violence in domestic settings'),
(7, 'Assault', 'Incidents involving physical harm or threats'),
(8, 'Burglary', 'Break-ins or unauthorized entries'),
(9, 'Drug Offenses', 'Crimes related to controlled substances'),
(10, 'Traffic Violation', 'Non-compliance with traffic laws'),
(11, 'Missing Persons', 'Cases involving disappeared individuals'),
(12, 'Robbery', 'Violent theft incidents'),
(13, 'Public Nuisance', 'Issues causing inconvenience to the public'),
(14, 'Vandalism', 'Malicious damage to property');

-- Insert data into the PoliceStation table for the first three police stations in India
INSERT INTO PoliceStation (StationID, StationName, Location, OfficerInCharge, ContactInfo)
VALUES
(1, 'Mumbai Central Police Station', 'Mumbai, Maharashtra', 'Inspector Sharma', '022-1234567'),
(2, 'Delhi South Police Station', 'Delhi', 'Sub-Inspector Verma', '011-9876543'),
(3, 'Kolkata East Police Station', 'Kolkata, West Bengal', 'Officer Das', '033-5557777');

-- Insert data into the Police_Personal table for the first three police officers in India
INSERT INTO Police_Personal (OfficerID, FirstName, LastName, Role, BadgeNumber, ContactInfo, EmploymentStartDate, RoleID, StationID)
VALUES
(1, 'Rajesh', 'Kumar', 'Constable', '1234', 'rajesh@police.in', '2023-01-15', 1, 1),
(2, 'Neha', 'Gupta', 'Inspector', '5678', 'neha@police.in', '2022-03-10', 2, 2),
(3, 'Amit', 'Sharma', 'Superintendent', '9876', 'amit@police.in', '2021-05-20', 3, 3);

-- Insert data into the Reports-Case table for the first three cases in Indian police stations
INSERT INTO Reports_Case (ReportID, ReporterName, IncidentType, Location, IncidentDate, Description, Status, WrittenByOfficerID, AssignedOfficerID, StationID)
VALUES
(1, 'Sunita Singh', 'Theft', 'Connaught Place', '2023-02-05', 'Theft in a busy market area', 'Pending', 1, 3, 1),
(2, 'Sanjay Patel', 'Riot', 'Victoria Memorial', '2023-03-20', 'Public disturbance at a monument', 'Under Investigation', 2, 2, 2),
(3, 'Pooja Verma', 'Cybercrime', 'Salt Lake City', '2023-01-10', 'Online fraud case', 'Closed', 3, 1, 3);

-- Insert data into the UserAccounts table for the first three Indian police users
INSERT INTO UserAccounts (UserID, Username, PasswordHash, OfficerID, Role)
VALUES
(1, 'user1', 'passwordhash1', 1, 1),
(2, 'user2', 'passwordhash2', 2, 2),
(3, 'user3', 'passwordhash3', 3, 3);

-- Insert data into the AuditLog table for the first three audit log entries in Indian police operations
INSERT INTO AuditLog (LogID, Timestamp, UserID, Action, Details)
VALUES
(1, '2023-02-06 14:30:00', 1, 'Login', 'Successful login by user1'),
(2, '2023-03-21 09:15:00', 2, 'Data Modification', 'Case 2 updated by user2'),
(3, '2023-01-12 11:45:00', 3, 'Login', 'Successful login by user3');


-- Select data from tables
SELECT * FROM Role;
SELECT * FROM ReportCategory;
SELECT * FROM PoliceStation;
SELECT * FROM Police_Personal;
SELECT * FROM Reports_Case;
SELECT * FROM UserAccounts;
SELECT * FROM AuditLog;

-- INSERT data for a new police officer
INSERT INTO Police_Personal (OfficerID, FirstName, LastName, Role, BadgeNumber, ContactInfo, EmploymentStartDate, RoleID, StationID)
VALUES (4, 'Sarika', 'Mishra', 'Sub-Inspector', '4321', 'sarika@police.in', '2023-06-10', 9, 1);

-- UPDATE the information for police officer with OfficerID 4
UPDATE Police_Personal
SET Role = 'Investigator'
WHERE OfficerID = 4;

-- DELETE the police officer with OfficerID 4
DELETE FROM Police_Personal
WHERE OfficerID = 4;
