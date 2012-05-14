/*
 * dbutils.c
 *
 *  Created on: 29/01/2012
 *      Author: ewokcillo
 */

#include "dbutils.h"
#include "errno.h"
#include "stdio.h"


mongo_sync_connection * get_connection()
{
	  mongo_sync_connection *conn;

	  conn = mongo_sync_connect ("192.168.0.2", 27017, TRUE);
	  if (!conn)
		  fprintf(stderr, "Error in connect to db %s\n", (char *)strerror(errno));

	  return conn;
}

int get_disconnect(mongo_sync_connection **conn)
{
	int status = 0;
	mongo_sync_disconnect(*conn);
	return status;
}
