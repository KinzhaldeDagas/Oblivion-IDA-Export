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

  result = byte_BA8040 == 0;
  if ( !byte_BA8040 )
  {
    off_B2EB04 = (void *(__cdecl *)(size_t, size_t))sub_889770;
    off_B2EB08 = (void (__cdecl *)(void *))sub_6078C0;
    v2 = (_DWORD *)FormHeapAlloc(0x2Cu);
    v3 = v2;
    if ( v2 )
    {
      sub_8A7060(v2);
      *v3 = &bhkMemory::`vftable';
    }
    else
    {
      v3 = 0;
    }
    sub_8BBA80(a1, (int)v3, 0, (int)printf, 0);
    if ( v3[3]-- == 1 )
      (*(void (__thiscall **)(_DWORD *, int))(*v3 + 0x34))(v3, 1);
    v5 = (char *)&unk_B47900;
    v6 = (unsigned int)&unk_B47900 & 0xF;
    v7 = 0x60000;
    if ( ((unsigned int)&unk_B47900 & 0xF) != 0 )
    {
      v5 = (char *)&unk_B47900 + 0x10 - v6;
      v7 = 0x60000 - (0x10 - v6);
    }
    v8 = *(void (__thiscall ****)(_DWORD, char *, int))(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex)
                                                      + 0x19C);
    if ( !v8 )
      v8 = (void (__thiscall ***)(_DWORD, char *, int))dword_BA7D9C;
    (**v8)(v8, v5, v7);
    sub_8A83C0();
    v9 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x18, 0x24);
    v9[2] = 0x18;
    dword_BA7904 = (int)sub_88A570(v9);
    sub_712590((int)"bhkBoxShape", (TESForm *)sub_8B7E10);
    sub_712590((int)"bhkConvexSweepShape", (TESForm *)sub_8C9C80);
    sub_712590((int)"bhkConvexTransformShape", (TESForm *)sub_8C93F0);
    sub_712590((int)"bhkConvexVerticesShape", (TESForm *)sub_8C8900);
    sub_712590((int)"bhkCylinderShape", (TESForm *)sub_8C8100);
    sub_712590((int)"bhkMultiSphereShape", (TESForm *)sub_8B7470);
    sub_712590((int)"bhkMeshShape", (TESForm *)sub_8C62B0);
    sub_712590((int)"bhkNiTriStripsShape", (TESForm *)sub_8C62B0);
    sub_712590((int)"bhkPackedNiTriStripsShape", (TESForm *)sub_8C5160);
    sub_712590((int)"hkPackedNiTriStripsData", (TESForm *)sub_8C4840);
    sub_712590((int)"bhkPlaneShape", (TESForm *)sub_8C4210);
    sub_712590((int)"bhkSphereShape", (TESForm *)sub_8AF380);
    sub_712590((int)"bhkTriangleShape", (TESForm *)sub_8C3D20);
    sub_712590((int)"bhkMoppBvTreeShape", (TESForm *)sub_8C33C0);
    sub_712590((int)"bhkTransformShape", (TESForm *)sub_8A1B80);
    sub_712590((int)"bhkCapsuleShape", (TESForm *)sub_8B6780);
    sub_712590((int)"bhkListShape", (TESForm *)sub_8A0EF0);
    sub_712590((int)"bhkBallAndSocketConstraint", (TESForm *)sub_8C2FB0);
    sub_712590((int)"bhkHingeConstraint", (TESForm *)sub_8C2690);
    sub_712590((int)"bhkFixedConstraint", (TESForm *)sub_8C2020);
    sub_712590((int)"bhkLimitedHingeConstraint", (TESForm *)sub_8B2BE0);
    sub_712590((int)"bhkPrismaticConstraint", (TESForm *)sub_8C17B0);
    sub_712590((int)"bhkRagdollConstraint", (TESForm *)sub_8C09E0);
    sub_712590((int)"bhkStiffSpringConstraint", (TESForm *)sub_8C05C0);
    sub_712590((int)"bhkWheelConstraint", (TESForm *)sub_8BFE90);
    sub_712590((int)"bhkBreakableConstraint", (TESForm *)sub_8BF6C0);
    sub_712590((int)"bhkMalleableConstraint", (TESForm *)sub_8BEFC0);
    sub_712590((int)"bhkMouseSpringAction", (TESForm *)sub_89E430);
    sub_712590((int)"bhkMotorAction", (TESForm *)sub_8BE8E0);
    sub_712590((int)"bhkDashpotAction", (TESForm *)sub_8BE240);
    sub_712590((int)"bhkAngularDashpotAction", (TESForm *)sub_8BDCE0);
    sub_712590((int)"bhkSpringAction", (TESForm *)sub_8BD780);
    sub_712590((int)"bhkAabbPhantom", (TESForm *)sub_8BA750);
    sub_712590((int)"bhkCollisionObject", (TESForm *)sub_89E960);
    sub_712590((int)"bhkPCollisionObject", (TESForm *)sub_89EFC0);
    sub_712590((int)"bhkSPCollisionObject", (TESForm *)sub_8B71B0);
    sub_712590((int)"bhkBlendCollisionObject", (TESForm *)sub_88ED20);
    sub_712590((int)"bhkBlendController", (TESForm *)sub_8AA920);
    sub_712590((int)"bhkRigidBody", (TESForm *)sub_8A41F0);
    sub_712590((int)"bhkRigidBodyT", (TESForm *)sub_8B97A0);
    sub_712590((int)"bhkSimpleShapePhantom", (TESForm *)sub_8AF070);
    sub_712590((int)"bhkCachingShapePhantom", (TESForm *)sub_8BD350);
    return sub_712590((int)"bhkExtraData", (TESForm *)sub_8BCF80);
  }
  return result;
}
