void __thiscall sub_77DF80(NiGeometryGroup *this, int a2)
{
  NiGeometryBufferData *v3; // eax
  NiGeometryBufferData *v4; // eax

  if ( !*(_DWORD *)(a2 + 0x1C) ) /*0x77df85*/
  {
    v3 = (NiGeometryBufferData *)FormHeapAlloc(0x50u); /*0x77df90*/
    if ( v3 ) /*0x77df9a*/
      v4 = NiGeometryBufferData::NiGeometryBufferData(v3); /*0x77df9e*/
    else
      v4 = 0; /*0x77dfa5*/
    v4->PrimitiveType = D3DPT_TRIANGLELIST; /*0x77dfa7*/
    *(_DWORD *)(a2 + 0x1C) = v4; /*0x77dfae*/
    v4->Flags = 0x1400000; /*0x77dfb4*/
    sub_782910(this, v4); /*0x77dfba*/
    *(_WORD *)(a2 + 0x18) = 0xFFFF; /*0x77dfbf*/
  }
}
