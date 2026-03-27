char __cdecl TESDataHandler_LoadForm(TESForm *a1, Data *a2)
{
  char v2; // bl
  char IsMaster; // [esp-8h] [ebp-14h]
  _UNKNOWN *retaddr; // [esp+Ch] [ebp+0h]

  v2 = a1->member.flags & 1;
  LOBYTE(retaddr) = a1->vtbl->LoadForm(a1, a2);
  if ( v2 )
  {
    TESForm_SetIsFromMaster(a1, 1);
  }
  else
  {
    IsMaster = TESFile_GetIsMaster(a2);
    TESForm_SetIsFromMaster(a1, IsMaster);
  }
  if ( TESFile_IsActive(a2) )
    a1->vtbl->SetFromActiveFile(a1, 1);
  return TESDataHandler_LoadForm_::Done((char)a1);
}
