void __thiscall sub_68A1A0(_DWORD *this)
{
  int v1; // ecx
  TESObjectREFR *v2; // ecx

  v1 = *(this + 1); /*0x68a1a0*/
  if ( v1 ) /*0x68a1a5*/
  {
    if ( !*(_BYTE *)(v1 + 4) ) /*0x68b1a0*/
    {
      v2 = *(TESObjectREFR **)v1; /*0x68b1a6*/
      if ( v2 ) /*0x68b1aa*/
        TESObjectREFR_GetWorldSpace(v2); /*0x68b1ac*/
    }
  }
}
