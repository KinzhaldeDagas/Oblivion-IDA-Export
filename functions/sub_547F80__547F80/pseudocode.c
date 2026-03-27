double __cdecl sub_547F80(int a1, int a2, int a3, float a4, int a5)
{
  int v5; // eax
  int v6; // ecx
  double result; // st7
  float v8; // [esp+10h] [ebp+10h]
  float v9; // [esp+10h] [ebp+10h]
  float v10; // [esp+10h] [ebp+10h]

  v5 = Double_To_SInt32((double)(a2 + a1) * fNPCAttributeHealthMult);
  v6 = dword_B37BE0;
  if ( LOBYTE(a4) )
    ++v6;
  if ( a5 )
  {
    if ( a5 == 1 )
      --v6;
  }
  else
  {
    ++v6;
  }
  v8 = 1.0;
  if ( a3 < dword_B37BD8 )
  {
    v9 = (double)a3 / (double)dword_B37BD8;
    v10 = v9 * (1.0 - flt_B37BD0);
    v8 = flt_B37BD0 + v10;
  }
  result = (double)(a3 * v6 + v5) * v8;
  Double_To_SInt32(result);
  return result;
}
