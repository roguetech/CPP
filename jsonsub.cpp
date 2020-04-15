#include <json-c/json.h>
#include <stdio.h>
#include <iostream>

using namespace std;

void json_parse(json_object * jobj) {
 enum json_type type;
 //json_object_object_foreach(jobj, key, val) {
 //type = json_object_get_type(val);
 json_object *cputemp;
 json_object_object_get_ex(jobj, "CPUTemp", &cputemp);
 cout << "inside: " << json_object_get_string(cputemp) << endl;
 printf("CPUTemp: %s\n", json_object_get_string(cputemp));
 //switch (type) {
//   case json_type_double: printf("type: json_type_double, ");
//   printf("value: %fn", json_object_get_double(val));
//   break;
// }
// }
}
int main() {
 //const char * string = "{ \"PI\" : 3.140000 }";
 const char * temp = "{\"d\" : {\"CPUTemp\" : 21.54 }}";
 printf ("JSON string is: %s\n", temp);
 json_object * jobj = json_tokener_parse(temp);
 json_parse(jobj);
}
