double __thiscall sub_5E0DD0(int **this)
{
  int *v2; // ecx
  int v3; // edi
  int v4; // eax
  double result; // st7

  if ( !*(this + 0x16) ) /*0x5e0dd3*/
    return flt_A3D8F0; /*0x5e0dfb*/
  v2 = *(this + 0x16); /*0x5e0ddc*/
  v3 = *v2; /*0x5e0de1*/
  v4 = (*(int (__thiscall **)(int *))(*v2 + 0x4CC))(v2); /*0x5e0de9*/
  (*(void (__thiscall **)(_DWORD, int **, int))(v3 + 0x1D8))(*(this + 0x16), this, v4); /*0x5e0df6*/
  return result; /*0x5e0df9*/
}
