bool __cdecl sub_507800(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a3)
{
  bool result; // al
  CHAR **WorldSpace; // eax
  TESWorldSpace *v10; // esi
  float z; // ecx
  float y; // eax
  PlayerCharacter *v13; // ecx
  void *DwordAtOffset40; // eax
  TESWorldSpaceCellReferenceList *v15; // edi
  TESWorldSpaceCellReferenceList *i; // esi
  BSExtraDataVtbl *v17; // eax
  BSExtraDataVtbl *v18; // eax
  const char *v19; // eax
  char v20; // [esp-8h] [ebp-1Ch]
  char v21; // [esp-8h] [ebp-1Ch]
  UInt16 v22[2]; // [esp+4h] [ebp-10h] BYREF
  float v23[3]; // [esp+8h] [ebp-Ch] BYREF

  *(_DWORD *)v22 = 1; /*0x50782a*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v22); /*0x507832*/
  if ( result ) /*0x50783c*/
  {
    WorldSpace = (CHAR **)TESObjectREFR_GetWorldSpace((TESObjectREFR *)reference); /*0x507849*/
    v10 = (TESWorldSpace *)WorldSpace; /*0x50784e*/
    if ( !WorldSpace || !*sub_4F1A60(WorldSpace) ) /*0x50785b*/
    {
      z = g_zeroNiPoint3.z; /*0x507866*/
      y = g_zeroNiPoint3.y; /*0x50786c*/
      v23[0] = g_zeroNiPoint3.x; /*0x507871*/
      v23[2] = z; /*0x50787b*/
      v13 = reference; /*0x50787f*/
      v23[1] = y; /*0x507886*/
      DwordAtOffset40 = (void *)Shared_GetDwordAtOffset40(v13); /*0x50788a*/
      v10 = (TESWorldSpace *)sub_44EE00(DwordAtOffset40, v23, 0); /*0x50789b*/
    }
    if ( v10 ) /*0x50789f*/
    {
      v15 = TESWorldSpace_CollectPersistentCellReferences(v10); /*0x5078a9*/
      for ( i = v15; i; i = (TESWorldSpaceCellReferenceList *)i->overflowNodes ) /*0x5078af*/
      {
        if ( !i->firstReference ) /*0x5078b1*/
          break; /*0x5078b5*/
        v20 = *(_DWORD *)v22 > 0; /*0x5078bf*/
        v17 = sub_4D7730(i->firstReference); /*0x5078c0*/
        AddMapMarker(v17, v20); /*0x5078c7*/
        v21 = *(_DWORD *)v22 > 0; /*0x5078d6*/
        v18 = sub_4D7730(i->firstReference); /*0x5078d7*/
        sub_42B350(v18, v21); /*0x5078de*/
        i->firstReference->vtbl->super.MarkAsModified((TESForm *)i->firstReference, 0x400); /*0x5078ef*/
      }
      BSSimpleList_Clear(v15); /*0x5078fa*/
      FormHeapFree((unsigned int)v15); /*0x507900*/
    }
    v19 = "shown."; /*0x50790f*/
    if ( *(int *)v22 <= 0 ) /*0x507914*/
      v19 = "hidden."; /*0x507916*/
    Interface_ConsolePrint("All map markers %s", v19); /*0x507921*/
    return 1; /*0x507929*/
  }
  return result; /*0x50783e*/
}
