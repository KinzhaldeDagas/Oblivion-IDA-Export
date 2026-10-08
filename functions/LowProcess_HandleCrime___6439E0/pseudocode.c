// RadiantAI: LowProcess crime/acquire response candidate. Calls service filtering, acquire formulas, and shouldActorFight.
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
  ActorVtbl *v16; // eax
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

  v4 = (_DWORD *)(a1 + 0x54); /*0x6439e5*/
  v50 = a1; /*0x6439ec*/
  v49 = (_DWORD *)(a1 + 0x54); /*0x6439f0*/
  v47 = (unsigned int *)(a1 + 0x54); /*0x6439f4*/
  if ( a1 != 0xFFFFFFAC ) /*0x6439f8*/
  {
    do /*0x643a08*/
    {
      v6 = *v47; /*0x643a08*/
      if ( !*v47 ) /*0x643a0c*/
        break; /*0x643a0c*/
      v7 = *(Actor **)v6; /*0x643a15*/
      v48 = *(void **)(v6 + 4); /*0x643a17*/
      v51 = 1; /*0x643a1d*/
      if ( !TESObjectREFR_GetOwner((TESObjectREFR *)v7) /*0x643a42*/
        || (v8 = (BSExtraDataVtbl *)a4->vtbl->GetBaseForm(a4), TESObjectREFR_GetOwner((TESObjectREFR *)v7) == v8) )
      {
        if ( !v7->vtbl->super.super.IsActor((TESObjectREFR *)v7) ) /*0x643a52*/
          goto LABEL_18; /*0x643a52*/
      }
      v46 = 0xFFFFFFFF; /*0x643a5d*/
      TESForm_GetValue(v48); /*0x643a65*/
      v10 = v9; /*0x643a6f*/
      if ( !v7->vtbl->super.super.IsDead((TESObjectREFR *)v7, 0) && sub_5E4420((Actor *)a4) >= v10 ) /*0x643a8e*/
      {
        IsNPC = Actor_IsNPC(v7); /*0x643a96*/
        v12 = v7; /*0x643a9f*/
        if ( IsNPC ) /*0x643aa1*/
        {
          v13 = v7; /*0x643aa3*/
        }
        else
        {
          Owner = TESObjectREFR_GetOwner((TESObjectREFR *)v7); /*0x643ab3*/
          v15 = OblivionDynamicCast( /*0x643ab9*/
                  Owner,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                  &TESNPC `RTTI Type Descriptor',
                  0);
          if ( !v15 ) /*0x643ac3*/
            goto LABEL_20; /*0x643ac3*/
          v16 = sub_675220((int)&qword_B3BB2C[0x75], (int)v15); /*0x643acb*/
          v13 = (Actor *)v16; /*0x643ad0*/
          if ( !v16 ) /*0x643ad4*/
            goto LABEL_20; /*0x643ad4*/
          v12 = (Actor *)v16; /*0x643ad8*/
        }
        ActorBaseForm = Actor_GetActorBaseForm(v12, 0); /*0x643ada*/
        TESActorBaseData_AllFactionsAreEvil(&ActorBaseForm[1].member.refID); /*0x643ae4*/
        if ( !v18 ) /*0x643aeb*/
        {
          if ( v13 ) /*0x643aef*/
          {
            v42 = (int)v48; /*0x643af5*/
            v19 = Actor_GetActorBaseForm(v13, 0); /*0x643afa*/
            if ( TESAIForm_OffersServiceForItem(&v19[4].member.flags, v42) ) /*0x643b04*/
            {
              if ( !((unsigned __int8 (__thiscall *)(TESObjectREFR *, int))a4->vtbl[1].GetSleepState)(a4, 1) ) /*0x643b19*/
              {
                *(_DWORD *)(v6 + 0x1C) = 2; /*0x643b1f*/
LABEL_18:
                TesObjectREF_GetDistance(a4, (TESObjectREFR *)v7, 0); /*0x643b26*/
                *(_DWORD *)(v6 + 0x14) = Double_To_SInt32(result); /*0x643b35*/
LABEL_41:
                Actor::SetCompressedFlag(*(Actor **)v6, 1); /*0x643d46*/
                v35 = (unsigned int *)(v50 + 0x3C); /*0x643d53*/
                if ( *(_DWORD *)(v50 + 0x40) ) /*0x643d56*/
                {
                  do /*0x643d63*/
                    v35 = (unsigned int *)v35[1]; /*0x643d60*/
                  while ( v35[1] ); /*0x643d63*/
                }
                if ( *v35 ) /*0x643d69*/
                {
                  v36 = (unsigned int *)FormHeapAlloc(8u); /*0x643d70*/
                  if ( v36 ) /*0x643d7a*/
                  {
                    *v36 = v6; /*0x643d7c*/
                    v36[1] = 0; /*0x643d7e*/
                    v35[1] = (unsigned int)v36; /*0x643d85*/
                  }
                  else
                  {
                    v35[1] = 0; /*0x643dcd*/
                  }
                }
                else
                {
                  *v35 = v6; /*0x643dd2*/
                }
                goto LABEL_55; /*0x643d88*/
              }
              v51 = 0; /*0x643b3d*/
            }
          }
        }
      }
LABEL_20:
      if ( ((unsigned __int8 (__usercall *)@<al>(Actor *@<ecx>, signed int, double@<st0>))v7->vtbl->super.super.IsActor)( /*0x643b4c*/
             v7,
             a2,
             result) )
      {
        a2 = 0; /*0x643b84*/
        if ( ((unsigned __int8 (__thiscall *)(Actor *))v7->vtbl->super.super.IsDead)(v7) || !Actor_IsNPC(v7) ) /*0x643b94*/
          goto LABEL_29; /*0x643b9b*/
        v24 = ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, int, _DWORD, double@<st0>))a4->vtbl[1].Unk_37)( /*0x643bad*/
                a4,
                0x24,
                0,
                result);
        Actor_GetLuckModifiedBaseAV((int)a4, 0x1F, v24); /*0x643bb4*/
        v25 = Double_To_SInt32(result); /*0x643bb9*/
        Calc_AIAquireForPickpocketing_(v25, v45); /*0x643bbf*/
        v49 = v26; /*0x643bd4*/
        *(float *)&a6 = TesObjectREF_GetDistance(a4, (TESObjectREFR *)v7, 0); /*0x643be6*/
        v39 = COERCE_FLOAT(((int (__thiscall *)(TESObjectREFR *))a4->vtbl[1].Unk_37)(a4)); /*0x643bf1*/
        v27 = ((int (__thiscall *)(TESObjectREFR *))a4->vtbl[1].super.Unk_1F)(a4); /*0x643bfd*/
        shouldActorFight(v27, (int)v7, 0, v39, 0x21, a6, 0, 0); /*0x643c00*/
        v29 = v28; /*0x643c0a*/
        ((void (__thiscall *)(TESObjectREFR *, int, _DWORD, int))a4->vtbl[1].Unk_37)(a4, 0x24, 0, 0x64); /*0x643c16*/
        v30 = Actor_GetActorBaseForm(v7, 0); /*0x643c1c*/
        TESActorBaseData_AllFactionsAreEvil(&v30[1].member.refID); /*0x643c26*/
        if ( v31 ) /*0x643c2d*/
          v29 = 0x64; /*0x643c2f*/
        a2 = 0x24; /*0x643c3c*/
        v32 = ((int (__thiscall *)(TESObjectREFR *))a4->vtbl[1].Unk_37)(a4); /*0x643c40*/
        result = sub_546640(v29, v32); /*0x643c44*/
        v23 = (int)v48; /*0x643c49*/
        v46 = v33; /*0x643c4d*/
      }
      else
      {
        a2 = 0x24; /*0x643b5a*/
        v20 = ((int (__thiscall *)(TESObjectREFR *))a4->vtbl[1].Unk_37)(a4); /*0x643b5e*/
        Actor_GetLuckModifiedBaseAV((int)a4, 0x1F, v20); /*0x643b65*/
        v21 = Double_To_SInt32(result); /*0x643b6a*/
        result = Calc_AIAquireForStealing_(v21, v43); /*0x643b70*/
        v23 = v22; /*0x643b75*/
      }
      if ( v23 > 0 || v46 > 0 ) /*0x643c5d*/
      {
        if ( v7->vtbl->super.super.IsActor((TESObjectREFR *)v7) ) /*0x643cc4*/
        {
          v37 = ((int (__thiscall *)(TESObjectREFR *, int))a4->vtbl[1].GetSleepState)(a4, 1); /*0x643d9f*/
          if ( v46 <= v23 ) /*0x643da5*/
          {
            if ( v37 ) /*0x643db9*/
              goto LABEL_39; /*0x643db9*/
            *(_DWORD *)(v6 + 0x1C) = 4; /*0x643dbf*/
          }
          else
          {
            if ( v37 ) /*0x643da9*/
              goto LABEL_39; /*0x643da9*/
            *(_DWORD *)(v6 + 0x1C) = 5; /*0x643dab*/
          }
        }
        else if ( *(_DWORD *)(v6 + 0x1C) == 1 ) /*0x643cd2*/
        {
          *(_DWORD *)(v6 + 0x1C) = 4; /*0x643ce1*/
          v40 = (unsigned __int8 *)MEMORY[0xB35EC8]; /*0x643cf0*/
          v48 = 0; /*0x643cf3*/
          if ( !sub_5E4A00((int)a4, v40, 0, 1, 0, (signed int *)&v48) /*0x643d23*/
            && !sub_5E4A00((int)a4, (unsigned __int8 *)MEMORY[0xB35ECC], 0, 1, 0, (signed int *)&v48)
            && TESObjectREFR_GetEffectiveDoorLock((TESObjectREFR *)v7) )
          {
LABEL_39:
            v51 = 0; /*0x643d2c*/
          }
        }
        else
        {
          *(_DWORD *)(v6 + 0x1C) = 3; /*0x643d8a*/
        }
        *(_DWORD *)(v6 + 8) = v23; /*0x643d3a*/
        *(_DWORD *)(v6 + 0xC) = v46; /*0x643d3d*/
        if ( v51 ) /*0x643d40*/
          goto LABEL_41; /*0x643d40*/
        goto LABEL_54; /*0x643d40*/
      }
LABEL_29:
      if ( !Actor_IsCreature((Actor *)a4) && v7->vtbl->super.super.IsActor((TESObjectREFR *)v7) && !Actor_IsNPC(v7) ) /*0x643c84*/
      {
        v34 = (BSExtraDataVtbl *)a4->vtbl->GetBaseForm(a4); /*0x643c9f*/
        if ( TESObjectREFR_GetOwner((TESObjectREFR *)v7) != v34 ) /*0x643ca8*/
        {
          *(_DWORD *)(v6 + 0x1C) = 5; /*0x643cae*/
          goto LABEL_41; /*0x643cb5*/
        }
      }
LABEL_54:
      FormHeapFree(v6); /*0x643dd6*/
LABEL_55:
      v4 = v49; /*0x643ddf*/
      v47 = (unsigned int *)v47[1]; /*0x643dec*/
    }
    while ( v47 ); /*0x643a08*/
  }
  if ( v4[1] ) /*0x643df8*/
  {
    do /*0x643e14*/
    {
      v38 = *(_DWORD *)(v4[1] + 4); /*0x643e03*/
      FormHeapFree(v4[1]); /*0x643e07*/
      v4[1] = v38; /*0x643e11*/
    }
    while ( v38 ); /*0x643e14*/
  }
  *v4 = 0; /*0x643e16*/
  return result; /*0x643e1c*/
}
