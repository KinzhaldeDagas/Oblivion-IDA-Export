double __cdecl Calc_DiseaseTransferPercent(signed int a1)
{
  signed int v1; // eax

  v1 = a1;
  if ( a1 >= 0x64 )
    v1 = 0x64;
  return (float)((double)(0x64 - v1) * fMagicDiseaseTransferMult + fMagicDiseaseTransferBase);
}
