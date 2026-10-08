TESObjectREFR *__userpurge sub_4D4790@<eax>(
        TESObjectCELL *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        TESObjectREFR *a5)
{
  TESObjectREFR *v6; // esi
  PlayerCharacterVtbl *vtbl; // eax
  PlayerCharacter *v8; // ecx
  float *v9; // eax
  float v10; // ebx
  float v11; // ebp
  float v12; // edi
  TESChildCELL *v13; // eax
  TESObjectREFR *v14; // esi
  TESPathGrid *pathGrid; // esi
  PlayerCharacter *v16; // ecx
  float *(__thiscall *GetPos)(TESObjectREFR *); // edx
  _DWORD *v18; // eax
  char *v19; // eax
  char *v20; // eax
  TESForm *v22; // eax
  char v23; // [esp+17h] [ebp-4Dh]
  float v25; // [esp+20h] [ebp-44h]
  float v26; // [esp+24h] [ebp-40h]
  float v27; // [esp+28h] [ebp-3Ch]
  float v28[11]; // [esp+2Ch] [ebp-38h] BYREF
  int v29; // [esp+60h] [ebp-4h]

  v6 = a5; /*0x4d47bd*/
  v23 = 0; /*0x4d47c3*/
  if ( a5 && Shared_GetDwordAtOffset40(a5) == a1 ) /*0x4d47d3*/
  {
    vtbl = (PlayerCharacterVtbl *)v6->vtbl; /*0x4d47d5*/
    v8 = (PlayerCharacter *)v6; /*0x4d47d7*/
LABEL_4:
    v9 = (float *)((int (__fastcall *)(PlayerCharacter *))vtbl->super.super.super.GetPos)(v8); /*0x4d47d9*/
    v10 = *v9; /*0x4d47e1*/
    v11 = v9[1]; /*0x4d47e3*/
    v12 = v9[2]; /*0x4d47e6*/
    goto LABEL_5; /*0x4d47e6*/
  }
  if ( Shared_GetDwordAtOffset40((TESObjectREFR *)reference) == a1 ) /*0x4d4822*/
  {
    v8 = reference; /*0x4d4824*/
    vtbl = reference->vtbl; /*0x4d482a*/
    goto LABEL_4; /*0x4d482c*/
  }
  if ( a1->members.cellProcessLevel != 3 ) /*0x4d4832*/
    return 0; /*0x4d4832*/
  pathGrid = a1->members.pathGrid; /*0x4d4838*/
  if ( !pathGrid ) /*0x4d483d*/
    return 0; /*0x4d483d*/
  if ( !sub_4E4970((_WORD *)a1->members.pathGrid) ) /*0x4d4845*/
    return 0; /*0x4d4845*/
  TESPathGridPoint_ctor(v28); /*0x4d4857*/
  v16 = reference; /*0x4d485c*/
  GetPos = reference->vtbl->super.super.super.GetPos; /*0x4d4864*/
  v29 = 0; /*0x4d486a*/
  v18 = (_DWORD *)GetPos((TESObjectREFR *)v16); /*0x4d4872*/
  PathGraphNode_SetPosition(v28, v18); /*0x4d4879*/
  v19 = TESPathGrid_FindReachablePointForActor(pathGrid, (char *)v28, (TESObjectREFR *)reference, 0, 0, &a5); /*0x4d4895*/
  if ( v19 ) /*0x4d489c*/
  {
    v20 = PathGraphNode_GetPosition(v19); /*0x4d48a0*/
    v10 = *(float *)v20; /*0x4d48a5*/
    v11 = *((float *)v20 + 1); /*0x4d48a7*/
    v12 = *((float *)v20 + 2); /*0x4d48aa*/
    v23 = 1; /*0x4d48ad*/
  }
  else
  {
    v12 = v27; /*0x4d48b4*/
    v11 = v26; /*0x4d48b8*/
    v10 = v25; /*0x4d48bc*/
  }
  v29 = 0xFFFFFFFF; /*0x4d48c4*/
  sub_4E8200((unsigned int *)v28); /*0x4d48cc*/
  if ( !v23 ) /*0x4d48d6*/
    return 0; /*0x4d48de*/
LABEL_5:
  v13 = (TESChildCELL *)FormHeapAlloc(0x58u); /*0x4d47e9*/
  v29 = 1; /*0x4d47f9*/
  if ( v13 ) /*0x4d4801*/
    v14 = (TESObjectREFR *)TESObjectREFR_constr(v13); /*0x4d480e*/
  else
    v14 = 0; /*0x4d48e0*/
  v29 = 0xFFFFFFFF; /*0x4d48ee*/
  TESObjectREFR_SetPosition(v14, v10, v11, v12); /*0x4d48f9*/
  TESObjectREFR_SetBaseForm(v14, MEMORY[0xB33AA8]); /*0x4d4906*/
  v22 = reference->vtbl->super.super.super.GetBaseForm(reference); /*0x4d4919*/
  sub_4DB890((char *)v14, v22); /*0x4d491e*/
  if ( sub_4CC980(a1, v14) ) /*0x4d492a*/
  {
    TESObjectCELL_AddReference(a1, a2, a3, a4, v14); /*0x4d4936*/
  }
  else
  {
    if ( v14 ) /*0x4d493f*/
      v14->vtbl->super.Destroy((TESForm *)v14, 1); /*0x4d494a*/
    return 0; /*0x4d494c*/
  }
  return v14; /*0x4d4950*/
}
