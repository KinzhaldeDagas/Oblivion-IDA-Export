TESObjectREFR *__userpurge sub_4D4790@<eax>(
        TESObjectCELL *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        TESObjectREFR *a4)
{
  TESObjectREFR *v5; // esi
  PlayerCharacterVtbl *vtbl; // eax
  PlayerCharacter *v7; // ecx
  float *v8; // eax
  float v9; // ebx
  float v10; // ebp
  float v11; // edi
  TESChildCELL *v12; // eax
  TESObjectREFR *v13; // esi
  TESPathGrid *pathGrid; // esi
  PlayerCharacter *v15; // ecx
  float *(__thiscall *GetPos)(TESObjectREFR *); // edx
  _DWORD *v17; // eax
  char *v18; // eax
  char *v19; // eax
  TESForm *v21; // eax
  double v22; // st7
  char v23; // [esp+17h] [ebp-4Dh]
  float v25; // [esp+20h] [ebp-44h]
  float v26; // [esp+24h] [ebp-40h]
  float v27; // [esp+28h] [ebp-3Ch]
  float v28[11]; // [esp+2Ch] [ebp-38h] BYREF
  int v29; // [esp+60h] [ebp-4h]

  v5 = a4;
  v23 = 0;
  if ( a4 && TESObjectREFR_GetParentCell(a4) == a1 )
  {
    vtbl = (PlayerCharacterVtbl *)v5->vtbl;
    v7 = (PlayerCharacter *)v5;
LABEL_4:
    v8 = (float *)((int (__fastcall *)(PlayerCharacter *))vtbl->super.super.super.GetPos)(v7);
    v9 = *v8;
    v10 = v8[1];
    v11 = v8[2];
    goto LABEL_5;
  }
  if ( TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef) == a1 )
  {
    v7 = TESDataHandler_g_PlayerRef;
    vtbl = TESDataHandler_g_PlayerRef->vtbl;
    goto LABEL_4;
  }
  if ( a1->members.cellProcessLevel != 3 )
    return 0;
  pathGrid = a1->members.pathGrid;
  if ( !pathGrid )
    return 0;
  if ( !sub_4E4970((_WORD *)a1->members.pathGrid) )
    return 0;
  sub_4E7DF0(v28);
  v15 = TESDataHandler_g_PlayerRef;
  GetPos = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetPos;
  v29 = 0;
  v17 = (_DWORD *)GetPos((TESObjectREFR *)v15);
  sub_4BEF50(v28, v17);
  v18 = sub_4E5730(pathGrid, (char *)v28, (TESObjectREFR *)TESDataHandler_g_PlayerRef, 0, 0, &a4);
  if ( v18 )
  {
    v19 = sub_4BEF40(v18);
    v9 = *(float *)v19;
    v10 = *((float *)v19 + 1);
    v11 = *((float *)v19 + 2);
    v23 = 1;
  }
  else
  {
    v11 = v27;
    v10 = v26;
    v9 = v25;
  }
  v29 = 0xFFFFFFFF;
  sub_4E8200(v28);
  if ( !v23 )
    return 0;
LABEL_5:
  v12 = (TESChildCELL *)FormHeapAlloc(0x58u);
  v29 = 1;
  if ( v12 )
    v13 = (TESObjectREFR *)TESObjectREFR_constr(v12);
  else
    v13 = 0;
  v29 = 0xFFFFFFFF;
  TESObjectREFR_SetPosition(v13, v9, v10, v11);
  TESObjectREFR_SetBaseForm(v13, (int)TESDataHandler_g_LootBag);
  v21 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetBaseForm(TESDataHandler_g_PlayerRef);
  v22 = sub_4DB890(v21);
  if ( sub_4CC980(a1, v13) )
  {
    sub_4D35D0(a1, a2, a3, v22, v13);
  }
  else
  {
    if ( v13 )
      v13->vtbl->super.Destroy((TESForm *)v13, 1);
    return 0;
  }
  return v13;
}
