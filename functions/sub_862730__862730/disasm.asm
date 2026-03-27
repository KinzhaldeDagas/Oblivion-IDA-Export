0x862730: mov     eax, [esp+arg_0]
0x862734: mov     ecx, [eax+24h]
0x862737: mov     edx, [esp+arg_8]
0x86273B: push    ebx
0x86273C: mov     ebx, [ecx+edx*4]
0x86273F: push    esi
0x862740: mov     esi, [esp+8+arg_4]
0x862744: mov     eax, [esi]
0x862746: mov     edx, [eax+8Ch]
0x86274C: push    edi
0x86274D: push    0
0x86274F: mov     ecx, esi
0x862751: call    edx
0x862753: test    eax, eax
0x862755: jz      short loc_862769
0x862757: mov     eax, [esi]
0x862759: mov     edx, [eax+8Ch]
0x86275F: push    0
0x862761: mov     ecx, esi
0x862763: call    edx
0x862765: mov     edi, eax
0x862767: jmp     short loc_86277E
0x862769: test    dword ptr [esi+1Ch], 80h
0x862770: mov     edi, ds:0B430F0h
0x862776: ja      short loc_86277E
0x862778: mov     edi, ds:0B430DCh
0x86277E: mov     esi, [ebx+4]
0x862781: cmp     esi, edi
0x862783: jz      short loc_8627B6
0x862785: test    esi, esi
0x862787: jz      short loc_8627A5
0x862789: lea     eax, [esi+4]
0x86278C: push    eax; lpAddend
0x86278D: call    dword ptr ds:0A2807Ch
0x862793: test    eax, eax
0x862795: jnz     short loc_8627A5
0x862797: test    esi, esi
0x862799: jz      short loc_8627A5
0x86279B: mov     edx, [esi]
0x86279D: mov     eax, [edx]
0x86279F: push    1
0x8627A1: mov     ecx, esi
0x8627A3: call    eax
0x8627A5: test    edi, edi
0x8627A7: mov     [ebx+4], edi
0x8627AA: jz      short loc_8627B6
0x8627AC: add     edi, 4
0x8627AF: push    edi; lpAddend
0x8627B0: call    dword ptr ds:0A28078h
0x8627B6: pop     edi
0x8627B7: pop     esi
0x8627B8: pop     ebx
0x8627B9: retn    0Ch
