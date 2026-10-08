//
// Verified: reads TESForm+0xC key, allocates/zeros 8-byte entry on lookup miss, ORs flags at entry+0 only if savedFormBuffer+4 is null; returns entry. Oblivion 45B670/45B700 and blob-drain callers establish modifier role. Probable homolog: Fallout 825EDC40 AddChangeFlags; Fallout takes formID directly, Oblivion takes TESForm*.
OblivionChangeData *__thiscall ChangesMap_AddFormChangeFlags(ChangesMap *self, TESForm *form, unsigned int flags)
{
  UInt32 refID; // ebx
  OblivionChangeData *v5; // eax
  OblivionChangeData *v6; // esi
  OblivionChangeData *result; // eax

  refID = form->member.refID; /*0x452c25*/
  if ( NiTMap_GetAt(self, refID, &form) ) /*0x452c34*/
  {
    v6 = (OblivionChangeData *)form; /*0x452c74*/
  }
  else
  {
    v5 = (OblivionChangeData *)FormHeapAlloc(8u); /*0x452c3f*/
    if ( v5 ) /*0x452c49*/
    {
      v5->changeFlags = 0; /*0x452c4f*/
      v5->savedFormBuffer = 0; /*0x452c55*/
      v6 = v5; /*0x452c5c*/
      NiTMap_SetAt(self, refID, (int)v5); /*0x452c5e*/
    }
    else
    {
      v6 = 0; /*0x452c6b*/
      NiTMap_SetAt(self, refID, 0); /*0x452c6d*/
    }
  }
  result = v6; /*0x452c7c*/
  if ( !v6->savedFormBuffer ) /*0x452c78*/
    v6->changeFlags |= flags; /*0x452c84*/
  return result; /*0x452c86*/
}
