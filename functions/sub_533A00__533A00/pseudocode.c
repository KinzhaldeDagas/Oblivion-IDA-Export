unsigned int __thiscall sub_533A00(bhkRefObject **this, float a2, int a3)
{
  bhkRefObject *v4; // eax
  bhkRefObject *v5; // edi
  bhkRefObject *v6; // esi
  bhkRefObject *v7; // eax
  bhkRefObject *v8; // esi
  unsigned int result; // eax
  int v10; // ecx
  OB_CollisionPhantomCinfo_010201A0 info; // [esp+1Ch] [ebp-70h] BYREF
  int v12; // [esp+88h] [ebp-4h]

  v4 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x533a30*/
  v5 = 0; /*0x533a3c*/
  v12 = 0; /*0x533a40*/
  if ( v4 ) /*0x533a47*/
    v6 = bhkSphereShape_CtorRadius(v4, a2, COERCE_FLOAT(1)); /*0x533a59*/
  else
    v6 = 0; /*0x533a5d*/
  OB_bhkShapePhantomCinfo_InitIdentity_010201A0(&info); /*0x533a63*/
  v12 = 1; /*0x533a73*/
  info.collisionFilter = (a3 << 0x10) | 0x1C; /*0x533a7e*/
  if ( v6 ) /*0x533a82*/
    info.shape = v6->hkObject; /*0x533a87*/
  else
    info.shape = 0; /*0x533a8d*/
  info.transform[1] = 0.0; /*0x533a95*/
  info.transform[2] = 0.0; /*0x533a99*/
  info.transform[3] = 0.0; /*0x533a9d*/
  info.transform[4] = 0.0; /*0x533aa1*/
  info.transform[6] = 0.0; /*0x533aa5*/
  info.transform[7] = 0.0; /*0x533aa9*/
  info.transform[8] = 0.0; /*0x533aad*/
  info.transform[9] = 0.0; /*0x533ab1*/
  info.transform[0xB] = 0.0; /*0x533ab5*/
  info.transform[0] = 1.0; /*0x533abb*/
  info.transform[5] = 1.0; /*0x533abf*/
  info.transform[0xA] = 1.0; /*0x533ac3*/
  info.transform[0xC] = 0.0; /*0x533ac7*/
  info.transform[0xD] = 0.0; /*0x533acb*/
  info.transform[0xE] = 0.0; /*0x533acf*/
  info.transform[0xF] = 0.0; /*0x533ad3*/
  v7 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x533ad7*/
  LOBYTE(v12) = 2; /*0x533ae5*/
  if ( v7 ) /*0x533aed*/
    v5 = OB_bhkSimpleShapePhantom_CtorFromCinfo_010201A0(v7, &info); /*0x533afb*/
  v8 = *(this + 0x68); /*0x533afd*/
  LOBYTE(v12) = 1; /*0x533b05*/
  if ( v8 != v5 ) /*0x533b0d*/
  {
    if ( v8 ) /*0x533b11*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v8->members) ) /*0x533b17*/
        v8->__vftable->super.Destructor((NiRefObject *)v8, 1); /*0x533b2d*/
    }
    *(this + 0x68) = v5; /*0x533b31*/
    if ( v5 ) /*0x533b37*/
      InterlockedIncrement((volatile LONG *)&v5->members); /*0x533b3d*/
  }
  bhkCollisionLayer_SetInteraction(0x1C, 3, 0); /*0x533b49*/
  bhkCollisionLayer_SetInteraction(0x1C, 0x15, 0); /*0x533b54*/
  bhkCollisionLayer_SetInteraction(0x1C, 6, 0); /*0x533b5f*/
  bhkCollisionLayer_SetInteraction(0x1C, 7, 0); /*0x533b6a*/
  bhkCollisionLayer_SetInteraction(0x1C, 8, 0); /*0x533b75*/
  bhkCollisionLayer_SetInteraction(0x1C, 0xB, 0); /*0x533b80*/
  bhkCollisionLayer_SetInteraction(0x1C, 0x12, 0); /*0x533b8e*/
  bhkCollisionLayer_SetInteraction(0x1C, 0x14, 0); /*0x533b99*/
  bhkCollisionLayer_SetInteraction(0x1C, 0x18, 0); /*0x533ba4*/
  bhkCollisionLayer_SetInteraction(0x1C, 0x19, 0); /*0x533baf*/
  bhkCollisionLayer_SetInteraction(0x1C, 0x1A, 0); /*0x533bba*/
  bhkCollisionLayer_SetInteraction(0x1C, 0x1C, 0); /*0x533bc5*/
  bhkCollisionLayer_SetInteraction(0x1C, 0x1E, 0); /*0x533bd3*/
  result = info.propertyCapacityFlags; /*0x533bd8*/
  v12 = 0xFFFFFFFF; /*0x533be1*/
  if ( (int)info.propertyCapacityFlags >= 0 ) /*0x533bec*/
  {
    v10 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x533bfe*/
    if ( !v10 ) /*0x533c06*/
      v10 = unk_BA7D9C; /*0x533c08*/
    return sub_8A75D0(v10, (_DWORD *)info.propertyData, 8 * info.propertyCapacityFlags, 0x14); /*0x533c21*/
  }
  return result; /*0x533c26*/
}
