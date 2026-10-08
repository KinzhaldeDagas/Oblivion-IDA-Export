// 0x4D74D0: Travel-horse target predicate decoded 2026-09-05: reference base pointer+0x1C must be nonnull; GetBaseForm virtual slot+0x170 yields typebyte0x24 CREA; creature byte+0x104 must equal4 (horse). XHRS resolver invokes this at0x426681 after target REFR cast. TESCS peer0x53F310 uses ref+0x28, vslot+0x19C, creature+0x138.
bool __thiscall TESObjectREFR_HasHorseCreatureBase(_DWORD *this)
{
  int v2; // eax
  bool result; // al

  result = 0; /*0x4d7502*/
  if ( *(this + 7) ) /*0x4d74d3*/
  {
    if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*this + 0x170))(this) + 4) == 0x24 ) /*0x4d74e7*/
    {
      v2 = (*(int (__thiscall **)(_DWORD *))(*this + 0x170))(this); /*0x4d74f3*/
      if ( v2 ) /*0x4d74f7*/
      {
        if ( *(_BYTE *)(v2 + 0x104) == 4 ) /*0x4d7500*/
          return 1; /*0x4d74d7*/
      }
    }
  }
  return result; /*0x4d7504*/
}
