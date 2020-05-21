IF OBJECT_ID ('Person', 'U') IS NULL 

BEGIN

	CREATE TABLE Person (
		ID INT NOT NULL,
		Name VARCHAR(32) NOT NULL,
		BirthDate DATETIME
		);

	INSERT INTO Person
		( ID, Name, BirthDate )
	VALUES
		(311113, 'Kevin Lu', '01-02-93'), 
		(123456, 'Seven Durant', '07-22-94'), 
		(100100, 'Choochootrain Lu', '12-17-56'),
		(106542, 'Spider Ru', '07-22-36'),
		(101010, 'Ru Ru', '04-30-84');
END

IF OBJECT_ID ('Job', 'U') IS NULL 

BEGIN

	CREATE TABLE Job (
		ID INT NOT NULL PRIMARY KEY,
		Company VARCHAR(64) NOT NULL,
		Wage FLOAT,
		PersonID INT FOREIGN KEY REFERENCES Person(ID)
		);

	INSERT INTO Job
		( ID, Company, Wage, PersonID )
	VALUES
		(01, 'Space Pizza Space', 1000.00, 311113), 
		(02, 'Bread', 46.44, 101010), 
		(03, 'Delivery Service', 400.99, 100100), 
		(04, 'Nike', 999900.01, 106542), 
		(05, 'Old McDonald', 6500210.77, 123456);
END

ALTER TABLE Person
ADD PRIMARY KEY (ID);