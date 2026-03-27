0x89B360: push    esi
0x89B361: mov     esi, ecx
0x89B363: call    sub_89AD80
0x89B368: test    [esp+4+arg_0], 1
0x89B36D: jz      short loc_89B382
0x89B36F: movzx   edx, word ptr [esi+4]
0x89B373: mov     ecx, ds:0BA7D98h
0x89B379: mov     eax, [ecx]
0x89B37B: push    2Ch ; ','
0x89B37D: push    edx
0x89B37E: push    esi
0x89B37F: call    dword ptr [eax+14h]
0x89B382: mov     eax, esi
0x89B384: pop     esi
0x89B385: retn    4
