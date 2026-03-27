bool __cdecl sub_568EB0(int a1, int a2, float a3)
{
  int v3; // esi
  float v5; // [esp+Ch] [ebp+Ch]

  v3 = Double_To_SInt32(a3);
  if ( v3 == a1 )
    return 1;
  v5 = (float)(a1 + a2);
  if ( v5 <= (double)flt_A675E4 )
  {
    if ( v3 <= a1 )
      return 0;
  }
  else if ( v3 <= a1 && v3 >= Double_To_SInt32(v5 - dbl_A2F920) )
  {
    return 0;
  }
  return v3 < a1 + a2;
}
