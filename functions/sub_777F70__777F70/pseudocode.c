// Pass225/226: Forces NiGeometryBufferData stream count; screen-texture render path forces exactly one stream.
void __thiscall sub_777F70(NiGeometryBufferData *this, UInt32 streamCount)
{
  int v2; // ebp
  void *v5; // ebp
  void *v6; // ebx
  UInt32 v7; // eax
  UInt32 i; // ebx
  size_t v9; // [esp-18h] [ebp-20h]
  size_t v10; // [esp-18h] [ebp-20h]
  size_t v11; // [esp-Ch] [ebp-14h]
  UInt32 a3a; // [esp+Ch] [ebp+4h]

  if ( streamCount != this->StreamCount )
  {
    HIDWORD(v11) = v2; /*0x777f90*/
    v5 = (void *)FormHeapAlloc((unsigned __int64)streamCount >> 0x1E != 0 ? 0xFFFFFFFF : 4 * streamCount);
    v6 = (void *)FormHeapAlloc((unsigned __int64)streamCount >> 0x1E != 0 ? 0xFFFFFFFF : 4 * streamCount);
    v7 = this->StreamCount; /*0x777fb7*/
    a3a = (UInt32)v6; /*0x777fbf*/
    if ( streamCount >= v7 ) /*0x777fc3*/
    {
      LODWORD(v11) = 4 * v7; /*0x778047*/
      memcpy(v5, this->VBChip, v11); /*0x77804a*/
      LODWORD(v10) = 4 * this->StreamCount; /*0x778059*/
      memcpy(v6, this->VertexStride, v10); /*0x77805c*/
      _memset((int)v5 + 4 * this->StreamCount, 0, 4 * (streamCount - this->StreamCount)); /*0x778074*/
      _memset((int)v6 + 4 * this->StreamCount, 0, 4 * (streamCount - this->StreamCount)); /*0x77808b*/
    }
    else
    {
      LODWORD(v11) = 4 * streamCount; /*0x777fcc*/
      memcpy(v5, this->VBChip, v11); /*0x777fd2*/
      LODWORD(v9) = 4 * streamCount; /*0x777fe1*/
      memcpy(v6, this->VertexStride, v9); /*0x777fe4*/
      if ( this->GeometryGroup ) /*0x777fec*/
      {
        for ( i = streamCount; i < this->StreamCount; ++i ) /*0x777ff7*/
          this->GeometryGroup->vtbl->ReleaseChip(this->GeometryGroup, this, i); /*0x77800a*/
        v6 = (void *)a3a; /*0x778014*/
      }
    }
    FormHeapFree((unsigned int)this->VBChip); /*0x77801c*/
    FormHeapFree((unsigned int)this->VertexStride); /*0x778025*/
    this->VBChip = (NiVBChip **)v5; /*0x77802d*/
    this->VertexStride = (UInt32 *)v6; /*0x778031*/
    this->StreamCount = streamCount; /*0x778034*/
  }
}
