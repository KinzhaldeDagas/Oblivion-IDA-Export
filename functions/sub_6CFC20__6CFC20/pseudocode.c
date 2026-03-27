void __thiscall sub_6CFC20(int this)
{
  unsigned __int16 v2; // di
  bool v3; // zf
  double v4; // st7
  int v5; // edx
  float v6; // [esp+8h] [ebp-8h] BYREF
  float v7; // [esp+Ch] [ebp-4h] BYREF

  if ( (*(_BYTE *)(this + 8) & 0x20) == 0 )
  {
    *(float *)(this + 0x14) = flt_A7DEB4;
    v2 = 0;
    v3 = *(_WORD *)(this + 0x44) == 0;
    *(float *)(this + 0x18) = -flt_A7DEB4;
    if ( !v3 )
    {
      do
      {
        v4 = flt_A7DEB4;
        v5 = *(_DWORD *)(this + 0x3C);
        v7 = -v4;
        v6 = v4;
        (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)(v5 + 0x30 * v2) + 0x80))(v5 + 0x30 * v2, &v6, &v7);
        if ( *(float *)(this + 0x14) > (double)v6 )
          *(float *)(this + 0x14) = v6;
        if ( *(float *)(this + 0x18) < (double)v7 )
          *(float *)(this + 0x18) = v7;
        ++v2;
      }
      while ( v2 < *(_WORD *)(this + 0x44) );
    }
    if ( flt_A7DEB4 == *(float *)(this + 0x14) && -flt_A7DEB4 == *(float *)(this + 0x18) )
      sub_6D0510(this);
  }
}
