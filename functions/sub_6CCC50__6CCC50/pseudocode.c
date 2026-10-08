bool __thiscall sub_6CCC50(float *this, float *a2)
{
  int v2; // eax
  int v4; // ecx

  v2 = *(_DWORD *)a2; /*0x6ccc55*/
  v4 = *(_DWORD *)this; /*0x6ccc5a*/
  if ( v4 ) /*0x6ccc5e*/
  {
    if ( !v2 || !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 0x2C))(v4, *(_DWORD *)a2) ) /*0x6ccc79*/
      return 0; /*0x6ccc7d*/
  }
  else if ( v2 ) /*0x6ccc6d*/
  {
    return 0; /*0x6ccc68*/
  }
  return a2[1] == *(this + 1) /*0x6cccb2*/
      && a2[2] == *(this + 2)
      && *((_BYTE *)this + 0xC) == *((_BYTE *)a2 + 0xC)
      && a2[4] == *(this + 4);
}
