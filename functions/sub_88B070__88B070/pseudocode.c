char __usercall sub_88B070@<al>(int a1@<ebx>)
{
  char result; // al
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  char *v5; // esi
  unsigned int v6; // ecx
  int v7; // edx
  void (__thiscall ***v8)(_DWORD, char *, int); // ecx
  _WORD *v9; // eax

  result = unk_BA8040 == 0; /*0x88b099*/
  if ( !unk_BA8040 ) /*0x88b092*/
  {
    off_B2EB04 = (void *(__cdecl *)(size_t, size_t))sub_889770; /*0x88b0a6*/
    off_B2EB08 = (void (__cdecl *)(void *))sub_6078C0; /*0x88b0b0*/
    v2 = (_DWORD *)FormHeapAlloc(0x2Cu); /*0x88b0ba*/
    v3 = v2; /*0x88b0bf*/
    if ( v2 ) /*0x88b0d2*/
    {
      sub_8A7060(v2); /*0x88b0d6*/
      *v3 = &bhkMemory::`vftable'; /*0x88b0db*/
    }
    else
    {
      v3 = 0; /*0x88b0e3*/
    }
    sub_8BBA80(a1, (int)v3, 0, (int)printf, 0); /*0x88b0f7*/
    if ( v3[3]-- == 1 ) /*0x88b0ff*/
      (*(void (__thiscall **)(_DWORD *, int))(*v3 + 0x34))(v3, 1); /*0x88b10e*/
    v5 = (char *)&unk_B47900; /*0x88b110*/
    v6 = (unsigned int)&unk_B47900 & 0xF; /*0x88b117*/
    v7 = 0x60000; /*0x88b11a*/
    if ( ((unsigned int)&unk_B47900 & 0xF) != 0 ) /*0x88b11f*/
    {
      v5 = (char *)&unk_B47900 + 0x10 - v6; /*0x88b128*/
      v7 = 0x60000 - (0x10 - v6); /*0x88b12e*/
    }
    v8 = *(void (__thiscall ****)(_DWORD, char *, int))(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer /*0x88b13f*/
                                                        + MEMORY[0xBA9DE4])
                                                      + 0x19C);
    if ( !v8 ) /*0x88b147*/
      v8 = (void (__thiscall ***)(_DWORD, char *, int))unk_BA7D9C; /*0x88b149*/
    (**v8)(v8, v5, v7); /*0x88b155*/
    sub_8A83C0(); /*0x88b157*/
    v9 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x18, 0x24); /*0x88b16b*/
    v9[2] = 0x18; /*0x88b16f*/
    unk_BA7904 = (int)sub_88A570(v9); /*0x88b184*/
    sub_712590((int)"bhkBoxShape", (TESForm *)sub_8B7E10); /*0x88b189*/
    sub_712590((int)"bhkConvexSweepShape", (TESForm *)sub_8C9C80); /*0x88b198*/
    sub_712590((int)"bhkConvexTransformShape", (TESForm *)sub_8C93F0); /*0x88b1a7*/
    sub_712590((int)"bhkConvexVerticesShape", (TESForm *)sub_8C8900); /*0x88b1b6*/
    sub_712590((int)"bhkCylinderShape", (TESForm *)sub_8C8100); /*0x88b1c5*/
    sub_712590((int)"bhkMultiSphereShape", (TESForm *)sub_8B7470); /*0x88b1d4*/
    sub_712590((int)"bhkMeshShape", (TESForm *)sub_8C62B0); /*0x88b1e3*/
    sub_712590((int)"bhkNiTriStripsShape", (TESForm *)sub_8C62B0); /*0x88b1f2*/
    sub_712590((int)"bhkPackedNiTriStripsShape", (TESForm *)sub_8C5160); /*0x88b204*/
    sub_712590((int)"hkPackedNiTriStripsData", (TESForm *)sub_8C4840); /*0x88b213*/
    sub_712590((int)"bhkPlaneShape", (TESForm *)sub_8C4210); /*0x88b222*/
    sub_712590((int)"bhkSphereShape", (TESForm *)sub_8AF380); /*0x88b231*/
    sub_712590((int)"bhkTriangleShape", (TESForm *)sub_8C3D20); /*0x88b240*/
    sub_712590((int)"bhkMoppBvTreeShape", (TESForm *)sub_8C33C0); /*0x88b24f*/
    sub_712590((int)"bhkTransformShape", (TESForm *)sub_8A1B80); /*0x88b25e*/
    sub_712590((int)"bhkCapsuleShape", (TESForm *)sub_8B6780); /*0x88b26d*/
    sub_712590((int)"bhkListShape", (TESForm *)sub_8A0EF0); /*0x88b27f*/
    sub_712590((int)"bhkBallAndSocketConstraint", (TESForm *)sub_8C2FB0); /*0x88b28e*/
    sub_712590((int)"bhkHingeConstraint", (TESForm *)sub_8C2690); /*0x88b29d*/
    sub_712590((int)"bhkFixedConstraint", (TESForm *)sub_8C2020); /*0x88b2ac*/
    sub_712590((int)"bhkLimitedHingeConstraint", (TESForm *)sub_8B2BE0); /*0x88b2bb*/
    sub_712590((int)"bhkPrismaticConstraint", (TESForm *)sub_8C17B0); /*0x88b2ca*/
    sub_712590((int)"bhkRagdollConstraint", (TESForm *)sub_8C09E0); /*0x88b2d9*/
    sub_712590((int)"bhkStiffSpringConstraint", (TESForm *)sub_8C05C0); /*0x88b2e8*/
    sub_712590((int)"bhkWheelConstraint", (TESForm *)sub_8BFE90); /*0x88b2fa*/
    sub_712590((int)"bhkBreakableConstraint", (TESForm *)sub_8BF6C0); /*0x88b309*/
    sub_712590((int)"bhkMalleableConstraint", (TESForm *)sub_8BEFC0); /*0x88b318*/
    sub_712590((int)"bhkMouseSpringAction", (TESForm *)sub_89E430); /*0x88b327*/
    sub_712590((int)"bhkMotorAction", (TESForm *)sub_8BE8E0); /*0x88b336*/
    sub_712590((int)"bhkDashpotAction", (TESForm *)sub_8BE240); /*0x88b345*/
    sub_712590((int)"bhkAngularDashpotAction", (TESForm *)sub_8BDCE0); /*0x88b354*/
    sub_712590((int)"bhkSpringAction", (TESForm *)sub_8BD780); /*0x88b363*/
    sub_712590((int)"bhkAabbPhantom", (TESForm *)sub_8BA750); /*0x88b375*/
    sub_712590((int)"bhkCollisionObject", (TESForm *)sub_89E960); /*0x88b384*/
    sub_712590((int)"bhkPCollisionObject", (TESForm *)sub_89EFC0); /*0x88b393*/
    sub_712590((int)"bhkSPCollisionObject", (TESForm *)sub_8B71B0); /*0x88b3a2*/
    sub_712590((int)"bhkBlendCollisionObject", (TESForm *)sub_88ED20); /*0x88b3b1*/
    sub_712590((int)"bhkBlendController", (TESForm *)sub_8AA920); /*0x88b3c0*/
    sub_712590((int)"bhkRigidBody", (TESForm *)sub_8A41F0); /*0x88b3cf*/
    sub_712590((int)"bhkRigidBodyT", (TESForm *)sub_8B97A0); /*0x88b3de*/
    sub_712590((int)"bhkSimpleShapePhantom", (TESForm *)sub_8AF070); /*0x88b3f0*/
    sub_712590((int)"bhkCachingShapePhantom", (TESForm *)sub_8BD350); /*0x88b3ff*/
    return sub_712590((int)"bhkExtraData", (TESForm *)sub_8BCF80); /*0x88b40e*/
  }
  return result; /*0x88b416*/
}
