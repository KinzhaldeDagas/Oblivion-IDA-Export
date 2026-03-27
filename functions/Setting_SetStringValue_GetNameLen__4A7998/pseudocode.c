int __usercall Setting_SetStringValue_::GetNameLen@<eax>(const char *eax0@<eax>, int a2, int a3, int a4, int a5)
{
  return Setting_SetStringValue_::CheckValue(strlen(eax0) + 1, a2, a3, a4, a5);
}
