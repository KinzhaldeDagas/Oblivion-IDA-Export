0x91CF60: push    esi
0x91CF61: mov     esi, ecx
0x91CF63: call    sub_91CF90
0x91CF68: test    [esp+4+arg_0], 1
0x91CF6D: jz      short loc_91CF82
0x91CF6F: movzx   edx, word ptr [esi+4]
0x91CF73: mov     ecx, ds:0BA7D98h
0x91CF79: mov     eax, [ecx]
0x91CF7B: push    15h
0x91CF7D: push    edx
0x91CF7E: push    esi
0x91CF7F: call    dword ptr [eax+14h]
0x91CF82: mov     eax, esi
0x91CF84: pop     esi
0x91CF85: retn    4
