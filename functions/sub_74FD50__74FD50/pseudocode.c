void __thiscall sub_74FD50(_DWORD *this, int a2, _DWORD **a3)
{
  int v4; // ecx
  Ni2DBuffer *v5; // eax

  sub_75E410(this, a2, a3);
  v4 = *(this + 0x12);
  if ( v4 )
  {
    v5 = (Ni2DBuffer *)(*(int (__thiscall **)(int, _DWORD **))(*(_DWORD *)v4 + 0x18))(v4, a3);
    NiSmartPointer_Set__((Ni2DBuffer **)(a2 + 0x48), v5);
  }
  if ( (*(_BYTE *)(a2 + 8) & 6) == 0 && 0.0 == *(float *)(a2 + 0x10) )
    *(float *)(a2 + 0x10) = (double)rand() / dbl_A3D5A8 * fCostant_100;
}
