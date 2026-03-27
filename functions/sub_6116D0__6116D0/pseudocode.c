void __usercall sub_6116D0(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>)
{
  int v4; // ebx
  _DWORD *v5; // ecx
  _BYTE *v6; // eax
  NiDX9TextureData *v7; // eax
  NiDX9TextureData *v8; // edi
  Actor *Levels; // esi
  Actor *v10; // edi
  ActorAnimData *v11; // eax
  ActorAnimData *v12; // eax
  LowProcess *process; // ecx
  LowProcess *v14; // ecx
  LowProcess *v15; // ebx
  LowProcess *v16; // ebx
  void (__thiscall **v17)(_DWORD *, BSExtraData *); // ebp
  BSExtraData *v18; // eax
  ActorVtbl *vtbl; // ebp
  int v20; // eax
  void (__thiscall **p_Unk_09)(TESForm *, int); // ebp
  int v22; // eax
  LowProcess *v23; // ebp
  LowProcess *v24; // ebx
  _DWORD *v25; // ebx
  void (__thiscall **v26)(_DWORD *, BSExtraData *); // ebp
  BSExtraData *v27; // eax
  ActorVtbl *v28; // ebp
  int v29; // eax
  void (__thiscall **v30)(_DWORD *, int); // ebp
  int v31; // eax
  LowProcess *v32; // eax
  LowProcess *v33; // ecx
  int v34; // esi
  _DWORD *v38; // [esp+44h] [ebp-8h]
  TESForm *v39; // [esp+48h] [ebp-4h]
  Actor *retaddr; // [esp+4Ch] [ebp+0h]
  _DWORD *v41; // [esp+50h] [ebp+4h]

  v4 = a1;
  if ( *(_DWORD *)(a1 + 0x58) )
  {
    if ( !sub_45A500(SaveLoad_CurrentSavegame) )
    {
      v5 = *(_DWORD **)(v4 + 0x58);
      v6 = (_BYTE *)v5[2];
      if ( v6 && v6[0x20] == 0x12 )
      {
        v7 = (NiDX9TextureData *)OblivionDynamicCast(
                                   v6,
                                   0,
                                   (struct _s_RTTICompleteObjectLocator *)&TESPackage `RTTI Type Descriptor',
                                   &DialoguePackage `RTTI Type Descriptor',
                                   0);
        v8 = v7;
        v39 = (TESForm *)v7;
        if ( v7 )
        {
          if ( v7->PixelFormat.Components[2].eRepresentation )
            sub_625D70(v7);
          Levels = (Actor *)NiDX9TextureData::GetLevels(v8);
          v10 = (Actor *)sub_779480(v8);
          sub_642B40(&unk_B3BD7C, (int)Levels);
          sub_642B40(&unk_B3BD7C, (int)v10);
          if ( Levels )
            Levels->members.super.process->Unk_129(Levels->members.super.process);
          if ( v10 )
            v10->members.super.process->Unk_129(v10->members.super.process);
          if ( Levels )
          {
            if ( v10 )
            {
              ((void (__thiscall *)(LowProcess *, Actor *))Levels->members.super.process->Unk_11F)(
                Levels->members.super.process,
                v10);
              ((void (__thiscall *)(LowProcess *, Actor *))v10->members.super.process->Unk_11F)(
                v10->members.super.process,
                Levels);
              *(float *)&Levels->members.unk0E8[6] = 1.0;
              *(float *)&v10->members.unk0E8[6] = 1.0;
              ((void (__thiscall *)(LowProcess *, _DWORD))Levels->members.super.process->Unk_95)(
                Levels->members.super.process,
                0);
              ((void (__thiscall *)(LowProcess *, _DWORD))v10->members.super.process->Unk_95)(
                v10->members.super.process,
                0);
            }
          }
          v11 = (ActorAnimData *)((int (__thiscall *)(Actor *, int, int))Levels->vtbl->super.super.GetAnimData)(
                                   Levels,
                                   a3,
                                   a4);
          if ( v11 )
            sub_475440(v11, 1, 0);
          v12 = v10->vtbl->super.super.GetAnimData((TESObjectREFR *)v10);
          if ( v12 )
            sub_475440(v12, 1, 0);
          process = Levels->members.super.process;
          if ( process )
            ((void (__thiscall *)(LowProcess *, _DWORD))process->Unk_77)(process, 0);
          v14 = v10->members.super.process;
          if ( v14 )
            ((void (__thiscall *)(LowProcess *, _DWORD))v14->Unk_77)(v14, 0);
          sub_5E0380(v10);
          sub_5E0380(Levels);
          ((void (__thiscall *)(Actor *, int, int))Levels->vtbl->super.super.super.ClearModified)(Levels, 0x30000, a2);
          if ( ExtraDataList::GetExtraPackage(&Levels->members.super.super.baseExtraList) )
          {
            v15 = Levels->members.super.process;
            v15->editorPackage = (TESPackage *)ExtraDataList::GetExtraPackage(&Levels->members.super.super.baseExtraList);
            sub_5E8DE0(retaddr, Levels->members.super.process->editorPackage);
            v16 = Levels->members.super.process;
            v16->editorPackProcedure = sub_41FB40(&Levels->members.super.super.baseExtraList);
            v41 = &Levels->members.super.process->__vftable;
            v17 = (void (__thiscall **)(_DWORD *, BSExtraData *))(*v41 + 0xD0);
            v18 = sub_41FB60(&retaddr->members.super.super.baseExtraList);
            (*v17)(v41, v18);
            vtbl = Levels->vtbl;
            LOBYTE(v20) = sub_41FB80(&retaddr->members.super.super.baseExtraList);
            ((void (__thiscall *)(Actor *, int))vtbl->super.super.Unk_5F)(Levels, v20);
            v39 = (TESForm *)Levels->members.super.process;
            p_Unk_09 = (void (__thiscall **)(TESForm *, int))&v39->vtbl[4].Unk_09;
            LOBYTE(v22) = sub_41FBA0(&retaddr->members.super.super.baseExtraList);
            (*p_Unk_09)(v39, v22);
            sub_4246D0(&Levels->members.super.super.baseExtraList);
            if ( !*(_BYTE *)(TESDataHandler + 0xCD4) )
              Levels->members.super.process->Unk_06(Levels->members.super.process, (UInt32)Levels, 1);
            v4 = a1;
          }
          else
          {
            Levels->members.super.process->editorPackage = 0;
            Levels->members.super.process->editorPackProcedure = kProcedure_TRAVEL;
            Levels->members.super.process->SetUnk02C(Levels->members.super.process, 0);
            ((void (__thiscall *)(Actor *, _DWORD))Levels->vtbl->super.super.Unk_5F)(Levels, 0);
            Levels->members.super.process->SetUnk01C(Levels->members.super.process, 0);
            if ( !*(_BYTE *)(TESDataHandler + 0xCD4) )
              Levels->members.super.process->Unk_06(Levels->members.super.process, (UInt32)Levels, 1);
          }
          if ( sub_5E6B40(v10) )
          {
            v10->vtbl->super.super.super.ClearModified((TESForm *)v10, 0x30000);
            if ( ExtraDataList::GetExtraPackage(&v10->members.super.super.baseExtraList) )
            {
              v23 = v10->members.super.process;
              v23->editorPackage = (TESPackage *)ExtraDataList::GetExtraPackage(&v10->members.super.super.baseExtraList);
              sub_5E8DE0((Actor *)v4, v10->members.super.process->editorPackage);
              v24 = v10->members.super.process;
              v24->editorPackProcedure = sub_41FB40(&v10->members.super.super.baseExtraList);
              v25 = &v10->members.super.process->__vftable;
              v26 = (void (__thiscall **)(_DWORD *, BSExtraData *))(*v25 + 0xD0);
              v27 = sub_41FB60(&v10->members.super.super.baseExtraList);
              (*v26)(v25, v27);
              v28 = v10->vtbl;
              LOBYTE(v29) = sub_41FB80((ExtraDataList *)(a1 + 0x44));
              ((void (__thiscall *)(Actor *, int))v28->super.super.Unk_5F)(v10, v29);
              v38 = &v10->members.super.process->__vftable;
              v30 = (void (__thiscall **)(_DWORD *, int))(*v38 + 0x394);
              LOBYTE(v31) = sub_41FBA0((ExtraDataList *)(a1 + 0x44));
              (*v30)(v38, v31);
              sub_4246D0(&v10->members.super.super.baseExtraList);
            }
            else
            {
              v32 = v10->members.super.process;
              if ( v32 )
              {
                v32->editorPackage = 0;
                v10->members.super.process->editorPackProcedure = kProcedure_TRAVEL;
                v10->members.super.process->SetUnk02C(v10->members.super.process, 0);
                ((void (__thiscall *)(Actor *, _DWORD))v10->vtbl->super.super.Unk_5F)(v10, 0);
                v10->members.super.process->SetUnk01C(v10->members.super.process, 0);
              }
            }
            v33 = v10->members.super.process;
            if ( v33 )
            {
              if ( !*(_BYTE *)(TESDataHandler + 0xCD4) )
                v33->Unk_06(v33, (UInt32)v10, 1);
            }
          }
          if ( sub_45A500(SaveLoad_CurrentSavegame) )
            sub_45C7A0((char *)SaveLoad_CurrentSavegame, v39);
          else
            v39->vtbl->Destroy(v39, 1);
        }
      }
      else
      {
        v34 = (*(int (__thiscall **)(_DWORD *, int))(*v5 + 0x4C8))(v5, 4);
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v4 + 0x58) + 0x4A8))(*(_DWORD *)(v4 + 0x58));
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v4 + 0x58) + 0x480))(*(_DWORD *)(v4 + 0x58), v34);
        *(float *)(v4 + 0x100) = 1.0;
      }
    }
  }
}
