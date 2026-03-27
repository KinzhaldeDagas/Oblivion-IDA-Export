void __userpurge sub_479C40(char *this@<ecx>, double st5_0@<st2>, double a3@<st1>, double a4@<st0>, UInt32 a5)
{
  char *m_data; // edi
  UInt32 v6; // esi
  int v7; // eax
  PlayerCharacter *v8; // esi
  int v9; // esi
  char v10; // al
  const char *v11; // eax
  int v12; // eax
  const char *v13; // eax
  NiObjectNET *v14; // ebx
  int v15; // esi
  Ni2DBuffer *v16; // eax
  int v17; // ebp
  NiExtraData *ExtraData; // eax
  _DWORD *v19; // eax
  int v20; // edx
  _DWORD *v21; // ecx
  _DWORD *v22; // ecx
  int (__thiscall *v23)(_DWORD *, int); // eax
  const char *v24; // eax
  char *v25; // esi
  TESObjectREFR *v26; // [esp-8h] [ebp-50h]
  int *PlayerNode; // [esp-4h] [ebp-4Ch]
  int v28; // [esp-4h] [ebp-4Ch]
  int v29; // [esp-4h] [ebp-4Ch]
  _DWORD *a1; // [esp+14h] [ebp-34h]
  BSStringT Src; // [esp+18h] [ebp-30h] BYREF
  void (__stdcall ***v32)(signed int); // [esp+20h] [ebp-28h] BYREF
  void (__thiscall ***v33)(_DWORD, int); // [esp+24h] [ebp-24h]
  float v34; // [esp+30h] [ebp-18h]
  float v35; // [esp+34h] [ebp-14h]
  float v36; // [esp+38h] [ebp-10h]
  int v37; // [esp+44h] [ebp-4h]

  m_data = this;
  Src.m_data = this;
  v6 = a5;
  if ( a5 )
  {
    if ( *(_BYTE *)(a5 + 4) == 0x22 )
    {
      sub_478780(this, 0, st5_0, a3, a4, (int)(this + 0x10C), 1, 0);
      if ( *(_BYTE *)(v6 + 4) == 0x22 )
      {
        sub_478780(m_data, 0, st5_0, a3, a4, (int)(m_data + 0x10C), 1, 0);
        *((_DWORD *)m_data + 0x43) = v6;
        *((_DWORD *)m_data + 0x44) = v6 + 0x30;
      }
      v7 = *((_DWORD *)m_data + 0x44);
      if ( v7 )
      {
        v8 = *((PlayerCharacter **)m_data + 0x54);
        if ( v8 == TESDataHandler_g_PlayerRef )
        {
          v9 = *((_DWORD *)m_data + 0x44);
          v10 = sub_65D770(TESDataHandler_g_PlayerRef, (int)m_data);
          PlayerNode = (int *)PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, v10);
          v26 = *((TESObjectREFR **)m_data + 0x54);
          v11 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v9 + 0x14))(v9);
          v12 = sub_479450(v11, 0xC, v26, PlayerNode);
        }
        else
        {
          v13 = (const char *)(*(int (__usercall **)@<eax>(_DWORD@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)v7 + 0x14))(
                                *((_DWORD *)m_data + 0x44),
                                a4,
                                a3,
                                st5_0);
          if ( v13 && v8 && (a1 = v8->super.super.super.super.niNode) != 0 )
          {
            v14 = (NiObjectNET *)sub_439EB0((int *)ModelLoaderPtr, v13, 1, (void *)3, 1);
            sub_478B90((NiTPointerMap<NiObject *,NiObject *> **)&v32);
            v36 = 1.0;
            v35 = 1.0;
            v34 = 1.0;
            v15 = 0;
            v37 = 1;
            a5 = 0;
            if ( sub_480820(v14) )
            {
              v16 = (Ni2DBuffer *)sub_4430C0(v14, (int)&v32);
              NiSmartPointer_Set__((Ni2DBuffer **)&a5, v16);
              v17 = a5;
              v15 = a5;
            }
            else
            {
              v17 = sub_700610(v14, (int)&v32);
            }
            ExtraData = NiObjectNET_GetExtraData(v14, dword_A7D0EC);
            if ( ExtraData )
            {
              if ( ((int)ExtraData[1].__vftable & 0x10) != 0 )
                sub_4E26F0(v17);
            }
            sub_6FFC60((_DWORD *)v17);
            if ( v17 )
            {
              if ( NiRTTI::IsObjectOfRTTIType((NiRTTI *)dword_B35288, (NiObject *)v17) )
                sub_4A01B0((_BYTE *)v17, 7);
              *(float *)(v17 + 0x54) = Vector3_InitValue_;
              *(float *)(v17 + 0x58) = *(&Vector3_InitValue_ + 1);
              *(float *)(v17 + 0x5C) = dword_B3F9B0;
              qmemcpy((void *)(v17 + 0x30), &stru_B26AF0[0xA].unk2C, 0x24u);
              if ( sub_471B80(v17) )
              {
                PrintError("Tyring to add skinned object '%s' as an add on to skeleton.", *(const char **)(v17 + 8));
              }
              else
              {
                sub_479140(a1, (_DWORD *)v17, v14, 0, 0xFFFFFFFF);
                if ( (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 8))(v17) )
                {
                  if ( !*(_DWORD *)(v17 + 0x1C) )
                  {
                    if ( dword_B065F8 == 0xFFFFFFFF
                      || (v19 = (_DWORD *)NiObjectNET_LookupObjectByName(a1, *(char **)(4 * dword_B065F8 + 0xB06550))) == 0 )
                    {
                      v20 = *a1;
                      v21 = a1;
                    }
                    else
                    {
                      v20 = *v19;
                      v21 = v19;
                    }
                    (*(void (__thiscall **)(_DWORD *, int, int))(v20 + 0x84))(v21, v17, 1);
                  }
                }
              }
              NiNode_UpdateDynamicEffectState((NiNode *)v17);
              NiAVObject_InitializePropertyState((NiAVObject *)v17);
              v15 = a5;
              m_data = Src.m_data;
            }
            LOBYTE(v37) = 0;
            if ( v15 )
            {
              if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) )
                (**(void (__thiscall ***)(int, int))v15)(v15, 1);
            }
            v37 = 0xFFFFFFFF;
            if ( v32 )
              ((void (__thiscall *)(void (__stdcall ***)(signed int), int))**v32)(v32, 1);
            if ( v33 )
              (**v33)(v33, 1);
            v12 = v17;
          }
          else
          {
            v12 = 0;
          }
        }
        *((_DWORD *)m_data + 0x45) = v12;
        Src.m_data = 0;
        Src.m_dataLen = 0;
        Src.m_bufLen = 0;
        v22 = *((_DWORD **)m_data + 0x43);
        v28 = v22[3];
        v23 = *(int (__thiscall **)(_DWORD *, int))(*v22 + 0xD4);
        v37 = 2;
        v24 = (const char *)v23(v22, v28);
        BSStringT_Static_Format(&Src, "%s %s (%08X)", *(const char **)off_B065B8, v24, v29);
        v25 = Src.m_data;
        NiObjectNET_SetName(*((NiObjectNET **)m_data + 0x45), Src.m_data);
        FormHeapFree((unsigned int)v25);
      }
    }
  }
}
