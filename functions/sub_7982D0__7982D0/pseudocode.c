// Oblivion CLeafGeometry::Invalidate. Clears generatedCardTableValid at +0x3C in every 0x44-byte leaf LOD record; persistent counts and pointers are not rebuilt here.
void __thiscall OB_CLeafGeometry_Invalidate_010201A0(OB_CLeafGeometry_010201A0 *this)
{
  int v1; // eax
  int v2; // edx

  if ( this->lodGeometryRecords ) /*0x7982d0*/
  {
    v1 = 0; /*0x7982d6*/
    if ( this->leafLodCount ) /*0x7982d8*/
    {
      v2 = 0; /*0x7982de*/
      do /*0x7982f5*/
      {
        this->lodGeometryRecords[v2].generatedCardTableValid = 0;// Wind/leaf update invalidation clears only SLodGeometry+0x3C vertex-cache-valid. It leaves card count +0x0C and alternate-index array pointer/content +0x10 unchanged. /*0x7982e4*/
        ++v1; /*0x7982ed*/
        ++v2; /*0x7982f0*/
      }
      while ( v1 < this->leafLodCount ); /*0x7982f5*/
    }
  }
}
