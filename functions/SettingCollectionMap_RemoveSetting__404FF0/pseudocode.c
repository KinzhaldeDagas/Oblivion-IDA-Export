char __thiscall SettingCollectionMap_RemoveSetting(_DWORD *this, int a2)
{
  int v2; // eax

  LOBYTE(v2) = a2;
  if ( a2 )
  {
    v2 = *(_DWORD *)(a2 + 4);
    if ( v2 )
      LOBYTE(v2) = NiTMap_RemoveAt(this + 0x43, v2);
  }
  return v2;
}
