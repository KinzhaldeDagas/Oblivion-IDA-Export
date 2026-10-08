// RadiantAI: MiddleProcess crime/acquire response candidate. Calls service filtering, acquire formulas, and shouldActorFight.
void __userpurge MiddleProcess_HandleCrime2___(
        _DWORD *a1@<ecx>,
        signed int a2@<ebp>,
        double a3@<st0>,
        TESObjectREFR *a4)
{
  _DWORD *v4; // edi
  unsigned int *v5; // eax
  unsigned int v7; // ebp
  Actor *v8; // edi
  void *v9; // ebx
  TESObjectREFR *v10; // ecx
  int v11; // eax
  int v12; // ebx
  Actor *v13; // eax
  BSExtraDataVtbl *Owner; // eax
  void *v15; // eax
  TESForm *ActorBaseForm; // eax
  int v17; // eax
  signed int v18; // eax
  signed int v19; // eax
  int v20; // ebx
  int v21; // eax
  signed int v22; // eax
  signed int v23; // eax
  int v24; // eax
  int v25; // eax
  signed int v26; // eax
  signed int v27; // ebx
  signed int v28; // eax
  int v29; // eax
  BSExtraDataVtbl *v30; // ebx
  unsigned int *v31; // edi
  unsigned int *v32; // eax
  char v33; // al
  _DWORD *v34; // esi
  int v35; // esi
  float v36; // [esp+8h] [ebp-44h]
  int a6; // [esp+10h] [ebp-3Ch]
  unsigned __int8 *a6a; // [esp+10h] [ebp-3Ch]
  int v39; // [esp+20h] [ebp-2Ch]
  signed int v40; // [esp+20h] [ebp-2Ch]
  signed int v41; // [esp+20h] [ebp-2Ch]
  int v43; // [esp+34h] [ebp-18h]
  unsigned int *v44; // [esp+38h] [ebp-14h]
  int v45; // [esp+3Ch] [ebp-10h] BYREF
  _DWORD *v46; // [esp+40h] [ebp-Ch]
  _DWORD *v47; // [esp+44h] [ebp-8h]
  unsigned int v48; // [esp+48h] [ebp-4h]
  char v49; // [esp+50h] [ebp+4h]

  v4 = a1 + 0x15; /*0x653525*/
  v5 = a1 + 0x15; /*0x653528*/
  v47 = a1; /*0x65352c*/
  v46 = a1 + 0x15; /*0x653530*/
  v44 = a1 + 0x15; /*0x653534*/
  if ( a1 != (_DWORD *)0xFFFFFFAC ) /*0x653538*/
  {
    while ( 1 ) /*0x65354a*/
    {
      v7 = *v5; /*0x65354a*/
      if ( !*v5 ) /*0x65354e*/
        break; /*0x65354e*/
      v8 = *(Actor **)v7; /*0x653554*/
      v9 = *(void **)(v7 + 4); /*0x653557*/
      v10 = *(TESObjectREFR **)v7; /*0x65355a*/
      v45 = (int)v9; /*0x65355c*/
      v49 = 1; /*0x653560*/
      if ( !TESObjectREFR_GetOwner(v10) && !v8->vtbl->super.super.IsActor((TESObjectREFR *)v8) ) /*0x653578*/
        goto LABEL_7; /*0x65357c*/
      v48 = 0xFFFFFFFF; /*0x653596*/
      TESForm_GetValue(v9); /*0x65359e*/
      v12 = v11; /*0x6535a3*/
      if ( !v8->vtbl->super.super.IsDead((TESObjectREFR *)v8, 0) && sub_5E4420((Actor *)a4) >= v12 ) /*0x6535c7*/
      {
        if ( Actor_IsNPC(v8) ) /*0x6535cf*/
        {
          v13 = v8; /*0x6535d8*/
        }
        else
        {
          Owner = TESObjectREFR_GetOwner((TESObjectREFR *)v8); /*0x6535ec*/
          v15 = OblivionDynamicCast( /*0x6535f2*/
                  Owner,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                  &TESNPC `RTTI Type Descriptor',
                  0);
          if ( !v15 ) /*0x6535fc*/
            goto LABEL_20; /*0x6535fc*/
          v13 = (Actor *)sub_675220((int)&qword_B3BB2C[0x75], (int)v15); /*0x653604*/
        }
        if ( v13 ) /*0x65360b*/
        {
          v39 = v45; /*0x653611*/
          ActorBaseForm = Actor_GetActorBaseForm(v13, 0); /*0x653616*/
          if ( TESAIForm_OffersServiceForItem(&ActorBaseForm[4].member.flags, v39) ) /*0x653620*/
          {
            TESForm_GetValue(*(void **)(v7 + 4)); /*0x65362d*/
            if ( sub_5E4420((Actor *)a4) >= v17 ) /*0x653640*/
            {
              if ( !((unsigned __int8 (__thiscall *)(TESObjectREFR *, int))a4->vtbl[1].GetSleepState)(a4, 1) ) /*0x65364e*/
              {
                *(_DWORD *)(v7 + 0x1C) = 2; /*0x653654*/
LABEL_7:
                TesObjectREF_GetDistance(a4, (TESObjectREFR *)v8, 0); /*0x65357e*/
                *(_DWORD *)(v7 + 0x14) = Double_To_SInt32(a3); /*0x65358d*/
                goto LABEL_39; /*0x653590*/
              }
              v49 = 0; /*0x653660*/
            }
          }
        }
      }
LABEL_20:
      if ( ((unsigned __int8 (__usercall *)@<al>(Actor *@<ecx>, signed int, double@<st0>))v8->vtbl->super.super.IsActor)( /*0x65366f*/
             v8,
             a2,
             a3) )
      {
        a2 = 0; /*0x6536ad*/
        if ( ((unsigned __int8 (__thiscall *)(Actor *))v8->vtbl->super.super.IsDead)(v8) || !Actor_IsNPC(v8) ) /*0x6536bd*/
          goto LABEL_27; /*0x6536c4*/
        v22 = ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, int, double@<st0>))a4->vtbl[1].Unk_37)(a4, 0x24, a3); /*0x6536d6*/
        Actor_GetLuckModifiedBaseAV((int)a4, 0x1F, v22); /*0x6536dd*/
        v23 = Double_To_SInt32(a3); /*0x6536e2*/
        Calc_AIAquireForPickpocketing_(v23, v41); /*0x6536e8*/
        v43 = v24; /*0x6536fd*/
        *(float *)&a6 = TesObjectREF_GetDistance(a4, (TESObjectREFR *)v8, 0); /*0x65370f*/
        v36 = COERCE_FLOAT(((int (__thiscall *)(TESObjectREFR *))a4->vtbl[1].Unk_37)(a4)); /*0x653718*/
        v25 = ((int (__thiscall *)(TESObjectREFR *))a4->vtbl[1].super.Unk_1F)(a4); /*0x653726*/
        shouldActorFight(v25, (int)v8, 0, v36, 0x21, a6, 0, 0); /*0x653729*/
        v27 = v26; /*0x65372e*/
        v28 = ((int (__thiscall *)(TESObjectREFR *, int, _DWORD, int))a4->vtbl[1].Unk_37)(a4, 0x24, 0, 0x64); /*0x65373f*/
        a3 = sub_546640(v27, v28); /*0x653743*/
        v20 = v29; /*0x653748*/
      }
      else
      {
        a2 = 0x24; /*0x65367d*/
        v18 = ((int (__thiscall *)(TESObjectREFR *))a4->vtbl[1].Unk_37)(a4); /*0x653681*/
        Actor_GetLuckModifiedBaseAV((int)a4, 0x1F, v18); /*0x653688*/
        v19 = Double_To_SInt32(a3); /*0x65368d*/
        a3 = Calc_AIAquireForStealing_(v19, v40); /*0x653693*/
        v20 = v48; /*0x653698*/
        v43 = v21; /*0x65369c*/
      }
      if ( v43 > 0 || v20 > 0 ) /*0x653756*/
      {
        if ( v8->vtbl->super.super.IsActor((TESObjectREFR *)v8) ) /*0x6537bd*/
        {
          v33 = ((int (__thiscall *)(TESObjectREFR *, int))a4->vtbl[1].GetSleepState)(a4, 1); /*0x653894*/
          if ( v20 <= v43 ) /*0x65389a*/
          {
            if ( v33 ) /*0x6538ab*/
              goto LABEL_37; /*0x6538ab*/
            *(_DWORD *)(v7 + 0x1C) = 4; /*0x6538b1*/
          }
          else
          {
            if ( v33 ) /*0x65389e*/
              goto LABEL_37; /*0x65389e*/
            *(_DWORD *)(v7 + 0x1C) = 5; /*0x6538a0*/
          }
        }
        else if ( *(_DWORD *)(v7 + 0x1C) == 1 ) /*0x6537cb*/
        {
          *(_DWORD *)(v7 + 0x1C) = 4; /*0x6537da*/
          a6a = (unsigned __int8 *)MEMORY[0xB35EC8]; /*0x6537e9*/
          v45 = 0; /*0x6537ec*/
          if ( !sub_5E4A00((int)a4, a6a, 0, 1, 0, &v45) /*0x65381b*/
            && !sub_5E4A00((int)a4, (unsigned __int8 *)MEMORY[0xB35ECC], 0, 1, 0, &v45)
            && TESObjectREFR_GetEffectiveDoorLock((TESObjectREFR *)v8) )
          {
LABEL_37:
            v49 = 0; /*0x653824*/
          }
        }
        else
        {
          *(_DWORD *)(v7 + 0x1C) = 3; /*0x65387f*/
        }
        *(_DWORD *)(v7 + 8) = v43; /*0x653832*/
        *(_DWORD *)(v7 + 0xC) = v20; /*0x653835*/
        if ( !v49 ) /*0x653838*/
          goto LABEL_52; /*0x653838*/
        goto LABEL_39; /*0x653838*/
      }
LABEL_27:
      if ( Actor_IsCreature((Actor *)a4) /*0x6537a1*/
        || !v8->vtbl->super.super.IsActor((TESObjectREFR *)v8)
        || Actor_IsNPC(v8)
        || (v30 = (BSExtraDataVtbl *)a4->vtbl->GetBaseForm(a4), TESObjectREFR_GetOwner((TESObjectREFR *)v8) == v30) )
      {
LABEL_52:
        FormHeapFree(v7); /*0x6538c8*/
        goto LABEL_53; /*0x6538c9*/
      }
      *(_DWORD *)(v7 + 0x1C) = 5; /*0x6537a7*/
LABEL_39:
      Actor::SetCompressedFlag(*(Actor **)v7, 1); /*0x65383e*/
      v31 = v47 + 0xF; /*0x65384c*/
      if ( v47[0x10] ) /*0x65384f*/
      {
        do /*0x653858*/
          v31 = (unsigned int *)v31[1]; /*0x653855*/
        while ( v31[1] ); /*0x653858*/
      }
      if ( *v31 ) /*0x65385e*/
      {
        v32 = (unsigned int *)FormHeapAlloc(8u); /*0x653865*/
        if ( v32 ) /*0x65386f*/
        {
          *v32 = v7; /*0x653871*/
          v32[1] = 0; /*0x653873*/
          v31[1] = (unsigned int)v32; /*0x65387a*/
        }
        else
        {
          v31[1] = 0; /*0x6538bf*/
        }
      }
      else
      {
        *v31 = v7; /*0x6538c4*/
      }
LABEL_53:
      v4 = v46; /*0x6538d1*/
      v44 = (unsigned int *)v44[1]; /*0x6538de*/
      if ( !v44 ) /*0x6538e2*/
        break; /*0x6538e2*/
      v5 = v44; /*0x653546*/
    }
  }
  v34 = v47; /*0x6538ea*/
  sub_64E240(v47); /*0x6538f0*/
  sub_64E2B0(v34); /*0x6538f7*/
  if ( v4[1] ) /*0x6538fc*/
  {
    do /*0x653916*/
    {
      v35 = *(_DWORD *)(v4[1] + 4); /*0x653905*/
      FormHeapFree(v4[1]); /*0x653909*/
      v4[1] = v35; /*0x653913*/
    }
    while ( v35 ); /*0x653916*/
  }
  *v4 = 0; /*0x653918*/
}
