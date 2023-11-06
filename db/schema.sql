-- Create the PSMS database if it doesn't exist
CREATE DATABASE IF NOT EXISTS PSMS;

-- Use the PSMS database
USE PSMS;

-- Create the Role table
CREATE TABLE IF NOT EXISTS Role (
    RoleID INT PRIMARY KEY,
    RoleName VARCHAR(50)
);

-- Create the ReportCategory table
CREATE TABLE IF NOT EXISTS ReportCategory (
    CategoryID INT PRIMARY KEY,
    CategoryName VARCHAR(50),
    CategoryDescription VARCHAR(255)
);

-- Create the PoliceStation table
CREATE TABLE IF NOT EXISTS PoliceStation (
    StationID INT PRIMARY KEY,
    StationName VARCHAR(255),
    Location VARCHAR(255),
    OfficerInCharge VARCHAR(255),
    ContactInfo VARCHAR(255)
);

-- Create the Police_Personal table
CREATE TABLE IF NOT EXISTS Police_Personal (
    OfficerID INT PRIMARY KEY,
    FirstName VARCHAR(255),
    LastName VARCHAR(255),
    Role VARCHAR(50),
    BadgeNumber VARCHAR(50),
    ContactInfo VARCHAR(255),
    EmploymentStartDate DATE,
    EmploymentEndDate DATE,
    RoleID INT,
    StationID INT,
    FOREIGN KEY (RoleID) REFERENCES Role(RoleID),
    FOREIGN KEY (StationID) REFERENCES PoliceStation(StationID)
);

-- Create the Reports-Case table
CREATE TABLE IF NOT EXISTS Reports_Case (
    ReportID INT PRIMARY KEY,
    ReporterName VARCHAR(255),
    IncidentType VARCHAR(100),
    Location VARCHAR(255),
    IncidentDate DATE,
    Description TEXT,
    Status VARCHAR(50),
    WrittenByOfficerID INT,
    AssignedOfficerID INT,
    StationID INT,
    FOREIGN KEY (WrittenByOfficerID) REFERENCES Police_Personal(OfficerID),
    FOREIGN KEY (AssignedOfficerID) REFERENCES Police_Personal(OfficerID),
    FOREIGN KEY (StationID) REFERENCES PoliceStation(StationID)
);

-- Create the UserAccounts table
CREATE TABLE IF NOT EXISTS UserAccounts (
    UserID INT PRIMARY KEY,
    Username VARCHAR(50),
    PasswordHash VARCHAR(255),
    OfficerID INT,
    Role INT,
    FOREIGN KEY (OfficerID) REFERENCES Police_Personal(OfficerID),
    FOREIGN KEY (Role) REFERENCES Role(RoleID)
);

-- Create the AuditLog table
CREATE TABLE IF NOT EXISTS AuditLog (
    LogID INT PRIMARY KEY,
    Timestamp TIMESTAMP,
    UserID INT,
    Action VARCHAR(50),
    Details TEXT,
    FOREIGN KEY (UserID) REFERENCES UserAccounts(UserID)
);

-- Show the list of tables in the PSMS database
SHOW TABLES;

