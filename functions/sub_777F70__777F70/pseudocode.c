void __thiscall sub_777F70(NiGeometryBufferData *this, UInt32 streamCount)
{
  int v2; // ebp
  char *v5; // ebp
  char *v6; // ebx
  UInt32 v7; // eax
  UInt32 i; // ebx
  size_t v9; // [esp-18h] [ebp-20h]
  size_t v10; // [esp-18h] [ebp-20h]
  size_t v11; // [esp-Ch] [ebp-14h]
  UInt32 a3a; // [esp+Ch] [ebp+4h]

  if ( streamCount != this->StreamCount )
  {
    HIDWORD(v11) = v2;
    v5 = (char *)FormHeapAlloc((unsigned __int64)streamCount >> 0x1E != 0 ? 0xFFFFFFFF : 4 * streamCount);
    v6 = (char *)FormHeapAlloc((unsigned __int64)streamCount >> 0x1E != 0 ? 0xFFFFFFFF : 4 * streamCount);
    v7 = this->StreamCount;
    a3a = (UInt32)v6;
    if ( streamCount >= v7 )
    {
      LODWORD(v11) = 4 * v7;
      memcpy(v5, this->VBChip, v11);
      LODWORD(v10) = 4 * this->StreamCount;
      memcpy(v6, this->VertexStride, v10);
      _memset(&v5[4 * this->StreamCount], 0, 4 * (streamCount - this->StreamCount));
      _memset(&v6[4 * this->StreamCount], 0, 4 * (streamCount - this->StreamCount));
    }
    else
    {
      LODWORD(v11) = 4 * streamCount;
      memcpy(v5, this->VBChip, v11);
      LODWORD(v9) = 4 * streamCount;
      memcpy(v6, this->VertexStride, v9);
      if ( this->GeometryGroup )
      {
        for ( i = streamCount; i < this->StreamCount; ++i )
          this->GeometryGroup->vtbl->ReleaseChip(this->GeometryGroup, this, i);
        v6 = (char *)a3a;
      }
    }
    FormHeapFree((unsigned int)this->VBChip);
    FormHeapFree((unsigned int)this->VertexStride);
    this->VBChip = (NiVBChip **)v5;
    this->VertexStride = (UInt32 *)v6;
    this->StreamCount = streamCount;
  }
}
