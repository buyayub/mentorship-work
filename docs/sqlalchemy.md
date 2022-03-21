# SQLAlchemy 1.4/2.0 Tutorial

## Intro

SQLAlchemy as two distinct APIs; one building on top of the other: **Core** & **ORM**.

+ **SQLAlchemy Core**
	+ foundational architecture for SQLAlchemy
	+ provides tools for managing connectivity to a database, interacting with datbase queries and results, programmatic construction of SQL statements
+ **SQAlchemy ORM**
	+ built upon core to provide optional **object relational mapping** capabilities
	+ the ORM provides an additional configuration allowing user defined classes to be *mapped* to database tables and other constructs
	+ and has an object persistence called a **session**
	+ It extends to Core-level SQL expression language to allow SQL queries

## Establishing Connectivity - the Engine

+ Engine is the start of any SQLAlchemy application
	+ acts as central source of connections to a particular database, providing a **factory** and a **connection pool** for database connections
	+ engine typically  a global object created once
	+ created with `create_engine()`
+ Uses lazy connection (doesn't actually connect to database until it's asked to perform task)

## Working with Transactions and the DBAPI

+ when using the ORM, the Engine is managed by an object called the Session
+ Session similar to Connection (used by Core), and so it's recommended to learn Core anyways
+ a

