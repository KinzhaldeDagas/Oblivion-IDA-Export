0x6BC260: cmp     byte ptr ds:0B3C2D8h, 0
0x6BC267: jz      short loc_6BC26C
0x6BC269: xor     eax, eax
0x6BC26B: retn
0x6BC26C: push    0
0x6BC26E: push    1
0x6BC270: mov     byte ptr ds:0B3C2D8h, 1
0x6BC277: mov     dword ptr ds:0B3D0A0h, offset nullsub_return0_0arg; [Verified] Shared zero-return leaf. BSTempEffectDecal vtable 0xA6822C uses it at +0x54 for GetTypeID 0 and also in other slots; many unrelated vtables reuse this target. Class meaning must be established from the owning vtable and caller.
0x6BC281: mov     dword ptr ds:0B3D5D8h, offset Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x6BC28B: mov     dword ptr ds:0B3D548h, offset Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x6BC295: mov     dword ptr ds:0B3D370h, offset nullsub_return0_0arg; [Verified] Shared zero-return leaf. BSTempEffectDecal vtable 0xA6822C uses it at +0x54 for GetTypeID 0 and also in other slots; many unrelated vtables reuse this target. Class meaning must be established from the owning vtable and caller.
0x6BC29F: mov     dword ptr ds:0B3D2E0h, offset Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x6BC2A9: mov     byte ptr ds:0B3D3EEh, 10h
0x6BC2B0: call    NiPosKey_RegisterEvaluatorType0; Position type 0 registers no boundary-insertion callback in the GuaranteeTimeRange dispatch table.
0x6BC2B5: add     esp, 8
0x6BC2B8: mov     eax, 1
0x6BC2BD: retn
