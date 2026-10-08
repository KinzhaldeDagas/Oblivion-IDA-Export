int __thiscall sub_437B60(_DWORD *this)
{
  int v2; // eax

  v2 = *(_DWORD *)(*(this + 9) + 0x28); /*0x437b66*/
  if ( v2 ) /*0x437b6b*/
  {
    if ( *(this + 3) != 6 ) /*0x437b71*/
    {
      if ( *(this + 0xB) ) /*0x437b73*/
      {
        InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x437b7d*/
        sub_47B7D0((TESObjectREFR **)*(this + 8), (char *)*(this + 0xA), (NiAVObject *)*(this + 0xB)); /*0x437b8e*/
      }
    }
  }
  return (*(int (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)MEMORY[0xB33A1C] + 4) + 0x10))( /*0x437ba6*/
           *((_DWORD *)MEMORY[0xB33A1C] + 4),
           *(this + 0xC));
}
