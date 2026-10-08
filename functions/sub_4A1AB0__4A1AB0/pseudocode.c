char __thiscall sub_4A1AB0(_DWORD *this, int a2, int *a3)
{
  _DWORD *v4; // edi

  v4 = *(_DWORD **)(*(this + 2) + 4 * (*(int (__thiscall **)(_DWORD *, int))(*this + 4))(this, a2)); /*0x4a1ac4*/
  if ( !v4 ) /*0x4a1ac9*/
    return 0; /*0x4a1ae8*/
  while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, a2, v4[1]) ) /*0x4a1ae0*/
  {
    v4 = (_DWORD *)*v4; /*0x4a1ae2*/
    if ( !v4 ) /*0x4a1ae6*/
      return 0; /*0x4a1ae6*/
  }
  OB_NiSmartPointer_Assign_010201A0(a3, v4 + 2); /*0x4a1af8*/
  return 1; /*0x4a1ae8*/
}
