void __userpurge sub_635900(_DWORD *a1@<ecx>, signed int a2@<ebp>, double a3@<st0>, TESObjectREFR *a4)
{
  _DWORD *v4; // ebx
  _DWORD *v5; // edi
  unsigned int v7; // ebp
  Actor *v8; // edi
  Actor *v9; // ebx
  BSExtraDataVtbl *Owner; // eax
  Actor *v11; // eax
  TESForm *ActorBaseForm; // eax
  int v13; // eax
  signed int v14; // eax
  signed int v15; // eax
  int v16; // eax
  int v17; // ebx
  signed int v18; // eax
  signed int v19; // eax
  int v20; // eax
  int v21; // eax
  signed int v22; // eax
  signed int v23; // ebx
  TESForm *v24; // eax
  char v25; // al
  signed int v26; // eax
  int v27; // eax
  BSExtraDataVtbl *v28; // ebx
  unsigned int *v29; // edi
  unsigned int *v30; // eax
  char v31; // al
  int v32; // esi
  float v33; // [esp+Ch] [ebp-3Ch]
  unsigned __int8 *v34; // [esp+10h] [ebp-38h]
  int a6; // [esp+14h] [ebp-34h]
  int v36; // [esp+20h] [ebp-28h]
  signed int v37; // [esp+20h] [ebp-28h]
  signed int v39; // [esp+24h] [ebp-24h]
  int v40; // [esp+34h] [ebp-14h]
  unsigned int *v41; // [esp+38h] [ebp-10h]
  signed int v42; // [esp+3Ch] [ebp-Ch] BYREF
  int v43; // [esp+40h] [ebp-8h]
  _DWORD *v44; // [esp+44h] [ebp-4h]
  char v45; // [esp+4Ch] [ebp+4h]

  v4 = a1;
  v5 = a1 + 0x15;
  v43 = (int)a1;
  v44 = a1 + 0x15;
  v41 = a1 + 0x15;
  if ( a1 != (_DWORD *)0xFFFFFFAC )
  {
    do
    {
      v7 = *v41;
      if ( !*v41 )
        break;
      v8 = *(Actor **)v7;
      v42 = *(_DWORD *)(v7 + 4);
      v45 = 1;
      if ( (!TESObjectREFR_GetOwner((TESObjectREFR *)v8) || TESOBjectREFR_IsOwnedBy((TESObjectREFR *)v8, a4, 1))
        && !v8->vtbl->super.super.IsActor((TESObjectREFR *)v8) )
      {
        goto LABEL_18;
      }
      v40 = 0xFFFFFFFF;
      if ( !Actor_IsNPC(v8) || v8->vtbl->super.super.IsDead((TESObjectREFR *)v8, 0) )
      {
        Owner = TESObjectREFR_GetOwner((TESObjectREFR *)v8);
        if ( !Owner || LOBYTE(Owner->CompareTo) != 0x23 )
          goto LABEL_22;
        sub_675220(Owner);
        v9 = v11;
      }
      else
      {
        v9 = v8;
      }
      if ( v9 && !v9->vtbl->super.super.IsDead((TESObjectREFR *)v9, 0) )
      {
        v36 = v42;
        ActorBaseForm = Actor_GetActorBaseForm(v9, 0);
        if ( TESAIForm_OffersServiceForItem(&ActorBaseForm[4].member.flags, v36) )
        {
          sub_470520(*(void **)(v7 + 4));
          if ( sub_5E4420((Actor *)a4) >= v13 )
          {
            if ( !((unsigned __int8 (__thiscall *)(TESObjectREFR *, int))a4->vtbl[1].GetSleepState)(a4, 1) )
            {
              *(_DWORD *)(v7 + 0x1C) = 2;
LABEL_18:
              TesObjectREF_GetDistance(a4, (TESObjectREFR *)v8, 0);
              *(_DWORD *)(v7 + 0x14) = Double_To_SInt32(a3);
LABEL_43:
              Actor::SetCompressedFlag(*(Actor **)v7, 1);
              v4 = (_DWORD *)v43;
              v29 = (unsigned int *)(v43 + 0x3C);
              if ( *(_DWORD *)(v43 + 0x40) )
              {
                do
                  v29 = (unsigned int *)v29[1];
                while ( v29[1] );
              }
              if ( *v29 )
              {
                v30 = (unsigned int *)FormHeapAlloc(8u);
                if ( v30 )
                {
                  *v30 = v7;
                  v30[1] = 0;
                  v29[1] = (unsigned int)v30;
                }
                else
                {
                  v29[1] = 0;
                }
              }
              else
              {
                *v29 = v7;
              }
              goto LABEL_57;
            }
            v45 = 0;
          }
        }
        goto LABEL_20;
      }
LABEL_22:
      if ( Actor_IsNPC(v8) )
      {
        *(_DWORD *)(v7 + 0x1C) = 0;
        goto LABEL_43;
      }
LABEL_20:
      if ( ((unsigned __int8 (__usercall *)@<al>(Actor *@<ecx>, signed int, double@<st0>))v8->vtbl->super.super.IsActor)(
             v8,
             a2,
             a3) )
      {
        a2 = 0;
        if ( ((unsigned __int8 (__thiscall *)(Actor *))v8->vtbl->super.super.IsDead)(v8) || !Actor_IsNPC(v8) )
          goto LABEL_31;
        v18 = ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, int, _DWORD, double@<st0>))a4->vtbl[1].Unk_37)(
                a4,
                0x24,
                0,
                a3);
        Actor_GetLuckModifiedBaseAV((int)a4, 0x1F, v18);
        v19 = Double_To_SInt32(a3);
        Calc_AIAquireForPickpocketing_(v19, v39);
        v43 = v20;
        *(float *)&a6 = TesObjectREF_GetDistance(a4, (TESObjectREFR *)v8, 0);
        v33 = COERCE_FLOAT(((int (__thiscall *)(TESObjectREFR *))a4->vtbl[1].Unk_37)(a4));
        v21 = ((int (__thiscall *)(TESObjectREFR *))a4->vtbl[1].super.Unk_1F)(a4);
        shouldActorFight(v21, (int)v8, 0, v33, 0x21, a6, 0, 0);
        v23 = v22;
        ((void (__thiscall *)(TESObjectREFR *, int, _DWORD, int))a4->vtbl[1].Unk_37)(a4, 0x24, 0, 0x64);
        v24 = Actor_GetActorBaseForm(v8, 0);
        TESActorBaseData_AllFactionsAreEvil(&v24[1].member.refID);
        if ( v25 )
          v23 = 0x64;
        a2 = 0x24;
        v26 = ((int (__thiscall *)(TESObjectREFR *))a4->vtbl[1].Unk_37)(a4);
        a3 = sub_546640(v23, v26);
        v17 = v42;
        v40 = v27;
      }
      else
      {
        a2 = 0x24;
        v14 = ((int (__thiscall *)(TESObjectREFR *))a4->vtbl[1].Unk_37)(a4);
        Actor_GetLuckModifiedBaseAV((int)a4, 0x1F, v14);
        v15 = Double_To_SInt32(a3);
        a3 = Calc_AIAquireForStealing_(v15, v37);
        v17 = v16;
      }
      if ( v17 > 0 || v40 > 0 )
      {
        if ( v8->vtbl->super.super.IsActor((TESObjectREFR *)v8) )
        {
          v31 = ((int (__thiscall *)(TESObjectREFR *, int))a4->vtbl[1].GetSleepState)(a4, 1);
          if ( v40 <= v17 )
          {
            if ( v31 )
              goto LABEL_41;
            *(_DWORD *)(v7 + 0x1C) = 4;
          }
          else
          {
            if ( v31 )
              goto LABEL_41;
            *(_DWORD *)(v7 + 0x1C) = 5;
          }
        }
        else if ( *(_DWORD *)(v7 + 0x1C) == 1 )
        {
          *(_DWORD *)(v7 + 0x1C) = 4;
          v34 = (unsigned __int8 *)TESDataHandler_g_Lockpick;
          v42 = 0;
          if ( !sub_5E4A00((int)a4, v34, 0, 1, 0, &v42)
            && !sub_5E4A00((int)a4, (unsigned __int8 *)TESDataHandler_g_SkeletonKey, 0, 1, 0, &v42)
            && sub_4D7740((TESObjectREFR *)v8) )
          {
LABEL_41:
            v45 = 0;
          }
        }
        else
        {
          *(_DWORD *)(v7 + 0x1C) = 3;
        }
        *(_DWORD *)(v7 + 8) = v17;
        *(_DWORD *)(v7 + 0xC) = v40;
        if ( v45 )
          goto LABEL_43;
        goto LABEL_56;
      }
LABEL_31:
      if ( !Actor_IsCreature((Actor *)a4) && v8->vtbl->super.super.IsActor((TESObjectREFR *)v8) && !Actor_IsNPC(v8) )
      {
        v28 = (BSExtraDataVtbl *)a4->vtbl->GetBaseForm(a4);
        if ( TESObjectREFR_GetOwner((TESObjectREFR *)v8) != v28 )
        {
          *(_DWORD *)(v7 + 0x1C) = 5;
          goto LABEL_43;
        }
      }
LABEL_56:
      FormHeapFree(v7);
      v4 = (_DWORD *)v43;
LABEL_57:
      v5 = v44;
      v41 = (unsigned int *)v41[1];
    }
    while ( v41 );
  }
  sub_64E240(v4);
  sub_64E2B0(v4);
  if ( v5[1] )
  {
    do
    {
      v32 = *(_DWORD *)(v5[1] + 4);
      FormHeapFree(v5[1]);
      v5[1] = v32;
    }
    while ( v32 );
  }
  *v5 = 0;
}
