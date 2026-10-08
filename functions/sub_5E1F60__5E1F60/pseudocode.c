int __thiscall sub_5E1F60(_DWORD *this)
{
  int v1; // esi
  int result; // eax

  v1 = *(this + 0x3E); /*0x5e1f61*/
  result = 0; /*0x5e1f67*/
  if ( v1 ) /*0x5e1f6b*/
  {
    if ( *(_BYTE *)(v1 + 4) == 0x30 ) /*0x5e1f71*/
    {
      if ( TESObjectCELL_IsInterior((TESObjectCELL *)*(this + 0x3E)) ) /*0x5e1f75*/
        return v1; /*0x5e1f82*/
      else
        return 0; /*0x5e1f7e*/
    }
  }
  return result; /*0x5e1f80*/
}
