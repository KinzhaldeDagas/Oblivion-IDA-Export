char __thiscall sub_683C70(_DWORD *this, int a2, int a3)
{
  char result; // al
  _DWORD *v4; // ecx
  _DWORD *v5; // edx
  _DWORD *v6; // ecx

  result = 0; /*0x683c70*/
  v4 = this + 0xD; /*0x683c72*/
  if ( v4 ) /*0x683c75*/
  {
    do /*0x683c81*/
    {
      v5 = (_DWORD *)v4[1]; /*0x683c81*/
      if ( !v5 && !*v4 ) /*0x683c88*/
        break; /*0x683c88*/
      v6 = (_DWORD *)*v4; /*0x683c8c*/
      if ( *v6 == a2 && v6[1] == a3 ) /*0x683c95*/
        return 1; /*0x683ca2*/
      v4 = v5; /*0x683c97*/
    }
    while ( v5 ); /*0x683c81*/
  }
  return result; /*0x683c9f*/
}
