// RadiantAI: HighProcess acquire/crime candidate scorer. Consumes candidate list at process+0x54 and promotes accepted entries to process+0x3C; calls Calc_AIAquireForStealing/Pickpocketing and shouldActorFight.
void __userpurge sub_635900(_DWORD *a1@<ecx>, signed int a2@<ebp>, double a3@<st0>, TESObjectREFR *a4)
{
  _DWORD *v4; // ebx
  _DWORD *v5; // edi
  unsigned int v7; // ebp
  Actor *v8; // edi
  Actor *v9; // ebx
  BSExtraDataVtbl *Owner; // eax
  TESForm *ActorBaseForm; // eax
  int v12; // eax
  signed int v13; // eax
  signed int v14; // eax
  int v15; // eax
  int v16; // ebx
  signed int v17; // eax
  signed int v18; // eax
  _DWORD *v19; // eax
  int v20; // eax
  signed int v21; // eax
  signed int v22; // ebx
  TESForm *v23; // eax
  char v24; // al
  signed int v25; // eax
  int v26; // eax
  BSExtraDataVtbl *v27; // ebx
  unsigned int *v28; // edi
  unsigned int *v29; // eax
  char v30; // al
  int v31; // esi
  float v32; // [esp+Ch] [ebp-3Ch]
  unsigned __int8 *v33; // [esp+10h] [ebp-38h]
  int a6; // [esp+14h] [ebp-34h]
  int v35; // [esp+20h] [ebp-28h]
  signed int v36; // [esp+20h] [ebp-28h]
  signed int v38; // [esp+24h] [ebp-24h]
  int v39; // [esp+34h] [ebp-14h]
  unsigned int *v40; // [esp+38h] [ebp-10h]
  signed int v41; // [esp+3Ch] [ebp-Ch] BYREF
  _DWORD *v42; // [esp+40h] [ebp-8h]
  _DWORD *v43; // [esp+44h] [ebp-4h]
  char v44; // [esp+4Ch] [ebp+4h]

  v4 = a1; /*0x635905*/
  v5 = a1 + 0x15; /*0x635908*/
  v42 = a1; /*0x63590f*/
  v43 = a1 + 0x15; /*0x635913*/
  v40 = a1 + 0x15; /*0x635917*/
  if ( a1 != (_DWORD *)0xFFFFFFAC ) /*0x63591b*/
  {
    do /*0x63592a*/
    {
      v7 = *v40; /*0x63592a*/
      if ( !*v40 ) /*0x63592e*/
        break; /*0x63592e*/
      v8 = *(Actor **)v7; /*0x635937*/
      v41 = *(_DWORD *)(v7 + 4); /*0x63593a*/
      v44 = 1; /*0x635940*/
      if ( (!TESObjectREFR_GetOwner((TESObjectREFR *)v8) || TESObjectREFR_IsOwnedBy((TESObjectREFR *)v8, a4, 1)) /*0x63596a*/
        && !v8->vtbl->super.super.IsActor((TESObjectREFR *)v8) )
      {
        goto LABEL_18; /*0x63596a*/
      }
      v39 = 0xFFFFFFFF; /*0x635972*/
      if ( !Actor_IsNPC(v8) || v8->vtbl->super.super.IsDead((TESObjectREFR *)v8, 0) ) /*0x63598f*/
      {
        Owner = TESObjectREFR_GetOwner((TESObjectREFR *)v8); /*0x63599b*/
        if ( !Owner || LOBYTE(Owner->CompareTo) != 0x23 ) /*0x6359ac*/
          goto LABEL_22; /*0x6359ac*/
        v9 = (Actor *)sub_675220((int)&qword_B3BB2C[0x75], (int)Owner); /*0x6359bd*/
      }
      else
      {
        v9 = v8; /*0x635995*/
      }
      if ( v9 && !v9->vtbl->super.super.IsDead((TESObjectREFR *)v9, 0) ) /*0x6359d3*/
      {
        v35 = v41; /*0x6359e1*/
        ActorBaseForm = Actor_GetActorBaseForm(v9, 0); /*0x6359e6*/
        if ( TESAIForm_OffersServiceForItem(&ActorBaseForm[4].member.flags, v35) ) /*0x6359f0*/
        {
          TESForm_GetValue(*(void **)(v7 + 4)); /*0x6359fd*/
          if ( sub_5E4420((Actor *)a4) >= v12 ) /*0x635a10*/
          {
            if ( !((unsigned __int8 (__thiscall *)(TESObjectREFR *, int))a4->vtbl[1].GetSleepState)(a4, 1) ) /*0x635a1e*/
            {
              *(_DWORD *)(v7 + 0x1C) = 2;       // RadiantAI: sub_635900 sets acquire response 2 when owner/service provider offers item and actor can pay; project label ServicePurchase. /*0x635a24*/
LABEL_18:
              TesObjectREF_GetDistance(a4, (TESObjectREFR *)v8, 0); /*0x635a2b*/
              *(_DWORD *)(v7 + 0x14) = Double_To_SInt32(a3); /*0x635a3a*/
LABEL_43:
              Actor::SetCompressedFlag(*(Actor **)v7, 1); /*0x635c61*/
              v4 = v42; /*0x635c6b*/
              v28 = v42 + 0xF; /*0x635c73*/
              if ( v42[0x10] ) /*0x635c6f*/
              {
                do /*0x635c83*/
                  v28 = (unsigned int *)v28[1]; /*0x635c80*/
                while ( v28[1] ); /*0x635c83*/
              }
              if ( *v28 ) /*0x635c89*/
              {
                v29 = (unsigned int *)FormHeapAlloc(8u); /*0x635c90*/
                if ( v29 ) /*0x635c9a*/
                {
                  *v29 = v7; /*0x635c9c*/
                  v29[1] = 0; /*0x635c9e*/
                  v28[1] = (unsigned int)v29; /*0x635ca5*/
                }
                else
                {
                  v28[1] = 0; /*0x635cf1*/
                }
              }
              else
              {
                *v28 = v7; /*0x635cf6*/
              }
              goto LABEL_57; /*0x635ca8*/
            }
            v44 = 0; /*0x635a42*/
          }
        }
        goto LABEL_20; /*0x635a42*/
      }
LABEL_22:
      if ( Actor_IsNPC(v8) ) /*0x635a83*/
      {
        *(_DWORD *)(v7 + 0x1C) = 0; /*0x635a8c*/
        goto LABEL_43; /*0x635a93*/
      }
LABEL_20:
      if ( ((unsigned __int8 (__usercall *)@<al>(Actor *@<ecx>, signed int, double@<st0>))v8->vtbl->super.super.IsActor)( /*0x635a51*/
             v8,
             a2,
             a3) )
      {
        a2 = 0; /*0x635aa0*/
        if ( ((unsigned __int8 (__thiscall *)(Actor *))v8->vtbl->super.super.IsDead)(v8) || !Actor_IsNPC(v8) ) /*0x635ab0*/
          goto LABEL_31; /*0x635ab7*/
        v17 = ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, int, _DWORD, double@<st0>))a4->vtbl[1].Unk_37)( /*0x635ac9*/
                a4,
                0x24,
                0,
                a3);                            // RadiantAI 2026-07-12: pickpocket branch uses the same Responsibility AV 0x24 plus luck-modified Sneak AV 0x1F input pair.
        Actor_GetLuckModifiedBaseAV((int)a4, 0x1F, v17); /*0x635ad0*/
        v18 = Double_To_SInt32(a3); /*0x635ad5*/
        Calc_AIAquireForPickpocketing_(v18, v38);// RadiantAI: actor/NPC candidate path uses Calc_AIAquireForPickpocketing before fight/alarm scoring. /*0x635adb*/
        v42 = v19; /*0x635af0*/
        *(float *)&a6 = TesObjectREF_GetDistance(a4, (TESObjectREFR *)v8, 0); /*0x635b02*/
        v32 = COERCE_FLOAT(((int (__thiscall *)(TESObjectREFR *))a4->vtbl[1].Unk_37)(a4)); /*0x635b0b*/
        v20 = ((int (__thiscall *)(TESObjectREFR *))a4->vtbl[1].super.Unk_1F)(a4); /*0x635b19*/
        shouldActorFight(v20, (int)v8, 0, v32, 0x21, a6, 0, 0); /*0x635b1c*/
        v22 = v21; /*0x635b21*/
        ((void (__thiscall *)(TESObjectREFR *, int, _DWORD, int))a4->vtbl[1].Unk_37)(a4, 0x24, 0, 0x64); /*0x635b32*/
        v23 = Actor_GetActorBaseForm(v8, 0); /*0x635b38*/
        TESActorBaseData_AllFactionsAreEvil(&v23[1].member.refID); /*0x635b42*/
        if ( v24 ) /*0x635b49*/
          v22 = 0x64; /*0x635b4b*/
        a2 = 0x24; /*0x635b58*/
        v25 = ((int (__thiscall *)(TESObjectREFR *))a4->vtbl[1].Unk_37)(a4);// RadiantAI 2026-07-12: kill branch passes raw Responsibility AV 0x24 as second arg to acquire kill formula. /*0x635b5c*/
        a3 = sub_546640(v22, v25); /*0x635b60*/
        v16 = v41; /*0x635b65*/
        v39 = v26; /*0x635b69*/
      }
      else
      {
        a2 = 0x24; /*0x635a5f*/
        v13 = ((int (__thiscall *)(TESObjectREFR *))a4->vtbl[1].Unk_37)(a4);// RadiantAI 2026-07-12: vtable +0x284(0x24) obtains acquiring actor Responsibility. It remains on stack while Actor_GetLuckModifiedBaseAV(0x1F Sneak) returns the first steal-score argument. /*0x635a63*/
        Actor_GetLuckModifiedBaseAV((int)a4, 0x1F, v13); /*0x635a6a*/
        v14 = Double_To_SInt32(a3); /*0x635a6f*/
        a3 = Calc_AIAquireForStealing_(v14, v36);// RadiantAI: owned non-actor candidate path uses Calc_AIAquireForStealing; called from sub_62DA10 via vtable +0x568 after food scan. /*0x635a75*/
        v16 = v15; /*0x635a7a*/
      }
      if ( v16 > 0 || v39 > 0 ) /*0x635b79*/
      {
        if ( v8->vtbl->super.super.IsActor((TESObjectREFR *)v8) ) /*0x635be0*/
        {
          v30 = ((int (__thiscall *)(TESObjectREFR *, int))a4->vtbl[1].GetSleepState)(a4, 1); /*0x635cbf*/
          if ( v39 <= v16 ) /*0x635cc5*/
          {
            if ( v30 ) /*0x635cdd*/
              goto LABEL_41; /*0x635cdd*/
            *(_DWORD *)(v7 + 0x1C) = 4;         // RadiantAI: sub_635900 sets acquire response 4 for actor/pickpocket-style candidate when non-kill score wins; project label StealInventoryOrPickpocket. /*0x635ce3*/
          }
          else
          {
            if ( v30 ) /*0x635cc9*/
              goto LABEL_41; /*0x635cc9*/
            *(_DWORD *)(v7 + 0x1C) = 5;         // RadiantAI: sub_635900 sets acquire response 5 when fight/kill score wins; project label KillForItem. /*0x635ccf*/
          }
        }
        else if ( *(_DWORD *)(v7 + 0x1C) == 1 ) /*0x635bee*/
        {
          *(_DWORD *)(v7 + 0x1C) = 4;           // RadiantAI: sub_635900 sets acquire response 4 for owned container/inventory candidate after positive steal score; lockpick/Skeleton Key gate can reject locked refs. /*0x635bfd*/
          v33 = (unsigned __int8 *)MEMORY[0xB35EC8]; /*0x635c0c*/
          v41 = 0; /*0x635c0f*/
          if ( !sub_5E4A00((int)a4, v33, 0, 1, 0, &v41) /*0x635c3e*/
            && !sub_5E4A00((int)a4, (unsigned __int8 *)MEMORY[0xB35ECC], 0, 1, 0, &v41)
            && TESObjectREFR_GetEffectiveDoorLock((TESObjectREFR *)v8) )
          {
LABEL_41:
            v44 = 0; /*0x635c47*/
          }
        }
        else
        {
          *(_DWORD *)(v7 + 0x1C) = 3;           // RadiantAI: sub_635900 sets acquire response 3 for owned loose/non-container candidate after positive stealing score; project label StealLoose. /*0x635caa*/
        }
        *(_DWORD *)(v7 + 8) = v16; /*0x635c55*/
        *(_DWORD *)(v7 + 0xC) = v39; /*0x635c58*/
        if ( v44 ) /*0x635c5b*/
          goto LABEL_43; /*0x635c5b*/
        goto LABEL_56; /*0x635c5b*/
      }
LABEL_31:
      if ( !Actor_IsCreature((Actor *)a4) && v8->vtbl->super.super.IsActor((TESObjectREFR *)v8) && !Actor_IsNPC(v8) ) /*0x635ba0*/
      {
        v27 = (BSExtraDataVtbl *)a4->vtbl->GetBaseForm(a4); /*0x635bbb*/
        if ( TESObjectREFR_GetOwner((TESObjectREFR *)v8) != v27 ) /*0x635bc4*/
        {
          *(_DWORD *)(v7 + 0x1C) = 5;           // RadiantAI: sub_635900 fallback sets acquire response 5 for non-creature actor targeting creature-owned actor/object case; project label KillForItem. /*0x635bca*/
          goto LABEL_43; /*0x635bd1*/
        }
      }
LABEL_56:
      FormHeapFree(v7); /*0x635cfa*/
      v4 = v42; /*0x635d00*/
LABEL_57:
      v5 = v43; /*0x635d07*/
      v40 = (unsigned int *)v40[1]; /*0x635d14*/
    }
    while ( v40 ); /*0x63592a*/
  }
  sub_64E240(v4); /*0x635d1f*/
  sub_64E2B0(v4); /*0x635d28*/
  if ( v5[1] ) /*0x635d2d*/
  {
    do /*0x635d47*/
    {
      v31 = *(_DWORD *)(v5[1] + 4); /*0x635d36*/
      FormHeapFree(v5[1]); /*0x635d3a*/
      v5[1] = v31; /*0x635d44*/
    }
    while ( v31 ); /*0x635d47*/
  }
  *v5 = 0; /*0x635d49*/
}
