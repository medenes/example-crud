
#ifndef db_User_hpp
#define db_User_hpp

#include "oatpp/core/Types.hpp"

#include <string>
#include <list>

/**
 *  Object of User stored in the Demo-Database
 */
class User {
public:
  v_int32 id;
  oatpp::String firstName;
  oatpp::String lastName;
  std::list<oatpp::String> friends;
};

#endif /* db_User_hpp */
