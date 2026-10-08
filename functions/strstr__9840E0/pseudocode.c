char *__cdecl strstr(const char *Str, const char *SubStr)
{
  int v3; // [esp+18h] [ebp+Ch]
  int v4; // [esp+1Ch] [ebp+10h]
  int v5; // [esp+20h] [ebp+14h]

  if ( !*SubStr ) /*0x9840e7*/
    return (char *)strstr_::empty_str2((int)Str); /*0x9840ef*/
  if ( SubStr[1] ) /*0x9840f1*/
    return (char *)strstr_::findnext(*SubStr, Str, (int)Str, (int)SubStr, v3, v4, v5); /*0x9840f7*/
  return strstr_::strchr_call();
}
