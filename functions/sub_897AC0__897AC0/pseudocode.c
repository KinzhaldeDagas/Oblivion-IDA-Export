bool __thiscall sub_897AC0(_DWORD *this)
{
  int v1; // ecx
  bool result; // al
  int v3; // ecx
  int v4; // edx
  int v5; // ecx

  v1 = *(this + 4); /*0x897ac0*/
  result = 1; /*0x897ac5*/
  if ( v1 && ((v3 = *(_DWORD *)(v1 + 8)) == 0 ? (v4 = 0) : (v4 = v3 + 0x14), *(_BYTE *)(v4 + 0x18) == 1) )
    v5 = v4 + *(_DWORD *)(v4 + 0x10); /*0x897adf*/
  else
    v5 = 0; /*0x897ae3*/
  if ( v5 ) /*0x897ae7*/
    return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v5 + 0x50) + 8))(*(_DWORD *)(v5 + 0x50)) >= 6; /*0x897af6*/
  return result; /*0x897af9*/
}
