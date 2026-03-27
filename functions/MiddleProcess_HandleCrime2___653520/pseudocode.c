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

  v4 = a1 + 0x15;
  v5 = a1 + 0x15;
  v47 = a1;
  v46 = a1 + 0x15;
  v44 = a1 + 0x15;
  if ( a1 != (_DWORD *)0xFFFFFFAC )
  {
    while ( 1 )
    {
      v7 = *v5;
      if ( !*v5 )
        break;
      v8 = *(Actor **)v7;
      v9 = *(void **)(v7 + 4);
      v10 = *(TESObjectREFR **)v7;
      v45 = (int)v9;
      v49 = 1;
      if ( !TESObjectREFR_GetOwner(v10) && !v8->vtbl->super.super.IsActor((TESObjectREFR *)v8) )
        goto LABEL_7;
      v48 = 0xFFFFFFFF;
      sub_470520(v9);
      v12 = v11;
      if ( !v8->vtbl->super.super.IsDead((TESObjectREFR *)v8, 0) && sub_5E4420((Actor *)a4) >= v12 )
      {
        if ( Actor_IsNPC(v8) )
        {
          v13 = v8;
        }
        else
        {
          Owner = TESObjectREFR_GetOwner((TESObjectREFR *)v8);
          v15 = OblivionDynamicCast(
                  Owner,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                  &TESNPC `RTTI Type Descriptor',
                  0);
          if ( !v15 )
            goto LABEL_20;
          sub_675220(v15);
        }
        if ( v13 )
        {
          v39 = v45;
          ActorBaseForm = Actor_GetActorBaseForm(v13, 0);
          if ( TESAIForm_OffersServiceForItem(&ActorBaseForm[4].member.flags, v39) )
          {
            sub_470520(*(void **)(v7 + 4));
            if ( sub_5E4420((Actor *)a4) >= v17 )
            {
              if ( !((unsigned __int8 (__thiscall *)(TESObjectREFR *, int))a4->vtbl[1].GetSleepState)(a4, 1) )
              {
                *(_DWORD *)(v7 + 0x1C) = 2;
LABEL_7:
                TesObjectREF_GetDistance(a4, (TESObjectREFR *)v8, 0);
                *(_DWORD *)(v7 + 0x14) = Double_To_SInt32(a3);
                goto LABEL_39;
              }
              v49 = 0;
            }
          }
        }
      }
LABEL_20:
      if ( ((unsigned __int8 (__usercall *)@<al>(Actor *@<ecx>, signed int, double@<st0>))v8->vtbl->super.super.IsActor)(
             v8,
             a2,
             a3) )
      {
        a2 = 0;
        if ( ((unsigned __int8 (__thiscall *)(Actor *))v8->vtbl->super.super.IsDead)(v8) || !Actor_IsNPC(v8) )
          goto LABEL_27;
        v22 = ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, int, double@<st0>))a4->vtbl[1].Unk_37)(a4, 0x24, a3);
        Actor_GetLuckModifiedBaseAV((int)a4, 0x1F, v22);
        v23 = Double_To_SInt32(a3);
        Calc_AIAquireForPickpocketing_(v23, v41);
        v43 = v24;
        *(float *)&a6 = TesObjectREF_GetDistance(a4, (TESObjectREFR *)v8, 0);
        v36 = COERCE_FLOAT(((int (__thiscall *)(TESObjectREFR *))a4->vtbl[1].Unk_37)(a4));
        v25 = ((int (__thiscall *)(TESObjectREFR *))a4->vtbl[1].super.Unk_1F)(a4);
        shouldActorFight(v25, (int)v8, 0, v36, 0x21, a6, 0, 0);
        v27 = v26;
        v28 = ((int (__thiscall *)(TESObjectREFR *, int, _DWORD, int))a4->vtbl[1].Unk_37)(a4, 0x24, 0, 0x64);
        a3 = sub_546640(v27, v28);
        v20 = v29;
      }
      else
      {
        a2 = 0x24;
        v18 = ((int (__thiscall *)(TESObjectREFR *))a4->vtbl[1].Unk_37)(a4);
        Actor_GetLuckModifiedBaseAV((int)a4, 0x1F, v18);
        v19 = Double_To_SInt32(a3);
        a3 = Calc_AIAquireForStealing_(v19, v40);
        v20 = v48;
        v43 = v21;
      }
      if ( v43 > 0 || v20 > 0 )
      {
        if ( v8->vtbl->super.super.IsActor((TESObjectREFR *)v8) )
        {
          v33 = ((int (__thiscall *)(TESObjectREFR *, int))a4->vtbl[1].GetSleepState)(a4, 1);
          if ( v20 <= v43 )
          {
            if ( v33 )
              goto LABEL_37;
            *(_DWORD *)(v7 + 0x1C) = 4;
          }
          else
          {
            if ( v33 )
              goto LABEL_37;
            *(_DWORD *)(v7 + 0x1C) = 5;
          }
        }
        else if ( *(_DWORD *)(v7 + 0x1C) == 1 )
        {
          *(_DWORD *)(v7 + 0x1C) = 4;
          a6a = (unsigned __int8 *)TESDataHandler_g_Lockpick;
          v45 = 0;
          if ( !sub_5E4A00((int)a4, a6a, 0, 1, 0, &v45)
            && !sub_5E4A00((int)a4, (unsigned __int8 *)TESDataHandler_g_SkeletonKey, 0, 1, 0, &v45)
            && sub_4D7740((TESObjectREFR *)v8) )
          {
LABEL_37:
            v49 = 0;
          }
        }
        else
        {
          *(_DWORD *)(v7 + 0x1C) = 3;
        }
        *(_DWORD *)(v7 + 8) = v43;
        *(_DWORD *)(v7 + 0xC) = v20;
        if ( !v49 )
          goto LABEL_52;
        goto LABEL_39;
      }
LABEL_27:
      if ( Actor_IsCreature((Actor *)a4)
        || !v8->vtbl->super.super.IsActor((TESObjectREFR *)v8)
        || Actor_IsNPC(v8)
        || (v30 = (BSExtraDataVtbl *)a4->vtbl->GetBaseForm(a4), TESObjectREFR_GetOwner((TESObjectREFR *)v8) == v30) )
      {
LABEL_52:
        FormHeapFree(v7);
        goto LABEL_53;
      }
      *(_DWORD *)(v7 + 0x1C) = 5;
LABEL_39:
      Actor::SetCompressedFlag(*(Actor **)v7, 1);
      v31 = v47 + 0xF;
      if ( v47[0x10] )
      {
        do
          v31 = (unsigned int *)v31[1];
        while ( v31[1] );
      }
      if ( *v31 )
      {
        v32 = (unsigned int *)FormHeapAlloc(8u);
        if ( v32 )
        {
          *v32 = v7;
          v32[1] = 0;
          v31[1] = (unsigned int)v32;
        }
        else
        {
          v31[1] = 0;
        }
      }
      else
      {
        *v31 = v7;
      }
LABEL_53:
      v4 = v46;
      v44 = (unsigned int *)v44[1];
      if ( !v44 )
        break;
      v5 = v44;
    }
  }
  v34 = v47;
  sub_64E240(v47);
  sub_64E2B0(v34);
  if ( v4[1] )
  {
    do
    {
      v35 = *(_DWORD *)(v4[1] + 4);
      FormHeapFree(v4[1]);
      v4[1] = v35;
    }
    while ( v35 );
  }
  *v4 = 0;
}
