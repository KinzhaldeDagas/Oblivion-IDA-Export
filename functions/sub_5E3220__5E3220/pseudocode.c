bool __thiscall sub_5E3220(_DWORD *this)
{
  int v1; // eax
  int v2; // esi

  if ( !*(this + 0x16) ) /*0x5e3223*/
    return 0; /*0x5e325e*/
  v1 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0x16) + 0x184))(*(this + 0x16)); /*0x5e3235*/
  v2 = v1; /*0x5e3237*/
  return v1 /*0x5e3257*/
      && (*(_BYTE *)(v1 + 0x20) == 1 && !TESPackage_IsRuntimePackage((TESPackage *)v1) || *(_BYTE *)(v2 + 0x20) == 0x1F);
}
