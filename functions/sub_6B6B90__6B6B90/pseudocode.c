double __thiscall sub_6B6B90(_DWORD *this)
{
  bool v2; // zf
  double v3; // st7
  double v4; // st6
  float v6; // [esp+8h] [ebp-4h] BYREF

  v2 = *(this + 0x14) == 0;
  v6 = 0.0;
  if ( !v2 )
    (*(void (__stdcall **)(_DWORD, float *))(*(_DWORD *)*(this + 0x14) + 0x20))(*(this + 0x14), &v6);
  v3 = (double)SLODWORD(v6);
  if ( v6 < 0.0 )
    v3 = v3 + flt_A2FC78;
  v4 = (double)(int)*(this + 0x10);
  if ( (int)*(this + 0x10) < 0 )
    v4 = v4 + flt_A2FC78;
  return (float)(v3 / v4);
}
