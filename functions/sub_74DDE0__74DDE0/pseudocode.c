int __thiscall sub_74DDE0(_DWORD *this, int a2)
{
  _DWORD *v3; // eax
  int v4; // esi

  v3 = (_DWORD *)FormHeapAlloc(0x28u);
  v4 = (int)v3;
  if ( v3 )
  {
    sub_752BF0(v3);
    *(_DWORD *)v4 = &NiPSysMeshUpdateModifier::`vftable';
    *(_DWORD *)(v4 + 0x18) = &NiTArray<NiPointer<NiAVObject>>::`vftable';
    *(_WORD *)(v4 + 0x20) = 0;
    *(_WORD *)(v4 + 0x26) = 1;
    *(_WORD *)(v4 + 0x22) = 0;
    *(_WORD *)(v4 + 0x24) = 0;
    *(_DWORD *)(v4 + 0x1C) = 0;
    sub_74DB50(this, v4, a2);
    return v4;
  }
  else
  {
    sub_74DB50(this, 0, a2);
    return 0;
  }
}
