0x95D6C0: mov     ecx, [esp+arg_C]
0x95D6C4: mov     eax, [ecx+0E0h]
0x95D6CA: push    ebx
0x95D6CB: xor     bl, bl
0x95D6CD: test    eax, eax
0x95D6CF: jl      short loc_95D723
0x95D6D1: mov     edx, [esp+4+arg_8]
0x95D6D5: cmp     dword ptr [edx], 1
0x95D6D8: jnz     short loc_95D6EB
0x95D6DA: cmp     dword ptr [edx+4], 1
0x95D6DE: jnz     short loc_95D6EB
0x95D6E0: cmp     word ptr [edx+24h], 0
0x95D6E5: jz      short loc_95D6EB
0x95D6E7: mov     al, 1
0x95D6E9: pop     ebx
0x95D6EA: retn
0x95D6EB: test    eax, eax
0x95D6ED: jl      short loc_95D723
0x95D6EF: push    esi
0x95D6F0: movzx   esi, word ptr [ecx+0B6h]
0x95D6F7: cmp     eax, esi
0x95D6F9: pop     esi
0x95D6FA: jge     short loc_95D723
0x95D6FC: mov     ecx, [ecx+0B0h]
0x95D702: mov     eax, [ecx+eax*4]
0x95D705: test    eax, eax
0x95D707: jz      short loc_95D723
0x95D709: push    eax
0x95D70A: mov     eax, [esp+8+arg_0]
0x95D70E: push    edx
0x95D70F: mov     edx, [esp+0Ch+arg_4]
0x95D713: push    edx
0x95D714: push    eax
0x95D715: call    sub_95D540
0x95D71A: add     esp, 10h
0x95D71D: test    al, al
0x95D71F: jz      short loc_95D723
0x95D721: mov     bl, 1
0x95D723: mov     al, bl
0x95D725: pop     ebx
0x95D726: retn
