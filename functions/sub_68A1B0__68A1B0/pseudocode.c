TESObjectREFR *__thiscall sub_68A1B0(char *this)
{
  char *v1; // esi
  const TravelPathNode *v2; // edi

  v1 = this + 4; /*0x68a1b2*/
  if ( this != (char *)0xFFFFFFFC ) /*0x68a1b9*/
  {
    while ( *((_DWORD *)v1 + 1) || *(_DWORD *)v1 ) /*0x68a1c7*/
    {
      v2 = *(const TravelPathNode **)v1; /*0x68a1c9*/
      if ( sub_68B0E0(*(_BYTE **)v1) ) /*0x68a1cd*/
        return TravelPathNode_GetReference(v2); /*0x68a1e8*/
      v1 = *((char **)v1 + 1); /*0x68a1d6*/
      if ( !v1 ) /*0x68a1db*/
        return 0; /*0x68a1db*/
    }
  }
  return 0; /*0x68a1de*/
}
