int __thiscall sub_5E1F60(_DWORD *this)
{
  int v1; // esi
  int result; // eax

  v1 = *(this + 0x3E);
  result = 0;
  if ( v1 )
  {
    if ( *(_BYTE *)(v1 + 4) == 0x30 )
    {
      if ( TESObjectCELL_IsInterior((TESObjectCELL *)*(this + 0x3E)) )
        return v1;
      else
        return 0;
    }
  }
  return result;
}
