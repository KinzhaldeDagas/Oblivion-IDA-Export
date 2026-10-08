0x6BE3B0: xor     eax, eax
0x6BE3B2: cmp     ds:0B3C4C1h, al
0x6BE3B8: jz      short loc_6BE3BB
0x6BE3BA: retn
0x6BE3BB: mov     ds:0B3D160h, eax
0x6BE3C0: mov     ds:0B3D280h, eax
0x6BE3C5: mov     ds:0B3D698h, eax
0x6BE3CA: mov     ds:0B3D458h, eax
0x6BE3CF: mov     ds:0B3D1F0h, eax
0x6BE3D4: mov     byte ptr ds:0B3C4C1h, 1
0x6BE3DB: mov     dword ptr ds:0B3D0D0h, offset nullsub_return0_0arg; [Verified] Shared zero-return leaf. BSTempEffectDecal vtable 0xA6822C uses it at +0x54 for GetTypeID 0 and also in other slots; many unrelated vtables reuse this target. Class meaning must be established from the owning vtable and caller.
0x6BE3E5: mov     dword ptr ds:0B3D608h, offset Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x6BE3EF: mov     dword ptr ds:0B3D578h, offset Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x6BE3F9: mov     dword ptr ds:0B3D3A0h, offset nullsub_return0_0arg; [Verified] Shared zero-return leaf. BSTempEffectDecal vtable 0xA6822C uses it at +0x54 for GetTypeID 0 and also in other slots; many unrelated vtables reuse this target. Class meaning must be established from the owning vtable and caller.
0x6BE403: mov     dword ptr ds:0B3D310h, offset Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x6BE40D: mov     byte ptr ds:0B3D3FAh, 14h
0x6BE414: mov     dword ptr ds:0B3D040h, offset sub_6BE010
0x6BE41E: mov     dword ptr ds:0B3D4E8h, offset sub_6BE360
0x6BE428: mov     eax, 1
0x6BE42D: retn
