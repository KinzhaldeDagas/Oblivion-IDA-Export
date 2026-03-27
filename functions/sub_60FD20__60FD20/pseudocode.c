void __userpurge sub_60FD20(TESObjectREFR *this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, TESForm *a5)
{
  BSExtraDataVtbl *Owner; // ebp
  _DWORD *v7; // eax
  int *v8; // edi
  int *v9; // eax
  char *Name; // eax
  int v11; // esi
  TESObjectREFR *v12; // ecx
  char v13; // al
  char v14; // al
  int v15; // eax
  signed int v16; // eax
  char v17; // al
  int v18; // eax
  int v19; // eax
  PlayerCharacter *v20; // edi
  void *v21; // eax
  _BYTE *v22; // eax
  _BYTE *v23; // esi
  TESForm *ActorBaseForm; // eax
  void (__thiscall *v25)(_BYTE *, int); // edx
  int v26; // [esp-4h] [ebp-170h]
  float v27; // [esp+0h] [ebp-16Ch]
  unsigned int v28; // [esp+18h] [ebp-154h]
  int v29; // [esp+1Ch] [ebp-150h]
  int *v31; // [esp+24h] [ebp-148h]
  int v32; // [esp+28h] [ebp-144h]
  char Format[300]; // [esp+30h] [ebp-13Ch] BYREF
  unsigned int v34; // [esp+168h] [ebp-4h]

  if ( this == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
  {
    ExtraDataList_GetCrimeGold((ExtraDataList *)&a5[2].member.modlist.next);
    if ( a4 <= *(float *)&SrcStr )
    {
      ++TESDataHandler_g_PlayerRef->miscStats[0x21];
      v27 = (float)dword_B376B0;
      sub_4269E0((ExtraDataList *)&a5[2].member.modlist.next, v27);
      a5->vtbl->MarkAsModified(a5, 0x80);
    }
LABEL_6:
    Owner = TESObjectREFR_GetOwner((TESObjectREFR *)a5);
    v7 = (_DWORD *)FormHeapAlloc(0x30u);
    v34 = 0;
    if ( v7 )
      v8 = sub_6070B0(v7, 5u, (int)a5, (int)this, 0, 0, (int)Owner);
    else
      v8 = 0;
    v34 = 0xFFFFFFFF;
    v9 = sub_67A290((int)&ActorProcessManager_ptr, a2, a3, (int)v8);
    v28 = (unsigned int)v9;
    v31 = v9;
    if ( v9 )
    {
      while ( 1 )
      {
        v11 = *v9;
        if ( !*v9 )
          break;
        v12 = (TESObjectREFR *)v8[2];
        LOBYTE(v32) = 0;
        if ( (TESObjectREFR *)v11 == v12 || TESObjectREFR_GetOwner(v12) == (BSExtraDataVtbl *)v11 )
          LOBYTE(v32) = 1;
        sub_4DB760((TESObjectREFR *)a5);
        if ( !v13 || (sub_4DB760((TESObjectREFR *)v11), v14) )
        {
          sub_605F60(v8, v11, v32);
          *(float *)&v29 = (float)v15;
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v11 + 0x374))(v11, v8[3]);
          v16 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v11 + 0x224))(v11, v29, v11);
          if ( sub_605E20(v16, v29) )
          {
            sub_4DB760(this);
            if ( !v17 )
            {
              dword_B361C4 = (int)Owner;
              sub_605F00(v8, (int)this);
              *(_DWORD *)(v11 + 0xE4) = v8[3];
              v18 = TESTopic::GEtTopic(2, 3);
              (*(void (__thiscall **)(_DWORD, int, int, _DWORD, _DWORD, int))(**(_DWORD **)(v11 + 0x58) + 0x1A4))(
                *(_DWORD *)(v11 + 0x58),
                v11,
                v18,
                0,
                0,
                1);
              dword_B361C4 = 0;
            }
            (*(void (__thiscall **)(int, int *, _DWORD, int, _DWORD))(*(_DWORD *)v11 + 0x310))(v11, v8, 0, 1, 0);
          }
          else
          {
            dword_B361C4 = (int)Owner;
            *(_DWORD *)(v11 + 0xE4) = v8[3];
            v19 = TESTopic::GEtTopic(2, 0xE);
            (*(void (__thiscall **)(_DWORD, int, int, _DWORD, _DWORD, int))(**(_DWORD **)(v11 + 0x58) + 0x1A4))(
              *(_DWORD *)(v11 + 0x58),
              v11,
              v19,
              0,
              0,
              1);
            dword_B361C4 = 0;
          }
        }
        v28 = *(_DWORD *)(v28 + 4);
        if ( !v28 )
          break;
        v9 = (int *)v28;
      }
      BSSimpleList_Clear(v31);
      FormHeapFree((unsigned int)v31);
      if ( sub_605F30(v8) )
      {
        sub_675B30(&ActorProcessManager_ptr, v8);
        v20 = (PlayerCharacter *)v8[3];
        v21 = OblivionDynamicCast(
                Owner,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESNPC `RTTI Type Descriptor',
                0);
        if ( v20 == TESDataHandler_g_PlayerRef )
        {
          if ( v21 )
          {
            TESActorBaseData_SetSharedPlayerFactionFlags(2);
          }
          else
          {
            v22 = OblivionDynamicCast(
                    Owner,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESFaction `RTTI Type Descriptor',
                    0);
            v23 = v22;
            if ( v22 )
            {
              v26 = (int)v22;
              ActorBaseForm = Actor_GetActorBaseForm((Actor *)TESDataHandler_g_PlayerRef, 0);
              if ( TESActorBaseData_GetFactionRank(&ActorBaseForm[1].member.refID, v26, 1) != 0xFFFFFFFF )
              {
                v25 = *(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v23 + 0x40);
                v23[0x34] |= 0x10u;
                v25(v23, 4);
              }
            }
          }
        }
      }
      else if ( v8 )
      {
        sub_605E80((unsigned int *)v8);
        FormHeapFree((unsigned int)v8);
      }
    }
    else
    {
      if ( v8 )
      {
        sub_605E80((unsigned int *)v8);
        FormHeapFree((unsigned int)v8);
      }
      Name = TESObjectREFR_GetName(this);
      _sprintf(Format, "%s got away with stealing horse", Name);
      Interface_ConsolePrint(Format);
    }
    FormHeapFree(v28);
    return;
  }
  if ( ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, int, double@<st0>, double@<st1>, double@<st2>))this->vtbl[1].Unk_37)(
         this,
         0x1F,
         a4,
         a3,
         a2) != 0x64
    || !Actor_IsSneaking(this) )
  {
    goto LABEL_6;
  }
}
