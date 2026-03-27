double __userpurge LowProcess_HandleCrime___@<st0>(
        int a1@<ecx>,
        signed int a2@<ebp>,
        double result@<st0>,
        TESObjectREFR *a4)
{
  _DWORD *v4; // edi
  unsigned int v6; // ebx
  Actor *v7; // edi
  BSExtraDataVtbl *v8; // ebp
  int v9; // eax
  int v10; // ebp
  bool IsNPC; // al
  Actor *v12; // ecx
  Actor *v13; // ebp
  BSExtraDataVtbl *Owner; // eax
  void *v15; // eax
  Actor *v16; // eax
  TESForm *ActorBaseForm; // eax
  char v18; // al
  TESForm *v19; // eax
  signed int v20; // eax
  signed int v21; // eax
  int v22; // eax
  int v23; // ebp
  signed int v24; // eax
  signed int v25; // eax
  _DWORD *v26; // eax
  int v27; // eax
  signed int v28; // eax
  signed int v29; // ebp
  TESForm *v30; // eax
  char v31; // al
  signed int v32; // eax
  int v33; // eax
  BSExtraDataVtbl *v34; // ebp
  unsigned int *v35; // edi
  unsigned int *v36; // eax
  char v37; // al
  int v38; // esi
  float v39; // [esp+Ch] [ebp-3Ch]
  unsigned __int8 *v40; // [esp+10h] [ebp-38h]
  int a6; // [esp+14h] [ebp-34h]
  int v42; // [esp+20h] [ebp-28h]
  signed int v43; // [esp+20h] [ebp-28h]
  signed int v45; // [esp+24h] [ebp-24h]
  int v46; // [esp+34h] [ebp-14h]
  unsigned int *v47; // [esp+38h] [ebp-10h]
  void *v48; // [esp+3Ch] [ebp-Ch] BYREF
  _DWORD *v49; // [esp+40h] [ebp-8h]
  int v50; // [esp+44h] [ebp-4h]
  char v51; // [esp+4Ch] [ebp+4h]

  v4 = (_DWORD *)(a1 + 0x54);
  v50 = a1;
  v49 = (_DWORD *)(a1 + 0x54);
  v47 = (unsigned int *)(a1 + 0x54);
  if ( a1 != 0xFFFFFFAC )
  {
    do
    {
      v6 = *v47;
      if ( !*v47 )
        break;
      v7 = *(Actor **)v6;
      v48 = *(void **)(v6 + 4);
      v51 = 1;
      if ( !TESObjectREFR_GetOwner((TESObjectREFR *)v7)
        || (v8 = (BSExtraDataVtbl *)a4->vtbl->GetBaseForm(a4), TESObjectREFR_GetOwner((TESObjectREFR *)v7) == v8) )
      {
        if ( !v7->vtbl->super.super.IsActor((TESObjectREFR *)v7) )
          goto LABEL_18;
      }
      v46 = 0xFFFFFFFF;
      sub_470520(v48);
      v10 = v9;
      if ( !v7->vtbl->super.super.IsDead((TESObjectREFR *)v7, 0) && sub_5E4420((Actor *)a4) >= v10 )
      {
        IsNPC = Actor_IsNPC(v7);
        v12 = v7;
        if ( IsNPC )
        {
          v13 = v7;
        }
        else
        {
          Owner = TESObjectREFR_GetOwner((TESObjectREFR *)v7);
          v15 = OblivionDynamicCast(
                  Owner,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                  &TESNPC `RTTI Type Descriptor',
                  0);
          if ( !v15 )
            goto LABEL_20;
          sub_675220(v15);
          v13 = v16;
          if ( !v16 )
            goto LABEL_20;
          v12 = v16;
        }
        ActorBaseForm = Actor_GetActorBaseForm(v12, 0);
        TESActorBaseData_AllFactionsAreEvil(&ActorBaseForm[1].member.refID);
        if ( !v18 )
        {
          if ( v13 )
          {
            v42 = (int)v48;
            v19 = Actor_GetActorBaseForm(v13, 0);
            if ( TESAIForm_OffersServiceForItem(&v19[4].member.flags, v42) )
            {
              if ( !((unsigned __int8 (__thiscall *)(TESObjectREFR *, int))a4->vtbl[1].GetSleepState)(a4, 1) )
              {
                *(_DWORD *)(v6 + 0x1C) = 2;
LABEL_18:
                TesObjectREF_GetDistance(a4, (TESObjectREFR *)v7, 0);
                *(_DWORD *)(v6 + 0x14) = Double_To_SInt32(result);
LABEL_41:
                Actor::SetCompressedFlag(*(Actor **)v6, 1);
                v35 = (unsigned int *)(v50 + 0x3C);
                if ( *(_DWORD *)(v50 + 0x40) )
                {
                  do
                    v35 = (unsigned int *)v35[1];
                  while ( v35[1] );
                }
                if ( *v35 )
                {
                  v36 = (unsigned int *)FormHeapAlloc(8u);
                  if ( v36 )
                  {
                    *v36 = v6;
                    v36[1] = 0;
                    v35[1] = (unsigned int)v36;
                  }
                  else
                  {
                    v35[1] = 0;
                  }
                }
                else
                {
                  *v35 = v6;
                }
                goto LABEL_55;
              }
              v51 = 0;
            }
          }
        }
      }
LABEL_20:
      if ( ((unsigned __int8 (__usercall *)@<al>(Actor *@<ecx>, signed int, double@<st0>))v7->vtbl->super.super.IsActor)(
             v7,
             a2,
             result) )
      {
        a2 = 0;
        if ( ((unsigned __int8 (__thiscall *)(Actor *))v7->vtbl->super.super.IsDead)(v7) || !Actor_IsNPC(v7) )
          goto LABEL_29;
        v24 = ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, int, _DWORD, double@<st0>))a4->vtbl[1].Unk_37)(
                a4,
                0x24,
                0,
                result);
        Actor_GetLuckModifiedBaseAV((int)a4, 0x1F, v24);
        v25 = Double_To_SInt32(result);
        Calc_AIAquireForPickpocketing_(v25, v45);
        v49 = v26;
        *(float *)&a6 = TesObjectREF_GetDistance(a4, (TESObjectREFR *)v7, 0);
        v39 = COERCE_FLOAT(((int (__thiscall *)(TESObjectREFR *))a4->vtbl[1].Unk_37)(a4));
        v27 = ((int (__thiscall *)(TESObjectREFR *))a4->vtbl[1].super.Unk_1F)(a4);
        shouldActorFight(v27, (int)v7, 0, v39, 0x21, a6, 0, 0);
        v29 = v28;
        ((void (__thiscall *)(TESObjectREFR *, int, _DWORD, int))a4->vtbl[1].Unk_37)(a4, 0x24, 0, 0x64);
        v30 = Actor_GetActorBaseForm(v7, 0);
        TESActorBaseData_AllFactionsAreEvil(&v30[1].member.refID);
        if ( v31 )
          v29 = 0x64;
        a2 = 0x24;
        v32 = ((int (__thiscall *)(TESObjectREFR *))a4->vtbl[1].Unk_37)(a4);
        result = sub_546640(v29, v32);
        v23 = (int)v48;
        v46 = v33;
      }
      else
      {
        a2 = 0x24;
        v20 = ((int (__thiscall *)(TESObjectREFR *))a4->vtbl[1].Unk_37)(a4);
        Actor_GetLuckModifiedBaseAV((int)a4, 0x1F, v20);
        v21 = Double_To_SInt32(result);
        result = Calc_AIAquireForStealing_(v21, v43);
        v23 = v22;
      }
      if ( v23 > 0 || v46 > 0 )
      {
        if ( v7->vtbl->super.super.IsActor((TESObjectREFR *)v7) )
        {
          v37 = ((int (__thiscall *)(TESObjectREFR *, int))a4->vtbl[1].GetSleepState)(a4, 1);
          if ( v46 <= v23 )
          {
            if ( v37 )
              goto LABEL_39;
            *(_DWORD *)(v6 + 0x1C) = 4;
          }
          else
          {
            if ( v37 )
              goto LABEL_39;
            *(_DWORD *)(v6 + 0x1C) = 5;
          }
        }
        else if ( *(_DWORD *)(v6 + 0x1C) == 1 )
        {
          *(_DWORD *)(v6 + 0x1C) = 4;
          v40 = (unsigned __int8 *)TESDataHandler_g_Lockpick;
          v48 = 0;
          if ( !sub_5E4A00((int)a4, v40, 0, 1, 0, (signed int *)&v48)
            && !sub_5E4A00((int)a4, (unsigned __int8 *)TESDataHandler_g_SkeletonKey, 0, 1, 0, (signed int *)&v48)
            && sub_4D7740((TESObjectREFR *)v7) )
          {
LABEL_39:
            v51 = 0;
          }
        }
        else
        {
          *(_DWORD *)(v6 + 0x1C) = 3;
        }
        *(_DWORD *)(v6 + 8) = v23;
        *(_DWORD *)(v6 + 0xC) = v46;
        if ( v51 )
          goto LABEL_41;
        goto LABEL_54;
      }
LABEL_29:
      if ( !Actor_IsCreature((Actor *)a4) && v7->vtbl->super.super.IsActor((TESObjectREFR *)v7) && !Actor_IsNPC(v7) )
      {
        v34 = (BSExtraDataVtbl *)a4->vtbl->GetBaseForm(a4);
        if ( TESObjectREFR_GetOwner((TESObjectREFR *)v7) != v34 )
        {
          *(_DWORD *)(v6 + 0x1C) = 5;
          goto LABEL_41;
        }
      }
LABEL_54:
      FormHeapFree(v6);
LABEL_55:
      v4 = v49;
      v47 = (unsigned int *)v47[1];
    }
    while ( v47 );
  }
  if ( v4[1] )
  {
    do
    {
      v38 = *(_DWORD *)(v4[1] + 4);
      FormHeapFree(v4[1]);
      v4[1] = v38;
    }
    while ( v38 );
  }
  *v4 = 0;
  return result;
}
