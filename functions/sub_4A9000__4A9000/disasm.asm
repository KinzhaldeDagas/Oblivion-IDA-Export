0x4A9000: push    esi
0x4A9001: mov     esi, ecx
0x4A9003: mov     eax, [esi+8]
0x4A9006: shr     eax, 3
0x4A9009: test    al, 1
0x4A900B: jnz     short loc_4A901F
0x4A900D: push    esi
0x4A900E: lea     ecx, [esi+54h]
0x4A9011: call    TESEnchantableForm_LinkComponent
0x4A9016: push    1; a2
0x4A9018: mov     ecx, esi; this
0x4A901A: call    TESForm_SetIsLinked
0x4A901F: pop     esi
0x4A9020: retn
