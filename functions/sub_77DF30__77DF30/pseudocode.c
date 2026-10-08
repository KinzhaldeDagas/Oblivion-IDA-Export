void __thiscall sub_77DF30(NiGeometryGroup *this, int a2)
{
  NiGeometryBufferData *v2; // esi
  int VBChip; // eax

  v2 = *(NiGeometryBufferData **)(a2 + 0x28); /*0x77df36*/
  if ( v2 ) /*0x77df3b*/
  {
    NiGeometryGroup_RemoveBufferData(this, *(NiGeometryBufferData **)(a2 + 0x28)); /*0x77df3e*/
    VBChip = (int)v2->VBChip; /*0x77df43*/
    if ( VBChip ) /*0x77df48*/
      _memset(VBChip, 0, 4 * v2->StreamCount); /*0x77df55*/
    NiGeometryBufferData_Destroy(v2); /*0x77df5f*/
    FormHeapFree((unsigned int)v2); /*0x77df65*/
    *(_DWORD *)(a2 + 0x28) = 0; /*0x77df6d*/
  }
}
