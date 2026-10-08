void __thiscall sub_75FF80(NiTArray_NiD3DTextureStage *this)
{
  UInt16 i; // bx
  NiD3DTextureStage **v3; // edi
  NiD3DTextureStage *v4; // ecx

  for ( i = 0; i < this->end; ++i ) /*0x75ff89*/
  {
    v3 = (NiD3DTextureStage **)(&this->data->Stage + i); /*0x75ff96*/
    v4 = *v3; /*0x75ff99*/
    if ( *v3 ) /*0x75ff99*/
    {
      if ( v4[7].Unk08-- == 1 ) /*0x75ff9f*/
        sub_772560(v4); /*0x75ffa5*/
      *v3 = 0; /*0x75ffaa*/
    }
  }
  this->numObjs = 0; /*0x75ffb6*/
  this->end = 0; /*0x75ffba*/
}
