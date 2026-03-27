0x8DC410: push    ebx
0x8DC411: push    esi
0x8DC412: mov     esi, [esp+8+arg_0]
0x8DC416: push    edi
0x8DC417: mov     edi, [esi+0D4h]
0x8DC41D: dec     edi
0x8DC41E: js      short loc_8DC43A
0x8DC420: mov     ebx, [esp+0Ch+arg_4]
0x8DC424: mov     eax, [esi+0D0h]
0x8DC42A: mov     ecx, [eax+edi*4]
0x8DC42D: test    ecx, ecx
0x8DC42F: jz      short loc_8DC437
0x8DC431: mov     edx, [ecx]
0x8DC433: push    ebx
0x8DC434: call    dword ptr [edx+8]
0x8DC437: dec     edi
0x8DC438: jns     short loc_8DC424
0x8DC43A: mov     edx, [esi+0D4h]
0x8DC440: dec     edx
0x8DC441: js      short loc_8DC48D
0x8DC443: mov     eax, [esi+0D0h]
0x8DC449: cmp     dword ptr [eax+edx*4], 0
0x8DC44D: jnz     short loc_8DC48A
0x8DC44F: mov     ebx, [esi+0D4h]
0x8DC455: dec     ebx
0x8DC456: mov     ecx, ebx
0x8DC458: cmp     edx, ecx
0x8DC45A: mov     [esi+0D4h], ebx
0x8DC460: mov     eax, edx
0x8DC462: jge     short loc_8DC48A
0x8DC464: jmp     short loc_8DC470
0x8DC466: align 10h
0x8DC470: mov     ecx, [esi+0D0h]
0x8DC476: mov     edi, [ecx+eax*4+4]
0x8DC47A: lea     ecx, [ecx+eax*4]
0x8DC47D: mov     [ecx], edi
0x8DC47F: mov     ecx, [esi+0D4h]
0x8DC485: inc     eax
0x8DC486: cmp     eax, ecx
0x8DC488: jl      short loc_8DC470
0x8DC48A: dec     edx
0x8DC48B: jns     short loc_8DC443
0x8DC48D: pop     edi
0x8DC48E: pop     esi
0x8DC48F: pop     ebx
0x8DC490: retn
