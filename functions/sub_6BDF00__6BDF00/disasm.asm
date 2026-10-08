0x6BDF00: cmp     byte ptr ds:0B3C4C0h, 0
0x6BDF07: jz      short loc_6BDF0C
0x6BDF09: xor     eax, eax
0x6BDF0B: retn
0x6BDF0C: push    0
0x6BDF0E: push    5
0x6BDF10: mov     byte ptr ds:0B3C4C0h, 1
0x6BDF17: mov     dword ptr ds:0B3D100h, offset nullsub_return0_0arg; [Verified] Shared zero-return leaf. BSTempEffectDecal vtable 0xA6822C uses it at +0x54 for GetTypeID 0 and also in other slots; many unrelated vtables reuse this target. Class meaning must be established from the owning vtable and caller.
0x6BDF21: mov     dword ptr ds:0B3D638h, offset Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x6BDF2B: mov     dword ptr ds:0B3D5A8h, offset Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x6BDF35: mov     dword ptr ds:0B3D3D0h, offset nullsub_return0_0arg; [Verified] Shared zero-return leaf. BSTempEffectDecal vtable 0xA6822C uses it at +0x54 for GetTypeID 0 and also in other slots; many unrelated vtables reuse this target. Class meaning must be established from the owning vtable and caller.
0x6BDF3F: mov     dword ptr ds:0B3D340h, offset Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x6BDF49: mov     byte ptr ds:0B3D406h, 8
0x6BDF50: call    sub_6BDE70
0x6BDF55: add     esp, 8
0x6BDF58: mov     eax, 1
0x6BDF5D: retn
