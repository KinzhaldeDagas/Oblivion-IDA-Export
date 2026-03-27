void __thiscall sub_77DFD0(NiGeometryGroup *this, int a2)
{
  NiGeometryBufferData *v2; // esi
  NiVBChip **VBChip; // eax

  v2 = *(NiGeometryBufferData **)(a2 + 0x1C);
  if ( v2 )
  {
    sub_782930(this, *(NiGeometryBufferData **)(a2 + 0x1C));
    VBChip = v2->VBChip;
    if ( VBChip )
      _memset(VBChip, 0, 4 * v2->StreamCount);
    sub_778110(v2);
    FormHeapFree((unsigned int)v2);
    *(_DWORD *)(a2 + 0x1C) = 0;
  }
}
