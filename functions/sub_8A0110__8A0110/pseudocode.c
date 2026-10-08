char __thiscall sub_8A0110(int *this, int *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int *v7; // [esp-8h] [ebp-10h]

  if ( !this ) /*0x8a0118*/
    return 0; /*0x8a0118*/
  v3 = *(this + 2); /*0x8a011a*/
  if ( !v3 ) /*0x8a011f*/
    return 0; /*0x8a016e*/
  if ( a2 ) /*0x8a0128*/
  {
    v4 = *(_DWORD *)(v3 + 0x1C); /*0x8a012e*/
    if ( v4 ) /*0x8a0137*/
      v5 = *(_DWORD *)(v4 + 0xC); /*0x8a0139*/
    else
      v5 = 0; /*0x8a013e*/
    v7 = a2; /*0x8a0142*/
    if ( !v5 ) /*0x8a0143*/
      return sub_89D960(this, v7); /*0x8a0143*/
    if ( (*(unsigned __int8 (__thiscall **)(int, int *))(*(_DWORD *)v5 + 0x5C))(v5, a2) ) /*0x8a014a*/
    {
      v7 = a2; /*0x8a0150*/
      return sub_89D960(this, v7); /*0x8a015b*/
    }
  }
  else
  {
    (*(void (__thiscall **)(int *))(*this + 0x60))(this); /*0x8a0163*/
  }
  return 0; /*0x8a0159*/
}
