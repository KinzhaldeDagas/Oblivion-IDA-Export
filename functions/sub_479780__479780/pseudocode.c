void __userpurge sub_479780(char *this@<ecx>, double st5_0@<st2>, double a3@<st1>, double a4@<st0>, int a5)
{
  UInt32 v5; // edi
  char *v7; // ebp
  bool v8; // zf
  PlayerCharacter *v9; // ebp
  PlayerCharacter *v10; // ecx
  int v11; // ebp
  char v12; // al
  const char *v13; // eax
  const char *v14; // esi
  const char *v15; // eax
  char *v16; // esi
  Ni2DBuffer *v17; // eax
  int v18; // ebp
  char *m_data; // ecx
  int *v20; // esi
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  _DWORD *v25; // ecx
  int (__thiscall *v26)(_DWORD *, int); // eax
  const char *v27; // eax
  Actor *v28; // esi
  _DWORD *v29; // ebp
  void (__thiscall **v30)(_DWORD *, int, char *, void *, Actor *); // edi
  int v31; // eax
  _DWORD *v32; // ebp
  void (__thiscall **v33)(_DWORD *, int, char *, void **, Actor *); // edi
  int v34; // eax
  TESObjectREFR *v35; // [esp-8h] [ebp-E0h]
  void *AnimData; // [esp-8h] [ebp-E0h]
  void **v37; // [esp-8h] [ebp-E0h]
  int *PlayerNode; // [esp-4h] [ebp-DCh]
  int v39; // [esp-4h] [ebp-DCh]
  int v40; // [esp-4h] [ebp-DCh]
  BSStringT Src; // [esp+14h] [ebp-C4h] BYREF
  int v42; // [esp+1Ch] [ebp-BCh]
  UInt32 v43; // [esp+20h] [ebp-B8h] BYREF
  _DWORD *a1; // [esp+24h] [ebp-B4h]
  TESObjectREFR *v45; // [esp+28h] [ebp-B0h]
  void (__stdcall ***v46)(signed int); // [esp+2Ch] [ebp-ACh] BYREF
  void (__thiscall ***v47)(_DWORD, int); // [esp+30h] [ebp-A8h]
  float v48; // [esp+3Ch] [ebp-9Ch]
  float v49; // [esp+40h] [ebp-98h]
  float v50; // [esp+44h] [ebp-94h]
  unsigned __int8 v51[128]; // [esp+48h] [ebp-90h] BYREF
  int v52; // [esp+D4h] [ebp-4h]

  v5 = 0;
  if ( a5 && *(_BYTE *)(a5 + 4) == 0x21 )
  {
    v7 = this + 0xDC;
    sub_478780(this, (_BYTE)this - 0x24, st5_0, a3, a4, (int)(this + 0xDC), 1, 0);
    *(_DWORD *)v7 = a5;
    *((_DWORD *)this + 0x38) = a5 + 0x30;
    v8 = *(_BYTE *)(a5 + 0x90) == 5;
    v42 = 9;
    if ( v8 )
      v42 = 0xE;
    v9 = *((PlayerCharacter **)this + 0x54);
    v10 = TESDataHandler_g_PlayerRef;
    v8 = v9 == TESDataHandler_g_PlayerRef;
    v45 = (TESObjectREFR *)v9;
    if ( v8 )
    {
      v11 = a5 + 0x30;
      v12 = sub_65D770(v10, (int)this);
      PlayerNode = (int *)PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, v12);
      v35 = *((TESObjectREFR **)this + 0x54);
      v13 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v11 + 0x14))(v11);
      *((_DWORD *)this + 0x39) = sub_479450(v13, v42, v35, PlayerNode);
      if ( this == (char *)sub_6600D0(TESDataHandler_g_PlayerRef, 0) )
      {
        Src.m_data = 0;
        *(_DWORD *)&Src.m_dataLen = 0;
        v14 = *(const char **)(a5 + 0x4C);
        v52 = 0;
        if ( !v14 )
          v14 = EmptyString;
        _sprintf((char *)v51, "%s\\%s", "Icons", v14);
        sub_57B190(v11, st5_0, a3, a4, v51);
        FormHeapFree(0);
      }
      goto LABEL_50;
    }
    v15 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)(a5 + 0x30) + 0x14))(a5 + 0x30);
    if ( !v15 || !v9 || (a1 = v9->super.super.super.super.niNode) == 0 )
    {
      v18 = 0;
LABEL_49:
      *((_DWORD *)this + 0x39) = v18;
LABEL_50:
      Src.m_data = 0;
      *(_DWORD *)&Src.m_dataLen = 0;
      v25 = *((_DWORD **)this + 0x37);
      v39 = v25[3];
      v26 = *(int (__thiscall **)(_DWORD *, int))(*v25 + 0xD4);
      v52 = 3;
      v27 = (const char *)v26(v25, v39);
      BSStringT_Static_Format(&Src, "%s %s (%08X)", *(const char **)off_B065AC, v27, v40);
      NiObjectNET_SetName(*((NiObjectNET **)this + 0x39), Src.m_data);
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x54) + 0x190))(*((_DWORD *)this + 0x54)) )
      {
        v28 = *((Actor **)this + 0x54);
        if ( v28->members.super.process )
        {
          if ( v28 == (Actor *)TESDataHandler_g_PlayerRef && this == (char *)sub_6600D0(TESDataHandler_g_PlayerRef, 1) )
          {
            v29 = &v28->members.super.process->__vftable;
            v30 = (void (__thiscall **)(_DWORD *, int, char *, void *, Actor *))(*v29 + 0x150);
            AnimData = Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 1);
            LOBYTE(v31) = Actor_IsWeaponOut(v28);
            (*v30)(v29, v31, this, AnimData, v28);
          }
          else
          {
            v32 = &v28->members.super.process->__vftable;
            v33 = (void (__thiscall **)(_DWORD *, int, char *, void **, Actor *))(*v32 + 0x150);
            v37 = TESObjectREFR_GetAnimData(v28);
            LOBYTE(v34) = Actor_IsWeaponOut(v28);
            (*v33)(v32, v34, this, v37, v28);
          }
        }
      }
      FormHeapFree((unsigned int)Src.m_data);
      return;
    }
    v16 = (char *)sub_439EB0((int *)ModelLoaderPtr, v15, 1, (void *)3, 1);
    Src.m_data = v16;
    sub_478B90((NiTPointerMap<NiObject *,NiObject *> **)&v46);
    v50 = 1.0;
    v49 = 1.0;
    v48 = 1.0;
    v52 = 2;
    v43 = 0;
    if ( sub_480820(v16) )
    {
      v17 = (Ni2DBuffer *)sub_4430C0(v16, (int)&v46);
      NiSmartPointer_Set__((Ni2DBuffer **)&v43, v17);
      v18 = v43;
      v5 = v43;
    }
    else
    {
      v18 = sub_700610(v16, (int)&v46);
    }
    sub_478220((NiObjectNET *)v16, v18, v42, v45);
    sub_6FFC60((_DWORD *)v18);
    if ( !v18 )
    {
LABEL_40:
      LOBYTE(v52) = 1;
      if ( v5 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
          (**(void (__thiscall ***)(UInt32, int))v5)(v5, 1);
      }
      v52 = 0xFFFFFFFF;
      if ( v46 )
        ((void (__thiscall *)(void (__stdcall ***)(signed int), int))**v46)(v46, 1);
      if ( v47 )
        (**v47)(v47, 1);
      goto LABEL_49;
    }
    if ( NiRTTI::IsObjectOfRTTIType((NiRTTI *)dword_B35288, (NiObject *)v18) )
      sub_4A01B0((_BYTE *)v18, 7);
    *(float *)(v18 + 0x54) = Vector3_InitValue_;
    *(float *)(v18 + 0x58) = *(&Vector3_InitValue_ + 1);
    *(float *)(v18 + 0x5C) = dword_B3F9B0;
    qmemcpy((void *)(v18 + 0x30), &stru_B26AF0[0xA].unk2C, 0x24u);
    if ( sub_471B80(v18) )
    {
      PrintError("Tyring to add skinned object '%s' as an add on to skeleton.", *(const char **)(v18 + 8));
    }
    else
    {
      sub_479140(a1, (_DWORD *)v18, (NiObjectNET *)Src.m_data, 0, 0xFFFFFFFF);
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v18 + 8))(v18) )
      {
        v20 = 0;
        Src.m_data = *(char **)(v18 + 0x1C);
        m_data = Src.m_data;
        if ( (!Src.m_data || v42 == 7 || v42 == 6) && v42 != 0xFFFFFFFF )
        {
          v21 = *(_DWORD *)(4 * v42 + 0xB065C8);
          if ( v21 != 0xFFFFFFFF )
          {
            v22 = NiObjectNET_LookupObjectByName(a1, *(char **)(4 * v21 + 0xB06550));
            m_data = Src.m_data;
            v20 = (int *)v22;
          }
        }
        if ( m_data )
        {
          if ( v42 != 7 && v42 != 6 )
            goto LABEL_39;
          v23 = ((int (__thiscall *)(TESObjectREFR *))v45->vtbl->Unk_5A)(v45);
          if ( v23 )
          {
            if ( *(_DWORD *)(v18 + 0x1C) == *(_DWORD *)(v23 + 0x20) )
              goto LABEL_39;
          }
          if ( !v20 )
            goto LABEL_39;
          v24 = *v20;
        }
        else if ( v20 )
        {
          v24 = *v20;
        }
        else
        {
          v24 = *a1;
        }
        (*(void (__stdcall **)(int, int))(v24 + 0x84))(v18, 1);
      }
    }
LABEL_39:
    NiNode_UpdateDynamicEffectState((NiNode *)v18);
    NiAVObject_InitializePropertyState((NiAVObject *)v18);
    v5 = v43;
    goto LABEL_40;
  }
}
