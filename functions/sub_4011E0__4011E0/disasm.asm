0x4011E0: mov     ecx, offset unk_B32C00; lpCriticalSection
0x4011E5: mov     byte_B32B00, 0
0x4011EC: mov     byte_B32B01, 0
0x4011F3: call    NiLeaveCriticalSection_0
0x4011F8: cmp     byte ptr [esp+arg_0], 0
0x4011FD: jz      short locret_40120C
0x4011FF: mov     [esp+arg_0], 2
0x401207: jmp     Cmd_AddAchievement_PC_ReturnTrueNoOp; Verified shared return-true stub. In the BSPackedAdditionalGeometryData vtable at 0xA45F1C it occupies virtual +0x4C; this class-specific use is part of the Probable packed-geometry discriminator in BSTempEffectGeometryDecal_Initialize. Other xrefs use the same return-true stub for unrelated purposes.
0x40120C: retn
