// Sums adjacent compact branch-vertex segment lengths times endpoint radius sum and writes CBranch+0x28 branchVolume.
void __thiscall OB_CBranch_ComputeVolume_010201A0(OB_CBranch_010201A0 *this)
{
  OB_SIdvBranchVertex_010201A0 *branchVertices; // esi
  int v2; // edx
  float *v3; // eax
  double v4; // st7
  double v5; // st4
  double v6; // st5
  int v7; // [esp+4h] [ebp-8h]

  branchVertices = this->branchVertices; /*0x78f694*/
  if ( branchVertices ) /*0x78f699*/
  {
    if ( this->branchVertexCount > 1 ) /*0x78f6a1*/
    {
      v2 = 0; /*0x78f6a8*/
      this->branchVolume = 0.0; /*0x78f6aa*/
      v3 = &branchVertices[1].position[2]; /*0x78f6b1*/
      do /*0x78f713*/
      {
        ++v2; /*0x78f6b7*/
        v4 = v3[0xFFFFFFFF] - v3[0xFFFFFFED]; /*0x78f6ba*/
        v3 += 0x12; /*0x78f6bd*/
        v5 = v3[0xFFFFFFEC] - v3[0xFFFFFFDA]; /*0x78f6d6*/
        v6 = v3[0xFFFFFFEE] - v3[0xFFFFFFDC]; /*0x78f6de*/
        *(float *)&v7 = v6 * v6 + v5 * v5 + v4 * v4; /*0x78f6e4*/
        this->branchVolume = (v3[0xFFFFFFDD] + v3[0xFFFFFFEF]) * COERCE_FLOAT((v7 >> 1) + 0x1FC00000) /*0x78f708*/
                           + this->branchVolume;
      }
      while ( v2 < this->branchVertexCount - 1 ); /*0x78f713*/
    }
  }
}
