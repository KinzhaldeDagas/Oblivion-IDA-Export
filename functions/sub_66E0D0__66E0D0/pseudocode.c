char __fastcall sub_66E0D0(TESObjectREFR *a1, int a2, void *a3, float *a4, char a5, char a6)
{
  float v6; // esi
  double v7; // st7
  MobileObject *v8; // ecx
  float *CharProxy; // eax
  double (__thiscall *v10)(_DWORD); // eax
  double v11; // st7
  double v12; // st6
  float x; // edi
  NiTransform *v14; // eax
  hkVector4 v15; // xmm0
  MobileObject *v16; // ecx
  TESObjectREFR *CollisionFilterInfo; // eax
  double v18; // rt0
  int v19; // eax
  double v20; // st6
  PlayerCharacter *v21; // ecx
  TESObjectCELL *DwordAtOffset40; // esi
  BSExtraDataVtbl *v23; // eax
  float v24; // eax
  double v25; // st7
  double v26; // st6
  double v27; // st5
  float v28; // eax
  double v29; // st7
  bhkRefObject *v30; // eax
  bhkRefObject *v31; // edi
  MobileObject *v32; // ecx
  unsigned int v33; // esi
  double v34; // rt0
  TESObjectCELL *v35; // esi
  int *v36; // eax
  hkRefObject *hkObject; // esi
  int v38; // ecx
  double v40; // st7
  float v41; // eax
  float v42; // [esp+1Ch] [ebp-4D4h]
  float v43; // [esp+1Ch] [ebp-4D4h]
  float v44; // [esp+1Ch] [ebp-4D4h]
  float v45; // [esp+1Ch] [ebp-4D4h]
  float v46; // [esp+1Ch] [ebp-4D4h]
  float v47; // [esp+1Ch] [ebp-4D4h]
  float v48; // [esp+1Ch] [ebp-4D4h]
  float v49; // [esp+1Ch] [ebp-4D4h]
  float v50; // [esp+1Ch] [ebp-4D4h]
  float v51; // [esp+1Ch] [ebp-4D4h]
  char v52; // [esp+23h] [ebp-4CDh]
  float Radius; // [esp+24h] [ebp-4CCh]
  float v54; // [esp+24h] [ebp-4CCh]
  float v55; // [esp+24h] [ebp-4CCh]
  float v56; // [esp+24h] [ebp-4CCh]
  float v57; // [esp+24h] [ebp-4CCh]
  float v58; // [esp+24h] [ebp-4CCh]
  int v59; // [esp+24h] [ebp-4CCh]
  float angleZ; // [esp+28h] [ebp-4C8h]
  float v61; // [esp+28h] [ebp-4C8h]
  float v62; // [esp+28h] [ebp-4C8h]
  float v63; // [esp+28h] [ebp-4C8h]
  float v64; // [esp+28h] [ebp-4C8h]
  NiTransform v65; // [esp+2Ch] [ebp-4C4h] BYREF
  double v66; // [esp+60h] [ebp-490h]
  float v67; // [esp+6Ch] [ebp-484h]
  float v68; // [esp+70h] [ebp-480h]
  float v69; // [esp+74h] [ebp-47Ch]
  float v70; // [esp+78h] [ebp-478h]
  float v71; // [esp+7Ch] [ebp-474h]
  float v72; // [esp+80h] [ebp-470h]
  bhkSerializable self; // [esp+84h] [ebp-46Ch] BYREF
  char v74; // [esp+98h] [ebp-458h] BYREF
  int v75; // [esp+9Ch] [ebp-454h] BYREF
  OB_CollisionPhantomCinfo_010201A0 info; // [esp+A0h] [ebp-450h] BYREF
  NiPoint3 v77; // [esp+108h] [ebp-3E8h] BYREF
  char v78; // [esp+114h] [ebp-3DCh] BYREF
  NiMatrix33 v79; // [esp+120h] [ebp-3D0h] BYREF
  NiTransform v80; // [esp+144h] [ebp-3ACh] BYREF
  unsigned int v81; // [esp+178h] [ebp-378h]
  char v82; // [esp+17Ch] [ebp-374h] BYREF
  __m128 v83; // [esp+280h] [ebp-270h] BYREF
  hkVector4 v84; // [esp+290h] [ebp-260h]
  __int128 v85; // [esp+2A0h] [ebp-250h]
  __int128 v86; // [esp+2B0h] [ebp-240h] BYREF
  char v87; // [esp+2D0h] [ebp-220h]
  int v88; // [esp+2D4h] [ebp-21Ch]
  float v89; // [esp+2F4h] [ebp-1FCh]
  int v90; // [esp+300h] [ebp-1F0h]
  hkVector4 v91; // [esp+310h] [ebp-1E0h]
  int v92; // [esp+320h] [ebp-1D0h]
  int v93; // [esp+324h] [ebp-1CCh]
  float *v94; // [esp+328h] [ebp-1C8h]
  float v95[107]; // [esp+330h] [ebp-1C0h] BYREF
  unsigned int v96; // [esp+4ECh] [ebp-4h]

  v6 = *(float *)&a1; /*0x66e113*/
  LODWORD(v65.rot.data[1][2]) = a1; /*0x66e119*/
  LODWORD(v65.rot.data[2][0]) = a4; /*0x66e11d*/
  v7 = sub_46D5C0(a3); /*0x66e121*/
  v8 = (MobileObject *)reference; /*0x66e128*/
  v65.rot.data[1][1] = v7 + v7; /*0x66e131*/
  CharProxy = (float *)MobileObject_GetCharProxy(v8); /*0x66e135*/
  Radius = bhkCharacterController_GetRadius(CharProxy); /*0x66e141*/
  v10 = *(double (__thiscall **)(_DWORD))(*(_DWORD *)LODWORD(v6) + 0xEC); /*0x66e151*/
  v65.rot.data[2][2] = Radius * dbl_A372E0; /*0x66e159*/
  v11 = v10(LODWORD(v6)) * unk_B37D28; /*0x66e15f*/
  v65.rot.data[2][1] = v11; /*0x66e172*/
  sub_5F11F0((MobileObject *)LODWORD(v6), v11, &v65.pos.y, &v77.x); /*0x66e178*/
  if ( a6 ) /*0x66e182*/
  {
    if ( 0.0 != *(float *)(LODWORD(v6) + 0x7FC) ) /*0x66e195*/
    {
      v54 = v65.rot.data[1][1] * dbl_A2FAA0 / v65.rot.data[2][1]; /*0x66e1a5*/
      v55 = asin(v54); /*0x66e1b2*/
      *(float *)(LODWORD(v6) + 0x7FC) = *(float *)(LODWORD(v6) + 0x7FC) + v55; /*0x66e1c8*/
    }
    NiMatrix33_InitRotationZ(&v79, *(float *)(LODWORD(v6) + 0x7FC)); /*0x66e1df*/
    *(float *)(LODWORD(v6) + 0x800) = *(float *)(LODWORD(v6) + 0x7FC); /*0x66e1ea*/
    v56 = v65.rot.data[1][1] * dbl_A2FAA0 / v65.rot.data[2][1]; /*0x66e1fe*/
    v57 = asin(v56); /*0x66e20b*/
    v58 = *(float *)(LODWORD(v6) + 0x7FC) + v57; /*0x66e221*/
    *(float *)(LODWORD(v6) + 0x7FC) = v58; /*0x66e229*/
    v12 = dbl_A3D5B0; /*0x66e22f*/
    if ( v12 < v58 ) /*0x66e23c*/
      *(float *)(LODWORD(v6) + 0x7FC) = v58 - v12; /*0x66e240*/
  }
  else
  {
    NiMatrix33_InitRotationZ(&v79, *(float *)(LODWORD(v6) + 0x800)); /*0x66e259*/
  }
  v52 = 0; /*0x66e269*/
  x = 0.0; /*0x66e272*/
  v59 = a5 != 0 ? 0xA : 0;
  v65.pos.x = 0.0; /*0x66e278*/
  while ( SLODWORD(x) <= v59 ) /*0x66e288*/
  {
    sub_7101F0((NiTransform *)&v79, &v65, &v77); /*0x66e2a2*/
    if ( x != 0.0 ) /*0x66e2a9*/
    {
      v65.rot.data[0][2] = 0.0; /*0x66e2b1*/
      Vector3_NormalizeInPlace((float *)&v65); /*0x66e2b5*/
      angleZ = dbl_A3D5B0 / (double)v59 * (double)(LODWORD(x) - 1); /*0x66e2d9*/
      NiMatrix33_InitRotationZ(&v80.rot, angleZ); /*0x66e2e4*/
      v14 = sub_7101F0(&v80, (NiTransform *)&v78, (NiPoint3 *)&v65); /*0x66e2fd*/
      *(_QWORD *)&v65.rot.data[0][0] = *(_QWORD *)&v14->rot.data[0][0]; /*0x66e304*/
      v65.rot.data[0][2] = v14->rot.data[0][2]; /*0x66e312*/
    }
    v15 = unk_BA7A40; /*0x66e318*/
    v89 = 1.0; /*0x66e326*/
    v16 = (MobileObject *)reference; /*0x66e32e*/
    v87 = 0; /*0x66e334*/
    v88 = 0; /*0x66e33b*/
    v90 = 0; /*0x66e342*/
    v92 = 0; /*0x66e349*/
    v93 = 0; /*0x66e350*/
    v94 = 0; /*0x66e357*/
    v91 = v15; /*0x66e35e*/
    CollisionFilterInfo = MobileObject_GetCollisionFilterInfo(v16, (TESObjectREFR *)&v75); /*0x66e366*/
    v18 = hkFactor; /*0x66e37e*/
    v19 = (HIWORD(CollisionFilterInfo->vtbl) << 0x10) | 0x1F; /*0x66e380*/
    *(float *)&v85 = v65.pos.y * v18; /*0x66e38a*/
    v88 = v19; /*0x66e391*/
    *((float *)&v85 + 1) = v65.pos.z * v18; /*0x66e39e*/
    *((float *)&v85 + 2) = v65.scale * v18; /*0x66e3ab*/
    v86 = v85; /*0x66e3be*/
    v66 = v65.rot.data[2][1] + v65.rot.data[1][1]; /*0x66e3ca*/
    v61 = v66; /*0x66e3ce*/
    v20 = v61; /*0x66e3d2*/
    v62 = v61 * v65.rot.data[0][0]; /*0x66e3dc*/
    v65.rot.data[1][0] = v20 * v65.rot.data[0][1]; /*0x66e3e6*/
    v42 = v20 * v65.rot.data[0][2]; /*0x66e3ee*/
    v84.x = v62 * v18; /*0x66e3f8*/
    v84.y = v65.rot.data[1][0] * v18; /*0x66e405*/
    v84.z = v18 * v42; /*0x66e410*/
    v91 = v84; /*0x66e41f*/
    sub_538C00(v95); /*0x66e427*/
    v21 = reference; /*0x66e42c*/
    v96 = 0; /*0x66e439*/
    v94 = v95; /*0x66e440*/
    v93 = 0; /*0x66e447*/
    DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(v21); /*0x66e453*/
    if ( TESObjectCELL_IsInterior(DwordAtOffset40) ) /*0x66e457*/
      v23 = sub_424180(&DwordAtOffset40->members.extraData); /*0x66e463*/
    else
      v23 = (BSExtraDataVtbl *)MEMORY[0xB35C24]; /*0x66e46a*/
    if ( (*((unsigned __int8 (__thiscall **)(BSExtraDataVtbl *, __int128 *))v23->Destructor + 0x22))(v23, &v86) ) /*0x66e481*/
    {
      v24 = v65.rot.data[2][0]; /*0x66e495*/
      v43 = *(float *)(LODWORD(v95[4]) + 0x14) * v66; /*0x66e49d*/
      v66 = v65.rot.data[1][1] * dbl_A2FAA0; /*0x66e4ab*/
      v44 = v43 - v66; /*0x66e4b3*/
      v65.rot.data[0][0] = v65.rot.data[0][0] * v44; /*0x66e4c5*/
      v65.rot.data[0][1] = v65.rot.data[0][1] * v44; /*0x66e4cf*/
      v65.rot.data[0][2] = v44 * v65.rot.data[0][2]; /*0x66e4d7*/
      v25 = v65.rot.data[0][0]; /*0x66e4e7*/
      v45 = v65.pos.y + v65.rot.data[0][0]; /*0x66e4e9*/
      v26 = v65.rot.data[0][1]; /*0x66e4f9*/
      v65.rot.data[1][0] = v65.pos.z + v65.rot.data[0][1]; /*0x66e4fb*/
      v63 = v65.scale + v65.rot.data[0][2]; /*0x66e507*/
      v70 = v45; /*0x66e50f*/
      v27 = v65.rot.data[1][0]; /*0x66e517*/
      *(float *)LODWORD(v65.rot.data[2][0]) = v45; /*0x66e51b*/
      v71 = v27; /*0x66e51d*/
      *(float *)(LODWORD(v24) + 4) = v71; /*0x66e529*/
      v72 = v63; /*0x66e52c*/
      *(float *)(LODWORD(v24) + 8) = v63; /*0x66e534*/
      v46 = v25 * v25 + v26 * v26 + 0.0 * 0.0; /*0x66e545*/
      v47 = sqrt(v46); /*0x66e552*/
      v48 = v47 - v66; /*0x66e55e*/
      if ( v48 - v65.rot.data[2][2] <= dbl_A2FC68 ) /*0x66e575*/
        goto LABEL_39; /*0x66e575*/
    }
    else
    {
      v28 = v65.rot.data[2][0]; /*0x66e584*/
      v66 = v65.rot.data[1][1] * dbl_A2FAA0; /*0x66e58e*/
      v49 = v66 + v65.rot.data[2][1]; /*0x66e596*/
      v65.rot.data[0][0] = v49 * v65.rot.data[0][0]; /*0x66e5a4*/
      v65.rot.data[0][1] = v49 * v65.rot.data[0][1]; /*0x66e5ae*/
      v65.rot.data[0][2] = v49 * v65.rot.data[0][2]; /*0x66e5b6*/
      v50 = v65.pos.y + v65.rot.data[0][0]; /*0x66e5c2*/
      v65.rot.data[1][0] = v65.pos.z + v65.rot.data[0][1]; /*0x66e5ce*/
      v64 = v65.scale + v65.rot.data[0][2]; /*0x66e5da*/
      v67 = v50; /*0x66e5e2*/
      v29 = v65.rot.data[1][0]; /*0x66e5ea*/
      *(float *)LODWORD(v65.rot.data[2][0]) = v50; /*0x66e5ee*/
      v68 = v29; /*0x66e5f0*/
      *(float *)(LODWORD(v28) + 4) = v68; /*0x66e5fc*/
      v69 = v64; /*0x66e5ff*/
      *(float *)(LODWORD(v28) + 8) = v64; /*0x66e607*/
    }
    v30 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x66e60c*/
    LODWORD(v65.rot.data[1][0]) = v30; /*0x66e614*/
    LOBYTE(v96) = 1; /*0x66e61a*/
    if ( v30 ) /*0x66e622*/
    {
      v51 = v66; /*0x66e62a*/
      v31 = bhkSphereShape_CtorRadius(v30, v51, COERCE_FLOAT(1)); /*0x66e63d*/
    }
    else
    {
      v31 = 0; /*0x66e641*/
    }
    v32 = (MobileObject *)reference; /*0x66e643*/
    LOBYTE(v96) = 0; /*0x66e651*/
    v33 = (HIWORD(MobileObject_GetCollisionFilterInfo(v32, (TESObjectREFR *)&v74)->vtbl) << 0x10) | 0x1F; /*0x66e66e*/
    OB_bhkShapePhantomCinfo_InitIdentity_010201A0(&info); /*0x66e670*/
    LOBYTE(v96) = 2; /*0x66e677*/
    info.collisionFilter = v33; /*0x66e67f*/
    if ( v31 ) /*0x66e686*/
      info.shape = v31->hkObject; /*0x66e68b*/
    else
      info.shape = 0; /*0x66e694*/
    info.transform[1] = 0.0; /*0x66e6a1*/
    info.transform[2] = 0.0; /*0x66e6af*/
    info.transform[3] = 0.0; /*0x66e6b7*/
    info.transform[4] = 0.0; /*0x66e6c5*/
    info.transform[6] = 0.0; /*0x66e6cc*/
    info.transform[7] = 0.0; /*0x66e6d3*/
    info.transform[8] = 0.0; /*0x66e6da*/
    info.transform[9] = 0.0; /*0x66e6e1*/
    info.transform[0xB] = 0.0; /*0x66e6e8*/
    info.transform[0] = 1.0; /*0x66e6f1*/
    info.transform[5] = 1.0; /*0x66e6f8*/
    info.transform[0xA] = 1.0; /*0x66e6ff*/
    info.transform[0xC] = 0.0; /*0x66e706*/
    info.transform[0xD] = 0.0; /*0x66e70d*/
    info.transform[0xE] = 0.0; /*0x66e714*/
    info.transform[0xF] = 0.0; /*0x66e71b*/
    v34 = hkFactor; /*0x66e72c*/
    v83.m128_f32[0] = *(float *)LODWORD(v65.rot.data[2][0]) * v34; /*0x66e72e*/
    v83.m128_f32[1] = *(float *)(LODWORD(v65.rot.data[2][0]) + 4) * v34; /*0x66e73a*/
    v83.m128_f32[2] = v34 * *(float *)(LODWORD(v65.rot.data[2][0]) + 8); /*0x66e744*/
    sub_47DCD0(&info.transform[0xC], &v83); /*0x66e74b*/
    OB_bhkSimpleShapePhantom_CtorFromCinfo_010201A0(&self, &info); /*0x66e75c*/
    LOBYTE(v96) = 3; /*0x66e765*/
    v35 = (TESObjectCELL *)Shared_GetDwordAtOffset40((void *)LODWORD(v65.rot.data[1][2])); /*0x66e772*/
    if ( TESObjectCELL_IsInterior(v35) ) /*0x66e776*/
      v36 = (int *)sub_424180(&v35->members.extraData); /*0x66e782*/
    else
      v36 = (int *)MEMORY[0xB35C24]; /*0x66e789*/
    sub_89F470((int *)&self, v36); /*0x66e793*/
    LODWORD(v80.pos.x) = &hkAllCdBodyPairCollector::`vftable'; /*0x66e79f*/
    LODWORD(v80.pos.z) = &v82; /*0x66e7aa*/
    v81 = 0x80000010; /*0x66e7b1*/
    LOBYTE(v96) = 4; /*0x66e7c5*/
    v80.scale = 0.0; /*0x66e7cd*/
    LOBYTE(v80.pos.y) = 0; /*0x66e7d4*/
    hkObject = self.hkObject; /*0x66e7db*/
    if ( self.hkObject ) /*0x66e7dd*/
    {
      bhkRefObject_UpdateHavokObject(&self); /*0x66e7e3*/
      hkObject->__vftable[0xE].Destructor(hkObject, (bool)&v80.pos); /*0x66e7f7*/
      bhkRefObject_UpdateHavokObject(&self); /*0x66e7fd*/
    }
    sub_8AECA0((int *)&self); /*0x66e806*/
    if ( v31 ) /*0x66e80d*/
      v31->__vftable->super.Destructor((NiRefObject *)v31, 1); /*0x66e817*/
    if ( !LODWORD(v80.scale) ) /*0x66e820*/
      v52 = 1; /*0x66e822*/
    LOBYTE(v96) = 3; /*0x66e82e*/
    hkAllCdBodyPairCollector::~hkAllCdBodyPairCollector((hkAllCdBodyPairCollector *)&v80.pos); /*0x66e836*/
    LOBYTE(v96) = 2; /*0x66e83f*/
    bhkSimpleShapePhantom::~bhkSimpleShapePhantom(&self); /*0x66e847*/
    LOBYTE(v96) = 0; /*0x66e855*/
    if ( (int)info.propertyCapacityFlags >= 0 ) /*0x66e85c*/
    {
      v38 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x66e86e*/
      if ( !v38 ) /*0x66e876*/
        v38 = unk_BA7D9C; /*0x66e878*/
      sub_8A75D0(v38, (_DWORD *)info.propertyData, 8 * info.propertyCapacityFlags, 0x14); /*0x66e894*/
    }
    x = v65.pos.x; /*0x66e899*/
LABEL_39:
    v96 = 0xFFFFFFFF; /*0x66e89d*/
    sub_538C80(v95); /*0x66e8af*/
    ++LODWORD(x); /*0x66e8b4*/
    v65.pos.x = x; /*0x66e8bb*/
    if ( v52 ) /*0x66e8bf*/
      return v52; /*0x66e8bf*/
    v6 = v65.rot.data[1][2]; /*0x66e280*/
  }
  if ( !a5 ) /*0x66e8f8*/
    return v52; /*0x66e8ec*/
  v65.rot.data[2][2] = v65.rot.data[1][1] * dbl_A2FAA0; /*0x66e904*/
  v40 = v65.rot.data[2][2]; /*0x66e908*/
  if ( v65.rot.data[2][2] > dbl_A4D910 ) /*0x66e917*/
    v40 = flt_A56670; /*0x66e91b*/
  v41 = v65.rot.data[2][0]; /*0x66e921*/
  v65.rot.data[1][2] = v40; /*0x66e925*/
  *(_DWORD *)LODWORD(v65.rot.data[2][0]) = *(_DWORD *)(LODWORD(v6) + 0x2C); /*0x66e92c*/
  *(_DWORD *)(LODWORD(v41) + 4) = *(_DWORD *)(LODWORD(v6) + 0x30); /*0x66e931*/
  *(_DWORD *)(LODWORD(v41) + 8) = *(_DWORD *)(LODWORD(v6) + 0x34); /*0x66e937*/
  *(float *)(LODWORD(v41) + 8) = *(float *)(LODWORD(v41) + 8) + v65.rot.data[1][2]; /*0x66e941*/
  return 1; /*0x66e8c9*/
}
