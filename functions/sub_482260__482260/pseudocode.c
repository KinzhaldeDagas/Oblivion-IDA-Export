int __thiscall sub_482260(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int v5; // edx
  _DWORD *v6; // esi
  int result; // eax

  v5 = *(this + 4); /*0x482263*/
  v6 = (_DWORD *)(v5 + 8 * (a3 + a2 * *(this + 3))); /*0x482272*/
  if ( !v6 ) /*0x482277*/
    return (*(int (__thiscall **)(_DWORD *, int, int))(*this + 0x1C))(this, a4, a5); /*0x48229a*/
  result = a5 + a4 * *(this + 3); /*0x48227e*/
  *(_DWORD *)(v5 + 8 * result) = *v6; /*0x482284*/
  return result; /*0x482287*/
}
