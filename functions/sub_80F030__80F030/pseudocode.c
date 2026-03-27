char __stdcall sub_80F030(NiNode *a1)
{
  NiProperty *NiPropertyByID; // eax
  NiProperty *v2; // esi

  NiPropertyByID = NiNode_GetNiPropertyByID(a1, 4);
  v2 = NiPropertyByID;
  if ( NiPropertyByID )
    NiPropertyByID = (NiProperty *)((*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) == 7);
  (*((void (__thiscall **)(NiProperty *, NiNode *))(NiPropertyByID != 0 ? v2 : 0)->vtbl + 0x16))(
    NiPropertyByID != 0 ? v2 : 0,
    a1);
  return 1;
}
