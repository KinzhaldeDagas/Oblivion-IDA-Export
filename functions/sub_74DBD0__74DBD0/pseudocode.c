_DWORD *sub_74DBD0()
{
  _DWORD *v0; // eax
  _DWORD *v1; // esi

  v0 = (_DWORD *)FormHeapAlloc(0x28u);
  v1 = v0;
  if ( !v0 )
    return 0;
  sub_752BF0(v0);
  *v1 = &NiPSysMeshUpdateModifier::`vftable';
  *((_WORD *)v1 + 0x10) = 0;
  *((_WORD *)v1 + 0x11) = 0;
  *((_WORD *)v1 + 0x12) = 0;
  v1[7] = 0;
  v1[6] = &NiTArray<NiPointer<NiAVObject>>::`vftable';
  *((_WORD *)v1 + 0x13) = 1;
  return v1;
}
