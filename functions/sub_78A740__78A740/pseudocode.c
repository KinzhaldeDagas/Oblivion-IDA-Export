// CSpeedTreeRT::GetLeafLodSizeAdjustments. Lazily allocates one float per leaf LOD and fills entry i as 1.0 + leafSizeIncreaseFactor*i. This older Bethesda API is absent from the supplied 4.1 header but is named in Oblivion diagnostics and Fallout symbols.
const float *__thiscall CSpeedTreeRT__GetLeafLodSizeAdjustments(OB_CSpeedTreeRT_010201A0 *this)
{
  bool v2; // zf
  int leafLodLevelCount_low; // edi
  float i; // eax
  float *leafLodSizeAdjustments; // ecx
  int v7; // [esp+0h] [ebp-60h] BYREF
  float v8; // [esp+4Ch] [ebp-14h]
  int *v9; // [esp+50h] [ebp-10h]
  int v10; // [esp+5Ch] [ebp-4h]

  v9 = &v7; /*0x78a768*/
  v8 = *(float *)&this; /*0x78a76d*/
  v2 = this->leafLodSizeAdjustments == 0; /*0x78a770*/
  v10 = 0; /*0x78a774*/
  if ( v2 )
  {
    leafLodLevelCount_low = LOWORD(this->treeEngine->leafInfo.leafLodLevelCount); /*0x78a783*/
    this->leafLodSizeAdjustments = (float *)FormHeapAlloc(
                                              (unsigned __int64)LOWORD(this->treeEngine->leafInfo.leafLodLevelCount) >> 0x1E != 0
                                            ? 0xFFFFFFFF
                                            : 4 * leafLodLevelCount_low);
    for ( i = 0.0; ; leafLodSizeAdjustments[LODWORD(i) - 1] = v8 ) /*0x78a7aa*/
    {
      v8 = i; /*0x78a7ae*/
      if ( SLODWORD(i) >= leafLodLevelCount_low ) /*0x78a7b1*/
        break; /*0x78a7b1*/
      leafLodSizeAdjustments = this->leafLodSizeAdjustments; /*0x78a7be*/
      if ( leafLodLevelCount_low <= 0 ) /*0x78a7b9*/
      {
        v8 = 1.0; /*0x78a7da*/
        ++LODWORD(i); /*0x78a7dd*/
      }
      else
      {
        ++LODWORD(i); /*0x78a7c4*/
        v8 = this->leafSizeIncreaseFactor * (double)SLODWORD(v8) + 1.0; /*0x78a7c9*/
      }
    }
  }
  return this->leafLodSizeAdjustments; /*0x78a87a*/
}
