NiTPointerMap<int,TESTerrainLODQuadRoot *> *__thiscall NiTPointerMap<int,TESTerrainLODQuadRoot *>::NiTPointerMap<int,TESTerrainLODQuadRoot *>(
        NiTPointerMap<int,TESTerrainLODQuadRoot *> *this)
{
  int v2; // eax
  int v3; // edi
  __int64 v4; // rax
  double v5; // st7
  int v7; // [esp-8h] [ebp-28h]

  *((_DWORD *)this + 1) = 0x25;
  *(_DWORD *)this = &NiTMapBase<NiTPointerAllocator<unsigned int>,int,TESTerrainLODQuadRoot *>::`vftable';
  *((_DWORD *)this + 3) = 0;
  v2 = FormHeapAlloc(0x94u);
  v7 = 4 * *((_DWORD *)this + 1);
  *((_DWORD *)this + 2) = v2;
  _memset(v2, 0, v7);
  *(_DWORD *)this = &NiTPointerMap<int,TESTerrainLODQuadRoot *>::`vftable';
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  if ( !dword_B360A0 )
  {
    v3 = 0x800 / SettingMinGrassSize;
    if ( !dword_B36098 )
    {
      v4 = 0xCLL * (unsigned int)(v3 * (0x800 / SettingMinGrassSize));
      dword_B36098 = FormHeapAlloc(HIDWORD(v4) != 0 ? 0xFFFFFFFF : v4);
    }
    if ( !dword_B3609C )
      dword_B3609C = FormHeapAlloc((unsigned __int64)(unsigned int)(v3 * v3) >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v3 * v3);
  }
  v5 = SettingGrassWindMagnitudeMin;
  ++dword_B360A0;
  LocalGrassWindMagnitudeMin = v5;
  LocalGrassWindMagnitudeMax = SettingGrassWindMagnitudeMax;
  return this;
}
