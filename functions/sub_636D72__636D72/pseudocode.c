// positive sp value has been detected, the output may be wrong!
void __userpurge sub_636D72(
        char a1@<cl>,
        TESPackage *a2@<ebx>,
        TESObjectREFR *a3@<edi>,
        int a4@<esi>,
        double a5@<st2>,
        double a6@<st1>,
        double GameDay@<st0>,
        int a8,
        int a9,
        int a10,
        int a11)
{
  char v11; // al
  int v12; // eax
  TESObjectCELL *ParentCell; // eax
  int v14; // eax
  TESObjectCELL *v15; // eax
  BSExtraDataVtbl *v16; // ebx
  BSExtraDataVtbl *v17; // ebp
  int v18; // eax
  int v19; // esi
  int v20; // esi
  int v21; // eax
  Sky *v22; // eax
  NiNode *nodeMoonsRoot; // esi
  NiNode *Health; // eax
  float *v25; // [esp-3Ch] [ebp-50h]
  float *v26; // [esp-3Ch] [ebp-50h]
  ExtraDataList *v27; // [esp-3Ch] [ebp-50h]
  float v28; // [esp-38h] [ebp-4Ch]
  float v29; // [esp-38h] [ebp-4Ch]
  float *v30; // [esp-34h] [ebp-48h]
  float *v31; // [esp-34h] [ebp-48h]
  float v32; // [esp-30h] [ebp-44h]
  float v33; // [esp-30h] [ebp-44h]
  char v34; // [esp+1Ch] [ebp+8h]
  char v35; // [esp+20h] [ebp+Ch]

  if ( (a1 & 1) != 0 && !sub_565DF0(a2) && !a2->members.target )
  {
    GameDay = 0.0;
    *(float *)(a4 + 0x1AC) = 0.0;
  }
  if ( sub_565DF0(a2) && (a2 == (TESPackage *)0xFFFFFFD4 || !a2->members.time.duration) && a2->members.type == 6 )
  {
    GameDay = TimeGlobals_GetGameDay(&TimeGlobals);
    sub_41FFC0(&a3->member.baseExtraList, (int)a2, v11);
  }
  if ( !*(_BYTE *)(a4 + 0x84) )
  {
    if ( sub_565DD0(a2) )
    {
      v32 = flt_A5B6C0;
      v12 = (int)a3->vtbl->GetPos(a3);
      GameDay = flt_A5B6C0;
      v30 = (float *)v12;
      v28 = flt_A5B6C0;
      v25 = a3->vtbl->GetPos(a3);
      ParentCell = TESObjectREFR_GetParentCell(a3);
      sub_446B90(ParentCell, v25, v28, v30, v32, (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_645A30, (int)a3);
    }
    *(_BYTE *)(a4 + 0x84) = 1;
  }
  if ( sub_565DE0(a2) )
  {
    v33 = flt_A5B6C0;
    v14 = (int)a3->vtbl->GetPos(a3);
    GameDay = flt_A5B6C0;
    v31 = (float *)v14;
    v29 = flt_A5B6C0;
    v26 = a3->vtbl->GetPos(a3);
    v15 = TESObjectREFR_GetParentCell(a3);
    sub_446B90(v15, v26, v29, v31, v33, (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_645AF0, (int)a3);
  }
  if ( !*(_BYTE *)(a4 + 0x169)
    && ((a2->members.packageFlags & 0x100000) != 0 || (a2->members.packageFlags & 0x200000) != 0) )
  {
    *(_BYTE *)(a4 + 0x169) = 1;
    if ( (a2->members.packageFlags & 0x100000) != 0 )
    {
      v16 = 0;
      v17 = 0;
      v18 = (unsigned __int8)a3->vtbl->GetBaseForm(a3)->member.type - 0x23;
      if ( v18 )
      {
        if ( v18 == 1 )
          v17 = (BSExtraDataVtbl *)a3->vtbl->GetBaseForm(a3);
      }
      else
      {
        v16 = (BSExtraDataVtbl *)a3->vtbl->GetBaseForm(a3);
      }
      v19 = *(_DWORD *)(a4 + 8);
      v34 = 1;
      v35 = 1;
      if ( v19 )
      {
        v20 = *(_DWORD *)(v19 + 0x1C);
        v34 = (v20 & 0x100000) == 0;
        v35 = (v20 & 0x200000) == 0;
      }
      if ( v16 )
      {
        sub_5227A0(v16, a5, a6, GameDay, a3, v34, v35, 0, 1);
      }
      else if ( v17 )
      {
        sub_51E240(v17, 0, a5, a6, GameDay, a3, v34, v35, 1);
      }
    }
    else
    {
      v21 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a4 + 0xEC))(a4, 1);
      if ( v21 )
        GameDay = Actor_UnequipItem(
                    (PlayerCharacter *)a3,
                    GameDay,
                    a5,
                    a6,
                    *(_DWORD *)(v21 + 8),
                    1,
                    (ExtraDataList *)**(_DWORD **)v21,
                    0,
                    0,
                    0);
      v22 = (Sky *)(*(int (__thiscall **)(int, int))(*(_DWORD *)a4 + 0xF4))(a4, 1);
      if ( v22 )
      {
        nodeMoonsRoot = v22->nodeMoonsRoot;
        v27 = (ExtraDataList *)*v22->vtbl;
        Health = TESHealthForm_GetHealth(v22);
        Actor_UnequipItem((PlayerCharacter *)a3, GameDay, a5, a6, (char)nodeMoonsRoot, (int)Health, v27, 0, 0, 0);
      }
    }
  }
}
