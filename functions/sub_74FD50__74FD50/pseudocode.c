void __thiscall sub_74FD50(const char **this, int a2, _DWORD **a3)
{
  int v4; // ecx
  Ni2DBuffer *v5; // eax

  sub_75E410(this, a2, a3); /*0x74fd5f*/
  v4 = (int)*(this + 0x12); /*0x74fd64*/
  if ( v4 ) /*0x74fd69*/
  {
    v5 = (Ni2DBuffer *)(*(int (__thiscall **)(int, _DWORD **))(*(_DWORD *)v4 + 0x18))(v4, a3); /*0x74fd71*/
    NiSmartPointer_Set__((Ni2DBuffer **)(a2 + 0x48), v5); /*0x74fd77*/
  }
  if ( (*(_BYTE *)(a2 + 8) & 6) == 0 && 0.0 == *(float *)(a2 + 0x10) ) /*0x74fd8c*/
    *(float *)(a2 + 0x10) = (double)rand() / dbl_A3D5A8 * fCostant_100; /*0x74fda7*/
}
