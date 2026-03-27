0x8A70F0: push    esi
0x8A70F1: mov     esi, [esp+4+arg_0]
0x8A70F5: test    esi, esi
0x8A70F7: jz      short loc_8A70FC
0x8A70F9: inc     dword ptr [esi+0Ch]
0x8A70FC: mov     eax, ds:0BA7D98h
0x8A7101: test    eax, eax
0x8A7103: jz      short loc_8A711B
0x8A7105: mov     edx, [eax+0Ch]
0x8A7108: mov     ecx, eax
0x8A710A: add     eax, 0Ch
0x8A710D: dec     edx
0x8A710E: test    edx, edx
0x8A7110: mov     [eax], edx
0x8A7112: jnz     short loc_8A711B
0x8A7114: mov     eax, [ecx]
0x8A7116: push    1
0x8A7118: call    dword ptr [eax+34h]
0x8A711B: mov     ds:0BA7D98h, esi
0x8A7121: pop     esi
0x8A7122: retn
