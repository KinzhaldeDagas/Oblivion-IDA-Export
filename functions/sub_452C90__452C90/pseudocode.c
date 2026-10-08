//
// Verified: lookup/create 8-byte entry and replace flags at +0 without altering existing +4 buffer. LoadGame callers 46665C/46683D. Probable homolog: Fallout 825EDD18.
OblivionChangeData *__thiscall ChangesMap_SetChangeFlags(ChangesMap *self, unsigned int formID, unsigned int flags)
{
  unsigned int v3; // ebx
  OblivionChangeData *v5; // eax
  OblivionChangeData *v6; // esi
  OblivionChangeData *result; // eax

  v3 = formID; /*0x452c91*/
  if ( NiTMap_GetAt(self, formID, &formID) ) /*0x452c9e*/
  {
    result = (OblivionChangeData *)formID; /*0x452cd6*/
    *(_DWORD *)formID = flags; /*0x452cdf*/
  }
  else
  {
    v5 = (OblivionChangeData *)FormHeapAlloc(8u); /*0x452caa*/
    v6 = 0; /*0x452caf*/
    if ( v5 ) /*0x452cb6*/
    {
      v5->changeFlags = 0; /*0x452cb8*/
      v5->savedFormBuffer = 0; /*0x452cba*/
      v6 = v5; /*0x452cbd*/
    }
    NiTMap_SetAt(self, v3, (int)v6); /*0x452cc3*/
    v6->changeFlags = flags; /*0x452ccc*/
    return v6; /*0x452cce*/
  }
  return result; /*0x452cd1*/
}
