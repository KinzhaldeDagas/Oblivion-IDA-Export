char __thiscall sub_6D2CA0(int this, float a2, int a3, float *a4)
{
  double v5; // st7
  int v7; // eax
  int v8; // ecx
  unsigned __int8 v9; // dl
  int v10; // edi
  float *v11; // eax

  v5 = a2;
  if ( a2 == *(float *)(this + 8) )
  {
    *a4 = *(float *)(this + 0xC);
    if ( flt_A7C6B0 == *(float *)(this + 0xC) )
      return 0;
  }
  else
  {
    v7 = *(_DWORD *)(this + 0x10);
    if ( v7 )
    {
      v8 = *(_DWORD *)(v7 + 8);
      v9 = *(_BYTE *)(v7 + 0x14);
      v10 = *(_DWORD *)(v7 + 0x10);
      v11 = *(float **)(v7 + 0xC);
      if ( v8 )
      {
        *(float *)(this + 0xC) = sub_6BB270(a2, v11, v10, v8, (int *)(this + 0x14), v9);
        v5 = a2;
      }
    }
    if ( flt_A7C6B0 == *(float *)(this + 0xC) )
      return 0;
    *a4 = *(float *)(this + 0xC);
    *(float *)(this + 8) = v5;
  }
  return 1;
}
