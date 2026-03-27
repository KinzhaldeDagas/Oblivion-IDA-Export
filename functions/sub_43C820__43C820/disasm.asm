0x43C820: push    ecx
0x43C821: push    esi
0x43C822: mov     esi, ecx
0x43C824: cmp     dword ptr [esi+34h], 0
0x43C828: jz      short loc_43C8A7
0x43C82A: push    ebx
0x43C82B: push    ebp
0x43C82C: mov     ebp, ds:InterlockedDecrement
0x43C832: push    edi
0x43C833: mov     ebx, 14h
0x43C838: mov     eax, [esi+34h]
0x43C83B: add     eax, ebx
0x43C83D: cmp     dword ptr [eax], 0
0x43C840: jz      short loc_43C89C
0x43C842: mov     eax, [eax]
0x43C844: test    eax, eax
0x43C846: jz      short loc_43C84D
0x43C848: lea     edi, [eax+18h]
0x43C84B: jmp     short loc_43C84F
0x43C84D: xor     edi, edi
0x43C84F: mov     eax, [esi+10h]
0x43C852: mov     edx, [esi+14h]
0x43C855: push    0
0x43C857: push    1
0x43C859: push    0
0x43C85B: push    2
0x43C85D: push    esi
0x43C85E: mov     cl, 10h
0x43C860: call    __allshr
0x43C865: movzx   ecx, al
0x43C868: push    ecx
0x43C869: mov     ecx, ModelLoaderPtr
0x43C86F: push    edi
0x43C870: lea     edx, [esp+30h+var_4]
0x43C874: push    edx
0x43C875: call    sub_43B280
0x43C87A: mov     eax, [esp+14h+var_4]
0x43C87E: test    eax, eax
0x43C880: jz      short loc_43C89C
0x43C882: mov     edi, eax
0x43C884: add     eax, 8
0x43C887: push    eax; lpAddend
0x43C888: call    ebp ; InterlockedDecrement
0x43C88A: test    eax, eax
0x43C88C: jnz     short loc_43C89C
0x43C88E: test    edi, edi
0x43C890: jz      short loc_43C89C
0x43C892: mov     eax, [edi]
0x43C894: mov     edx, [eax]
0x43C896: push    1
0x43C898: mov     ecx, edi
0x43C89A: call    edx
0x43C89C: add     ebx, 4
0x43C89F: cmp     ebx, 1Ch
0x43C8A2: jl      short loc_43C838
0x43C8A4: pop     edi
0x43C8A5: pop     ebp
0x43C8A6: pop     ebx
0x43C8A7: mov     ecx, ioManager
0x43C8AD: mov     eax, [ecx]
0x43C8AF: mov     edx, [eax+3Ch]
0x43C8B2: push    esi
0x43C8B3: call    edx
0x43C8B5: pop     esi
0x43C8B6: pop     ecx
0x43C8B7: retn
