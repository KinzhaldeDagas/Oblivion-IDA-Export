BOOL __stdcall NiTStringMap_IsKeysEqual(char *Str1, char *Str2)
{
  return CRT_StricmpLocaleDispatch(Str1, Str2) == 0; /*0x584d29*/
}
