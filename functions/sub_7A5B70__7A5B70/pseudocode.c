// SIdvLeafInfo destruction frees rocking/vertex/texcoord tables, then destroys and frees the typed compact leaf-texture vector.
void __thiscall OB_SIdvLeafInfo_dtor_010201A0(OB_SIdvLeafInfo_010201A0 *this)
{
  bool v2; // zf
  int i; // edi
  OB_SIdvLeafTexture_010201A0 *begin; // eax
  OB_stVector_SIdvLeafTexture_010201A0 *p_leafTextures; // esi

  FormHeapFree((unsigned int)this->rockingTimeOffsets); /*0x7a5b79*/
  v2 = this->leafVertexTables == 0; /*0x7a5b83*/
  this->rockingTimeOffsets = 0; /*0x7a5b86*/
  if ( !v2 ) /*0x7a5b89*/
  {
    for ( i = 0; i < this->leafLodLevelCount; ++i ) /*0x7a5b91*/
      FormHeapFree((unsigned int)this->leafVertexTables[i]); /*0x7a5b9a*/
    FormHeapFree((unsigned int)this->leafVertexTables); /*0x7a5bae*/
    this->leafVertexTables = 0; /*0x7a5bb6*/
  }
  FormHeapFree((unsigned int)this->leafTexcoordTable); /*0x7a5bbe*/
  this->leafTexcoordTable = 0; /*0x7a5bc3*/
  begin = this->leafTextures.begin; /*0x7a5bc6*/
  p_leafTextures = &this->leafTextures; /*0x7a5bc9*/
  if ( begin ) /*0x7a5bd1*/
  {
    OB_SIdvLeafTexture_DestroyRange_010201A0(begin, p_leafTextures->end); /*0x7a5bde*/
    FormHeapFree((unsigned int)p_leafTextures->begin); /*0x7a5be7*/
  }
  p_leafTextures->begin = 0; /*0x7a5bef*/
  p_leafTextures->end = 0; /*0x7a5bf2*/
  p_leafTextures->capacityEnd = 0; /*0x7a5bf5*/
}
