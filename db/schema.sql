-- Create the PSMS database

CREATE DATABASE IF NOT EXISTS PSMS;

-- Drop the PSMS database if it exists

DROP DATABASE IF EXISTS PSMS;

-- Use the PSMS database

USE PSMS;

-- CaseCategory Table

CREATE TABLE
    IF NOT EXISTS CaseCategory (
        CategoryID INT PRIMARY KEY,
        CategoryName VARCHAR(255) NOT NULL,
        CategoryDescription TEXT
    );

-- Rank Table

CREATE TABLE
    IF NOT EXISTS `Rank` (
        RankID INT PRIMARY KEY,
        RankName VARCHAR(255) NOT NULL
    );

-- Police Table

CREATE TABLE
    IF NOT EXISTS Police (
        OfficerID INT PRIMARY KEY,
        FirstName VARCHAR(255) NOT NULL,
        LastName VARCHAR(255) NOT NULL,
        BadgeNumber VARCHAR(20) NOT NULL,
        ContactInfo TEXT NOT NULL,
        EmploymentStartDate DATE NOT NULL,
        EmploymentEndDate DATE,
        RankID INT,
        FOREIGN KEY (RankID) REFERENCES `Rank`(RankID)
    );

-- Report Table

CREATE TABLE
    IF NOT EXISTS Report (
        ReportID INT PRIMARY KEY,
        ReportTitle VARCHAR(255) NOT NULL,
        ReportDescription TEXT,
        AuthorOfficerID INT,
        ReportDate DATE,
        ReportType VARCHAR(50),
        CaseID INT,
        FOREIGN KEY (AuthorOfficerID) REFERENCES Police(OfficerID),
        FOREIGN KEY (CaseID) REFERENCES Cases(CaseID)
    );

-- Cases Table

CREATE TABLE
    IF NOT EXISTS Cases (
        CaseID INT PRIMARY KEY,
        Title VARCHAR(255) NOT NULL,
        Description TEXT,
        Status VARCHAR(20) NOT NULL,
        OpenDate DATE,
        CloseDate DATE,
        AssignedOfficerID INT,
        CaseCategoryID INT,
        ReportID INT,
        FOREIGN KEY (AssignedOfficerID) REFERENCES Police(OfficerID),
        FOREIGN KEY (CaseCategoryID) REFERENCES CaseCategory(CategoryID)
    );

-- UserAccounts Table

CREATE TABLE
    IF NOT EXISTS UserAccounts (
        UserID INT PRIMARY KEY,
        Username VARCHAR(50) NOT NULL,
        PasswordHash VARCHAR(255) NOT NULL,
        RoleID INT,
        OfficerID INT,
        FOREIGN KEY (RoleID) REFERENCES `Rank`(RankID),
        FOREIGN KEY (OfficerID) REFERENCES Police(OfficerID)
    );

-- AuditLog Table

CREATE TABLE
    IF NOT EXISTS AuditLog (
        LogID INT PRIMARY KEY,
        Timestamp TIMESTAMP,
        UserID INT,
        Action VARCHAR(50),
        Details TEXT,
        FOREIGN KEY (UserID) REFERENCES UserAccounts(UserID)
    );

-- Drop the tables if they exist

DROP TABLE IF EXISTS AuditLog;

DROP TABLE IF EXISTS UserAccounts;

DROP TABLE IF EXISTS Cases;

DROP TABLE IF EXISTS Report;

DROP TABLE IF EXISTS Police;

DROP TABLE IF EXISTS `Rank`;

DROP TABLE IF EXISTS CaseCategory;