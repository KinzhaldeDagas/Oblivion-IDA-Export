0x6BD550: xor     eax, eax
0x6BD552: cmp     ds:0B3C3A0h, al
0x6BD558: jz      short loc_6BD55B
0x6BD55A: retn
0x6BD55B: mov     ds:0B3D148h, eax
0x6BD560: mov     ds:0B3D268h, eax
0x6BD565: mov     ds:0B3D680h, eax
0x6BD56A: mov     ds:0B3D1D8h, eax
0x6BD56F: mov     byte ptr ds:0B3C3A0h, 1
0x6BD576: mov     dword ptr ds:0B3D0B8h, offset nullsub_return0_0arg; [Verified] Shared zero-return leaf. BSTempEffectDecal vtable 0xA6822C uses it at +0x54 for GetTypeID 0 and also in other slots; many unrelated vtables reuse this target. Class meaning must be established from the owning vtable and caller.
0x6BD580: mov     dword ptr ds:0B3D5F0h, offset Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x6BD58A: mov     dword ptr ds:0B3D560h, offset Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x6BD594: mov     dword ptr ds:0B3D388h, offset nullsub_return0_0arg; [Verified] Shared zero-return leaf. BSTempEffectDecal vtable 0xA6822C uses it at +0x54 for GetTypeID 0 and also in other slots; many unrelated vtables reuse this target. Class meaning must be established from the owning vtable and caller.
0x6BD59E: mov     dword ptr ds:0B3D2F8h, offset Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x6BD5A8: mov     byte ptr ds:0B3D3F4h, 14h
0x6BD5AF: mov     dword ptr ds:0B3D028h, offset sub_6BD2D0
0x6BD5B9: mov     dword ptr ds:0B3D4D0h, offset sub_6BE360
0x6BD5C3: mov     dword ptr ds:0B3D440h, offset sub_6BD310
0x6BD5CD: mov     eax, 1
0x6BD5D2: retn
