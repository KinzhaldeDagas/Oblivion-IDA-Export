float *__thiscall sub_4C46B0(_DWORD *this, float *a2)
{
  int v3; // ecx
  int i; // edi
  int v6; // ecx
  int v7; // ecx
  float v8; // eax
  int v9; // esi
  int v10; // edx
  float v11; // [esp+4h] [ebp-8h] BYREF
  float v12; // [esp+8h] [ebp-4h]

  v3 = *(this + 9);
  if ( v3 )
  {
    if ( *(float *)(v3 + 0x18) == dbl_A3A5B0 || *(float *)(v3 + 0x1C) == dbl_A40398 )
    {
      if ( (*(_BYTE *)(this + 7) & 1) != 0 )
      {
        for ( i = 0; i < 4; ++i )
        {
          sub_4C4630(this, &v11, i);
          v6 = *(this + 9);
          if ( *(float *)(v6 + 0x18) > (double)v11 )
            *(float *)(v6 + 0x18) = v11;
          v7 = *(this + 9);
          if ( *(float *)(v7 + 0x1C) < (double)v12 )
            *(float *)(v7 + 0x1C) = v12;
        }
      }
      else
      {
        v11 = flt_A37448;
        v12 = v11;
        v8 = v11;
        *(float *)(v3 + 0x18) = v11;
        *(float *)(v3 + 0x1C) = v8;
      }
    }
    v9 = *(this + 9);
    v10 = *(_DWORD *)(v9 + 0x1C);
    *a2 = *(float *)(v9 + 0x18);
    *((_DWORD *)a2 + 1) = v10;
    return a2;
  }
  else
  {
    *a2 = flt_A32048;
    a2[1] = flt_A3B888;
    return a2;
  }
}
