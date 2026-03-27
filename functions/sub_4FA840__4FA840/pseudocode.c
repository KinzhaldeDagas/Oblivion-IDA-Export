int __thiscall sub_4FA840(char *this, int ArgList)
{
  char *v2; // eax
  _DWORD *v3; // edx
  const char *v4; // eax

  v2 = this + 0x48;
  if ( this != (char *)0xFFFFFFB8 )
  {
    do
    {
      v3 = *(_DWORD **)v2;
      if ( !*(_DWORD *)v2 )
        break;
      v2 = *((char **)v2 + 1);
      if ( *v3 == ArgList )
        return v3[6];
    }
    while ( v2 );
  }
  v4 = (const char *)(*(int (__thiscall **)(char *))(*(_DWORD *)this + 0xD4))(this);
  PrintError("Trying to access local variable %d in script '%s' -- variable not found.\r\n", ArgList, v4);
  return 0;
}
