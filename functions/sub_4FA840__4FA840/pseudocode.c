int __thiscall sub_4FA840(char *this, int ArgList)
{
  char *v2; // eax
  _DWORD *v3; // edx
  const char *v4; // eax

  v2 = this + 0x48; /*0x4fa840*/
  if ( this != (char *)0xFFFFFFB8 ) /*0x4fa84a*/
  {
    do /*0x4fa850*/
    {
      v3 = *(_DWORD **)v2; /*0x4fa850*/
      if ( !*(_DWORD *)v2 ) /*0x4fa850*/
        break; /*0x4fa850*/
      v2 = *((char **)v2 + 1); /*0x4fa858*/
      if ( *v3 == ArgList ) /*0x4fa85b*/
        return v3[6]; /*0x4fa880*/
    }
    while ( v2 ); /*0x4fa850*/
  }
  v4 = (const char *)(*(int (__thiscall **)(char *))(*(_DWORD *)this + 0xD4))(this); /*0x4fa861*/
  PrintError("Trying to access local variable %d in script '%s' -- variable not found.\r\n", ArgList, v4); /*0x4fa872*/
  return 0; /*0x4fa87c*/
}
