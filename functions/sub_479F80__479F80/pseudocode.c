void __userpurge sub_479F80(int this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, UInt32 a5)
{
  UInt32 v7; // esi
  UInt32 v8; // edi
  _BYTE *v9; // eax
  int IsFemale; // eax
  int v11; // eax
  int v12; // esi
  int v13; // esi
  char v14; // al
  const char *v15; // eax
  const char *v16; // eax
  NiObjectNET *ModelData; // esi
  Ni2DBuffer *v18; // eax
  UInt32 v19; // ebp
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

  v7 = a5; /*0x479fa9*/
  v8 = 0; /*0x479fad*/
  if ( a5 ) /*0x479fb1*/
  {
    if ( *(_BYTE *)(a5 + 4) == 0x14 ) /*0x479fbb*/
    {
      ActorSkinInfo_ClearOrReplaceEquipmentSlot((char *)this, this + 0x11C, 1, 0); /*0x479fcb*/
      v9 = (_BYTE *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 0x150) + 0x170))(*(_DWORD *)(this + 0x150)); /*0x479fe0*/
      IsFemale = TESActorBase_IsFemale(v9); /*0x479fe4*/
      sub_4691D0(v7 + 0x64, a2, a3, a4, (char *)this, IsFemale, 0xFFFFFFFF); /*0x479fee*/
      v11 = *(_DWORD *)(this + 0x120); /*0x479ff3*/
      if ( v11 ) /*0x479ffb*/
      {
        v12 = *(_DWORD *)(this + 0x150); /*0x47a001*/
        if ( (PlayerCharacter *)v12 == reference ) /*0x47a00f*/
        {
          v13 = *(_DWORD *)(this + 0x120); /*0x47a012*/
          v14 = sub_65D770(reference, this); /*0x47a014*/
          PlayerNode = (int *)PlayerCharacter_GetNodeByPerspective(reference, v14); /*0x47a027*/
          v28 = *(TESObjectREFR **)(this + 0x150); /*0x47a02e*/
          v15 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v13 + 0x14))(v13); /*0x47a036*/
          *(_DWORD *)(this + 0x124) = Actor_LoadCloneAndAttachModel3D(v15, 0xD, v28, PlayerNode); /*0x47a041*/
        }
        else
        {
          v16 = (const char *)(*(int (__usercall **)@<eax>(_DWORD@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)v11 + 0x14))( /*0x47a053*/
                                *(_DWORD *)(this + 0x120),
                                a4,
                                a3,
                                a2);
          if ( v16 && v12 && (Src.m_data = *(char **)(v12 + 0x3C)) != 0 ) /*0x47a06e*/
          {
            ModelData = (NiObjectNET *)ModelLoader_LoadModelData((int *)MEMORY[0xB33A1C], v16, 1, (void *)3, 1); /*0x47a086*/
            OB_NiCloningProcess_ctor((NiTPointerMap<NiObject *,NiObject *> **)&v33); /*0x47a090*/
            v37 = 1.0; /*0x47a097*/
            v36 = 1.0; /*0x47a09b*/
            v35 = 1.0; /*0x47a09f*/
            v38 = 1; /*0x47a0a3*/
            a5 = 0; /*0x47a0a7*/
            if ( sub_480820(ModelData) ) /*0x47a0b1*/
            {
              v18 = (Ni2DBuffer *)sub_4430C0(ModelData, (int)&v33); /*0x47a0c9*/
              NiSmartPointer_Set__((Ni2DBuffer **)&a5, v18); /*0x47a0d3*/
              v19 = a5; /*0x47a0d8*/
              v8 = a5; /*0x47a0dc*/
            }
            else
            {
              v19 = sub_700610(ModelData, (int)&v33); /*0x47a0ec*/
            }
            ExtraData = NiObjectNET_GetExtraData(ModelData, dword_A7D0EC); /*0x47a0f5*/
            if ( ExtraData ) /*0x47a0fc*/
            {
              if ( ((int)ExtraData[1].__vftable & 0x10) != 0 ) /*0x47a106*/
                sub_4E26F0((int)ModelData, v19); /*0x47a109*/
            }
            sub_6FFC60((_DWORD *)v19); /*0x47a113*/
            if ( v19 ) /*0x47a11a*/
            {
              if ( NiRTTI::IsObjectOfRTTIType((NiRTTI *)&MEMORY[0xB33E90][0x13F8], (NiObject *)v19) ) /*0x47a126*/
                sub_4A01B0((_BYTE *)v19, 7); /*0x47a136*/
              *(float *)(v19 + 0x54) = g_zeroNiPoint3; /*0x47a141*/
              *(float *)(v19 + 0x58) = *(&g_zeroNiPoint3 + 1); /*0x47a14a*/
              *(float *)(v19 + 0x5C) = MEMORY[0xB3F9B0][0]; /*0x47a152*/
              qmemcpy((void *)(v19 + 0x30), &stru_B26AF0[0xA].unk2C, 0x24u); /*0x47a163*/
              if ( sub_471B80(v19) ) /*0x47a165*/
              {
                PrintError("Tyring to add skinned object '%s' as an add on to skeleton.", *(const char **)(v19 + 8)); /*0x47a17a*/
              }
              else
              {
                AttachModelUsingPrnExtraData(Src.m_data, (_DWORD *)v19, ModelData, 0, 0xFFFFFFFF); /*0x47a195*/
                if ( (*(int (__thiscall **)(UInt32))(*(_DWORD *)v19 + 8))(v19) ) /*0x47a1a5*/
                {
                  if ( !*(_DWORD *)(v19 + 0x1C) ) /*0x47a1ab*/
                  {
                    if ( dword_B065FC == 0xFFFFFFFF /*0x47a1ce*/
                      || (v21 = (char *)NiObjectNET_LookupObjectByName(
                                          Src.m_data,
                                          *(char **)(4 * dword_B065FC + 0xB06550))) == 0 )
                    {
                      v22 = *(_DWORD *)Src.m_data; /*0x47a1d6*/
                      m_data = Src.m_data; /*0x47a1d8*/
                    }
                    else
                    {
                      v22 = *(_DWORD *)v21; /*0x47a1d0*/
                      m_data = v21; /*0x47a1d2*/
                    }
                    (*(void (__thiscall **)(char *, UInt32, int))(v22 + 0x84))(m_data, v19, 1); /*0x47a1e3*/
                  }
                }
              }
              NiNode_UpdateDynamicEffectState((NiNode *)v19); /*0x47a1e7*/
              NiAVObject_InitializePropertyState((NiAVObject *)v19); /*0x47a1ee*/
              v8 = a5; /*0x47a1f3*/
            }
            LOBYTE(v38) = 0; /*0x47a1f9*/
            if ( v8 ) /*0x47a1fe*/
            {
              if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x47a204*/
                (**(void (__thiscall ***)(UInt32, int))v8)(v8, 1); /*0x47a216*/
            }
            v38 = 0xFFFFFFFF; /*0x47a21e*/
            if ( v33 ) /*0x47a226*/
              ((void (__thiscall *)(void (__stdcall ***)(signed int), int))**v33)(v33, 1); /*0x47a22e*/
            if ( v34 ) /*0x47a236*/
              (**v34)(v34, 1); /*0x47a23e*/
          }
          else
          {
            v19 = 0; /*0x47a244*/
          }
          *(_DWORD *)(this + 0x124) = v19; /*0x47a246*/
        }
        Src.m_data = 0; /*0x47a24c*/
        Src.m_dataLen = 0; /*0x47a250*/
        Src.m_bufLen = 0; /*0x47a255*/
        v24 = *(_DWORD **)(this + 0x11C); /*0x47a25a*/
        v30 = v24[3]; /*0x47a265*/
        v25 = *(int (__thiscall **)(_DWORD *, int))(*v24 + 0xD4); /*0x47a266*/
        v38 = 2; /*0x47a26c*/
        v26 = (const char *)v25(v24, v30); /*0x47a274*/
        BSStringT_Static_Format(&Src, "%s %s (%08X)", *(const char **)off_B065BC, v26, v31); /*0x47a288*/
        v27 = Src.m_data; /*0x47a28d*/
        NiObjectNET_SetName(*(NiObjectNET **)(this + 0x124), Src.m_data); /*0x47a29b*/
        FormHeapFree((unsigned int)v27); /*0x47a2a1*/
      }
    }
  }
}
