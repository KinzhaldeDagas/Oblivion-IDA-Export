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
  NiObjectNET *v17; // esi
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

  if ( a1 )
  {
    if ( *((_BYTE *)a1 + 4) == 0x16 )
    {
      v7 = (a6 != 0) + 6;
      v8 = (char *)(0x10 * v7 + this);
      Src.m_data = v8;
      sub_478780((char *)this, (char)a1, st5_0, st6_0, a4, (int)(v8 + 0x4C), 1, 0);
      v9 = (_BYTE *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 0x150) + 0x170))(*(_DWORD *)(this + 0x150));
      IsFemale = TESActorBase_IsFemale(v9);
      sub_4691D0((int)(a1 + 0x17), st5_0, st6_0, a4, (char *)this, IsFemale, v7);
      v11 = (int *)(0x10 * ((a6 != 0) + 0xB) + this);
      if ( *v11 )
      {
        if ( !sub_478290((void **)this, v7) )
        {
          v12 = *v11;
          v45 = *(PlayerCharacter **)(this + 0x150);
          if ( v45 == TESDataHandler_g_PlayerRef )
          {
            v13 = sub_65D770(TESDataHandler_g_PlayerRef, this);
            PlayerNode = (int *)PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, v13);
            v31 = *(TESObjectREFR **)(this + 0x150);
            v14 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v12 + 0x14))(v12);
            v15 = sub_479450(v14, v7, v31, PlayerNode);
LABEL_46:
            *((_DWORD *)v8 + 0x15) = v15;
            Src.m_data = 0;
            Src.m_dataLen = 0;
            Src.m_bufLen = 0;
            v26 = *((_DWORD **)v8 + 0x13);
            v33 = v26[3];
            v27 = *(int (__thiscall **)(_DWORD *, int))(*v26 + 0xD4);
            v43 = 2;
            v28 = (const char *)v27(v26, v33);
            BSStringT_Static_Format(&Src, "%s %s (%08X)", *(const char **)(4 * v7 + 0xB06588), v28, v34);
            v29 = *((NiObjectNET **)v8 + 0x15);
            m_data = Src.m_data;
            if ( v29 )
              NiObjectNET_SetName(v29, Src.m_data);
            FormHeapFree((unsigned int)m_data);
            return;
          }
          v16 = (const char *)(*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)v12 + 0x14))(
                                v12,
                                a4,
                                st6_0,
                                st5_0);
          if ( !v16 || !v45 || (a1a = (int *)v45->super.super.super.super.niNode) == 0 )
          {
            v15 = 0;
            goto LABEL_46;
          }
          v17 = (NiObjectNET *)sub_439EB0((int *)ModelLoaderPtr, v16, 1, (void *)3, 1);
          v36 = v17;
          sub_478B90((NiTPointerMap<NiObject *,NiObject *> **)&v38);
          v42 = 1.0;
          v41 = 1.0;
          v40 = 1.0;
          v43 = 1;
          v35 = 0;
          if ( sub_480820(v17) )
          {
            v18 = (Ni2DBuffer *)sub_4430C0(v17, (int)&v38);
            NiSmartPointer_Set__((Ni2DBuffer **)&v35, v18);
            v19 = v35;
          }
          else
          {
            v19 = sub_700610(v17, (int)&v38);
          }
          sub_478220(v17, v19, v7, (TESObjectREFR *)v45);
          sub_6FFC60((_DWORD *)v19);
          if ( !v19 )
          {
LABEL_37:
            v25 = (void (__thiscall ***)(_DWORD, int))v35;
            LOBYTE(v43) = 0;
            if ( v35 )
            {
              if ( !InterlockedDecrement((volatile LONG *)(v35 + 4)) )
                (**v25)(v25, 1);
            }
            v43 = 0xFFFFFFFF;
            if ( v38 )
              ((void (__thiscall *)(void (__stdcall ***)(signed int), int))**v38)(v38, 1);
            if ( v39 )
              (**v39)(v39, 1);
            v15 = v19;
            goto LABEL_46;
          }
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
            sub_479140(a1a, (_DWORD *)v19, v36, 0, 0xFFFFFFFF);
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 8))(v19) )
            {
              v20 = *(_DWORD *)(v19 + 0x1C);
              v21 = 0;
              if ( (!v20 || v7 == 7 || v7 == 6) && v7 != 0xFFFFFFFF )
              {
                v22 = *(_DWORD *)(4 * v7 + 0xB065C8);
                if ( v22 != 0xFFFFFFFF )
                  v21 = (int *)NiObjectNET_LookupObjectByName(a1a, *(char **)(4 * v22 + 0xB06550));
              }
              if ( v20 )
              {
                if ( v7 != 7 && v7 != 6 )
                  goto LABEL_36;
                v23 = ((int (__thiscall *)(PlayerCharacter *))v45->vtbl->super.super.super.Unk_5A)(v45);
                if ( v23 )
                {
                  if ( *(_DWORD *)(v19 + 0x1C) == *(_DWORD *)(v23 + 0x20) )
                    goto LABEL_36;
                }
                if ( !v21 )
                  goto LABEL_36;
                v24 = *v21;
              }
              else if ( v21 )
              {
                v24 = *v21;
              }
              else
              {
                v24 = *a1a;
              }
              (*(void (__stdcall **)(int, int))(v24 + 0x84))(v19, 1);
            }
          }
LABEL_36:
          NiNode_UpdateDynamicEffectState((NiNode *)v19);
          NiAVObject_InitializePropertyState((NiAVObject *)v19);
          v8 = Src.m_data;
          goto LABEL_37;
        }
      }
    }
  }
}
