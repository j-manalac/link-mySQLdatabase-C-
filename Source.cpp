#include <mysql.h>
#include <iostream>

using namespace std;

int main()
{
	MYSQL* conn;
	MYSQL_RES* res = nullptr;

	conn = mysql_real_connect(conn, "mymysql.senecacollege.ca", "db_jmanalac1", "3t]vL5lbZ(", "db_jmanalac1", 3306, nullptr, 0);

	if (conn)
	{
		cout << "successful connection to database" << endl;
		string query = "select * from offices;";
		const char* q = query.c_str();

		exequery = mysql_query(conn, q);
		int exequery;
		if (!exequery)
		{
			//query execution is successful
			cout << "The query executed successfully with no error." << endl;
		}
		else
		{
			//query execution is not successful
			cout << "Error message: " << mysql_error(conn) << endl;
		}
	}
	else
	{
		cout << "Connection Failed" << mysql_error(conn) << endl;
	}
}

