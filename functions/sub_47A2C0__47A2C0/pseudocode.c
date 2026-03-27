void __userpurge sub_47A2C0(char *this@<ecx>, double st5_0@<st2>, double a3@<st1>, double a4@<st0>, UInt32 a5)
{
  UInt32 v6; // esi
  char *v7; // ebp
  int v8; // eax
  int v9; // edi
  int v10; // esi
  char v11; // al
  const char *v12; // eax
  BSExtraDataVtbl *v13; // eax
  PlayerCharacter *v14; // ecx
  void (__thiscall *Destructor)(BSExtraData *); // esi
  char v16; // al
  char v17; // al
  const char *v18; // eax
  int v19; // ebp
  NiObjectNET *v20; // esi
  Ni2DBuffer *v21; // eax
  char *v22; // eax
  int v23; // edx
  char *m_data; // ecx
  void (__thiscall ***v25)(_DWORD, int); // esi
  _DWORD *v26; // ecx
  int (__thiscall *v27)(_DWORD *, int); // eax
  const char *v28; // eax
  NiObjectNET *v29; // ebx
  char *v30; // esi
  TESObjectREFR *v31; // [esp-8h] [ebp-50h]
  int *PlayerNode; // [esp-4h] [ebp-4Ch]
  int v33; // [esp-4h] [ebp-4Ch]
  int v34; // [esp-4h] [ebp-4Ch]
  BSStringT Src; // [esp+18h] [ebp-30h] BYREF
  void (__stdcall ***v36)(signed int); // [esp+20h] [ebp-28h] BYREF
  void (__thiscall ***v37)(_DWORD, int); // [esp+24h] [ebp-24h]
  float v38; // [esp+30h] [ebp-18h]
  float v39; // [esp+34h] [ebp-14h]
  float v40; // [esp+38h] [ebp-10h]
  int v41; // [esp+44h] [ebp-4h]

  v6 = a5;
  if ( a5 )
  {
    if ( *(_BYTE *)(a5 + 4) == 0x1A )
    {
      v7 = this + 0x12C;
      sub_478780(this, (_BYTE)this + 0x2C, st5_0, a3, a4, (int)(this + 0x12C), 1, 0);
      if ( *(_BYTE *)(v6 + 4) == 0x1A )
      {
        sub_478780(this, (char)v7, st5_0, a3, a4, (int)(this + 0x12C), 1, 0);
        *(_DWORD *)v7 = v6;
        *((_DWORD *)this + 0x4C) = v6 + 0x30;
      }
      v8 = *((_DWORD *)this + 0x4C);
      if ( v8 )
      {
        v9 = *((_DWORD *)this + 0x54);
        if ( (PlayerCharacter *)v9 == TESDataHandler_g_PlayerRef )
        {
          v10 = *((_DWORD *)this + 0x4C);
          v11 = sub_65D770(TESDataHandler_g_PlayerRef, (int)this);
          PlayerNode = (int *)PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, v11);
          v31 = *((TESObjectREFR **)this + 0x54);
          v12 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v10 + 0x14))(v10);
          *((_DWORD *)this + 0x4D) = sub_479450(v12, 0xE, v31, PlayerNode);
          v13 = sub_41E650(&TESDataHandler_g_PlayerRef->super.super.super.super.baseExtraList);
          v14 = TESDataHandler_g_PlayerRef;
          if ( v13 )
          {
            Destructor = sub_41E650(&v14->super.super.super.super.baseExtraList)->Destructor;
            v16 = sub_65D770(TESDataHandler_g_PlayerRef, (int)this);
            sub_663870(TESDataHandler_g_PlayerRef, (int)Destructor, v16);
          }
          else
          {
            v17 = sub_65D770(v14, (int)this);
            sub_663870(TESDataHandler_g_PlayerRef, 0, v17);
          }
        }
        else
        {
          v18 = (const char *)(*(int (__usercall **)@<eax>(_DWORD@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)v8 + 0x14))(
                                *((_DWORD *)this + 0x4C),
                                a4,
                                a3,
                                st5_0);
          v19 = 0;
          if ( v18 )
          {
            if ( v9 )
            {
              Src.m_data = *(char **)(v9 + 0x3C);
              if ( Src.m_data )
              {
                v20 = (NiObjectNET *)sub_439EB0((int *)ModelLoaderPtr, v18, 1, (void *)3, 1);
                sub_478B90((NiTPointerMap<NiObject *,NiObject *> **)&v36);
                v40 = 1.0;
                v39 = 1.0;
                v38 = 1.0;
                v41 = 1;
                a5 = 0;
                if ( sub_480820(v20) )
                {
                  v21 = (Ni2DBuffer *)sub_4430C0(v20, (int)&v36);
                  NiSmartPointer_Set__((Ni2DBuffer **)&a5, v21);
                  v19 = a5;
                }
                else
                {
                  v19 = sub_700610(v20, (int)&v36);
                }
                sub_478220(v20, v19, 0xE, (TESObjectREFR *)v9);
                sub_6FFC60((_DWORD *)v19);
                if ( v19 )
                {
                  if ( NiRTTI::IsObjectOfRTTIType((NiRTTI *)dword_B35288, (NiObject *)v19) )
                    sub_4A01B0((_BYTE *)v19, 7);
                  *(float *)(v19 + 0x54) = Vector3_InitValue_;
                  *(float *)(v19 + 0x58) = *(&Vector3_InitValue_ + 1);
                  *(float *)(v19 + 0x5C) = dword_B3F9B0;
                  qmemcpy((void *)(v19 + 0x30), &stru_B26AF0[0xA].unk2C, 0x24u);
                  if ( sub_471B80(v19) )
                  {
                    PrintError("Tyring to add skinned object '%s' as an add on to skeleton.", *(const char **)(v19 + 8));
                  }
                  else
                  {
                    sub_479140(Src.m_data, (_DWORD *)v19, v20, 0, 0xFFFFFFFF);
                    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 8))(v19) )
                    {
                      if ( !*(_DWORD *)(v19 + 0x1C) )
                      {
                        if ( dword_B06600 == 0xFFFFFFFF
                          || (v22 = (char *)NiObjectNET_LookupObjectByName(
                                              Src.m_data,
                                              *(char **)(4 * dword_B06600 + 0xB06550))) == 0 )
                        {
                          v23 = *(_DWORD *)Src.m_data;
                          m_data = Src.m_data;
                        }
                        else
                        {
                          v23 = *(_DWORD *)v22;
                          m_data = v22;
                        }
                        (*(void (__thiscall **)(char *, int, int))(v23 + 0x84))(m_data, v19, 1);
                      }
                    }
                  }
                  NiNode_UpdateDynamicEffectState((NiNode *)v19);
                  NiAVObject_InitializePropertyState((NiAVObject *)v19);
                }
                v25 = (void (__thiscall ***)(_DWORD, int))a5;
                LOBYTE(v41) = 0;
                if ( a5 )
                {
                  if ( !InterlockedDecrement((volatile LONG *)(a5 + 4)) )
                    (**v25)(v25, 1);
                }
                v41 = 0xFFFFFFFF;
                if ( v36 )
                  ((void (__thiscall *)(void (__stdcall ***)(signed int), int))**v36)(v36, 1);
                if ( v37 )
                  (**v37)(v37, 1);
              }
            }
          }
          *((_DWORD *)this + 0x4D) = v19;
        }
        Src.m_data = 0;
        Src.m_dataLen = 0;
        Src.m_bufLen = 0;
        v26 = *((_DWORD **)this + 0x4B);
        v33 = v26[3];
        v27 = *(int (__thiscall **)(_DWORD *, int))(*v26 + 0xD4);
        v41 = 2;
        v28 = (const char *)v27(v26, v33);
        BSStringT_Static_Format(&Src, "%s %s (%08X)", *(const char **)off_B065C0, v28, v34);
        v29 = *((NiObjectNET **)this + 0x4D);
        v30 = Src.m_data;
        if ( v29 )
          NiObjectNET_SetName(v29, Src.m_data);
        FormHeapFree((unsigned int)v30);
      }
    }
  }
}
