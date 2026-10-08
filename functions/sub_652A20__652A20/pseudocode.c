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
  int v11; // ebx
  char v12; // al
  int v13; // ecx
  float *v14; // ebp
  BSExtraDataVtbl *v15; // eax
  float *v16; // eax
  double DistanceToPoint; // st7
  double v18; // st7
  _DWORD *v19; // ecx
  int v20; // ebp
  int v21; // edx
  void (__thiscall *v22)(int *, TESChildCELL *); // eax
  char v23; // al
  int v24; // ecx
  NiPoint3 *v25; // eax
  bool v26; // zf
  BSExtraDataVtbl *v27; // eax
  char v28; // dl
  int v29; // ebp
  int v30; // eax
  _DWORD *v31; // ecx
  void *v32; // eax
  TESObjectREFR *v33; // eax
  TESObjectREFR *v34; // ebp
  float *v35; // eax
  float *v36; // eax
  float *SafeFloatPointer; // eax
  UInt32 DwordAtOffset40; // eax
  int *v39; // eax
  TESForm *v40; // ebp
  double v41; // st7
  double v42; // st7
  double v43; // st7
  int v44; // ebp
  float *v45; // eax
  int v46; // eax
  TESObjectCELL *v47; // eax
  int v48; // eax
  TESObjectCELL *v49; // eax
  void *v50; // eax
  BSExtraDataVtbl *v51; // ebp
  void *v52; // eax
  BSExtraDataVtbl *v53; // eax
  int v54; // edx
  int v55; // edx
  void *v56; // eax
  void *v57; // eax
  int v58; // edx
  int v59; // ebp
  NiTransform *v60; // eax
  unsigned int v61; // ecx
  void (__thiscall **vtbl)(TESChildCELL *, _BYTE *); // edx
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
  BSExtraDataVtbl *v75; // [esp+38h] [ebp-5Ch]
  float *v76; // [esp+38h] [ebp-5Ch]
  float *v77; // [esp+38h] [ebp-5Ch]
  TESWorldSpace *a5; // [esp+3Ch] [ebp-58h]
  float a5a; // [esp+3Ch] [ebp-58h]
  float a5b; // [esp+3Ch] [ebp-58h]
  float v81; // [esp+40h] [ebp-54h]
  TESWorldSpace *angleZ; // [esp+44h] [ebp-50h]
  TESWorldSpace *angleZa; // [esp+44h] [ebp-50h]
  TESWorldSpace *angleZb; // [esp+44h] [ebp-50h]
  float angleZc; // [esp+44h] [ebp-50h]
  float angleZd; // [esp+44h] [ebp-50h]
  float angleZe; // [esp+44h] [ebp-50h]
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

  v9 = (TESPackage *)(*(int (__usercall **)@<eax>(int *@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*a1 + 0x184))( /*0x652a31*/
                       a1,
                       a4,
                       st6_0,
                       a2);
  v11 = (int)v9; /*0x652a3c*/
  if ( a6 /*0x652a6d*/
    || *((_BYTE *)a1 + 0xD0)
    && (sub_566DC0(v9, kTerrainLODQuadRayDirectionZ, st6_0, a2, (Actor *)arg0, 0, kTerrainLODQuadRayDirectionZ), !v12)
    && ((v13 = a1[0xD]) == 0 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v13 + 0x2C))(v13)) )
  {
    v96 = *a1; /*0x652a7d*/
    v14 = sub_566B30((TESPackage *)v11, (float *)v89, (Actor *)arg0); /*0x652a89*/
    angleZ = sub_566940((TESPackage *)v11, (Actor *)arg0); /*0x652a90*/
    v15 = sub_566A40((char **)v11, (Actor *)arg0); /*0x652a94*/
    if ( !(*(unsigned __int8 (__thiscall **)(int *, TESChildCELL *, _DWORD, _DWORD, _DWORD, BSExtraDataVtbl *, TESWorldSpace *))(v96 + 0x3DC))( /*0x652ac1*/
            a1,
            arg0,
            *(_DWORD *)v14,
            *((_DWORD *)v14 + 1),
            *((_DWORD *)v14 + 2),
            v15,
            angleZ) )
      return; /*0x652ac1*/
  }
  v16 = sub_566B30((TESPackage *)v11, (float *)v89, (Actor *)arg0); /*0x652acf*/
  DistanceToPoint = TESObjectREFR::GetDistanceToPoint((TESObjectREFR *)arg0, v16); /*0x652ad7*/
  v88.x = DistanceToPoint; /*0x652adc*/
  v18 = sub_5677B0((TESPackage *)v11, DistanceToPoint, (TESObjectREFR *)arg0, 1); /*0x652ae5*/
  v90 = v18; /*0x652aea*/
  v19 = *(_DWORD **)(v11 + 0x24); /*0x652aee*/
  v20 = 0; /*0x652af1*/
  v97 = 0; /*0x652af5*/
  if ( v19 ) /*0x652af9*/
  {
    v20 = sub_5697E0(v19); /*0x652b00*/
    v97 = (_BYTE *)v20; /*0x652b02*/
  }
  if ( a1[0xC] ) /*0x652b06*/
  {
    if ( !a1[0x30] ) /*0x652b0d*/
    {
      v20 = a1[0xC]; /*0x652b16*/
      v97 = (_BYTE *)v20; /*0x652b18*/
    }
  }
  if ( v20 ) /*0x652b1e*/
  {
    if ( v20 == (*((int (__thiscall **)(TESChildCELL *))arg0->vtbl + 0xE0))(arg0) ) /*0x652b2e*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v20 + 0x198))(v20, 0) ) /*0x652b3d*/
      {
        (*(void (__thiscall **)(int *, _DWORD))(*a1 + 0x178))(a1, 0); /*0x652b4f*/
        (*((void (__thiscall **)(TESChildCELL *, _DWORD))arg0->vtbl + 0xE1))(arg0, 0); /*0x652b5d*/
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v20 + 0x38C))(v20, 0); /*0x652b6c*/
      }
    }
  }
  if ( *(_BYTE *)(v11 + 0x20) == 5 ) /*0x652b72*/
  {
    v18 = flt_A417B4; /*0x652b74*/
    v90 = flt_A417B4; /*0x652b7a*/
  }
  if ( v20 && sub_4D74B0((_DWORD *)v20) && *(_BYTE *)(v11 + 0x20) != 5 ) /*0x652b99*/
  {
    if ( !a1[0x48] ) /*0x652b9f*/
      a1[0x48] = v20; /*0x652ba8*/
    if ( (*(int (__thiscall **)(int *))(*a1 + 0x36C))(a1) ) /*0x652bb8*/
      goto LABEL_55; /*0x652bbc*/
    if ( !(*(int (__thiscall **)(int *))(*a1 + 0x36C))(a1) /*0x652be9*/
      && sub_4D72C0((TESObjectREFR *)a1[0x48], *((unsigned __int8 *)a1 + 0x124))
      && !*((_BYTE *)a1 + 0xD0) )
    {
      a1[0x48] = 0; /*0x652c00*/
      sub_6FAEE0((Unk128 *)(a1 + 0x4A), 0.0); /*0x652c0a*/
      *((_BYTE *)a1 + 0x136) = 0; /*0x652c0f*/
      a1[0x4A] = LODWORD(g_zeroNiPoint3.x); /*0x652c1c*/
      v21 = *a1; /*0x652c23*/
      a1[0x4B] = LODWORD(g_zeroNiPoint3.y); /*0x652c25*/
      v22 = *(void (__thiscall **)(int *, TESChildCELL *))(v21 + 0x194); /*0x652c2e*/
      a1[0x4C] = LODWORD(g_zeroNiPoint3.z); /*0x652c34*/
      *((_BYTE *)a1 + 0x124) = 0x7F; /*0x652c3a*/
      v22(a1, arg0); /*0x652c41*/
LABEL_106:
      (*(void (__thiscall **)(int *, TESChildCELL *, int))(*a1 + 0x188))(a1, arg0, 1); /*0x6534fb*/
      return; /*0x653508*/
    }
  }
  v18 = sub_566DC0( /*0x652c57*/
          (TESPackage *)v11,
          kTerrainLODQuadRayDirectionZ,
          st6_0,
          a2,
          (Actor *)arg0,
          0,
          kTerrainLODQuadRayDirectionZ);
  if ( !v23 ) /*0x652c5e*/
  {
    v24 = a1[0xD]; /*0x652c64*/
    if ( !v24 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v24 + 0x2C))(v24) ) /*0x652c70*/
    {
      if ( !arg0 ) /*0x652c7c*/
        return; /*0x652c7c*/
      if ( !(*((int (__thiscall **)(TESChildCELL *))arg0->vtbl + 0xE0))(arg0) /*0x652cb2*/
        && ((*(int (__thiscall **)(int *))(*a1 + 0x36C))(a1) == 4
         || (*(int (__thiscall **)(int *))(*a1 + 0x36C))(a1) == 9) )
      {
        (*((void (__thiscall **)(TESChildCELL *))arg0->vtbl + 0xC8))(arg0); /*0x652cbe*/
        return; /*0x652cc7*/
      }
      if ( v20 && sub_4D74B0((_DWORD *)v20) ) /*0x652cd4*/
      {
        v25 = (NiPoint3 *)(*((int (__thiscall **)(TESChildCELL *))arg0->vtbl + 0x5D))(arg0); /*0x652ceb*/
        v26 = a1[0x48] == 0; /*0x652ced*/
        v88 = *v25; /*0x652cf6*/
        GameHour = 0.0; /*0x652d08*/
        if ( v26 ) /*0x652d10*/
          a1[0x48] = v20; /*0x652d12*/
        if ( sub_4DBAE0((TESObjectREFR *)a1[0x48], &v88.x, 1, 1, (NiPoint3 *)(a1 + 0x4A), (int *)&GameHour) ) /*0x652d33*/
        {
          v91 = (TESChildCELL *)*a1; /*0x652d41*/
          angleZa = sub_566940((TESPackage *)v11, (Actor *)arg0); /*0x652d4a*/
          v27 = sub_566A40((char **)v11, (Actor *)arg0); /*0x652d4e*/
          if ( !((unsigned __int8 (__thiscall *)(int *, TESChildCELL *, int, int, int, BSExtraDataVtbl *, TESWorldSpace *))v91[0xF7].vtbl)( /*0x652d7b*/
                  a1,
                  arg0,
                  a1[0x4A],
                  a1[0x4B],
                  a1[0x4C],
                  v27,
                  angleZa) )
            return; /*0x652d7b*/
          v28 = LOBYTE(GameHour); /*0x652d85*/
          a1[0x48] = (int)v97; /*0x652d89*/
          *((_BYTE *)a1 + 0x124) = v28; /*0x652d8f*/
        }
        else
        {
          (*(void (__thiscall **)(int *, TESChildCELL *))(*a1 + 0x194))(a1, arg0); /*0x652da2*/
          v29 = *a1; /*0x652da7*/
          v30 = sub_673980(*(_DWORD *)(v11 + 0x18)); /*0x652daa*/
          (*(void (__thiscall **)(int *, int))(v29 + 0x17C))(a1, v30 - 1); /*0x652dbe*/
        }
      }
      else
      {
        v31 = *(_DWORD **)(v11 + 0x24); /*0x652dc5*/
        if ( v31 ) /*0x652dca*/
        {
          if ( sub_5697E0(v31) ) /*0x652dd0*/
          {
            v32 = (void *)sub_5697E0(*(_DWORD **)(v11 + 0x24)); /*0x652dee*/
            v33 = (TESObjectREFR *)OblivionDynamicCast( /*0x652df4*/
                                     v32,
                                     0,
                                     (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                                     &Actor `RTTI Type Descriptor',
                                     0);
            v34 = v33; /*0x652df9*/
            if ( v33 ) /*0x652e00*/
            {
              v35 = v33->vtbl->GetPos(v33); /*0x652e11*/
              v36 = sub_4121A0((float *)a1 + 0x35, (float *)v89, v35); /*0x652e1f*/
              GameHour = NiPoint3_Length(v36); /*0x652e2b*/
              SafeFloatPointer = GameSetting_GetSafeFloatPointer(flt_B36A88); /*0x652e34*/
              if ( *SafeFloatPointer < (double)GameHour || v90 < (double)v88.x && *((_BYTE *)a1 + 0xD0) ) /*0x652e5d*/
              {
                v98 = *a1; /*0x652e6b*/
                GameHour = COERCE_FLOAT((int)v34->vtbl->GetPos(v34)); /*0x652e7b*/
                angleZb = TESObjectREFR_GetWorldSpace(v34); /*0x652e84*/
                DwordAtOffset40 = Shared_GetDwordAtOffset40(v34); /*0x652e87*/
                if ( !(*(unsigned __int8 (__thiscall **)(int *, TESChildCELL *, _DWORD, _DWORD, _DWORD, UInt32, TESWorldSpace *))(v98 + 0x3DC))( /*0x652eb7*/
                        a1,
                        arg0,
                        *(_DWORD *)LODWORD(GameHour),
                        *(_DWORD *)(LODWORD(GameHour) + 4),
                        *(_DWORD *)(LODWORD(GameHour) + 8),
                        DwordAtOffset40,
                        angleZb) )
                  return; /*0x652eb7*/
                v39 = (int *)v34->vtbl->GetPos(v34); /*0x652ec8*/
                a1[0x35] = *v39; /*0x652ecc*/
                a1[0x36] = v39[1]; /*0x652ed5*/
                a1[0x37] = v39[2]; /*0x652ede*/
              }
            }
          }
        }
      }
      v40 = TESForm_LookupByFormID(0x3Au); /*0x652ef3*/
      GameHour = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x652efa*/
      *(double *)&v88.x = GameHour; /*0x652f04*/
      v41 = sub_6599B0(arg0); /*0x652f08*/
      if ( v41 > *(double *)&v88.x ) /*0x652f16*/
        GameHour = GameHour + dbl_A2F920; /*0x652f22*/
      *(double *)&v88.x = GameHour; /*0x652f2c*/
      v42 = sub_6599B0(arg0); /*0x652f30*/
      v99 = *(double *)&v88.x - v42; /*0x652f3e*/
      v43 = *(float *)&v40[1].member.refID; /*0x652f42*/
      v44 = *a1; /*0x652f45*/
      GameHour = v43; /*0x652f47*/
      angleZc = sub_5677B0((TESPackage *)v11, v43, (TESObjectREFR *)arg0, 1); /*0x652f53*/
      GameHour = dbl_A2F938 / GameHour * v99; /*0x652f67*/
      v81 = GameHour; /*0x652f6f*/
      a5 = sub_566940((TESPackage *)v11, (Actor *)arg0); /*0x652f78*/
      v75 = sub_566A40((char **)v11, (Actor *)arg0); /*0x652f81*/
      v45 = sub_566B30((TESPackage *)v11, (float *)v89, (Actor *)arg0); /*0x652f8a*/
      (*(void (__thiscall **)(int *, TESChildCELL *, float *, BSExtraDataVtbl *, TESWorldSpace *, _DWORD, _DWORD))(v44 + 0x418))( /*0x652f99*/
        a1,
        arg0,
        v45,
        v75,
        a5,
        LODWORD(v81),
        LODWORD(angleZc));
      return; /*0x652fa2*/
    }
  }
LABEL_55:
  if ( !*((_BYTE *)a1 + 0x84) ) /*0x652fa5*/
  {
    if ( sub_565DD0((TESPackage *)v11) ) /*0x652fb0*/
    {
      a5a = flt_A5B6C0; /*0x652fd0*/
      v46 = (*((int (__thiscall **)(TESChildCELL *))arg0->vtbl + 0x5D))(arg0); /*0x652fd3*/
      v18 = flt_A5B6C0; /*0x652fd5*/
      v76 = (float *)v46; /*0x652fdb*/
      a3 = flt_A5B6C0; /*0x652fe7*/
      v71 = (float *)(*((int (__thiscall **)(TESChildCELL *))arg0->vtbl + 0x5D))(arg0); /*0x652fec*/
      v47 = (TESObjectCELL *)Shared_GetDwordAtOffset40(arg0); /*0x652fef*/
      sub_446B90( /*0x652ffb*/
        v47,
        v71,
        a3,
        v76,
        a5a,
        (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))TESObjectREFR_SetOwnedDoorLockedForActor,
        (int)arg0);
    }
    *((_BYTE *)a1 + 0x84) = 1; /*0x653000*/
  }
  if ( sub_565DE0((TESPackage *)v11) ) /*0x653009*/
  {
    a5b = flt_A5B6C0; /*0x653029*/
    v48 = (*((int (__thiscall **)(TESChildCELL *))arg0->vtbl + 0x5D))(arg0); /*0x65302c*/
    v18 = flt_A5B6C0; /*0x65302e*/
    v77 = (float *)v48; /*0x653034*/
    a3a = flt_A5B6C0; /*0x653040*/
    v72 = (float *)(*((int (__thiscall **)(TESChildCELL *))arg0->vtbl + 0x5D))(arg0); /*0x653045*/
    v49 = (TESObjectCELL *)Shared_GetDwordAtOffset40(arg0); /*0x653048*/
    sub_446B90( /*0x653054*/
      v49,
      v72,
      a3a,
      v77,
      a5b,
      (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))TESObjectREFR_ClearOwnedDoorLockForActor,
      (int)arg0);
  }
  if ( !*((_BYTE *)a1 + 0x169) && (*(_DWORD *)(v11 + 0x1C) & 0x100000) != 0 || (*(_DWORD *)(v11 + 0x1C) & 0x200000) != 0 ) /*0x653075*/
  {
    *((_BYTE *)a1 + 0x169) = 1; /*0x65307b*/
    if ( (*(_DWORD *)(v11 + 0x1C) & 0x100000) != 0 ) /*0x65308b*/
    {
      v50 = (void *)(*((int (__thiscall **)(TESChildCELL *))arg0->vtbl + 0x5C))(arg0); /*0x6530a9*/
      v51 = (BSExtraDataVtbl *)OblivionDynamicCast( /*0x6530bb*/
                                 v50,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                 &TESNPC `RTTI Type Descriptor',
                                 0);
      v52 = (void *)(*((int (__thiscall **)(TESChildCELL *))arg0->vtbl + 0x5C))(arg0); /*0x6530ce*/
      v53 = (BSExtraDataVtbl *)OblivionDynamicCast( /*0x6530d1*/
                                 v52,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                 &TESCreature `RTTI Type Descriptor',
                                 0);
      v54 = a1[2]; /*0x6530d6*/
      LOBYTE(v88.x) = 1; /*0x6530de*/
      v92 = 1; /*0x6530e3*/
      if ( v54 ) /*0x6530e8*/
      {
        v55 = *(_DWORD *)(v54 + 0x1C); /*0x6530ea*/
        LOBYTE(v88.x) = (v55 & 0x100000) == 0; /*0x6530f7*/
        v92 = (v55 & 0x200000) == 0; /*0x653104*/
      }
      if ( v51 ) /*0x65310b*/
      {
        sub_5227A0(v51, a2, st6_0, v18, (TESObjectREFR *)arg0, SLOBYTE(v88.x), v92, 0, 1); /*0x653122*/
      }
      else if ( v53 ) /*0x653312*/
      {
        sub_51E240(v53, v11, a2, st6_0, v18, (TESObjectREFR *)arg0, SLOBYTE(v88.x), v92, 1); /*0x653327*/
      }
      v20 = (int)v97; /*0x653127*/
    }
    else
    {
      v65 = (*(int (__thiscall **)(int *, int))(*a1 + 0xEC))(a1, 1); /*0x65333d*/
      if ( v65 ) /*0x653341*/
        Actor_UnequipItem((Actor *)arg0, v18, a2, st6_0, *(_DWORD *)(v65 + 8), 1, **(ExtraDataList ***)v65, 0, 0, 0); /*0x65335a*/
    }
  }
  if ( v20 ) /*0x65312d*/
  {
    if ( sub_4D74B0((_DWORD *)v20) ) /*0x653135*/
    {
      if ( (*(int (__thiscall **)(int *))(*a1 + 0x36C))(a1) == 4 /*0x653166*/
        || (*(int (__thiscall **)(int *))(*a1 + 0x36C))(a1) == 9 )
      {
        if ( LOBYTE(GameHour) ) /*0x653426*/
          (*(void (__thiscall **)(int *, TESChildCELL *, int))(*a1 + 0x188))(a1, arg0, 1); /*0x653435*/
        (*(void (__thiscall **)(int *, TESChildCELL *))(*a1 + 0x194))(a1, arg0); /*0x653442*/
      }
      else if ( PlayerCharacter::IsSleeping_(reference) ) /*0x653172*/
      {
        v56 = (void *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v97 + 0x170))(v97); /*0x653199*/
        v57 = OblivionDynamicCast( /*0x65319c*/
                v56,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                &TESFurniture `RTTI Type Descriptor',
                0);
        v58 = *a1; /*0x6531a1*/
        GameHour = *(float *)&v57; /*0x6531a3*/
        v59 = (*(int (__thiscall **)(int *))(v58 + 0x380))(a1); /*0x6531b8*/
        sub_65AC20((MobileObject *)arg0, 1); /*0x6531ba*/
        v93 = (double)*(unsigned __int16 *)(v59 + 0xC) / dbl_A2FC70; /*0x6531dc*/
        (*((void (__thiscall **)(TESChildCELL *, _DWORD))arg0->vtbl + 0x7A))(arg0, LODWORD(v93)); /*0x6531e7*/
        v94 = *(unsigned __int8 *)(v59 + 0xE); /*0x6531ef*/
        angleZd = ((double (__thiscall *)(TESChildCELL *))*((_DWORD *)arg0->vtbl + 0x3B))(arg0); /*0x653202*/
        sub_4AEB40(&v88.x, v94, angleZd); /*0x65320f*/
        v95 = (double)*(unsigned __int16 *)(v59 + 0xC) / dbl_A2FC70; /*0x65322b*/
        NiMatrix33_InitRotationZ((NiMatrix33 *)&v89[0xC], v95); /*0x653236*/
        v60 = sub_7101F0((NiTransform *)&v89[0xC], (NiTransform *)v89, &v88); /*0x653249*/
        v88.x = v60->rot.data[0][0]; /*0x653250*/
        v61 = *((unsigned __int8 *)a1 + 0x124); /*0x653257*/
        v88.y = v60->rot.data[0][1]; /*0x653260*/
        v88.z = v60->rot.data[0][2]; /*0x65326c*/
        sub_4D7300(v97, v61, 1); /*0x653270*/
        *(float *)v89 = *(float *)v59 + v88.x; /*0x65327c*/
        *(float *)&v89[4] = *(float *)(v59 + 4) + v88.y; /*0x653287*/
        vtbl = (void (__thiscall **)(TESChildCELL *, _BYTE *))arg0->vtbl; /*0x653292*/
        *(float *)&v89[8] = *(float *)(v59 + 8) + v88.z; /*0x653294*/
        vtbl[0x73](arg0, v89); /*0x6532a5*/
        v63 = sub_4AEBE0(*(unsigned __int8 *)(v59 + 0xE)); /*0x6532b0*/
        angleZe = v63; /*0x6532b8*/
        sub_659B90((int *)arg0, v63, angleZe); /*0x6532bb*/
        v26 = *(_BYTE *)(v11 + 0x20) == 4; /*0x6532c0*/
        LOBYTE(GameHour) = 0; /*0x6532c4*/
        if ( v26 ) /*0x6532c9*/
        {
          v64 = 1; /*0x6532eb*/
          (*(void (__thiscall **)(int *, TESChildCELL *, int, int, _DWORD))(*a1 + 0x370))( /*0x6532ed*/
            a1,
            arg0,
            6,
            a1[0x48],
            *((unsigned __int8 *)a1 + 0x124));
          (*(void (__thiscall **)(void *, int))(*(_DWORD *)arg0[0x16].vtbl + 0x17C))(arg0[0x16].vtbl, 1); /*0x6532fc*/
          (*(void (__thiscall **)(void *, TESChildCELL *, _DWORD))(*(_DWORD *)arg0[0x16].vtbl + 0x80))( /*0x65330c*/
            arg0[0x16].vtbl,
            arg0,
            0);
        }
        else
        {
          (*(void (__thiscall **)(int *, TESChildCELL *, int, int, _DWORD))(*a1 + 0x370))( /*0x653380*/
            a1,
            arg0,
            1,
            a1[0x48],
            *((unsigned __int8 *)a1 + 0x124));
          v64 = LOBYTE(GameHour); /*0x653382*/
        }
        if ( (*(unsigned __int8 (__thiscall **)(int *, TESChildCELL *))(*a1 + 0x384))(a1, arg0) ) /*0x653391*/
        {
          if ( v64 ) /*0x65339d*/
          {
            v66 = sub_5E12B0((Actor *)arg0); /*0x6533a1*/
            if ( v66 ) /*0x6533a8*/
              (*(void (__thiscall **)(UInt32, int, _DWORD))(*(_DWORD *)v66 + 0x9C))(v66, 1, 0); /*0x6533b8*/
            (*(void (__thiscall **)(int *, TESChildCELL *, int, int, _DWORD))(*a1 + 0x370))( /*0x6533d6*/
              a1,
              arg0,
              9,
              a1[0x48],
              *((unsigned __int8 *)a1 + 0x124));
          }
          else
          {
            (*(void (__thiscall **)(int *, TESChildCELL *, int, int, _DWORD))(*a1 + 0x370))( /*0x6533fe*/
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
        (*(void (__thiscall **)(int *, TESChildCELL *))(*a1 + 0x1B4))(a1, arg0); /*0x653415*/
      }
      return; /*0x6533df*/
    }
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v20 + 0x170))(v20) == MEMORY[0xB35EB0] ) /*0x653461*/
      goto LABEL_95; /*0x653461*/
  }
  v67 = *(char **)(v11 + 0x24); /*0x653463*/
  if ( v67 ) /*0x653468*/
  {
    if ( sub_569740(v67) == 3 ) /*0x653472*/
    {
LABEL_95:
      v68 = a1[0xD]; /*0x653474*/
      if ( (!v68 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v68 + 0x2C))(v68)) /*0x653490*/
        && !(*((int (__thiscall **)(TESChildCELL *))arg0->vtbl + 0x63))(arg0) )
      {
        if ( v20 ) /*0x653498*/
          v69 = *(float *)(v20 + 0x28); /*0x65349a*/
        else
          v69 = *(float *)((*((int (__thiscall **)(TESChildCELL *, _BYTE *))arg0->vtbl + 0x3C))(arg0, v89) + 8); /*0x6534b0*/
        v100 = v69; /*0x6534b5*/
        (*((void (__thiscall **)(TESChildCELL *, _DWORD))arg0->vtbl + 0x7A))(arg0, LODWORD(v100)); /*0x6534c9*/
      }
    }
  }
  (*(void (__thiscall **)(int *, TESChildCELL *))(*a1 + 0x194))(a1, arg0); /*0x6534d6*/
  if ( LOBYTE(GameHour) ) /*0x6534dd*/
  {
    v70 = a1[0xD]; /*0x6534df*/
    if ( !v70 /*0x6534f9*/
      || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v70 + 0x2C))(v70)
      || (*(_DWORD *)(v11 + 0x1C) & 4) == 0 )
    {
      goto LABEL_106; /*0x6534f9*/
    }
  }
}
