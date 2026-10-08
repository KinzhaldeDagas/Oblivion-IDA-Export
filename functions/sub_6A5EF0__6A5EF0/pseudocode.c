char __thiscall sub_6A5EF0(MagicTarget **this, int _4E4, float *a3)
{
  MagicTarget *v4; // ecx
  void *v5; // eax
  bhkRefObject *v6; // eax
  bhkRefObject *v7; // edi
  TESObjectCELL *DwordAtOffset40; // ebx
  int *v9; // eax
  hkRefObject *hkObject; // ebx
  double v11; // st7
  double v12; // st6
  double v13; // rt2
  int v14; // ecx
  ExtraDataList *v16; // eax
  hkVector4 v17; // xmm0
  int v18; // eax
  float v19; // ecx
  float v20; // edx
  double v21; // st6
  float v22; // eax
  float v23; // edx
  float v24; // [esp+30h] [ebp-4ACh]
  float v25; // [esp+30h] [ebp-4ACh]
  float v26; // [esp+30h] [ebp-4ACh]
  float v27; // [esp+30h] [ebp-4ACh]
  float v28; // [esp+34h] [ebp-4A8h]
  float v29; // [esp+34h] [ebp-4A8h]
  float v30; // [esp+34h] [ebp-4A8h]
  float v31; // [esp+38h] [ebp-4A4h]
  float v32; // [esp+38h] [ebp-4A4h]
  TESChildCELL *ParentActor; // [esp+3Ch] [ebp-4A0h]
  NiPoint3 a2; // [esp+40h] [ebp-49Ch] BYREF
  bhkSerializable self; // [esp+4Ch] [ebp-490h] BYREF
  NiPoint3 v36; // [esp+60h] [ebp-47Ch] BYREF
  OB_CollisionPhantomCinfo_010201A0 info; // [esp+6Ch] [ebp-470h] BYREF
  float v38; // [esp+CCh] [ebp-410h] BYREF
  float v39; // [esp+D0h] [ebp-40Ch]
  float v40; // [esp+D4h] [ebp-408h]
  float v41[4]; // [esp+DCh] [ebp-400h] BYREF
  float v42; // [esp+ECh] [ebp-3F0h]
  float v43; // [esp+F0h] [ebp-3ECh]
  bhkWorldRayCastData v44; // [esp+FCh] [ebp-3E0h] BYREF
  void **v45; // [esp+17Ch] [ebp-360h] BYREF
  float v46; // [esp+180h] [ebp-35Ch]
  char *v47; // [esp+18Ch] [ebp-350h]
  int v48; // [esp+190h] [ebp-34Ch]
  unsigned int v49; // [esp+194h] [ebp-348h]
  char v50; // [esp+19Ch] [ebp-340h] BYREF
  _DWORD v51[8]; // [esp+31Ch] [ebp-1C0h] BYREF
  char v52; // [esp+33Ch] [ebp-1A0h] BYREF
  int v53; // [esp+4D8h] [ebp-4h]

  v4 = *(this + 8); /*0x6a5f35*/
  if ( v4 ) /*0x6a5f3c*/
    ParentActor = (TESChildCELL *)MagicTarget_GetParentActor(v4); /*0x6a5f43*/
  else
    ParentActor = 0; /*0x6a5f49*/
  v5 = OblivionDynamicCast( /*0x6a5f5d*/
         *(this + 0xE),
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         (struct TypeDescriptor *)&TESBoundObject `RTTI Type Descriptor',
         0);
  v28 = sub_46D5C0(v5); /*0x6a5f68*/
  if ( flt_A56670 > (double)v28 ) /*0x6a5f7e*/
    v28 = flt_A56670; /*0x6a5f80*/
  v6 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x6a5f8a*/
  v53 = 0; /*0x6a5f98*/
  if ( v6 ) /*0x6a5f9f*/
  {
    v24 = v28 * dbl_A2FAA0; /*0x6a5fb0*/
    v7 = bhkSphereShape_CtorRadius(v6, v24, COERCE_FLOAT(1)); /*0x6a5fc0*/
  }
  else
  {
    v7 = 0; /*0x6a5fc4*/
  }
  OB_bhkShapePhantomCinfo_InitIdentity_010201A0(&info); /*0x6a5fca*/
  v53 = 1; /*0x6a5fd1*/
  info.collisionFilter = 0x1B; /*0x6a5fdc*/
  if ( v7 ) /*0x6a5fe4*/
    info.shape = v7->hkObject; /*0x6a5fe9*/
  else
    info.shape = 0; /*0x6a5fef*/
  info.transform[1] = 0.0; /*0x6a5ff9*/
  info.transform[2] = 0.0; /*0x6a5ffe*/
  info.transform[3] = 0.0; /*0x6a6009*/
  info.transform[4] = 0.0; /*0x6a6010*/
  info.transform[6] = 0.0; /*0x6a6017*/
  info.transform[7] = 0.0; /*0x6a601e*/
  info.transform[8] = 0.0; /*0x6a6025*/
  info.transform[9] = 0.0; /*0x6a602c*/
  info.transform[0xB] = 0.0; /*0x6a6033*/
  info.transform[0] = 1.0; /*0x6a603c*/
  info.transform[5] = 1.0; /*0x6a6040*/
  info.transform[0xA] = 1.0; /*0x6a6047*/
  info.transform[0xC] = 0.0; /*0x6a604e*/
  info.transform[0xD] = 0.0; /*0x6a6055*/
  info.transform[0xE] = 0.0; /*0x6a605c*/
  info.transform[0xF] = 0.0; /*0x6a6063*/
  OB_bhkSimpleShapePhantom_CtorFromCinfo_010201A0(&self, &info); /*0x6a606a*/
  LOBYTE(v53) = 2; /*0x6a6073*/
  if ( Shared_GetDwordAtOffset40(ParentActor) ) /*0x6a607b*/
  {
    DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(ParentActor); /*0x6a608d*/
    if ( TESObjectCELL_IsInterior(DwordAtOffset40) ) /*0x6a6091*/
      v9 = (int *)sub_424180(&DwordAtOffset40->members.extraData); /*0x6a609d*/
    else
      v9 = (int *)MEMORY[0xB35C24]; /*0x6a60a4*/
    sub_89F470((int *)&self, v9); /*0x6a60ae*/
  }
  v46 = flt_A76BA0; /*0x6a60c7*/
  v45 = &hkAllCdPointCollector::`vftable'; /*0x6a60d3*/
  v47 = &v50; /*0x6a60da*/
  v49 = 0x80000008; /*0x6a60e1*/
  v48 = 0; /*0x6a60e8*/
  *(float *)&v51[1] = v46; /*0x6a60ef*/
  v51[0] = &hkAllCdPointCollector::`vftable'; /*0x6a60f6*/
  v51[4] = &v52; /*0x6a6104*/
  v51[6] = 0x80000008; /*0x6a610b*/
  v51[5] = 0; /*0x6a6112*/
  v42 = flt_A76B9C; /*0x6a611f*/
  v43 = v42; /*0x6a612c*/
  LOBYTE(v53) = 4; /*0x6a6137*/
  hkObject = self.hkObject; /*0x6a6145*/
  v25 = v28 * dbl_A2FAA0 + dbl_A3F3E8; /*0x6a614d*/
  v11 = v25; /*0x6a6151*/
  a2.z = v25; /*0x6a6155*/
  v26 = *a3 + 0.0; /*0x6a6161*/
  v29 = v26; /*0x6a6169*/
  v12 = v26; /*0x6a6172*/
  v27 = a3[1] + 0.0; /*0x6a6174*/
  v31 = a2.z + a3[2]; /*0x6a6187*/
  v13 = hkFactor; /*0x6a6197*/
  v38 = v29 * v13; /*0x6a6199*/
  v39 = v27 * v13; /*0x6a61a6*/
  v40 = v31 * v13; /*0x6a61b3*/
  a2.z = v11; /*0x6a61bc*/
  v32 = v12; /*0x6a61c2*/
  v30 = a2.z + a3[2]; /*0x6a61d1*/
  v41[0] = v32 * v13; /*0x6a61db*/
  v41[1] = v39; /*0x6a61e8*/
  v41[2] = v13 * v30; /*0x6a61f3*/
  if ( self.hkObject ) /*0x6a61fa*/
  {
    bhkRefObject_UpdateHavokObject(&self); /*0x6a6200*/
    ((void (__thiscall *)(hkRefObject *, float *, float *, _DWORD *, void ***))hkObject->__vftable[0xC].Destructor)( /*0x6a622c*/
      hkObject,
      &v38,
      v41,
      v51,
      &v45);
    bhkRefObject_UpdateHavokObject(&self); /*0x6a6232*/
  }
  if ( v48 <= 0 ) /*0x6a6248*/
  {
    sub_8AECA0((int *)&self); /*0x6a62ec*/
    if ( v7 ) /*0x6a62f5*/
      v7->__vftable->super.Destructor((NiRefObject *)v7, 1); /*0x6a62ff*/
    v16 = (ExtraDataList *)Shared_GetDwordAtOffset40(ParentActor); /*0x6a630d*/
    if ( Actor_IsUnderwater__(ParentActor, (int)a3, v16, 0.0) ) /*0x6a6316*/
    {
      LOBYTE(v53) = 3; /*0x6a631f*/
    }
    else
    {
      v17 = unk_BA7A40; /*0x6a6375*/
      v44.WorldRayCastOutput.HitFraction = 1.0; /*0x6a637c*/
      v44.WorldRayCastInput.EnableShapeCollectionFilter = 0; /*0x6a6383*/
      v44.WorldRayCastOutput.RootCollidable = 0; /*0x6a638a*/
      memset(&v44.BroadPhaseAabbCache, 0, 0xC); /*0x6a6391*/
      v44.unk60 = v17; /*0x6a63a6*/
      v44.WorldRayCastInput.FilterInfo = 0x1B; /*0x6a63ae*/
      v18 = (*((int (__thiscall **)(TESChildCELL *))ParentActor->vtbl + 0x5D))(ParentActor); /*0x6a63c3*/
      v19 = *(float *)v18; /*0x6a63c5*/
      v20 = *(float *)(v18 + 4); /*0x6a63c7*/
      v36.z = *(float *)(v18 + 8); /*0x6a63cd*/
      v21 = dbl_A4D910; /*0x6a63d5*/
      v22 = a3[2]; /*0x6a63db*/
      v36.x = v19; /*0x6a63e0*/
      a2.x = *a3; /*0x6a63e8*/
      v36.z = v36.z + v21; /*0x6a63ec*/
      a2.z = v22; /*0x6a63f0*/
      v36.y = v20; /*0x6a63fc*/
      v23 = a3[1]; /*0x6a6400*/
      a2.z = v21 + v22; /*0x6a640b*/
      a2.y = v23; /*0x6a640f*/
      bhkWorldRayCastData::SetCastInputFrom(&v44, &v36); /*0x6a6413*/
      bhkWorldRayCastData::SetCastInputTo(&v44, &a2); /*0x6a6424*/
      TES::CastRay(MEMORY[0xB333A0], &v44); /*0x6a6437*/
      LOBYTE(v53) = 3; /*0x6a6443*/
      if ( !v44.WorldRayCastOutput.RootCollidable ) /*0x6a6457*/
      {
        hkAllCdPointCollector::~hkAllCdPointCollector((hkAllCdPointCollector *)v51); /*0x6a645d*/
        LOBYTE(v53) = 2; /*0x6a6469*/
        hkAllCdPointCollector::~hkAllCdPointCollector((hkAllCdPointCollector *)&v45); /*0x6a6471*/
        LOBYTE(v53) = 1; /*0x6a647a*/
        bhkSimpleShapePhantom::~bhkSimpleShapePhantom(&self); /*0x6a6482*/
        v53 = 0xFFFFFFFF; /*0x6a648b*/
        sub_8A5090(&info); /*0x6a6496*/
        return 1; /*0x6a649b*/
      }
    }
    hkAllCdPointCollector::~hkAllCdPointCollector((hkAllCdPointCollector *)v51); /*0x6a632e*/
    LOBYTE(v53) = 2; /*0x6a633a*/
    hkAllCdPointCollector::~hkAllCdPointCollector((hkAllCdPointCollector *)&v45); /*0x6a6342*/
    LOBYTE(v53) = 1; /*0x6a634b*/
    bhkSimpleShapePhantom::~bhkSimpleShapePhantom(&self); /*0x6a6353*/
    v53 = 0xFFFFFFFF; /*0x6a635c*/
    sub_8A5090(&info); /*0x6a6367*/
    return 0; /*0x6a636e*/
  }
  sub_8AECA0((int *)&self); /*0x6a624e*/
  if ( v7 ) /*0x6a6255*/
    v7->__vftable->super.Destructor((NiRefObject *)v7, 1); /*0x6a625f*/
  LOBYTE(v53) = 3; /*0x6a6268*/
  hkAllCdPointCollector::~hkAllCdPointCollector((hkAllCdPointCollector *)v51); /*0x6a6270*/
  LOBYTE(v53) = 2; /*0x6a627c*/
  hkAllCdPointCollector::~hkAllCdPointCollector((hkAllCdPointCollector *)&v45); /*0x6a6284*/
  LOBYTE(v53) = 1; /*0x6a628d*/
  bhkSimpleShapePhantom::~bhkSimpleShapePhantom(&self); /*0x6a6295*/
  v53 = 0xFFFFFFFF; /*0x6a62a0*/
  if ( (int)info.propertyCapacityFlags >= 0 ) /*0x6a62ab*/
  {
    v14 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x6a62bd*/
    if ( !v14 ) /*0x6a62c5*/
      v14 = unk_BA7D9C; /*0x6a62c7*/
    sub_8A75D0(v14, (_DWORD *)info.propertyData, 8 * info.propertyCapacityFlags, 0x14); /*0x6a62e0*/
  }
  return 0; /*0x6a649d*/
}
