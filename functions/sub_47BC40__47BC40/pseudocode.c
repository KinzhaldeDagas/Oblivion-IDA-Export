LONG __usercall sub_47BC40@<eax>(char *ecx0@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  PlayerCharacter *v5; // ecx
  bool v6; // zf
  int v7; // eax
  signed int v8; // ebx
  int v9; // edi
  char *v10; // esi
  NiObject *v11; // eax
  NiObject *v12; // ebx
  int m_uiRefCount_high; // eax
  unsigned int v14; // esi
  NiNode *v15; // eax
  _DWORD *v16; // eax
  int v17; // ecx
  const char *v18; // eax
  NiObjectNET *v19; // esi
  Ni2DBuffer *v20; // eax
  UInt32 v21; // esi
  UInt32 v22; // ebx
  int v23; // eax
  int v24; // eax
  char v25; // al
  unsigned int v26; // edi
  float *v27; // esi
  _DWORD *v28; // edi
  void *v29; // ecx
  int *v30; // eax
  Actor *v31; // esi
  void (__thiscall **v32)(_DWORD *, int, char *, void *, Actor *); // edi
  int v33; // eax
  void (__thiscall **v34)(_DWORD *, int, char *, void **, Actor *); // edi
  int v35; // eax
  _DWORD *v36; // ecx
  int (__thiscall *v37)(_DWORD *, int); // eax
  const char *v38; // eax
  NiObjectNET *v39; // edi
  BSExtraDataVtbl *v40; // eax
  PlayerCharacter *v41; // ecx
  void (__thiscall *Destructor)(BSExtraData *); // ebx
  UInt32 m_uiRefCount; // ebx
  int v44; // esi
  char *Name; // eax
  const char *v46; // eax
  CHAR *v47; // eax
  _DWORD *v49; // [esp+8h] [ebp-190h]
  void *AnimData; // [esp+Ch] [ebp-18Ch]
  void **v51; // [esp+Ch] [ebp-18Ch]
  int v52; // [esp+10h] [ebp-188h]
  int v53; // [esp+10h] [ebp-188h]
  char v54; // [esp+10h] [ebp-188h]
  char v55; // [esp+10h] [ebp-188h]
  const char *v56; // [esp+10h] [ebp-188h]
  char *m_data; // [esp+10h] [ebp-188h]
  int i; // [esp+2Ch] [ebp-16Ch]
  bool v59; // [esp+33h] [ebp-165h]
  int v60; // [esp+34h] [ebp-164h]
  unsigned int j; // [esp+38h] [ebp-160h]
  _DWORD *v62; // [esp+38h] [ebp-160h]
  _DWORD *v63; // [esp+38h] [ebp-160h]
  NiObjectNET *v64; // [esp+3Ch] [ebp-15Ch]
  UInt32 v65; // [esp+40h] [ebp-158h] BYREF
  __int16 v66; // [esp+44h] [ebp-154h]
  BSStringT Src; // [esp+48h] [ebp-150h] BYREF
  char *v68; // [esp+50h] [ebp-148h]
  NiObjectNET *v69; // [esp+54h] [ebp-144h]
  BSStringT v70; // [esp+58h] [ebp-140h] BYREF
  int v71; // [esp+60h] [ebp-138h] BYREF
  int v72; // [esp+64h] [ebp-134h] BYREF
  int v73; // [esp+68h] [ebp-130h] BYREF
  int v74; // [esp+6Ch] [ebp-12Ch]
  IOTask *v75; // [esp+70h] [ebp-128h] BYREF
  int v76; // [esp+74h] [ebp-124h] BYREF
  char *v77; // [esp+78h] [ebp-120h]
  NiTPointerMap<NiObject *,NiObject *> *v78; // [esp+7Ch] [ebp-11Ch] BYREF
  void (__thiscall ***v79)(_DWORD, int); // [esp+80h] [ebp-118h]
  float v80; // [esp+8Ch] [ebp-10Ch]
  float v81; // [esp+90h] [ebp-108h]
  float v82; // [esp+94h] [ebp-104h]
  float v83[9]; // [esp+98h] [ebp-100h] BYREF
  float v84[9]; // [esp+BCh] [ebp-DCh] BYREF
  float v85[9]; // [esp+E0h] [ebp-B8h] BYREF
  float v86[9]; // [esp+104h] [ebp-94h] BYREF
  int a1[25]; // [esp+128h] [ebp-70h] BYREF
  int v88; // [esp+194h] [ebp-4h]

  v5 = TESDataHandler_g_PlayerRef;
  v6 = *((_DWORD *)ecx0 + 0x54) == (_DWORD)TESDataHandler_g_PlayerRef;
  LOBYTE(v66) = 0;
  if ( v6 )
    LOBYTE(v66) = sub_65D770(v5, (int)ecx0);
  if ( g_bUpdatePlayerModel )
  {
    v7 = (*(int (__usercall **)@<eax>(_DWORD *@<ecx>, double@<st0>, double@<st1>, double@<st2>))(**((_DWORD **)ecx0
                                                                                                  + 0x54)
                                                                                               + 0x170))(
           *((_DWORD **)ecx0 + 0x54),
           a4,
           a3,
           a2);
    sub_550240(*(_DWORD *)(v7 + 0xC));
  }
  v8 = 0;
  for ( i = 0; ; v8 = i )
  {
    v68 = &ecx0[0x10 * v8 + 0x50];
    if ( *(_DWORD *)v68 && (v9 = 0x10 * v8, v60 = 0x10 * v8, *(_DWORD *)v68 == dword_B33C84[4 * v8]) )
    {
      *(_DWORD *)&ecx0[0x10 * v8 + 0x4C] = dword_B33C80[4 * v8];
      v10 = &ecx0[v9 + 0x4C];
      *((_DWORD *)v10 + 1) = dword_B33C84[4 * v8];
      *((_DWORD *)v10 + 2) = dword_B33C88[4 * v8];
      *((_DWORD *)v10 + 3) = dword_B33C8C[4 * v8];
      dword_B33C80[4 * v8] = 0;
      dword_B33C84[4 * v8] = 0;
      dword_B33C88[4 * v8] = 0;
      v59 = 0;
      dword_B33C8C[4 * v8] = 0;
      if ( v8 >= 6 && v8 <= 8 )
      {
        if ( sub_478290((void **)ecx0, v8) )
        {
          sub_478780(ecx0, (char)ecx0, a2, a3, a4, (int)&ecx0[v9 + 0x4C], 0, 0);
          goto LABEL_106;
        }
        v59 = *(_DWORD *)&ecx0[v9 + 0x54] == 0;
      }
      if ( g_bUpdatePlayerModel )
      {
        v11 = NiRTTI_Cast((BSStringT *)dword_B3FAB0, *(NiObject **)&ecx0[v9 + 0x54]);
        v12 = v11;
        if ( v11 )
        {
          m_uiRefCount_high = HIWORD(v11[0x16].members.m_uiRefCount);
          v14 = 0;
          if ( HIWORD(v12[0x16].members.m_uiRefCount) )
          {
            if ( !m_uiRefCount_high )
            {
              v15 = 0;
              goto LABEL_20;
            }
            do
            {
              v15 = *((NiNode **)&v12[0x16].__vftable->super.Destructor + v14);
LABEL_20:
              sub_47AC20((_DWORD **)ecx0, v15);
              ++v14;
            }
            while ( HIWORD(v12[0x16].members.m_uiRefCount) > v14 );
          }
        }
      }
      if ( ecx0[v9 + 0x58] )
      {
        if ( *(_DWORD *)&ecx0[v9 + 0x54] )
        {
          qmemcpy(v86, &stru_B26AF0[0xA].unk2C, sizeof(v86));
          qmemcpy(
            (void *)(*(_DWORD *)&ecx0[v9 + 0x54] + 0x30),
            sub_4D7C50(*((_DWORD **)ecx0 + 0x54), v83, v86, 1),
            0x24u);
        }
      }
      if ( !v59 )
        goto LABEL_106;
      v8 = i;
    }
    else
    {
      v60 = 0x10 * v8;
      if ( dword_B33C88[4 * v8] )
        sub_478780(ecx0, (char)ecx0, a2, a3, a4, (int)&dword_B33C80[4 * v8], 1, 0);
    }
    if ( (v8 < 6 || v8 > 8 || !sub_478290((void **)ecx0, v8)) && *(_DWORD *)v68 && *(_DWORD *)v68 != 0xFFFFFFFF )
    {
      if ( (_BYTE)v66 )
      {
        switch ( i )
        {
          case 2:
          case 4:
          case 6:
          case 7:
          case 9:
          case 0xC:
          case 0xD:
          case 0xE:
            goto LABEL_35;
          default:
            break;
        }
      }
      else
      {
LABEL_35:
        if ( i == 1 )
        {
          if ( *((PlayerCharacter **)ecx0 + 0x54) != TESDataHandler_g_PlayerRef
            && !*((_DWORD *)ecx0 + 0x19)
            && bLoadHelmentsBackground
            && useFaceGenHeads
            && sub_477ED0() )
          {
            sub_4781D0(ecx0, &v75, 0, 0);
            sub_4BDDC0(&v75);
            goto LABEL_106;
          }
        }
        else if ( i == 0xE )
        {
          v16 = *((_DWORD **)ecx0 + 0x54);
          if ( v16 )
          {
            v17 = v16[0x16];
            if ( v17 )
              (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v17 + 0x348))(v17, *((_DWORD **)ecx0 + 0x54));
          }
        }
        v74 = *(_DWORD *)(4 * i + 0xB065C8);
        v18 = (const char *)(*(int (__usercall **)@<eax>(_DWORD@<ecx>, double@<st0>, double@<st1>, double@<st2>))(**(_DWORD **)v68 + 0x14))(
                              *(_DWORD *)v68,
                              a4,
                              a3,
                              a2);
        v19 = (NiObjectNET *)sub_439EB0((int *)ModelLoaderPtr, v18, 1, (void *)3, 1);
        v69 = v19;
        sub_478B90(&v78);
        a4 = 1.0;
        v82 = 1.0;
        v81 = 1.0;
        v80 = 1.0;
        v88 = 1;
        v65 = 0;
        if ( sub_480820(v19) )
        {
          v20 = (Ni2DBuffer *)sub_4430C0(v19, (int)&v78);
          NiSmartPointer_Set__((Ni2DBuffer **)&v65, v20);
          v21 = v65;
          v22 = v65;
        }
        else
        {
          v23 = sub_700610(v19, (int)&v78);
          v21 = v65;
          v22 = v23;
        }
        if ( v22 )
        {
          v24 = (*(int (__usercall **)@<eax>(UInt32@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)v22 + 4))(
                  v22,
                  1.0,
                  a3,
                  a2);
          if ( v24 )
          {
            while ( (char *)v24 != dword_B35288 )
            {
              v24 = *(_DWORD *)(v24 + 4);
              if ( !v24 )
                goto LABEL_55;
            }
            sub_4A01B0((_BYTE *)v22, 7);
          }
LABEL_55:
          sub_6FFAC0((_WORD *)v22, off_A3CEB0);
          *(float *)(v22 + 0x54) = Vector3_InitValue_;
          v25 = v66;
          *(float *)(v22 + 0x58) = *(&Vector3_InitValue_ + 1);
          *(float *)(v22 + 0x5C) = dword_B3F9B0;
          qmemcpy((void *)(v22 + 0x30), &stru_B26AF0[0xA].unk2C, 0x24u);
          v64 = (NiObjectNET *)sub_47B5B0((int **)ecx0, v22, i, v25, 0);
          if ( !v64 )
          {
            v64 = (NiObjectNET *)v22;
            if ( i == 1 )
            {
              v77 = (char *)sub_478A40((int **)ecx0);
              if ( v77 )
              {
                v26 = 0;
                for ( j = 0; v26 < *(unsigned __int16 *)(v22 + 0xB6); j = ++v26 )
                {
                  if ( *(unsigned __int16 *)(v22 + 0xB6) > v26 )
                  {
                    v27 = *(float **)(*(_DWORD *)(v22 + 0xB0) + 4 * v26);
                    if ( v27 )
                    {
                      if ( *((_DWORD *)v27 + 0x2D) )
                      {
                        if ( *((_DWORD *)ecx0 + 0x54) )
                        {
                          if ( (*(int (__thiscall **)(_DWORD *))(**((_DWORD **)ecx0 + 0x54) + 0x170))(*((_DWORD **)ecx0 + 0x54)) )
                          {
                            if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(**((_DWORD **)ecx0 + 0x54) + 0x170))(*((_DWORD **)ecx0 + 0x54))
                                          + 4) == 0x23 )
                            {
                              v28 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(**((_DWORD **)ecx0 + 0x54) + 0x170))(*((_DWORD **)ecx0 + 0x54));
                              ArrayConstructor(a1, 0x18u, 4, (int)sub_43EB30, (void (__thiscall *)(void *))sub_43ACE0);
                              v29 = *((void **)v27 + 0x2D);
                              LOBYTE(v88) = 2;
                              v30 = sub_700790(v29, &v72);
                              sub_405070(&v71, *v30);
                              LOBYTE(v88) = 3;
                              sub_7016A0((NiD3DVertexShader *)&v72);
                              (*(void (__thiscall **)(float *, int))(*(_DWORD *)v27 + 0x8C))(v27, v71);
                              sub_5221C0(v28, a1);
                              if ( !useFaceGenHeads || (a4 = 1.0, sub_558840(v77, (int)a1, (int)v27, 1.0, 0)) )
                              {
                                a4 = flt_A3721C;
                                sub_70FD80(v83, flt_A3721C);
                                qmemcpy(v27 + 0xC, NiMAtrix33_Multiply(v27 + 0xC, v85, v83), 0x24u);
                              }
                              LOBYTE(v88) = 2;
                              sub_7016A0((NiD3DVertexShader *)&v71);
                              LOBYTE(v88) = 1;
                              _LN21(a1, 0x18u, 4, (void (__thiscall *)(void *))sub_43ACE0);
                              v26 = j;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            sub_479140(*(_DWORD **)ecx0, (_DWORD *)v22, 0, (int)ecx0, i);
            if ( !sub_45A500(SaveLoad_CurrentSavegame) && i == 9 )
            {
              v31 = *((Actor **)ecx0 + 0x54);
              if ( v31->members.super.process )
              {
                if ( v31 == (Actor *)TESDataHandler_g_PlayerRef
                  && ecx0 == (char *)sub_6600D0(TESDataHandler_g_PlayerRef, 1) )
                {
                  v62 = &v31->members.super.process->__vftable;
                  v32 = (void (__thiscall **)(_DWORD *, int, char *, void *, Actor *))(*v62 + 0x150);
                  AnimData = Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 1);
                  LOBYTE(v33) = Actor_IsWeaponOut(v31);
                  (*v32)(v62, v33, ecx0, AnimData, v31);
                }
                else
                {
                  v63 = &v31->members.super.process->__vftable;
                  v34 = (void (__thiscall **)(_DWORD *, int, char *, void **, Actor *))(*v63 + 0x150);
                  v51 = TESObjectREFR_GetAnimData(v31);
                  LOBYTE(v35) = Actor_IsWeaponOut(v31);
                  (*v34)(v63, v35, ecx0, v51, v31);
                }
              }
            }
          }
          Src.m_data = 0;
          *(_DWORD *)&Src.m_dataLen = 0;
          v36 = *(_DWORD **)&ecx0[v60 + 0x4C];
          v52 = v36[3];
          v37 = *(int (__thiscall **)(_DWORD *, int))(*v36 + 0xD4);
          LOBYTE(v88) = 4;
          v38 = (const char *)v37(v36, v52);
          BSStringT_Static_Format(&Src, "%s %s (%08X)", *(const char **)(4 * i + 0xB06588), v38, v53);
          v39 = v64;
          NiObjectNET_SetName(v64, Src.m_data);
          if ( ecx0[v60 + 0x58] )
          {
            qmemcpy(v84, &v64[2], sizeof(v84));
            qmemcpy(&v64[2], sub_4D7C50(*((_DWORD **)ecx0 + 0x54), v85, v84, 1), 0x24u);
            v39 = v64;
          }
          sub_478220(v69, v22, i, *((TESObjectREFR **)ecx0 + 0x54));
          if ( i == 0xE && *((PlayerCharacter **)ecx0 + 0x54) == TESDataHandler_g_PlayerRef )
          {
            v40 = sub_41E650(&TESDataHandler_g_PlayerRef->super.super.super.super.baseExtraList);
            v41 = TESDataHandler_g_PlayerRef;
            if ( v40 )
            {
              Destructor = sub_41E650(&v41->super.super.super.super.baseExtraList)->Destructor;
              v54 = sub_65D770(TESDataHandler_g_PlayerRef, (int)ecx0);
              sub_663870(TESDataHandler_g_PlayerRef, (int)Destructor, v54);
            }
            else
            {
              v55 = sub_65D770(v41, (int)ecx0);
              sub_663870(TESDataHandler_g_PlayerRef, 0, v55);
            }
          }
          if ( !ecx0[v60 + 0x58] )
          {
            if ( (*((int (__thiscall **)(NiObjectNET *))v39->vtbl + 2))(v39) )
            {
              m_uiRefCount = v39[1].members.super.m_uiRefCount;
              if ( v74 == 0xFFFFFFFF )
              {
                v44 = *(_DWORD *)v68;
                Name = TESObjectREFR_GetName(*((TESObjectREFR **)ecx0 + 0x54));
                v46 = (const char *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)v44 + 0x14))(v44, Name);
                PrintError("The biped part '%s' should be skinned for '%s'.", v46, v56);
                if ( m_uiRefCount )
                {
                  (*(void (__thiscall **)(UInt32, int *, NiObjectNET *))(*(_DWORD *)m_uiRefCount + 0x88))(
                    m_uiRefCount,
                    &v76,
                    v39);
                  sub_7016A0((NiD3DVertexShader *)&v76);
                }
                else
                {
                  sub_405070(&v73, (int)v39);
                  sub_7016A0((NiD3DVertexShader *)&v73);
                }
                v39 = 0;
              }
              else if ( m_uiRefCount )
              {
                if ( v74 == 3 && *((PlayerCharacter **)ecx0 + 0x54) == TESDataHandler_g_PlayerRef && !(_BYTE)v66 )
                {
                  v70.m_data = 0;
                  *(_DWORD *)&v70.m_dataLen = 0;
                  v49 = *(_DWORD **)&ecx0[v60 + 0x4C];
                  LOBYTE(v88) = 5;
                  v47 = sub_4702D0(v49, 0);
                  BSStringT_Static_Format(&v70, "\\%s\\%s", "Icons", v47);
                  sub_57B190((char)ecx0, a2, a3, a4, (unsigned __int8 *)v70.m_data);
                  LOBYTE(v88) = 4;
                  BSStringT_Clear((unsigned int *)&v70);
                }
              }
              else if ( *(_DWORD *)&ecx0[8 * v74 + 8] )
              {
                (*(void (__thiscall **)(_DWORD *, NiObjectNET *, int))(**(_DWORD **)&ecx0[8 * v74 + 8] + 0x84))(
                  *(_DWORD **)&ecx0[8 * v74 + 8],
                  v39,
                  1);
              }
            }
          }
          m_data = Src.m_data;
          *(_DWORD *)&ecx0[v60 + 0x54] = v39;
          FormHeapFree((unsigned int)m_data);
          Src.m_data = 0;
          *(_DWORD *)&Src.m_dataLen = 0;
          v21 = v65;
        }
        LOBYTE(v88) = 0;
        if ( v21 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v21 + 4)) )
            (**(void (__thiscall ***)(UInt32, int))v21)(v21, 1);
        }
        v88 = 0xFFFFFFFF;
        if ( v78 )
          (**(void (__thiscall ***)(NiTPointerMap<NiObject *,NiObject *> *, int))v78)(v78, 1);
        if ( v79 )
          (**v79)(v79, 1);
      }
    }
LABEL_106:
    if ( ++i >= 0x10 )
      break;
  }
  NiAVObject_InitializePropertyState(*(NiAVObject **)(*((_DWORD *)ecx0 + 0x54) + 0x3C));
  return NiNode_UpdateDynamicEffectState(*(NiNode **)(*((_DWORD *)ecx0 + 0x54) + 0x3C));
}
