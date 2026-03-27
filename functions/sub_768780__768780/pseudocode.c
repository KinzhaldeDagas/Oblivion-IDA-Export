char __thiscall sub_768780(int this, _DWORD *a2)
{
  _DWORD *v4; // ecx
  _DWORD *v5; // eax

  v4 = (_DWORD *)a2[9];
  if ( !v4 || !(*(int (__thiscall **)(_DWORD *))(*v4 + 0x20))(v4) )
  {
    v5 = NiDX9DynamicTextureData::NiDX9DynamicTextureData(v4);
    if ( !v5 )
      return 0;
    NiTMap_SetAt((_DWORD *)(this + 0x8E0), (int)a2, (int)v5);
  }
  return 1;
}
