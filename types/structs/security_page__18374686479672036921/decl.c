struct security_page
{
ISecurityInformation_0 *security;
SI_OBJECT_INFO info;
PSECURITY_DESCRIPTOR sd;
SI_ACCESS *access;
ULONG access_count;
user *users;
unsigned int user_count;
HWND dialog;
HIMAGELIST image_list;
};
