// Verified map base layout is the NiTPointerMap<int, TESTerrainLODQuadRoot*> embedded at TESWorldSpace+0x38: vtable +0, bucketCount +4, buckets +8, itemCount +0xC. Constructor uses 37 buckets; the adjacent TESWorldSpace fields are outside this 0x10-byte map.
NiTPointerMap<int,TESTerrainLODQuadRoot *> *__thiscall NiTPointerMap<int,TESTerrainLODQuadRoot *>::NiTPointerMap<int,TESTerrainLODQuadRoot *>(
        NiTPointerMap<int,TESTerrainLODQuadRoot *> *this)
{
  int v2; // eax
  int v3; // edi
  __int64 v4; // rax
  double v5; // st7
  unsigned int v7; // [esp-8h] [ebp-28h]

  *((_DWORD *)this + 1) = 0x25; /*0x4ea481*/
  *(_DWORD *)this = &NiTMapBase<NiTPointerAllocator<unsigned int>,int,TESTerrainLODQuadRoot *>::`vftable'; /*0x4ea490*/
  *((_DWORD *)this + 3) = 0; /*0x4ea496*/
  v2 = FormHeapAlloc(0x94u); /*0x4ea49e*/
  v7 = 4 * *((_DWORD *)this + 1); /*0x4ea4aa*/
  *((_DWORD *)this + 2) = v2; /*0x4ea4ad*/
  _memset(v2, 0, v7); /*0x4ea4b0*/
  *(_DWORD *)this = &NiTPointerMap<int,TESTerrainLODQuadRoot *>::`vftable'; /*0x4ea4b8*/
  *((_DWORD *)this + 5) = 0; /*0x4ea4be*/
  *((_DWORD *)this + 6) = 0; /*0x4ea4c1*/
  if ( !unk_B360A0 )
  {
    v3 = 0x800 / SettingMinGrassSize; /*0x4ea4e2*/
    if ( !unk_B36098 )
    {
      v4 = 0xCLL * (unsigned int)(v3 * (0x800 / SettingMinGrassSize)); /*0x4ea4f0*/
      unk_B36098 = FormHeapAlloc(HIDWORD(v4) != 0 ? 0xFFFFFFFF : v4);
    }
    if ( !unk_B3609C )
      unk_B3609C = FormHeapAlloc((unsigned __int64)(unsigned int)(v3 * v3) >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v3 * v3);
  }
  v5 = SettingGrassWindMagnitudeMin; /*0x4ea532*/
  ++unk_B360A0; /*0x4ea538*/
  MEMORY[0xB46064] = v5; /*0x4ea53f*/
  MEMORY[0xB46068] = SettingGrassWindMagnitudeMax; /*0x4ea54d*/
  return this; /*0x4ea553*/
}
