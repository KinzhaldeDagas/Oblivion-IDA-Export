0x6CE210: push    ebx
0x6CE211: push    esi
0x6CE212: mov     ebx, ecx
0x6CE214: mov     esi, [ebx+3Ch]
0x6CE217: push    edi
0x6CE218: mov     edi, [esp+0Ch+arg_0]
0x6CE21C: cmp     esi, edi
0x6CE21E: jz      short loc_6CE251
0x6CE220: test    esi, esi
0x6CE222: jz      short loc_6CE240
0x6CE224: lea     eax, [esi+4]
0x6CE227: push    eax; lpAddend
0x6CE228: call    dword ptr ds:0A2807Ch
0x6CE22E: test    eax, eax
0x6CE230: jnz     short loc_6CE240
0x6CE232: test    esi, esi
0x6CE234: jz      short loc_6CE240
0x6CE236: mov     edx, [esi]
0x6CE238: mov     eax, [edx]
0x6CE23A: push    1
0x6CE23C: mov     ecx, esi
0x6CE23E: call    eax
0x6CE240: test    edi, edi
0x6CE242: mov     [ebx+3Ch], edi
0x6CE245: jz      short loc_6CE251
0x6CE247: add     edi, 4
0x6CE24A: push    edi; lpAddend
0x6CE24B: call    dword ptr ds:0A28078h
0x6CE251: pop     edi
0x6CE252: pop     esi
0x6CE253: pop     ebx
0x6CE254: retn    8
