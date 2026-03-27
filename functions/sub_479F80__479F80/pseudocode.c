void __userpurge sub_479F80(
        int this@<ecx>,
        char bp0@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        UInt32 a6)
{
  UInt32 v7; // esi
  int v8; // edi
  _BYTE *v9; // eax
  int IsFemale; // eax
  int v11; // eax
  int v12; // esi
  int v13; // esi
  char v14; // al
  const char *v15; // eax
  const char *v16; // eax
  NiObjectNET *v17; // esi
  Ni2DBuffer *v18; // eax
  int v19; // ebp
  NiExtraData *ExtraData; // eax
  char *v21; // eax
  int v22; // edx
  char *m_data; // ecx
  _DWORD *v24; // ecx
  int (__thiscall *v25)(_DWORD *, int); // eax
  const char *v26; // eax
  char *v27; // esi
  TESObjectREFR *v28; // [esp-8h] [ebp-50h]
  int *PlayerNode; // [esp-4h] [ebp-4Ch]
  int v30; // [esp-4h] [ebp-4Ch]
  int v31; // [esp-4h] [ebp-4Ch]
  BSStringT Src; // [esp+18h] [ebp-30h] BYREF
  void (__stdcall ***v33)(signed int); // [esp+20h] [ebp-28h] BYREF
  void (__thiscall ***v34)(_DWORD, int); // [esp+24h] [ebp-24h]
  float v35; // [esp+30h] [ebp-18h]
  float v36; // [esp+34h] [ebp-14h]
  float v37; // [esp+38h] [ebp-10h]
  int v38; // [esp+44h] [ebp-4h]

  v7 = a6;
  v8 = 0;
  if ( a6 )
  {
    if ( *(_BYTE *)(a6 + 4) == 0x14 )
    {
      sub_478780((char *)this, bp0, a3, a4, a5, this + 0x11C, 1, 0);
      v9 = (_BYTE *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 0x150) + 0x170))(*(_DWORD *)(this + 0x150));
      IsFemale = TESActorBase_IsFemale(v9);
      sub_4691D0(v7 + 0x64, a3, a4, a5, (char *)this, IsFemale, 0xFFFFFFFF);
      v11 = *(_DWORD *)(this + 0x120);
      if ( v11 )
      {
        v12 = *(_DWORD *)(this + 0x150);
        if ( (PlayerCharacter *)v12 == TESDataHandler_g_PlayerRef )
        {
          v13 = *(_DWORD *)(this + 0x120);
          v14 = sub_65D770(TESDataHandler_g_PlayerRef, this);
          PlayerNode = (int *)PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, v14);
          v28 = *(TESObjectREFR **)(this + 0x150);
          v15 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v13 + 0x14))(v13);
          *(_DWORD *)(this + 0x124) = sub_479450(v15, 0xD, v28, PlayerNode);
        }
        else
        {
          v16 = (const char *)(*(int (__usercall **)@<eax>(_DWORD@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)v11 + 0x14))(
                                *(_DWORD *)(this + 0x120),
                                a5,
                                a4,
                                a3);
          if ( v16 && v12 && (Src.m_data = *(char **)(v12 + 0x3C)) != 0 )
          {
            v17 = (NiObjectNET *)sub_439EB0((int *)ModelLoaderPtr, v16, 1, (void *)3, 1);
            sub_478B90((NiTPointerMap<NiObject *,NiObject *> **)&v33);
            v37 = 1.0;
            v36 = 1.0;
            v35 = 1.0;
            v38 = 1;
            a6 = 0;
            if ( sub_480820(v17) )
            {
              v18 = (Ni2DBuffer *)sub_4430C0(v17, (int)&v33);
              NiSmartPointer_Set__((Ni2DBuffer **)&a6, v18);
              v19 = a6;
              v8 = a6;
            }
            else
            {
              v19 = sub_700610(v17, (int)&v33);
            }
            ExtraData = NiObjectNET_GetExtraData(v17, dword_A7D0EC);
            if ( ExtraData )
            {
              if ( ((int)ExtraData[1].__vftable & 0x10) != 0 )
                sub_4E26F0(v19);
            }
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
                sub_479140(Src.m_data, (_DWORD *)v19, v17, 0, 0xFFFFFFFF);
                if ( (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 8))(v19) )
                {
                  if ( !*(_DWORD *)(v19 + 0x1C) )
                  {
                    if ( dword_B065FC == 0xFFFFFFFF
                      || (v21 = (char *)NiObjectNET_LookupObjectByName(
                                          Src.m_data,
                                          *(char **)(4 * dword_B065FC + 0xB06550))) == 0 )
                    {
                      v22 = *(_DWORD *)Src.m_data;
                      m_data = Src.m_data;
                    }
                    else
                    {
                      v22 = *(_DWORD *)v21;
                      m_data = v21;
                    }
                    (*(void (__thiscall **)(char *, int, int))(v22 + 0x84))(m_data, v19, 1);
                  }
                }
              }
              NiNode_UpdateDynamicEffectState((NiNode *)v19);
              NiAVObject_InitializePropertyState((NiAVObject *)v19);
              v8 = a6;
            }
            LOBYTE(v38) = 0;
            if ( v8 )
            {
              if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) )
                (**(void (__thiscall ***)(int, int))v8)(v8, 1);
            }
            v38 = 0xFFFFFFFF;
            if ( v33 )
              ((void (__thiscall *)(void (__stdcall ***)(signed int), int))**v33)(v33, 1);
            if ( v34 )
              (**v34)(v34, 1);
          }
          else
          {
            v19 = 0;
          }
          *(_DWORD *)(this + 0x124) = v19;
        }
        Src.m_data = 0;
        Src.m_dataLen = 0;
        Src.m_bufLen = 0;
        v24 = *(_DWORD **)(this + 0x11C);
        v30 = v24[3];
        v25 = *(int (__thiscall **)(_DWORD *, int))(*v24 + 0xD4);
        v38 = 2;
        v26 = (const char *)v25(v24, v30);
        BSStringT_Static_Format(&Src, "%s %s (%08X)", *(const char **)off_B065BC, v26, v31);
        v27 = Src.m_data;
        NiObjectNET_SetName(*(NiObjectNET **)(this + 0x124), Src.m_data);
        FormHeapFree((unsigned int)v27);
      }
    }
  }
}
