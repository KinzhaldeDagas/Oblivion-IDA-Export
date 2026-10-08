// Verified object-reference placement helper accepts an interior cell or exterior WorldSpace and sets/reuses a reference base form. New reference attachment proceeds through cell lifecycle methods; this helper itself does not write the WorldSpace SubSpace index.
void __userpurge TESDataHandler_PlaceObjectRef(
        double a1@<st2>,
        double st6_0@<st1>,
        double a3@<st0>,
        TESForm *a2,
        int arg4,
        int a6,
        TESObjectCELL *a7,
        TESWorldSpace *a8,
        TESObjectREFR *a9)
{
  TESObjectCELL *v9; // ebx
  TESWorldSpace *v10; // edi
  TESObjectCELL *DwordAtOffset40; // eax

  v9 = a7; /*0x44a7f7*/
  if ( a7 ) /*0x44a7ff*/
  {
    if ( TESObjectCELL_IsInterior(a7) ) /*0x44a803*/
    {
      v10 = 0; /*0x44a88b*/
      goto LABEL_5; /*0x44a88d*/
    }
    v9 = 0; /*0x44a80c*/
  }
  v10 = a8; /*0x44a80e*/
LABEL_5:
  if ( !a2 || !v9 && !v10 ) /*0x44a824*/
    JUMPOUT(0x44ABBF); /*0x44abbf*/
  if ( a9 ) /*0x44a830*/
  {
    TESObjectREFR_IsPersistent(a9); /*0x44a834*/
    TESObjectREFR_SetPersistance((TESChildCELL *)a9, a1, st6_0, 0); /*0x44a841*/
    DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a9); /*0x44a848*/
    if ( DwordAtOffset40 ) /*0x44a84f*/
      TESObjectCELL_RemoveReference(DwordAtOffset40, a9); /*0x44a854*/
    if ( !a9->vtbl->GetBaseForm(a9) ) /*0x44a864*/
      TESObjectREFR_SetBaseForm(a9, a2); /*0x44a86d*/
    sub_4DB3C0(a9); /*0x44a874*/
    JUMPOUT(0x44A96D); /*0x44a96d*/
  }
  TESDataHandler_PlaceObjectRef_::SwitchRefType(a2, v9, v10, a1, st6_0, a3, (int)a2, arg4, a6, (int)a7, (int)a8, 0); /*0x44a830*/
}
