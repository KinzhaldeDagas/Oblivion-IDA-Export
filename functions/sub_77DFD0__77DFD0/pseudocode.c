void __thiscall sub_77DFD0(NiGeometryGroup *this, int a2)
{
  NiGeometryBufferData *v2; // esi
  int VBChip; // eax

  v2 = *(NiGeometryBufferData **)(a2 + 0x1C); /*0x77dfd6*/
  if ( v2 ) /*0x77dfdb*/
  {
    NiGeometryGroup_RemoveBufferData(this, *(NiGeometryBufferData **)(a2 + 0x1C)); /*0x77dfde*/
    VBChip = (int)v2->VBChip; /*0x77dfe3*/
    if ( VBChip ) /*0x77dfe8*/
      _memset(VBChip, 0, 4 * v2->StreamCount); /*0x77dff5*/
    NiGeometryBufferData_Destroy(v2); /*0x77dfff*/
    FormHeapFree((unsigned int)v2); /*0x77e005*/
    *(_DWORD *)(a2 + 0x1C) = 0; /*0x77e00d*/
  }
}
