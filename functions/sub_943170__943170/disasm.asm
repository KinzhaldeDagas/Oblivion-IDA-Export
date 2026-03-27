0x943170: push    esi
0x943171: mov     esi, ecx
0x943173: call    sub_9431A0
0x943178: test    [esp+4+arg_0], 1
0x94317D: jz      short loc_943192
0x94317F: movzx   edx, word ptr [esi+4]
0x943183: mov     ecx, ds:0BA7D98h
0x943189: mov     eax, [ecx]
0x94318B: push    15h
0x94318D: push    edx
0x94318E: push    esi
0x94318F: call    dword ptr [eax+14h]
0x943192: mov     eax, esi
0x943194: pop     esi
0x943195: retn    4
