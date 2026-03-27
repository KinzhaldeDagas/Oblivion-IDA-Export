void __stdcall sub_78EA30(int a1)
{
  int v1; // esi
  int v2; // [esp+8h] [ebp-4h]
  int v3; // [esp+10h] [ebp+4h]
  float v4; // [esp+10h] [ebp+4h]

  if ( a1 == 0xFFFFFFFF )
  {
    v1 = 0x3039;
    v3 = 0x3039;
    if ( byte_B42994 )
    {
      v4 = (dbl_A8C628 - 0.0) * sub_7A6FD0() + 0.0;
      v1 = Double_To_SInt32(v4);
      v3 = v1;
    }
    v2 = _time64(0);
    if ( v1 <= v2 )
      sub_7A7100((double)v3 / (double)v2);
    else
      sub_7A7100((double)v2 / (double)v3);
    byte_B42994 = 1;
  }
  else
  {
    sub_7A6D30();
    byte_B42994 = 1;
  }
}
