void __fastcall sub_8A9A60(float *a1, int a2)
{
  double v2; // st7
  float v3; // [esp+0h] [ebp-4h]

  v2 = a1[1];
  if ( *a1 < v2 )
    v2 = *a1;
  v3 = a1[2];
  if ( v2 >= v3 )
    v2 = v3;
  if ( v2 >= flt_A3D65C )
    *(_DWORD *)(a2 + 0x20) = 0x3DCCCCCD;
  else
    *(float *)(a2 + 0x20) = v2 * flt_A3D9A4;
}
