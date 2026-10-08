// Leaf-room/blossom spacing predicate used before MakeLeaf.
char __stdcall OB_CBranch_CheckBlossomRoom_010201A0(int a1, float a2)
{
  double Uniform_010201A0; // st7
  char result; // al

  if ( !*(_DWORD *)(unk_B429B8 + 0x2C) ) /*0x78f612*/
  {
    if ( a1 ) /*0x78f623*/
      a2 = *(float *)(a1 + 4); /*0x78f63d*/
  }
  if ( *(float *)(unk_B429B8 + 0x24) >= (double)a2 ) /*0x78f64f*/
    return 0; /*0x78f64f*/
  Uniform_010201A0 = OB_stRandom_GetUniform_010201A0(&stru_B429C9, 0.0, 1.0); /*0x78f664*/
  result = 1; /*0x78f675*/
  if ( *(float *)(unk_B429B8 + 0x28) < Uniform_010201A0 ) /*0x78f67a*/
    return 0; /*0x78f67c*/
  return result; /*0x78f680*/
}
