// TES4 authoritative: rebuilds the two player camera collision bhkSimpleShapePhantoms from sphere shape radius and filter layer 0x18 cinfo; only observed constructor path for the object used by 0x5326B0.
unsigned int __thiscall PlayerCameraCollisionPhantomPair_Rebuild(volatile LONG **this, float a2, int a3)
{
  bhkRefObject *v4; // eax
  volatile LONG *v5; // edi
  bhkRefObject *v6; // ebx
  int v7; // eax
  bhkRefObject *v8; // eax
  volatile LONG *v9; // esi
  bhkRefObject *v10; // eax
  volatile LONG *v11; // edi
  volatile LONG *v12; // esi
  int v13; // esi
  _DWORD *ThreadLocalStoragePointer; // edi
  int v15; // ecx
  unsigned int result; // eax
  int v17; // ecx
  unsigned int v19; // [esp+24h] [ebp-D8h]
  OB_CollisionPhantomCinfo_010201A0 v20; // [esp+2Ch] [ebp-D0h] BYREF
  OB_CollisionPhantomCinfo_010201A0 info; // [esp+8Ch] [ebp-70h] BYREF
  int v22; // [esp+F8h] [ebp-4h]

  v4 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x5323aa*/
  v5 = 0; /*0x5323b6*/
  v22 = 0; /*0x5323ba*/
  if ( v4 ) /*0x5323c1*/
    v6 = bhkSphereShape_CtorRadius(v4, a2, COERCE_FLOAT(1)); /*0x5323d3*/
  else
    v6 = 0; /*0x5323d7*/
  OB_bhkShapePhantomCinfo_InitIdentity_010201A0(&info); /*0x5323e0*/
  v22 = 1; /*0x5323e9*/
  OB_bhkShapePhantomCinfo_InitIdentity_010201A0(&v20); /*0x5323f4*/
  v7 = (unsigned __int16)(dword_B2EB3C + 1); /*0x53240a*/
  LOBYTE(v22) = 2; /*0x53240f*/
  dword_B2EB3C = v7; /*0x532417*/
  if ( !v7 ) /*0x53241c*/
  {
    v7 = 0xA; /*0x53241e*/
    dword_B2EB3C = 0xA; /*0x532423*/
  }
  v19 = (v7 << 0x10) | 0x18;                    // Second camera collision phantom uses generated high-word identity and filter layer 0x18. /*0x532430*/
  info.collisionFilter = (a3 << 0x10) | 0x18;   // First camera collision phantom uses filter layer 0x18 plus caller high-word identity. /*0x532434*/
  if ( v6 ) /*0x53243b*/
    info.shape = v6->hkObject; /*0x532440*/
  else
    info.shape = 0; /*0x532449*/
  info.transform[1] = 0.0; /*0x532454*/
  info.transform[2] = 0.0; /*0x53245b*/
  info.transform[3] = 0.0; /*0x532462*/
  info.transform[4] = 0.0; /*0x532469*/
  info.transform[6] = 0.0; /*0x532470*/
  info.transform[7] = 0.0; /*0x532477*/
  info.transform[8] = 0.0; /*0x53247e*/
  info.transform[9] = 0.0; /*0x532485*/
  info.transform[0xB] = 0.0; /*0x53248c*/
  info.transform[0] = 1.0; /*0x532495*/
  info.transform[5] = 1.0; /*0x53249c*/
  info.transform[0xA] = 1.0; /*0x5324a3*/
  info.transform[0xC] = 0.0; /*0x5324aa*/
  info.transform[0xD] = 0.0; /*0x5324b1*/
  info.transform[0xE] = 0.0; /*0x5324b8*/
  info.transform[0xF] = 0.0; /*0x5324bf*/
  v8 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x5324c6*/
  LOBYTE(v22) = 3; /*0x5324d4*/
  if ( v8 ) /*0x5324dc*/
    v5 = (volatile LONG *)OB_bhkSimpleShapePhantom_CtorFromCinfo_010201A0(v8, &info); /*0x5324ed*/
  v9 = *this; /*0x5324ef*/
  LOBYTE(v22) = 2; /*0x5324f3*/
  if ( v9 != v5 ) /*0x5324fb*/
  {
    if ( v9 ) /*0x5324ff*/
    {
      if ( !InterlockedDecrement(v9 + 1) ) /*0x532505*/
        (**(void (__thiscall ***)(volatile LONG *, int))v9)(v9, 1); /*0x53251b*/
    }
    *this = v5; /*0x532523*/
    if ( v5 ) /*0x532525*/
      InterlockedIncrement(v5 + 1); /*0x53252b*/
  }
  v20.collisionFilter = v19; /*0x532537*/
  if ( v6 ) /*0x53253b*/
    v20.shape = v6->hkObject; /*0x532540*/
  else
    v20.shape = 0; /*0x532546*/
  v20.transform[1] = 0.0; /*0x532552*/
  v20.transform[2] = 0.0; /*0x532556*/
  v20.transform[3] = 0.0; /*0x53255a*/
  v20.transform[4] = 0.0; /*0x53255e*/
  v20.transform[6] = 0.0; /*0x532562*/
  v20.transform[7] = 0.0; /*0x532566*/
  v20.transform[8] = 0.0; /*0x53256a*/
  v20.transform[9] = 0.0; /*0x53256e*/
  v20.transform[0xB] = 0.0; /*0x532572*/
  v20.transform[0] = 1.0; /*0x532578*/
  v20.transform[5] = 1.0; /*0x53257c*/
  v20.transform[0xA] = 1.0; /*0x532580*/
  v20.transform[0xC] = 0.0; /*0x532584*/
  v20.transform[0xD] = 0.0; /*0x532588*/
  v20.transform[0xE] = 0.0; /*0x53258c*/
  v20.transform[0xF] = 0.0; /*0x532593*/
  v10 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x53259a*/
  LOBYTE(v22) = 4; /*0x5325a8*/
  if ( v10 ) /*0x5325b0*/
    v11 = (volatile LONG *)OB_bhkSimpleShapePhantom_CtorFromCinfo_010201A0(v10, &v20); /*0x5325be*/
  else
    v11 = 0; /*0x5325c2*/
  v12 = *(this + 1); /*0x5325c8*/
  LOBYTE(v22) = 2; /*0x5325cd*/
  if ( v12 != v11 ) /*0x5325d5*/
  {
    if ( v12 ) /*0x5325d9*/
    {
      if ( !InterlockedDecrement(v12 + 1) ) /*0x5325df*/
        (**(void (__thiscall ***)(volatile LONG *, int))v12)(v12, 1); /*0x5325f5*/
    }
    *(this + 1) = v11; /*0x5325fd*/
    if ( v11 ) /*0x532600*/
      InterlockedIncrement(v11 + 1); /*0x532606*/
  }
  v13 = MEMORY[0xBA9DE4]; /*0x532612*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x532618*/
  LOBYTE(v22) = 1; /*0x53261f*/
  if ( (int)v20.propertyCapacityFlags >= 0 ) /*0x532627*/
  {
    v15 = *(_DWORD *)(ThreadLocalStoragePointer[v13] + 0x19C); /*0x53262c*/
    if ( !v15 ) /*0x532634*/
      v15 = unk_BA7D9C; /*0x532636*/
    sub_8A75D0(v15, (_DWORD *)v20.propertyData, 8 * v20.propertyCapacityFlags, 0x14); /*0x53264f*/
  }
  result = info.propertyCapacityFlags; /*0x532654*/
  v22 = 0xFFFFFFFF; /*0x53265d*/
  if ( (int)info.propertyCapacityFlags >= 0 ) /*0x532668*/
  {
    v17 = *(_DWORD *)(ThreadLocalStoragePointer[v13] + 0x19C); /*0x53266d*/
    if ( !v17 ) /*0x532675*/
      v17 = unk_BA7D9C; /*0x532677*/
    return sub_8A75D0(v17, (_DWORD *)info.propertyData, 8 * info.propertyCapacityFlags, 0x14); /*0x532693*/
  }
  return result; /*0x532698*/
}
