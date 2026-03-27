int __thiscall sub_437B60(_DWORD *this)
{
  int v2; // eax

  v2 = *(_DWORD *)(*(this + 9) + 0x28);
  if ( v2 )
  {
    if ( *(this + 3) != 6 )
    {
      if ( *(this + 0xB) )
      {
        InterlockedIncrement((volatile LONG *)(v2 + 4));
        sub_47B7D0((TESObjectREFR **)*(this + 8), (char *)*(this + 0xA), (NiObjectNET *)*(this + 0xB));
      }
    }
  }
  return (*(int (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)ModelLoaderPtr + 4) + 0x10))(
           *((_DWORD *)ModelLoaderPtr + 4),
           *(this + 0xC));
}
