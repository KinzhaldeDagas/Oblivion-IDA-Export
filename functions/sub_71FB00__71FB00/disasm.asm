0x71FB00: push    esi
0x71FB01: mov     esi, ecx
0x71FB03: mov     eax, [esi]
0x71FB05: push    eax
0x71FB06: call    FormHeapFree
0x71FB0B: mov     ecx, [esi+10h]
0x71FB0E: add     esp, 4
0x71FB11: test    ecx, ecx
0x71FB13: jz      short loc_71FB1C
0x71FB15: push    1
0x71FB17: call    sub_71FB00
0x71FB1C: test    [esp+4+arg_0], 1
0x71FB21: jz      short loc_71FB2C
0x71FB23: push    esi
0x71FB24: call    FormHeapFree
0x71FB29: add     esp, 4
0x71FB2C: mov     eax, esi
0x71FB2E: pop     esi
0x71FB2F: retn    4
