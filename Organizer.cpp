// TO DO: #include needed standard libraries and your own libraries here
   #include <iostream>
   #include <string>
   #include <Organizer.h>


Organizer::Organizer(){}


Organizer::Organizer(const std::string& username, const std::string& email, const std::string& password, const std::string& bio, const std::string& profilePic):
username(username), email(email), password(password), bio(bio), profilePic(profilePic){
}
// TO DO: function implementations
Organizer::~Organizer(){
   std::cout << "Organizer: " << Organizer::username <<std::endl;
}


void Organizer::setUsername(const std::string& username){
   Organizer::username = username;
}


std::string Organizer::getUsername() const{
      return Organizer::username;
}


void Organizer::setEmail(const std::string& email){
   Organizer::email = email;
}


std::string Organizer::getEmail() const{
   return Organizer::email;
}


void Organizer::setPassword(const std::string& password){
   Organizer::password = password;
}


std::stirng Organizer::getPassword() const{
   return Organizer::password;
}


void Organizer::setBio(const std::string& bio) {
   Organizer::bio = bio;
}


std::string Organizer::getBio() const{
   return Organizer::bio;
}


void Organizer::setProfilePic(const std::string& profilePic){
   Organizer::profilePic = profilePic;
}


std::string Organizer::getProfielPic() const{
   return Organizer::profilePic;
}

void Organizer::displayProfile() const {
   std::cout << "User name: " << username << std::endl;
   std::cout << "Email:  " << email << std::endl;
   std::cout << " Bio: " << bio << std::endl;
   std::cout << " Profile Picture:  " << profilePic << std::endl;
}








// Operator == overloading implementation
bool Organizer::operator==(const Organizer& otherOrganizer) const {
   return (Organizer::username == otherOrganizer.username) && (Organizer::email == otherOrganizer.email);
}
