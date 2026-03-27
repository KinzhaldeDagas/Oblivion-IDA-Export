double __thiscall sub_8A31B0(_DWORD ***this)
{
  int v1; // esi
  int v2; // eax
  double v3; // st7
  float v5; // [esp+4h] [ebp-4h]

  if ( this && (v1 = (int)*(this + 2)) != 0 )
  {
    v2 = sub_8A98D0(*(this + 2));
    if ( !v2 )
      v2 = *(_DWORD *)(v1 + 0x50);
    v3 = *(float *)(v2 + 0xB4);
  }
  else
  {
    v3 = 0.0;
  }
  v5 = v3;
  return (float)(v5 * dbl_A372E0);
}
