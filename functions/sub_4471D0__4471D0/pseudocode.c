TESForm *__stdcall sub_4471D0(const char *a1, int a2, int a3, int **a4)
{
  TESForm *v4; // esi
  TESForm *v5; // eax
  int v6; // eax
  char v8; // [esp+34h] [ebp+10h]

  v4 = 0;
  if ( !a4 )
    return 0;
  v5 = (TESForm *)FormHeapAlloc(0x58u);
  if ( v5 )
    v4 = TESObjectCELL_constr(v5);
  v6 = sub_459790(SaveLoad_CurrentSavegame, a4[3], a2, a3);
  if ( v6 )
    TESForm_SetFormID(v4, v6, 1);
  if ( a1 )
    v4->vtbl->SetEditorID(v4, a1);
  TESObjectCELL::SetIsInterior((TESObjectCELL *)v4, 0);
  sub_4C97E0(v4, 2);
  sub_4CA710((TESObjectCELL *)v4);
  sub_4C9AC0((TESObjectCELL *)v4, a2, a3);
  if ( !sub_4EFEF0(a4, (int)v4) )
  {
    if ( v4 )
      v4->vtbl->Destroy(v4, 1);
    return 0;
  }
  v8 = sub_45A500(SaveLoad_CurrentSavegame);
  sub_45A530(SaveLoad_CurrentSavegame, v8 == 0);
  v4->vtbl->DoPostFixup(v4);
  sub_45A530(SaveLoad_CurrentSavegame, v8);
  return v4;
}
