void __userpurge sub_652A20(
        int *a1@<ecx>,
        double a2@<st2>,
        double st6_0@<st1>,
        double a4@<st0>,
        TESChildCELL *arg0,
        char a6,
        float GameHour,
        int a8)
{
  TESPackage *v9; // eax
  TESPackage *v11; // ebx
  char v12; // al
  int v13; // ecx
  _DWORD *v14; // ebp
  TESObjectCELL *v15; // eax
  float *v16; // eax
  double v17; // st7
  double v18; // st7
  LocationData *location; // ecx
  int v20; // ebp
  int v21; // edx
  void (__thiscall *v22)(int *, TESChildCELL *); // eax
  char v23; // al
  int v24; // ecx
  NiPoint3 *v25; // eax
  bool v26; // zf
  TESObjectCELL *v27; // eax
  char v28; // dl
  int v29; // ebp
  int v30; // eax
  LocationData *v31; // ecx
  void *v32; // eax
  TESObjectREFR *v33; // eax
  TESObjectREFR *v34; // ebp
  float *v35; // eax
  float *v36; // eax
  int *SafeFloatPointer; // eax
  TESObjectCELL *ParentCell; // eax
  int *v39; // eax
  TESForm *v40; // ebp
  double v41; // st7
  double v42; // st7
  double v43; // st7
  int v44; // ebp
  int v45; // eax
  float *v46; // eax
  TESObjectCELL *v47; // eax
  float *v48; // eax
  TESObjectCELL *v49; // eax
  TESForm *v50; // eax
  BSExtraDataVtbl *v51; // ebp
  TESForm *v52; // eax
  BSExtraDataVtbl *v53; // eax
  int v54; // edx
  int v55; // edx
  void *v56; // eax
  void *v57; // eax
  int v58; // edx
  int v59; // ebp
  NiTransform *v60; // eax
  unsigned int v61; // ecx
  TESObjectREFRVtbl *vtbl; // edx
  double v63; // st7
  char v64; // bl
  int v65; // eax
  UInt32 v66; // eax
  char *v67; // ecx
  int v68; // ecx
  double v69; // st7
  int v70; // ecx
  float *v71; // [esp+30h] [ebp-64h]
  float *v72; // [esp+30h] [ebp-64h]
  float a3; // [esp+34h] [ebp-60h]
  float a3a; // [esp+34h] [ebp-60h]
  TESObjectCELL *v75; // [esp+38h] [ebp-5Ch]
  float *v76; // [esp+38h] [ebp-5Ch]
  float *v77; // [esp+38h] [ebp-5Ch]
  TESWorldSpace *a5; // [esp+3Ch] [ebp-58h]
  float a5a; // [esp+3Ch] [ebp-58h]
  float a5b; // [esp+3Ch] [ebp-58h]
  float v81; // [esp+40h] [ebp-54h]
  TESWorldSpace *v82; // [esp+44h] [ebp-50h]
  TESWorldSpace *v83; // [esp+44h] [ebp-50h]
  TESWorldSpace *WorldSpace; // [esp+44h] [ebp-50h]
  float v85; // [esp+44h] [ebp-50h]
  float v86; // [esp+44h] [ebp-50h]
  float v87; // [esp+44h] [ebp-50h]
  NiPoint3 v88; // [esp+58h] [ebp-3Ch] BYREF
  _BYTE v89[48]; // [esp+64h] [ebp-30h] BYREF
  float v90; // [esp+98h] [ebp+4h]
  TESChildCELL *v91; // [esp+98h] [ebp+4h]
  char v92; // [esp+98h] [ebp+4h]
  float v93; // [esp+98h] [ebp+4h]
  int v94; // [esp+98h] [ebp+4h]
  float v95; // [esp+98h] [ebp+4h]
  int v96; // [esp+9Ch] [ebp+8h]
  _BYTE *v97; // [esp+9Ch] [ebp+8h]
  int v98; // [esp+9Ch] [ebp+8h]
  float v99; // [esp+9Ch] [ebp+8h]
  float v100; // [esp+9Ch] [ebp+8h]

  v9 = (TESPackage *)(*(int (__usercall **)@<eax>(int *@<ecx>, double@<st0>, double@<st1>))(*a1 + 0x184))(a1, a4, st6_0);
  v11 = v9;
  if ( a6
    || *((_BYTE *)a1 + 0xD0)
    && (sub_566DC0(v9, flt_A30634, st6_0, (Actor *)arg0, 0, flt_A30634), !v12)
    && ((v13 = a1[0xD]) == 0 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v13 + 0x2C))(v13)) )
  {
    v96 = *a1;
    v14 = (_DWORD *)sub_566B30(v11, (int)v89, (Actor *)arg0);
    v82 = sub_566940(v11, (Actor *)arg0);
    v15 = sub_566A40((char **)v11, (Actor *)arg0);
    if ( !(*(unsigned __int8 (__thiscall **)(int *, TESChildCELL *, _DWORD, _DWORD, _DWORD, TESObjectCELL *, TESWorldSpace *))(v96 + 0x3DC))(
            a1,
            arg0,
            *v14,
            v14[1],
            v14[2],
            v15,
            v82) )
      return;
  }
  v16 = (float *)sub_566B30(v11, (int)v89, (Actor *)arg0);
  v17 = sub_4D7E30((float *)arg0, v16);
  v88.x = v17;
  v18 = sub_5677B0(v11, v17, (TESObjectREFR *)arg0, 1);
  v90 = v18;
  location = v11->members.location;
  v20 = 0;
  v97 = 0;
  if ( location )
  {
    v20 = sub_5697E0(location);
    v97 = (_BYTE *)v20;
  }
  if ( a1[0xC] )
  {
    if ( !a1[0x30] )
    {
      v20 = a1[0xC];
      v97 = (_BYTE *)v20;
    }
  }
  if ( v20 )
  {
    if ( v20 == (*((int (__thiscall **)(TESChildCELL *))arg0->vtbl + 0xE0))(arg0) )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v20 + 0x198))(v20, 0) )
      {
        (*(void (__thiscall **)(int *, _DWORD))(*a1 + 0x178))(a1, 0);
        (*((void (__thiscall **)(TESChildCELL *, _DWORD))arg0->vtbl + 0xE1))(arg0, 0);
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v20 + 0x38C))(v20, 0);
      }
    }
  }
  if ( v11->members.type == 5 )
  {
    v18 = flt_A417B4;
    v90 = flt_A417B4;
  }
  if ( v20 && sub_4D74B0((_DWORD *)v20) && v11->members.type != 5 )
  {
    if ( !a1[0x48] )
      a1[0x48] = v20;
    if ( (*(int (__thiscall **)(int *))(*a1 + 0x36C))(a1) )
      goto LABEL_55;
    if ( !(*(int (__thiscall **)(int *))(*a1 + 0x36C))(a1)
      && sub_4D72C0((TESObjectREFR *)a1[0x48], *((unsigned __int8 *)a1 + 0x124))
      && !*((_BYTE *)a1 + 0xD0) )
    {
      a1[0x48] = 0;
      sub_6FAEE0((Unk128 *)(a1 + 0x4A), 0.0);
      *((_BYTE *)a1 + 0x136) = 0;
      a1[0x4A] = LODWORD(Vector3_InitValue_);
      v21 = *a1;
      a1[0x4B] = *((_DWORD *)&Vector3_InitValue_ + 1);
      v22 = *(void (__thiscall **)(int *, TESChildCELL *))(v21 + 0x194);
      a1[0x4C] = LODWORD(dword_B3F9B0);
      *((_BYTE *)a1 + 0x124) = 0x7F;
      v22(a1, arg0);
LABEL_106:
      (*(void (__thiscall **)(int *, TESChildCELL *, int))(*a1 + 0x188))(a1, arg0, 1);
      return;
    }
  }
  v18 = sub_566DC0(v11, flt_A30634, st6_0, (Actor *)arg0, 0, flt_A30634);
  if ( !v23 )
  {
    v24 = a1[0xD];
    if ( !v24 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v24 + 0x2C))(v24) )
    {
      if ( !arg0 )
        return;
      if ( !(*((int (__thiscall **)(TESChildCELL *))arg0->vtbl + 0xE0))(arg0)
        && ((*(int (__thiscall **)(int *))(*a1 + 0x36C))(a1) == 4
         || (*(int (__thiscall **)(int *))(*a1 + 0x36C))(a1) == 9) )
      {
        (*((void (__thiscall **)(TESChildCELL *))arg0->vtbl + 0xC8))(arg0);
        return;
      }
      if ( v20 && sub_4D74B0((_DWORD *)v20) )
      {
        v25 = (NiPoint3 *)(*((int (__thiscall **)(TESChildCELL *))arg0->vtbl + 0x5D))(arg0);
        v26 = a1[0x48] == 0;
        v88 = *v25;
        GameHour = 0.0;
        if ( v26 )
          a1[0x48] = v20;
        if ( sub_4DBAE0((TESObjectREFR *)a1[0x48], &v88.x, 1, 1, (NiPoint3 *)(a1 + 0x4A), &GameHour) )
        {
          v91 = (TESChildCELL *)*a1;
          v83 = sub_566940(v11, (Actor *)arg0);
          v27 = sub_566A40((char **)v11, (Actor *)arg0);
          if ( !((unsigned __int8 (__thiscall *)(int *, TESChildCELL *, int, int, int, TESObjectCELL *, TESWorldSpace *))v91[0xF7].vtbl)(
                  a1,
                  arg0,
                  a1[0x4A],
                  a1[0x4B],
                  a1[0x4C],
                  v27,
                  v83) )
            return;
          v28 = LOBYTE(GameHour);
          a1[0x48] = (int)v97;
          *((_BYTE *)a1 + 0x124) = v28;
        }
        else
        {
          (*(void (__thiscall **)(int *, TESChildCELL *))(*a1 + 0x194))(a1, arg0);
          v29 = *a1;
          v30 = sub_673980(v11->members.procedureArrayIndex);
          (*(void (__thiscall **)(int *, int))(v29 + 0x17C))(a1, v30 - 1);
        }
      }
      else
      {
        v31 = v11->members.location;
        if ( v31 )
        {
          if ( sub_5697E0(v31) )
          {
            v32 = (void *)sub_5697E0(&v11->members.location->locationType);
            v33 = (TESObjectREFR *)OblivionDynamicCast(
                                     v32,
                                     0,
                                     (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                                     &Actor `RTTI Type Descriptor',
                                     0);
            v34 = v33;
            if ( v33 )
            {
              v35 = v33->vtbl->GetPos(v33);
              v36 = sub_4121A0((float *)a1 + 0x35, (float *)v89, v35);
              GameHour = sub_404C90(v36);
              SafeFloatPointer = GameSetting_GetSafeFloatPointer((int *)&flt_B36A88);
              if ( *(float *)SafeFloatPointer < (double)GameHour || v90 < (double)v88.x && *((_BYTE *)a1 + 0xD0) )
              {
                v98 = *a1;
                GameHour = COERCE_FLOAT((int)v34->vtbl->GetPos(v34));
                WorldSpace = TESObjectREFR_GetWorldSpace(v34);
                ParentCell = TESObjectREFR_GetParentCell(v34);
                if ( !(*(unsigned __int8 (__thiscall **)(int *, TESChildCELL *, _DWORD, _DWORD, _DWORD, TESObjectCELL *, TESWorldSpace *))(v98 + 0x3DC))(
                        a1,
                        arg0,
                        *(_DWORD *)LODWORD(GameHour),
                        *(_DWORD *)(LODWORD(GameHour) + 4),
                        *(_DWORD *)(LODWORD(GameHour) + 8),
                        ParentCell,
                        WorldSpace) )
                  return;
                v39 = (int *)v34->vtbl->GetPos(v34);
                a1[0x35] = *v39;
                a1[0x36] = v39[1];
                a1[0x37] = v39[2];
              }
            }
          }
        }
      }
      v40 = TESForm_LookupByFormID(0x3Au);
      GameHour = TimeGlobals_GetGameHour(&TimeGlobals);
      *(double *)&v88.x = GameHour;
      v41 = sub_6599B0(arg0);
      if ( v41 > *(double *)&v88.x )
        GameHour = GameHour + dbl_A2F920;
      *(double *)&v88.x = GameHour;
      v42 = sub_6599B0(arg0);
      v99 = *(double *)&v88.x - v42;
      v43 = *(float *)&v40[1].member.refID;
      v44 = *a1;
      GameHour = v43;
      v85 = sub_5677B0(v11, v43, (TESObjectREFR *)arg0, 1);
      GameHour = dbl_A2F938 / GameHour * v99;
      v81 = GameHour;
      a5 = sub_566940(v11, (Actor *)arg0);
      v75 = sub_566A40((char **)v11, (Actor *)arg0);
      v45 = sub_566B30(v11, (int)v89, (Actor *)arg0);
      (*(void (__thiscall **)(int *, TESChildCELL *, int, TESObjectCELL *, TESWorldSpace *, _DWORD, _DWORD))(v44 + 0x418))(
        a1,
        arg0,
        v45,
        v75,
        a5,
        LODWORD(v81),
        LODWORD(v85));
      return;
    }
  }
LABEL_55:
  if ( !*((_BYTE *)a1 + 0x84) )
  {
    if ( sub_565DD0(v11) )
    {
      a5a = flt_A5B6C0;
      v46 = (float *)(*((int (__thiscall **)(TESChildCELL *))arg0->vtbl + 0x5D))(arg0);
      v18 = flt_A5B6C0;
      v76 = v46;
      a3 = flt_A5B6C0;
      v71 = (float *)(*((int (__thiscall **)(TESChildCELL *))arg0->vtbl + 0x5D))(arg0);
      v47 = TESObjectREFR_GetParentCell((TESObjectREFR *)arg0);
      sub_446B90(v47, v71, a3, v76, a5a, (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_645A30, (int)arg0);
    }
    *((_BYTE *)a1 + 0x84) = 1;
  }
  if ( sub_565DE0(v11) )
  {
    a5b = flt_A5B6C0;
    v48 = (float *)(*((int (__thiscall **)(TESChildCELL *))arg0->vtbl + 0x5D))(arg0);
    v18 = flt_A5B6C0;
    v77 = v48;
    a3a = flt_A5B6C0;
    v72 = (float *)(*((int (__thiscall **)(TESChildCELL *))arg0->vtbl + 0x5D))(arg0);
    v49 = TESObjectREFR_GetParentCell((TESObjectREFR *)arg0);
    sub_446B90(v49, v72, a3a, v77, a5b, (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_645AF0, (int)arg0);
  }
  if ( !*((_BYTE *)a1 + 0x169) && (v11->members.packageFlags & 0x100000) != 0
    || (v11->members.packageFlags & 0x200000) != 0 )
  {
    *((_BYTE *)a1 + 0x169) = 1;
    if ( (v11->members.packageFlags & 0x100000) != 0 )
    {
      v50 = (TESForm *)(*((int (__thiscall **)(TESChildCELL *))arg0->vtbl + 0x5C))(arg0);
      v51 = (BSExtraDataVtbl *)OblivionDynamicCast(
                                 v50,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                 &TESNPC `RTTI Type Descriptor',
                                 0);
      v52 = (TESForm *)(*((int (__thiscall **)(TESChildCELL *))arg0->vtbl + 0x5C))(arg0);
      v53 = (BSExtraDataVtbl *)OblivionDynamicCast(
                                 v52,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                 &TESCreature `RTTI Type Descriptor',
                                 0);
      v54 = a1[2];
      LOBYTE(v88.x) = 1;
      v92 = 1;
      if ( v54 )
      {
        v55 = *(_DWORD *)(v54 + 0x1C);
        LOBYTE(v88.x) = (v55 & 0x100000) == 0;
        v92 = (v55 & 0x200000) == 0;
      }
      if ( v51 )
      {
        sub_5227A0(v51, a2, st6_0, v18, (TESObjectREFR *)arg0, SLOBYTE(v88.x), v92, 0, 1);
      }
      else if ( v53 )
      {
        sub_51E240(v53, (int)v11, a2, st6_0, v18, (TESObjectREFR *)arg0, SLOBYTE(v88.x), v92, 1);
      }
      v20 = (int)v97;
    }
    else
    {
      v65 = (*(int (__thiscall **)(int *, int))(*a1 + 0xEC))(a1, 1);
      if ( v65 )
        Actor_UnequipItem(
          (PlayerCharacter *)arg0,
          v18,
          a2,
          st6_0,
          *(_DWORD *)(v65 + 8),
          1,
          **(ExtraDataList ***)v65,
          0,
          0,
          0);
    }
  }
  if ( v20 )
  {
    if ( sub_4D74B0((_DWORD *)v20) )
    {
      if ( (*(int (__thiscall **)(int *))(*a1 + 0x36C))(a1) == 4
        || (*(int (__thiscall **)(int *))(*a1 + 0x36C))(a1) == 9 )
      {
        if ( LOBYTE(GameHour) )
          (*(void (__thiscall **)(int *, TESChildCELL *, int))(*a1 + 0x188))(a1, arg0, 1);
        (*(void (__thiscall **)(int *, TESChildCELL *))(*a1 + 0x194))(a1, arg0);
      }
      else if ( PlayerCharacter::IsSleeping_(TESDataHandler_g_PlayerRef) )
      {
        v56 = (void *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v97 + 0x170))(v97);
        v57 = OblivionDynamicCast(
                v56,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                &TESFurniture `RTTI Type Descriptor',
                0);
        v58 = *a1;
        GameHour = *(float *)&v57;
        v59 = (*(int (__thiscall **)(int *))(v58 + 0x380))(a1);
        sub_65AC20(arg0, 1);
        v93 = (double)*(unsigned __int16 *)(v59 + 0xC) / dbl_A2FC70;
        (*((void (__thiscall **)(TESChildCELL *, _DWORD))arg0->vtbl + 0x7A))(arg0, LODWORD(v93));
        v94 = *(unsigned __int8 *)(v59 + 0xE);
        v86 = ((double (__thiscall *)(TESChildCELL *))*((_DWORD *)arg0->vtbl + 0x3B))(arg0);
        sub_4AEB40((int)&v88, v94, v86);
        v95 = (double)*(unsigned __int16 *)(v59 + 0xC) / dbl_A2FC70;
        NiMatrix33_InitRotationTransform((float *)&v89[0xC], v95);
        v60 = sub_7101F0((NiTransform *)&v89[0xC], (NiTransform *)v89, &v88);
        v88.x = v60->rot.data[0][0];
        v61 = *((unsigned __int8 *)a1 + 0x124);
        v88.y = v60->rot.data[0][1];
        v88.z = v60->rot.data[0][2];
        sub_4D7300(v97, v61, 1);
        *(float *)v89 = *(float *)v59 + v88.x;
        *(float *)&v89[4] = *(float *)(v59 + 4) + v88.y;
        vtbl = (TESObjectREFRVtbl *)arg0->vtbl;
        *(float *)&v89[8] = *(float *)(v59 + 8) + v88.z;
        ((void (__thiscall *)(TESChildCELL *, _BYTE *))vtbl[1].super.Unk_09)(arg0, v89);
        v63 = sub_4AEBE0(*(unsigned __int8 *)(v59 + 0xE));
        v87 = v63;
        sub_659B90((int *)arg0, v63, v87);
        v26 = v11->members.type == 4;
        LOBYTE(GameHour) = 0;
        if ( v26 )
        {
          v64 = 1;
          (*(void (__thiscall **)(int *, TESChildCELL *, int, int, _DWORD))(*a1 + 0x370))(
            a1,
            arg0,
            6,
            a1[0x48],
            *((unsigned __int8 *)a1 + 0x124));
          (*(void (__thiscall **)(void *, int))(*(_DWORD *)arg0[0x16].vtbl + 0x17C))(arg0[0x16].vtbl, 1);
          (*(void (__thiscall **)(void *, TESChildCELL *, _DWORD))(*(_DWORD *)arg0[0x16].vtbl + 0x80))(
            arg0[0x16].vtbl,
            arg0,
            0);
        }
        else
        {
          (*(void (__thiscall **)(int *, TESChildCELL *, int, int, _DWORD))(*a1 + 0x370))(
            a1,
            arg0,
            1,
            a1[0x48],
            *((unsigned __int8 *)a1 + 0x124));
          v64 = LOBYTE(GameHour);
        }
        if ( (*(unsigned __int8 (__thiscall **)(int *, TESChildCELL *))(*a1 + 0x384))(a1, arg0) )
        {
          if ( v64 )
          {
            v66 = sub_5E12B0((Actor *)arg0);
            if ( v66 )
              (*(void (__thiscall **)(UInt32, int, _DWORD))(*(_DWORD *)v66 + 0x9C))(v66, 1, 0);
            (*(void (__thiscall **)(int *, TESChildCELL *, int, int, _DWORD))(*a1 + 0x370))(
              a1,
              arg0,
              9,
              a1[0x48],
              *((unsigned __int8 *)a1 + 0x124));
          }
          else
          {
            (*(void (__thiscall **)(int *, TESChildCELL *, int, int, _DWORD))(*a1 + 0x370))(
              a1,
              arg0,
              4,
              a1[0x48],
              *((unsigned __int8 *)a1 + 0x124));
          }
        }
      }
      else
      {
        (*(void (__thiscall **)(int *, TESChildCELL *))(*a1 + 0x1B4))(a1, arg0);
      }
      return;
    }
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v20 + 0x170))(v20) == TESDataHandler_g_XMarkerHeading )
      goto LABEL_95;
  }
  v67 = (char *)v11->members.location;
  if ( v67 )
  {
    if ( sub_569740(v67) == 3 )
    {
LABEL_95:
      v68 = a1[0xD];
      if ( (!v68 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v68 + 0x2C))(v68))
        && !(*((int (__thiscall **)(TESChildCELL *))arg0->vtbl + 0x63))(arg0) )
      {
        if ( v20 )
          v69 = *(float *)(v20 + 0x28);
        else
          v69 = *(float *)((*((int (__thiscall **)(TESChildCELL *, _BYTE *))arg0->vtbl + 0x3C))(arg0, v89) + 8);
        v100 = v69;
        (*((void (__thiscall **)(TESChildCELL *, _DWORD))arg0->vtbl + 0x7A))(arg0, LODWORD(v100));
      }
    }
  }
  (*(void (__thiscall **)(int *, TESChildCELL *))(*a1 + 0x194))(a1, arg0);
  if ( LOBYTE(GameHour) )
  {
    v70 = a1[0xD];
    if ( !v70
      || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v70 + 0x2C))(v70)
      || (v11->members.packageFlags & 4) == 0 )
    {
      goto LABEL_106;
    }
  }
}
