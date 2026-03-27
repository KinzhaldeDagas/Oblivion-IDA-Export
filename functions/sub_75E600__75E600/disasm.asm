0x75E600: push    esi
0x75E601: mov     esi, [esp+4+arg_0]
0x75E605: test    esi, esi
0x75E607: push    edi
0x75E608: mov     edi, ecx
0x75E60A: jz      short loc_75E62E
0x75E60C: mov     eax, [esi]
0x75E60E: mov     edx, [eax+4]
0x75E611: mov     ecx, esi
0x75E613: call    edx
0x75E615: test    eax, eax
0x75E617: jz      short loc_75E62E
0x75E619: lea     esp, [esp+0]
0x75E620: cmp     eax, offset dword_B40864
0x75E625: jz      short loc_75E635
0x75E627: mov     eax, [eax+4]
0x75E62A: test    eax, eax
0x75E62C: jnz     short loc_75E620
0x75E62E: pop     edi
0x75E62F: xor     al, al
0x75E631: pop     esi
0x75E632: retn    4
0x75E635: mov     eax, [edi+40h]
0x75E638: test    eax, eax
0x75E63A: jz      short loc_75E62E
0x75E63C: cmp     dword ptr [edi+30h], 0
0x75E640: jz      short loc_75E62E
0x75E642: lea     ecx, [esp+8+arg_0]
0x75E646: push    ecx
0x75E647: push    eax
0x75E648: lea     ecx, [esi+0D4h]
0x75E64E: call    NiTMap_GetAt
0x75E653: test    al, al
0x75E655: jz      short loc_75E62E
0x75E657: cmp     [esp+8+arg_0], 0
0x75E65C: jz      short loc_75E62E
0x75E65E: pop     edi
0x75E65F: mov     al, 1
0x75E661: pop     esi
0x75E662: retn    4
