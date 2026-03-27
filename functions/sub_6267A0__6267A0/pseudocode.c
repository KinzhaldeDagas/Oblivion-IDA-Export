void __userpurge sub_6267A0(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, AnimSequenceSingle *a5)
{
  _DWORD *v7; // ecx
  _DWORD *v8; // ecx
  Unk1C *v9; // eax
  int v10; // ecx
  Unk1C *v11; // ecx
  int v12; // eax
  Actor *v13; // edi
  Actor *v14; // ecx
  int v15; // ecx
  int v16; // ebx
  int v17; // ebp
  unsigned int v18; // eax
  int v19; // ecx
  int v20; // ebp
  int v21; // ebx
  unsigned int Len; // eax
  ActorAnimData *v23; // edi
  int v24; // eax
  unsigned __int8 **v25; // eax
  UInt32 v26; // ebp
  UInt32 v27; // eax
  TESObjectREFR *v28; // eax
  unsigned __int8 **v29; // eax
  UInt32 v30; // edi
  UInt32 v31; // eax
  Unk1C *v32; // eax
  Unk1C *v33; // eax
  Unk1C *v34; // eax
  const char **v35; // eax
  double v36; // st7
  int *SafeFloatPointer; // eax
  BSStringT v38; // [esp+28h] [ebp-1Ch] BYREF
  double v39; // [esp+30h] [ebp-14h]
  unsigned int v40; // [esp+40h] [ebp-4h]
  AnimSequenceSingle *v41; // [esp+48h] [ebp+4h]
  AnimSequenceSingle *v42; // [esp+48h] [ebp+4h]

  if ( !*(_BYTE *)(a1 + 0x4C) )
  {
    v7 = *(_DWORD **)(a1 + 0x54);
    if ( v7 )
    {
      if ( !*(_DWORD *)(a1 + 0x58) )
      {
LABEL_11:
        v10 = *(_DWORD *)(a1 + 0x54);
        if ( v10 )
          sub_6B7C30(v10);
        sub_6B74C0(*(_DWORD **)(a1 + 0x50));
        *(_DWORD *)(a1 + 0x54) = sub_6B7C20(*(Unk1C **)(a1 + 0x50));
        goto LABEL_14;
      }
      sub_6B7C00(v7);
    }
    else
    {
      v8 = *(_DWORD **)(a1 + 0x50);
      if ( !v8 )
      {
LABEL_53:
        (*(void (__usercall **)(_DWORD@<ecx>, int, double@<st0>, double@<st1>, double@<st2>))(**(_DWORD **)(a1 + 0x5C)
                                                                                            + 0x17C))(
          *(_DWORD *)(a1 + 0x5C),
          1,
          a4,
          a3,
          a2);
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 0x60) + 0x17C))(*(_DWORD *)(a1 + 0x60), 1);
        return;
      }
      sub_6B74B0(v8);
      v9 = (Unk1C *)sub_6B7C20(*(Unk1C **)(a1 + 0x50));
      *(_DWORD *)(a1 + 0x54) = v9;
      if ( !v9 )
      {
        (*(void (__usercall **)(_DWORD@<ecx>, int, double@<st0>, double@<st1>, double@<st2>))(**(_DWORD **)(a1 + 0x5C)
                                                                                            + 0x17C))(
          *(_DWORD *)(a1 + 0x5C),
          1,
          a4,
          a3,
          a2);
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 0x60) + 0x17C))(*(_DWORD *)(a1 + 0x60), 1);
        goto LABEL_10;
      }
      sub_6B7BA0(v9);
    }
    *(_DWORD *)(a1 + 0x58) = sub_6B7C20(*(Unk1C **)(a1 + 0x54));
LABEL_10:
    if ( *(_DWORD *)(a1 + 0x58) )
      goto LABEL_14;
    goto LABEL_11;
  }
LABEL_14:
  v11 = *(Unk1C **)(a1 + 0x54);
  if ( !v11 )
    goto LABEL_53;
  if ( *(_DWORD *)(a1 + 0x58) )
    goto LABEL_19;
  sub_6B7BA0(v11);
  v12 = sub_6B7C20(*(Unk1C **)(a1 + 0x54));
  *(_DWORD *)(a1 + 0x58) = v12;
  if ( !v12 )
    PrintError(
      "No responses found for conversation Topic Info (%08X).",
      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 0x54) + 0xC) + 0xC));
  if ( *(_DWORD *)(a1 + 0x58) )
  {
LABEL_19:
    v13 = (Actor *)OblivionDynamicCast(
                     *(void **)(*(_DWORD *)(a1 + 0x54) + 0x18),
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                     &Actor `RTTI Type Descriptor',
                     0);
    if ( v13 )
    {
      if ( (_BYTE)a5 )
      {
        v38.m_data = 0;
        v38.m_dataLen = 0;
        v38.m_bufLen = 0;
        v14 = *(Actor **)(a1 + 0x48);
        v40 = 0;
        if ( v14 )
        {
          sub_5EF930(v14);
          *(_DWORD *)(a1 + 0x48) = 0;
        }
        BSStringT_Set(&v38, *(const char **)(*(_DWORD *)(a1 + 0x58) + 0x10), 0);
        if ( ((int (__usercall *)@<eax>(LowProcess *@<ecx>, double@<st0>, double@<st1>, double@<st2>))v13->members.super.process->Unk_97)(
               v13->members.super.process,
               a4,
               a3,
               a2)
          || ((unsigned __int8 (__thiscall *)(LowProcess *))v13->members.super.process->Unk_93)(v13->members.super.process)
          || !bBackgroundLoadLipFiles
          || ((unsigned __int8 (__thiscall *)(LowProcess *))v13->members.super.process->Unk_96)(v13->members.super.process) )
        {
          if ( (!((unsigned __int8 (__thiscall *)(LowProcess *))v13->members.super.process->Unk_93)(v13->members.super.process)
             || ((unsigned __int8 (__thiscall *)(LowProcess *))v13->members.super.process->Unk_96)(v13->members.super.process))
            && (((int (__thiscall *)(LowProcess *))v13->members.super.process->Unk_97)(v13->members.super.process)
             || ((unsigned __int8 (__thiscall *)(LowProcess *))v13->members.super.process->Unk_96)(v13->members.super.process)
             || !bBackgroundLoadLipFiles) )
          {
            v19 = *(_DWORD *)(a1 + 0x58);
            v20 = *(_DWORD *)(v19 + 0xC);
            v21 = *(_DWORD *)(v19 + 8);
            Len = BSStringT_GetLen((BSStringT *)v19);
            Actor::InitDialogue(v13, v38.m_data, (int **)(a1 + 0x3C), v21, v20, Len, 1, 0, 0, 1);
            *(float *)(a1 + 0x44) = a4;
            *(_DWORD *)(a1 + 0x48) = v13;
            ((void (__thiscall *)(LowProcess *, _DWORD))v13->members.super.process->Unk_98)(
              v13->members.super.process,
              0);
            *(_BYTE *)(a1 + 0x4C) = 0;
            ((void (__thiscall *)(LowProcess *, _DWORD))v13->members.super.process->Unk_95)(
              v13->members.super.process,
              0);
            v23 = (ActorAnimData *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x48) + 0x164))(*(_DWORD *)(a1 + 0x48));
            v24 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x60) + 0x164))(*(_DWORD *)(a1 + 0x60));
            v41 = (AnimSequenceSingle *)v24;
            if ( v23 )
            {
              if ( v24 )
              {
                v25 = sub_521450(
                        (TESObjectREFR *)g_idleAnimationMap,
                        *(TESObjectREFR **)(a1 + 0x48),
                        *(_BYTE **)(a1 + 0x60));
                v26 = (UInt32)v25;
                if ( v25 )
                {
                  v27 = sub_520200(v25);
                  sub_477DB0(v23, v26, *(TESObjectREFR **)(a1 + 0x48), v27, 2);
                  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 0x5C) + 0x58) + 0x68))(
                    *(_DWORD *)(*(_DWORD *)(a1 + 0x5C) + 0x58),
                    0);
                }
                v28 = *(TESObjectREFR **)(a1 + 0x60);
                if ( v28 != *(TESObjectREFR **)(a1 + 0x48) )
                {
                  v29 = sub_521450((TESObjectREFR *)g_idleAnimationMap, v28, *(_BYTE **)(a1 + 0x48));
                  v30 = (UInt32)v29;
                  if ( v29 )
                  {
                    v31 = sub_520200(v29);
                    sub_477DB0((ActorAnimData *)v41, v30, *(TESObjectREFR **)(a1 + 0x60), v31, 2);
                    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 0x60) + 0x58) + 0x68))(
                      *(_DWORD *)(*(_DWORD *)(a1 + 0x60) + 0x58),
                      0);
                  }
                }
              }
            }
            if ( (DialoguePackage *)a1 == TESDataHandler_g_PlayerRef->dialoguePackage || byte_B3BDA5 )
            {
              if ( sub_6B7C20(*(Unk1C **)(a1 + 0x50)) )
              {
                v32 = (Unk1C *)sub_6B7C20(*(Unk1C **)(a1 + 0x50));
                if ( sub_6B7C20(v32) )
                {
                  v33 = (Unk1C *)sub_6B7C20(*(Unk1C **)(a1 + 0x50));
                  if ( *(_DWORD *)sub_6B7C20(v33) )
                  {
                    if ( byte_B13208 )
                    {
                      v34 = (Unk1C *)sub_6B7C20(*(Unk1C **)(a1 + 0x50));
                      v35 = (const char **)sub_6B7C20(v34);
                      GameUI_QueueMessage(*v35, *(_DWORD *)(a1 + 0x3C), 0, flt_A30634);
                    }
                  }
                }
              }
            }
            if ( *(float *)(a1 + 0x44) <= 0.0 )
            {
              v42 = (AnimSequenceSingle *)BSStringT_GetLen(*(BSStringT **)(a1 + 0x58));
              v36 = (double)(int)v42;
              if ( (int)v42 < 0 )
                v36 = v36 + flt_A2FC78;
              v39 = v36;
              SafeFloatPointer = GameSetting_GetSafeFloatPointer((int *)&unk_B36AF8);
              *(float *)(a1 + 0x44) = *(float *)SafeFloatPointer * v39;
            }
          }
        }
        else
        {
          v15 = *(_DWORD *)(a1 + 0x58);
          v16 = *(_DWORD *)(v15 + 0xC);
          v17 = *(_DWORD *)(v15 + 8);
          v18 = BSStringT_GetLen((BSStringT *)v15);
          Actor::InitDialogue(v13, v38.m_data, (int **)(a1 + 0x3C), v17, v16, v18, 1, 0, 1, 1);
          *(float *)(a1 + 0x44) = a4;
          *(_DWORD *)(a1 + 0x48) = v13;
          if ( ((unsigned __int8 (__thiscall *)(LowProcess *))v13->members.super.process->Unk_93)(v13->members.super.process) )
            *(_BYTE *)(a1 + 0x4C) = 1;
        }
        v40 = 0xFFFFFFFF;
        BSStringT_Clear((unsigned int *)&v38);
      }
    }
  }
}
