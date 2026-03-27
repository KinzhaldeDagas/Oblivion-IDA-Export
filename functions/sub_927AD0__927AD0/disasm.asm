0x927AD0: push    edi
0x927AD1: mov     edi, [esp+4+arg_4]
0x927AD5: test    edi, edi
0x927AD7: jnz     short loc_927AE4
0x927AD9: mov     eax, [esp+4+arg_0]
0x927ADD: mov     byte ptr [eax], 0
0x927AE0: pop     edi
0x927AE1: retn    8
0x927AE4: push    esi
0x927AE5: mov     esi, [ecx+20h]
0x927AE8: xor     eax, eax
0x927AEA: test    esi, esi
0x927AEC: jle     short loc_927AFD
0x927AEE: mov     edx, [ecx+1Ch]
0x927AF1: cmp     [edx], edi
0x927AF3: jz      short loc_927B09
0x927AF5: inc     eax
0x927AF6: add     edx, 4
0x927AF9: cmp     eax, esi
0x927AFB: jl      short loc_927AF1
0x927AFD: mov     eax, [esp+8+arg_0]
0x927B01: pop     esi
0x927B02: mov     byte ptr [eax], 0
0x927B05: pop     edi
0x927B06: retn    8
0x927B09: mov     edx, [ecx+20h]
0x927B0C: dec     edx
0x927B0D: mov     [ecx+20h], edx
0x927B10: mov     ecx, [ecx+1Ch]
0x927B13: mov     edx, [ecx+edx*4]
0x927B16: pop     esi
0x927B17: mov     [ecx+eax*4], edx
0x927B1A: mov     eax, [esp+4+arg_0]
0x927B1E: mov     byte ptr [eax], 1
0x927B21: pop     edi
0x927B22: retn    8
