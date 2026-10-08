char __thiscall sub_483870(_DWORD *this, int a2, int a3, int a4)
{
  int v5; // edi
  char result; // al

  if ( !a4 ) /*0x48387a*/
    return (*(char (__thiscall **)(_DWORD *, int, int))(*this + 0x1C))(this, a2, a3); /*0x4838db*/
  v5 = 0x10 * (a3 + a2 * *(this + 3)); /*0x48388e*/
  *(_BYTE *)(v5 + *(this + 4)) = *(_BYTE *)a4; /*0x483893*/
  *(_DWORD *)(*(this + 4) + v5 + 8) = *(_DWORD *)(a4 + 8); /*0x48389c*/
  *(_DWORD *)(*(this + 4) + v5 + 0xC) = *(_DWORD *)(a4 + 0xC); /*0x4838a6*/
  OB_NiSmartPointer_Assign_010201A0((int *)(*(this + 4) + v5 + 4), (int *)(a4 + 4)); /*0x4838b5*/
  result = *(_BYTE *)(a4 + 1); /*0x4838bd*/
  *(_BYTE *)(*(this + 4) + v5 + 1) = result; /*0x4838c0*/
  return result; /*0x4838c5*/
}
