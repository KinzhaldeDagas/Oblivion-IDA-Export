TESForm *__stdcall sub_4471D0(const char *a1, int a2, int a3, TESWorldSpace *a4)
{
  TESForm *v4; // esi
  TESForm *v5; // eax
  int v6; // eax
  char v8; // [esp+34h] [ebp+10h]

  v4 = 0; /*0x4471f9*/
  if ( !a4 ) /*0x4471fd*/
    return 0; /*0x4471fd*/
  v5 = (TESForm *)FormHeapAlloc(0x58u); /*0x447205*/
  if ( v5 ) /*0x447217*/
    v4 = TESObjectCELL_constr(v5); /*0x447220*/
  v6 = sub_459790(g_TESSaveLoadGame, (int *)a4->super.refID, a2, a3); /*0x447242*/
  if ( v6 ) /*0x447249*/
    TESForm_SetFormID(v4, v6, 1); /*0x447250*/
  if ( a1 ) /*0x44725b*/
    v4->vtbl->SetEditorID(v4, a1); /*0x447268*/
  TESObjectCELL::SetIsInterior((TESObjectCELL *)v4, 0); /*0x44726e*/
  sub_4C97E0(v4, 2); /*0x447277*/
  sub_4CA710((TESObjectCELL *)v4); /*0x44727e*/
  sub_4C9AC0((TESObjectCELL *)v4, a2, a3); /*0x447287*/
  if ( !TESWorldSpace_RegisterExteriorCell(a4, (TESObjectCELL *)v4) ) /*0x44728f*/
  {
    if ( v4 ) /*0x44729a*/
      v4->vtbl->Destroy(v4, 1); /*0x4472a5*/
    return 0; /*0x4472a9*/
  }
  v8 = sub_45A500(g_TESSaveLoadGame); /*0x4472bb*/
  sub_45A530(g_TESSaveLoadGame, v8 == 0); /*0x4472c6*/
  v4->vtbl->DoPostFixup(v4); /*0x4472d2*/
  sub_45A530(g_TESSaveLoadGame, v8); /*0x4472df*/
  return v4; /*0x4472e8*/
}
