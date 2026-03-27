void __thiscall sub_75FF80(NiTArray_NiD3DTextureStage *this)
{
  UInt16 i; // bx
  NiD3DTextureStage **v3; // edi
  NiD3DTextureStage *v4; // ecx

  for ( i = 0; i < this->end; ++i )
  {
    v3 = (NiD3DTextureStage **)(&this->data->Stage + i);
    v4 = *v3;
    if ( *v3 )
    {
      if ( v4[7].Unk08-- == 1 )
        sub_772560(v4);
      *v3 = 0;
    }
  }
  this->numObjs = 0;
  this->end = 0;
}
