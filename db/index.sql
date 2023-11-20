-- Create index on AssignedOfficerID
CREATE INDEX idx_assigned_officer ON Reports_Case(AssignedOfficerID);

-- Create index on StationID
CREATE INDEX idx_station ON Reports_Case(StationID);

-- Create index on IncidentDate
CREATE INDEX idx_incident_date ON Reports_Case(IncidentDate);
