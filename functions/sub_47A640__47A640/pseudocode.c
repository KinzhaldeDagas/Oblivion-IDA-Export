void __userpurge sub_47A640(
        int this@<ecx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double a4@<st0>,
        _DWORD *a1,
        char a6)
{
  int v7; // ebx
  char *v8; // edi
  _BYTE *v9; // eax
  int IsFemale; // eax
  int *v11; // ebp
  int v12; // ebp
  char v13; // al
  const char *v14; // eax
  int v15; // eax
  const char *v16; // eax
  NiObjectNET *ModelData; // esi
  Ni2DBuffer *v18; // eax
  int v19; // ebp
  int v20; // edi
  int *v21; // esi
  int v22; // eax
  int v23; // eax
  int v24; // eax
  void (__thiscall ***v25)(_DWORD, int); // esi
  _DWORD *v26; // ecx
  int (__thiscall *v27)(_DWORD *, int); // eax
  const char *v28; // eax
  NiObjectNET *v29; // ecx
  char *m_data; // esi
  TESObjectREFR *v31; // [esp-8h] [ebp-54h]
  int *PlayerNode; // [esp-4h] [ebp-50h]
  int v33; // [esp-4h] [ebp-50h]
  int v34; // [esp-4h] [ebp-50h]
  UInt32 v35; // [esp+14h] [ebp-38h] BYREF
  NiObjectNET *v36; // [esp+18h] [ebp-34h]
  BSStringT Src; // [esp+1Ch] [ebp-30h] BYREF
  void (__stdcall ***v38)(signed int); // [esp+24h] [ebp-28h] BYREF
  void (__thiscall ***v39)(_DWORD, int); // [esp+28h] [ebp-24h]
  float v40; // [esp+34h] [ebp-18h]
  float v41; // [esp+38h] [ebp-14h]
  float v42; // [esp+3Ch] [ebp-10h]
  int v43; // [esp+48h] [ebp-4h]
  int *a1a; // [esp+50h] [ebp+4h]
  PlayerCharacter *v45; // [esp+54h] [ebp+8h]

  if ( a1 ) /*0x47a66f*/
  {
    if ( *((_BYTE *)a1 + 4) == 0x16 ) /*0x47a679*/
    {
      v7 = (a6 != 0) + 6; /*0x47a68c*/
      v8 = (char *)(0x10 * v7 + this); /*0x47a694*/
      Src.m_data = v8; /*0x47a69b*/
      ActorSkinInfo_ClearOrReplaceEquipmentSlot((char *)this, (int)(v8 + 0x4C), 1, 0); /*0x47a69f*/
      v9 = (_BYTE *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 0x150) + 0x170))(*(_DWORD *)(this + 0x150)); /*0x47a6b3*/
      IsFemale = TESActorBase_IsFemale(v9); /*0x47a6b7*/
      sub_4691D0((int)(a1 + 0x17), st5_0, st6_0, a4, (char *)this, IsFemale, v7); /*0x47a6c1*/
      v11 = (int *)(0x10 * ((a6 != 0) + 0xB) + this); /*0x47a6d0*/
      if ( *v11 ) /*0x47a6cc*/
      {
        if ( !sub_478290((void **)this, v7) ) /*0x47a6dc*/
        {
          v12 = *v11; /*0x47a6f7*/
          v45 = *(PlayerCharacter **)(this + 0x150); /*0x47a6fa*/
          if ( v45 == reference ) /*0x47a6fe*/
          {
            v13 = sub_65D770(reference, this); /*0x47a701*/
            PlayerNode = (int *)PlayerCharacter_GetNodeByPerspective(reference, v13); /*0x47a718*/
            v31 = *(TESObjectREFR **)(this + 0x150); /*0x47a71c*/
            v14 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v12 + 0x14))(v12); /*0x47a723*/
            v15 = Actor_LoadCloneAndAttachModel3D(v14, v7, v31, PlayerNode); /*0x47a726*/
LABEL_46:
            *((_DWORD *)v8 + 0x15) = v15; /*0x47a97c*/
            Src.m_data = 0; /*0x47a97f*/
            Src.m_dataLen = 0; /*0x47a983*/
            Src.m_bufLen = 0; /*0x47a988*/
            v26 = *((_DWORD **)v8 + 0x13); /*0x47a98d*/
            v33 = v26[3]; /*0x47a995*/
            v27 = *(int (__thiscall **)(_DWORD *, int))(*v26 + 0xD4); /*0x47a996*/
            v43 = 2; /*0x47a99c*/
            v28 = (const char *)v27(v26, v33); /*0x47a9a4*/
            BSStringT_Static_Format(&Src, "%s %s (%08X)", *(const char **)(4 * v7 + 0xB06588), v28, v34); /*0x47a9b9*/
            v29 = *((NiObjectNET **)v8 + 0x15); /*0x47a9be*/
            m_data = Src.m_data; /*0x47a9c1*/
            if ( v29 ) /*0x47a9ca*/
              NiObjectNET_SetName(v29, Src.m_data); /*0x47a9cd*/
            FormHeapFree((unsigned int)m_data); /*0x47a9d3*/
            return; /*0x47a9d3*/
          }
          v16 = (const char *)(*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)v12 + 0x14))( /*0x47a73d*/
                                v12,
                                a4,
                                st6_0,
                                st5_0);
          if ( !v16 || !v45 || (a1a = (int *)v45->super.super.super.super.niNode) == 0 ) /*0x47a75e*/
          {
            v15 = 0; /*0x47a97a*/
            goto LABEL_46; /*0x47a97a*/
          }
          ModelData = (NiObjectNET *)ModelLoader_LoadModelData((int *)MEMORY[0xB33A1C], v16, 1, (void *)3, 1); /*0x47a776*/
          v36 = ModelData; /*0x47a77c*/
          OB_NiCloningProcess_ctor((NiTPointerMap<NiObject *,NiObject *> **)&v38); /*0x47a780*/
          v42 = 1.0; /*0x47a787*/
          v41 = 1.0; /*0x47a78b*/
          v40 = 1.0; /*0x47a78f*/
          v43 = 1; /*0x47a793*/
          v35 = 0; /*0x47a797*/
          if ( sub_480820(ModelData) ) /*0x47a7a1*/
          {
            v18 = (Ni2DBuffer *)sub_4430C0(ModelData, (int)&v38); /*0x47a7b9*/
            NiSmartPointer_Set__((Ni2DBuffer **)&v35, v18); /*0x47a7c3*/
            v19 = v35; /*0x47a7c8*/
          }
          else
          {
            v19 = sub_700610(ModelData, (int)&v38); /*0x47a7da*/
          }
          sub_478220(ModelData, v19, v7, (TESObjectREFR *)v45); /*0x47a7e4*/
          sub_6FFC60((_DWORD *)v19); /*0x47a7ee*/
          if ( !v19 ) /*0x47a7f5*/
          {
LABEL_37:
            v25 = (void (__thiscall ***)(_DWORD, int))v35; /*0x47a927*/
            LOBYTE(v43) = 0; /*0x47a92d*/
            if ( v35 ) /*0x47a932*/
            {
              if ( !InterlockedDecrement((volatile LONG *)(v35 + 4)) ) /*0x47a938*/
                (**v25)(v25, 1); /*0x47a94a*/
            }
            v43 = 0xFFFFFFFF; /*0x47a952*/
            if ( v38 ) /*0x47a95a*/
              ((void (__thiscall *)(void (__stdcall ***)(signed int), int))**v38)(v38, 1); /*0x47a962*/
            if ( v39 ) /*0x47a96a*/
              (**v39)(v39, 1); /*0x47a972*/
            v15 = v19; /*0x47a974*/
            goto LABEL_46; /*0x47a978*/
          }
          if ( NiRTTI::IsObjectOfRTTIType((NiRTTI *)&MEMORY[0xB33E90][0x13F8], (NiObject *)v19) ) /*0x47a801*/
            sub_4A01B0((_BYTE *)v19, 7); /*0x47a811*/
          *(float *)(v19 + 0x54) = g_zeroNiPoint3; /*0x47a81b*/
          *(float *)(v19 + 0x58) = *(&g_zeroNiPoint3 + 1); /*0x47a824*/
          *(float *)(v19 + 0x5C) = MEMORY[0xB3F9B0][0]; /*0x47a82d*/
          qmemcpy((void *)(v19 + 0x30), &stru_B26AF0[0xA].unk2C, 0x24u); /*0x47a83e*/
          if ( sub_471B80(v19) ) /*0x47a840*/
          {
            PrintError("Tyring to add skinned object '%s' as an add on to skeleton.", *(const char **)(v19 + 8)); /*0x47a855*/
          }
          else
          {
            AttachModelUsingPrnExtraData(a1a, (_DWORD *)v19, v36, 0, 0xFFFFFFFF); /*0x47a873*/
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 8))(v19) ) /*0x47a883*/
            {
              v20 = *(_DWORD *)(v19 + 0x1C); /*0x47a88d*/
              v21 = 0; /*0x47a890*/
              if ( (!v20 || v7 == 7 || v7 == 6) && v7 != 0xFFFFFFFF ) /*0x47a8a3*/
              {
                v22 = *(_DWORD *)(4 * v7 + 0xB065C8); /*0x47a8a5*/
                if ( v22 != 0xFFFFFFFF ) /*0x47a8af*/
                  v21 = (int *)NiObjectNET_LookupObjectByName(a1a, *(char **)(4 * v22 + 0xB06550)); /*0x47a8c6*/
              }
              if ( v20 ) /*0x47a8ca*/
              {
                if ( v7 != 7 && v7 != 6 ) /*0x47a8d4*/
                  goto LABEL_36; /*0x47a8d4*/
                v23 = ((int (__thiscall *)(PlayerCharacter *))v45->vtbl->super.super.super.GetActiveSkinInfo)(v45); /*0x47a8e2*/
                if ( v23 ) /*0x47a8e6*/
                {
                  if ( *(_DWORD *)(v19 + 0x1C) == *(_DWORD *)(v23 + 0x20) ) /*0x47a8ee*/
                    goto LABEL_36; /*0x47a8ee*/
                }
                if ( !v21 ) /*0x47a8f2*/
                  goto LABEL_36; /*0x47a8f2*/
                v24 = *v21; /*0x47a8f4*/
              }
              else if ( v21 ) /*0x47a8fc*/
              {
                v24 = *v21; /*0x47a8fe*/
              }
              else
              {
                v24 = *a1a; /*0x47a908*/
              }
              (*(void (__stdcall **)(int, int))(v24 + 0x84))(v19, 1); /*0x47a913*/
            }
          }
LABEL_36:
          NiNode_UpdateDynamicEffectState((NiNode *)v19); /*0x47a915*/
          NiAVObject_InitializePropertyState((NiAVObject *)v19); /*0x47a91e*/
          v8 = Src.m_data; /*0x47a923*/
          goto LABEL_37; /*0x47a923*/
        }
      }
    }
  }
}
