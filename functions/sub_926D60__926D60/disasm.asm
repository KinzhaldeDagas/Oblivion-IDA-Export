0x926D60: push    esi
0x926D61: mov     esi, ecx
0x926D63: call    sub_926D90
0x926D68: test    [esp+4+arg_0], 1
0x926D6D: jz      short loc_926D82
0x926D6F: movzx   edx, word ptr [esi+4]
0x926D73: mov     ecx, ds:0BA7D98h
0x926D79: mov     eax, [ecx]
0x926D7B: push    0Ch
0x926D7D: push    edx
0x926D7E: push    esi
0x926D7F: call    dword ptr [eax+14h]
0x926D82: mov     eax, esi
0x926D84: pop     esi
0x926D85: retn    4
