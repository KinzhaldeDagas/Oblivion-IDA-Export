void __thiscall sub_77DF80(NiGeometryGroup *this, int a2)
{
  NiGeometryBufferData *v3; // eax
  NiGeometryBufferData *v4; // eax

  if ( !*(_DWORD *)(a2 + 0x1C) )
  {
    v3 = (NiGeometryBufferData *)FormHeapAlloc(0x50u);
    if ( v3 )
      v4 = NiGeometryBufferData::NiGeometryBufferData(v3);
    else
      v4 = 0;
    v4->PrimitiveType = D3DPT_TRIANGLELIST;
    *(_DWORD *)(a2 + 0x1C) = v4;
    v4->Flags = 0x1400000;
    sub_782910(this, v4);
    *(_WORD *)(a2 + 0x18) = 0xFFFF;
  }
}
