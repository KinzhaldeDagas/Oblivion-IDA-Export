char __thiscall sub_6A5EF0(MagicTarget **this, int _4E4, float *a3)
{
  MagicTarget *v4; // ecx
  void *v5; // eax
  bhkRefObject *v6; // eax
  bhkRefObject *v7; // edi
  TESObjectCELL *ParentCell; // ebx
  int *v9; // eax
  hkRefObject *v10; // ebx
  double v11; // st7
  double v12; // st6
  double v13; // rt2
  int v14; // ecx
  TESObjectCELL *v16; // eax
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
  TESObjectREFR *ParentActor; // [esp+3Ch] [ebp-4A0h]
  NiPoint3 a2; // [esp+40h] [ebp-49Ch] BYREF
  bhkRefObject v35; // [esp+4Ch] [ebp-490h] BYREF
  NiPoint3 v36; // [esp+60h] [ebp-47Ch] BYREF
  int v37; // [esp+6Ch] [ebp-470h] BYREF
  hkRefObject *hkObject; // [esp+70h] [ebp-46Ch]
  _DWORD *v39; // [esp+78h] [ebp-464h]
  int v40; // [esp+80h] [ebp-45Ch]
  float v41; // [esp+8Ch] [ebp-450h]
  float v42; // [esp+90h] [ebp-44Ch]
  float v43; // [esp+94h] [ebp-448h]
  float v44; // [esp+98h] [ebp-444h]
  float v45; // [esp+9Ch] [ebp-440h]
  float v46; // [esp+A0h] [ebp-43Ch]
  float v47; // [esp+A4h] [ebp-438h]
  float v48; // [esp+A8h] [ebp-434h]
  float v49; // [esp+ACh] [ebp-430h]
  float v50; // [esp+B0h] [ebp-42Ch]
  float v51; // [esp+B4h] [ebp-428h]
  float v52; // [esp+B8h] [ebp-424h]
  float v53; // [esp+BCh] [ebp-420h]
  float v54; // [esp+C0h] [ebp-41Ch]
  float v55; // [esp+C4h] [ebp-418h]
  float v56; // [esp+C8h] [ebp-414h]
  float v57; // [esp+CCh] [ebp-410h] BYREF
  float v58; // [esp+D0h] [ebp-40Ch]
  float v59; // [esp+D4h] [ebp-408h]
  float v60[4]; // [esp+DCh] [ebp-400h] BYREF
  float v61; // [esp+ECh] [ebp-3F0h]
  float v62; // [esp+F0h] [ebp-3ECh]
  bhkWorldRayCastData v63; // [esp+FCh] [ebp-3E0h] BYREF
  void **v64; // [esp+17Ch] [ebp-360h] BYREF
  float v65; // [esp+180h] [ebp-35Ch]
  char *v66; // [esp+18Ch] [ebp-350h]
  int v67; // [esp+190h] [ebp-34Ch]
  unsigned int v68; // [esp+194h] [ebp-348h]
  char v69; // [esp+19Ch] [ebp-340h] BYREF
  _DWORD v70[8]; // [esp+31Ch] [ebp-1C0h] BYREF
  char v71; // [esp+33Ch] [ebp-1A0h] BYREF
  int v72; // [esp+4D8h] [ebp-4h]

  v4 = *(this + 8);
  if ( v4 )
    ParentActor = (TESObjectREFR *)MagicTarget_GetParentActor(v4);
  else
    ParentActor = 0;
  v5 = OblivionDynamicCast(
         *(this + 0xE),
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         (struct TypeDescriptor *)&TESBoundObject `RTTI Type Descriptor',
         0);
  v28 = sub_46D5C0(v5);
  if ( flt_A56670 > (double)v28 )
    v28 = flt_A56670;
  v6 = (bhkRefObject *)FormHeapAlloc(0x14u);
  v72 = 0;
  if ( v6 )
  {
    v24 = v28 * dbl_A2FAA0;
    v7 = sub_532090(v6, v24, COERCE_FLOAT(1));
  }
  else
  {
    v7 = 0;
  }
  sub_532250(&v37);
  v72 = 1;
  v37 = 0x1B;
  if ( v7 )
    hkObject = v7->hkObject;
  else
    hkObject = 0;
  v42 = 0.0;
  v43 = 0.0;
  v44 = 0.0;
  v45 = 0.0;
  v47 = 0.0;
  v48 = 0.0;
  v49 = 0.0;
  v50 = 0.0;
  v52 = 0.0;
  v41 = 1.0;
  v46 = 1.0;
  v51 = 1.0;
  v53 = 0.0;
  v54 = 0.0;
  v55 = 0.0;
  v56 = 0.0;
  sub_531FC0(&v35, (int)&v37);
  LOBYTE(v72) = 2;
  if ( TESObjectREFR_GetParentCell(ParentActor) )
  {
    ParentCell = TESObjectREFR_GetParentCell(ParentActor);
    if ( TESObjectCELL_IsInterior(ParentCell) )
      v9 = (int *)sub_424180(&ParentCell->members.extraData);
    else
      v9 = (int *)bhkWorldM;
    sub_89F470(&v35, v9);
  }
  v65 = flt_A76BA0;
  v64 = &hkAllCdPointCollector::`vftable';
  v66 = &v69;
  v68 = 0x80000008;
  v67 = 0;
  *(float *)&v70[1] = v65;
  v70[0] = &hkAllCdPointCollector::`vftable';
  v70[4] = &v71;
  v70[6] = 0x80000008;
  v70[5] = 0;
  v61 = flt_A76B9C;
  v62 = v61;
  LOBYTE(v72) = 4;
  v10 = v35.hkObject;
  v25 = v28 * dbl_A2FAA0 + dbl_A3F3E8;
  v11 = v25;
  a2.z = v25;
  v26 = *a3 + 0.0;
  v29 = v26;
  v12 = v26;
  v27 = a3[1] + 0.0;
  v31 = a2.z + a3[2];
  v13 = hkFactor;
  v57 = v29 * v13;
  v58 = v27 * v13;
  v59 = v31 * v13;
  a2.z = v11;
  v32 = v12;
  v30 = a2.z + a3[2];
  v60[0] = v32 * v13;
  v60[1] = v58;
  v60[2] = v13 * v30;
  if ( v35.hkObject )
  {
    sub_89F570(&v35);
    ((void (__thiscall *)(hkRefObject *, float *, float *, _DWORD *, void ***))v10->__vftable[0xC].Destructor)(
      v10,
      &v57,
      v60,
      v70,
      &v64);
    sub_89F570(&v35);
  }
  if ( v67 <= 0 )
  {
    sub_8AECA0(&v35);
    if ( v7 )
      v7->__vftable->super.Destructor((NiRefObject *)v7, 1);
    v16 = TESObjectREFR_GetParentCell(ParentActor);
    if ( Actor_IsUnderwater__(ParentActor, (int)a3, (ExtraDataList *)v16, 0.0) )
    {
      LOBYTE(v72) = 3;
    }
    else
    {
      v17 = stru_BA7A40;
      v63.WorldRayCastOutput.HitFraction = 1.0;
      v63.WorldRayCastInput.EnableShapeCollectionFilter = 0;
      v63.WorldRayCastOutput.RootCollidable = 0;
      memset(&v63.BroadPhaseAabbCache, 0, 0xC);
      v63.unk60 = v17;
      v63.WorldRayCastInput.FilterInfo = 0x1B;
      v18 = (int)ParentActor->vtbl->GetPos(ParentActor);
      v19 = *(float *)v18;
      v20 = *(float *)(v18 + 4);
      v36.z = *(float *)(v18 + 8);
      v21 = dbl_A4D910;
      v22 = a3[2];
      v36.x = v19;
      a2.x = *a3;
      v36.z = v36.z + v21;
      a2.z = v22;
      v36.y = v20;
      v23 = a3[1];
      a2.z = v21 + v22;
      a2.y = v23;
      bhkWorldRayCastData::SetCastInputFrom(&v63, &v36);
      bhkWorldRayCastData::SetCastInputTo(&v63, &a2);
      TES::CastRay(TES, &v63);
      LOBYTE(v72) = 3;
      if ( !v63.WorldRayCastOutput.RootCollidable )
      {
        hkAllCdPointCollector::~hkAllCdPointCollector((hkAllCdPointCollector *)v70);
        LOBYTE(v72) = 2;
        hkAllCdPointCollector::~hkAllCdPointCollector((hkAllCdPointCollector *)&v64);
        LOBYTE(v72) = 1;
        bhkSimpleShapePhantom::~bhkSimpleShapePhantom((bhkSimpleShapePhantom *)&v35);
        v72 = 0xFFFFFFFF;
        sub_8A5090(&v37);
        return 1;
      }
    }
    hkAllCdPointCollector::~hkAllCdPointCollector((hkAllCdPointCollector *)v70);
    LOBYTE(v72) = 2;
    hkAllCdPointCollector::~hkAllCdPointCollector((hkAllCdPointCollector *)&v64);
    LOBYTE(v72) = 1;
    bhkSimpleShapePhantom::~bhkSimpleShapePhantom((bhkSimpleShapePhantom *)&v35);
    v72 = 0xFFFFFFFF;
    sub_8A5090(&v37);
    return 0;
  }
  sub_8AECA0(&v35);
  if ( v7 )
    v7->__vftable->super.Destructor((NiRefObject *)v7, 1);
  LOBYTE(v72) = 3;
  hkAllCdPointCollector::~hkAllCdPointCollector((hkAllCdPointCollector *)v70);
  LOBYTE(v72) = 2;
  hkAllCdPointCollector::~hkAllCdPointCollector((hkAllCdPointCollector *)&v64);
  LOBYTE(v72) = 1;
  bhkSimpleShapePhantom::~bhkSimpleShapePhantom((bhkSimpleShapePhantom *)&v35);
  v72 = 0xFFFFFFFF;
  if ( v40 >= 0 )
  {
    v14 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v14 )
      v14 = dword_BA7D9C;
    sub_8A75D0(v14, v39, 8 * v40, 0x14);
  }
  return 0;
}
