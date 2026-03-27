int __userpurge Actor_GetBaseCalcAVi@<eax>(int *a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4@<esi>, int a5)
{
  double v5; // st7
  double v6; // st6
  double v7; // st7
  float BaseCalcAVf; // [esp+4h] [ebp+4h]
  float v10; // [esp+4h] [ebp+4h]
  float v11; // [esp+4h] [ebp+4h]

  BaseCalcAVf = Actor_GetBaseCalcAVf(a1, a2, a3, a4, a5);
  v5 = BaseCalcAVf;
  v10 = (float)Double_To_SInt32(BaseCalcAVf);
  v6 = v5 - v10;
  v7 = v10;
  if ( v6 < dbl_A2FC68 )
    v7 = v7 - dbl_A2F928;
  v11 = v7;
  return Double_To_SInt32(v11);
}
