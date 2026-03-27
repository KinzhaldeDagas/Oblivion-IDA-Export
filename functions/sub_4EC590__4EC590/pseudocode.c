void __thiscall sub_4EC590(NiTMap_TESCELL *this)
{
  if ( dword_B360A0-- == 1 )
  {
    if ( dword_B36098 )
    {
      FormHeapFree(dword_B36098);
      dword_B36098 = 0;
    }
    if ( dword_B3609C )
    {
      FormHeapFree(dword_B3609C);
      dword_B3609C = 0;
    }
  }
  sub_4EBD00(this);
  NiTPointerMap<int,TESTerrainLODQuadRoot *>::~NiTPointerMap<int,TESTerrainLODQuadRoot *>((unsigned int *)this);
}
