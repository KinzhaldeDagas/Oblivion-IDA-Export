char __thiscall SettingCollectionMap_RemoveSetting(_DWORD *this, int a2)
{
  int v2; // eax

  LOBYTE(v2) = a2; /*0x404ff0*/
  if ( a2 ) /*0x404ff6*/
  {
    v2 = *(_DWORD *)(a2 + 4); /*0x404ff8*/
    if ( v2 ) /*0x404ffd*/
      LOBYTE(v2) = NiTMap_RemoveAt(this + 0x43, v2); /*0x405009*/
  }
  return v2; /*0x40500e*/
}
