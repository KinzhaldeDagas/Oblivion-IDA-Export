0x68E9F0: mov     edx, [esi]; ActiveEffect process Remove call site: vfunc +0x3C, then bRemoved=1 and owner-list cleanup.
0x68E9F2: mov     eax, [edx+3Ch]
0x68E9F5: mov     ecx, esi
0x68E9F7: call    eax; Verified removal hook: calls ActiveEffect vtable slot +0x3C, then sets bRemoved=1 and removes associated target-side effect state before returning.
0x68E9F9: mov     ecx, [esi+2Ch]
0x68E9FC: test    ecx, ecx
0x68E9FE: mov     byte ptr [esi+12h], 1; Verified: RemoveEffect sets bRemoved=true after calling vtable slot +0x3C and before removing the effect from its parent data list.
0x68EA02: jz      short ActiveEffect_Base_ProcessEffect___Done
0x68EA04: call    sub_6B7240
