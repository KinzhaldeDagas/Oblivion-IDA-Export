0x8DC890: push    ebx
0x8DC891: mov     ebx, [esp+4+arg_4]
0x8DC895: push    esi
0x8DC896: mov     esi, [esp+8+arg_0]
0x8DC89A: push    edi
0x8DC89B: mov     dword ptr [ebx+8], 0
0x8DC8A2: mov     edi, [esi+14Ch]
0x8DC8A8: dec     edi
0x8DC8A9: js      short loc_8DC8C6
0x8DC8AB: jmp     short loc_8DC8B0
0x8DC8AD: align 10h
0x8DC8B0: mov     eax, [esi+148h]
0x8DC8B6: mov     ecx, [eax+edi*4]
0x8DC8B9: test    ecx, ecx
0x8DC8BB: jz      short loc_8DC8C3
0x8DC8BD: mov     edx, [ecx]
0x8DC8BF: push    ebx
0x8DC8C0: call    dword ptr [edx+4]
0x8DC8C3: dec     edi
0x8DC8C4: jns     short loc_8DC8B0
0x8DC8C6: mov     edx, [esi+14Ch]
0x8DC8CC: dec     edx
0x8DC8CD: js      short loc_8DC90E
0x8DC8CF: nop
0x8DC8D0: mov     eax, [esi+148h]
0x8DC8D6: cmp     dword ptr [eax+edx*4], 0
0x8DC8DA: jnz     short loc_8DC90B
0x8DC8DC: mov     ebx, [esi+14Ch]
0x8DC8E2: dec     ebx
0x8DC8E3: mov     ecx, ebx
0x8DC8E5: cmp     edx, ecx
0x8DC8E7: mov     [esi+14Ch], ebx
0x8DC8ED: mov     eax, edx
0x8DC8EF: jge     short loc_8DC90B
0x8DC8F1: mov     ecx, [esi+148h]
0x8DC8F7: mov     edi, [ecx+eax*4+4]
0x8DC8FB: lea     ecx, [ecx+eax*4]
0x8DC8FE: mov     [ecx], edi
0x8DC900: mov     ecx, [esi+14Ch]
0x8DC906: inc     eax
0x8DC907: cmp     eax, ecx
0x8DC909: jl      short loc_8DC8F1
0x8DC90B: dec     edx
0x8DC90C: jns     short loc_8DC8D0
0x8DC90E: pop     edi
0x8DC90F: pop     esi
0x8DC910: pop     ebx
0x8DC911: retn
