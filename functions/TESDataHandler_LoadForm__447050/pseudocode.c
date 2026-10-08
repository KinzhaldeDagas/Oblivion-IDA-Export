// TESDataHandler_LoadForm supports override reuse: invokes virtual TESForm::LoadForm on the supplied existing object and updates master/active-file flags.
char __cdecl TESDataHandler_LoadForm(TESForm *a1, Data *a2)
{
  char v2; // bl
  char IsMaster; // [esp-8h] [ebp-14h]
  _UNKNOWN *retaddr; // [esp+Ch] [ebp+0h]

  v2 = a1->member.flags & 1; /*0x447066*/
  LOBYTE(retaddr) = a1->vtbl->LoadForm(a1, a2); // Pass273 crash context: 0x000104A1 startup capture ended at null EIP before PreLoadGame/PostLoadGame; recovered stack returned through TESDataHandler_LoadForm's virtual LoadForm call with an EngineBugFixes frame. All native SimpleShadow/shadow producer counters were zero, so this artifact is not evidence of a ShadowPass mutation. /*0x44706d*/
  if ( v2 ) /*0x447071*/
  {
    TESForm_SetIsFromMaster(a1, 1); /*0x447081*/
  }
  else
  {
    IsMaster = TESFile_GetIsMaster(a2); /*0x44707a*/
    TESForm_SetIsFromMaster(a1, IsMaster); /*0x44707b*/
  }
  if ( TESFile_IsActive(a2) ) /*0x447088*/
    a1->vtbl->SetFromActiveFile(a1, 1); /*0x44709d*/
  return TESDataHandler_LoadForm_::Done((char)a1);
}
