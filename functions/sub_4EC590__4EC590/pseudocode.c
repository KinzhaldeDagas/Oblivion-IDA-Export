void __thiscall sub_4EC590(NiTMap_TESCELL *this)
{
  if ( unk_B360A0-- == 1 ) /*0x4ec5b8*/
  {
    if ( unk_B36098 ) /*0x4ec5c9*/
    {
      FormHeapFree(unk_B36098); /*0x4ec5d3*/
      unk_B36098 = 0; /*0x4ec5db*/
    }
    if ( unk_B3609C ) /*0x4ec5e5*/
    {
      FormHeapFree(unk_B3609C); /*0x4ec5ef*/
      unk_B3609C = 0; /*0x4ec5f7*/
    }
  }
  sub_4EBD00(this); /*0x4ec603*/
  NiTPointerMap<int,TESTerrainLODQuadRoot *>::~NiTPointerMap<int,TESTerrainLODQuadRoot *>((unsigned int *)this); /*0x4ec612*/
}
