0x726190: mov     edx, [esp+arg_4]
0x726194: mov     eax, [esp+arg_0]
0x726198: push    esi
0x726199: mov     dword ptr [edx], 0
0x72619F: movzx   esi, word ptr [ecx+26h]
0x7261A3: cmp     eax, esi
0x7261A5: jb      short loc_7261AD
0x7261A7: xor     eax, eax
0x7261A9: pop     esi
0x7261AA: retn    8
0x7261AD: mov     ecx, [ecx+20h]
0x7261B0: mov     esi, [ecx+eax*4]
0x7261B3: test    esi, esi
0x7261B5: jz      short loc_7261A7
0x7261B7: mov     eax, [esi+4]
0x7261BA: mov     [edx], eax
0x7261BC: mov     edx, [esi]
0x7261BE: mov     eax, [edx+4]
0x7261C1: push    0
0x7261C3: push    0
0x7261C5: mov     ecx, esi
0x7261C7: call    eax
0x7261C9: mov     eax, [esi+8]
0x7261CC: pop     esi
0x7261CD: retn    8
