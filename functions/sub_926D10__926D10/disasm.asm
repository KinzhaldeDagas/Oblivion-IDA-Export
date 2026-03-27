0x926D10: push    esi
0x926D11: mov     esi, ecx
0x926D13: call    sub_926CA0
0x926D18: test    [esp+4+arg_0], 1
0x926D1D: jz      short loc_926D32
0x926D1F: movzx   edx, word ptr [esi+4]
0x926D23: mov     ecx, ds:0BA7D98h
0x926D29: mov     eax, [ecx]
0x926D2B: push    0Ch
0x926D2D: push    edx
0x926D2E: push    esi
0x926D2F: call    dword ptr [eax+14h]
0x926D32: mov     eax, esi
0x926D34: pop     esi
0x926D35: retn    4
