char __stdcall sub_80F030(NiNode *a1)
{
  NiProperty *NiPropertyByID; // eax
  NiProperty *v2; // esi

  NiPropertyByID = NiNode_GetNiPropertyByID(a1, 4); /*0x80f03a*/
  v2 = NiPropertyByID; /*0x80f03f*/
  if ( NiPropertyByID ) /*0x80f043*/
    NiPropertyByID = (NiProperty *)((*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) == 7); /*0x80f056*/
  (*((void (__thiscall **)(NiProperty *, NiNode *))(NiPropertyByID != 0 ? v2 : 0)->vtbl + 0x16))(
    NiPropertyByID != 0 ? v2 : 0,
    a1);
  return 1; /*0x80f068*/
}
