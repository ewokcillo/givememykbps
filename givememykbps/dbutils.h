/*
 * dbutils.h
 *
 *  Created on: 29/01/2012
 *      Author: ewokcillo
 */

#ifndef DBUTILS_H_
#define DBUTILS_H_

#include <mongo.h>
#include <bson.h>

mongo_sync_connection * get_connection();
int get_disconnect(mongo_sync_connection **);

#endif /* DBUTILS_H_ */
