BOOL __thiscall sub_5E6160(void *this)
{
  int v1; // eax
  int v2; // eax
  BOOL result; // eax

  v1 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x330))(this); /*0x5e6168*/
  result = 0; /*0x5e617b*/
  if ( v1 ) /*0x5e616c*/
  {
    v2 = *(_DWORD *)(v1 + 0x70); /*0x5e616e*/
    if ( v2 == 5 || v2 == 6 ) /*0x5e6179*/
      return 1; /*0x5e616c*/
  }
  return result; /*0x5e6180*/
}
