bool __thiscall sub_6C76C0(_DWORD *this, int *a2)
{
  int v2; // eax
  int v4; // ecx
  int v6; // ecx

  v2 = *a2; /*0x6c76c5*/
  v4 = *this; /*0x6c76ca*/
  if ( v4 ) /*0x6c76ce*/
  {
    if ( !v2 || !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 0x2C))(v4, *a2) ) /*0x6c76e8*/
      return 0; /*0x6c76ec*/
  }
  else if ( v2 ) /*0x6c76d8*/
  {
    return 0; /*0x6c76d8*/
  }
  v6 = *(this + 1); /*0x6c76f5*/
  if ( v6 ) /*0x6c76fa*/
  {
    if ( a2[1] && (!a2[1] || (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v6 + 0x2C))(v6, a2[1])) ) /*0x6c771d*/
      return *((_BYTE *)this + 0xD) == *((_BYTE *)a2 + 0xD); /*0x6c7721*/
    return 0; /*0x6c76f2*/
  }
  if ( a2[1] ) /*0x6c7706*/
    return 0; /*0x6c770a*/
  return *((_BYTE *)this + 0xD) == *((_BYTE *)a2 + 0xD); /*0x6c76ee*/
}
