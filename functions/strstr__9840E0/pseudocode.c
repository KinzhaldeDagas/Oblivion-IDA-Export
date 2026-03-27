char *__cdecl strstr(const char *Str, const char *SubStr)
{
  int v3; // [esp+18h] [ebp+Ch]
  int v4; // [esp+1Ch] [ebp+10h]
  int v5; // [esp+20h] [ebp+14h]

  if ( !*SubStr )
    return strstr_::empty_str2();
  if ( SubStr[1] )
    return (char *)strstr_::findnext(Str, SubStr, v3, v4, v5);
  return strstr_::strchr_call();
}
