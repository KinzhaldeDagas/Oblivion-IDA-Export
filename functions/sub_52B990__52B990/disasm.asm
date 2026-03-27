0x52B990: push    ecx
0x52B991: push    ebx
0x52B992: push    ebp
0x52B993: push    esi
0x52B994: mov     ebp, ecx
0x52B996: push    edi
0x52B997: mov     [esp+14h+var_4], ebp
0x52B99B: call    sub_52B5A0
0x52B9A0: mov     ecx, ebp
0x52B9A2: call    sub_52B660
0x52B9A7: lea     edi, [ebp+1B8h]
0x52B9AD: lea     esi, [ebp+0E0h]
0x52B9B3: mov     ebx, 9
0x52B9B8: mov     eax, [esi]
0x52B9BA: mov     edx, [eax+4]
0x52B9BD: mov     ecx, esi
0x52B9BF: call    edx
0x52B9C1: mov     eax, [edi]
0x52B9C3: mov     edx, [eax+4]
0x52B9C6: mov     ecx, edi
0x52B9C8: call    edx
0x52B9CA: add     esi, 18h
0x52B9CD: add     edi, 0Ch
0x52B9D0: sub     ebx, 1
0x52B9D3: jnz     short loc_52B9B8
0x52B9D5: lea     edi, [ebp+0B0h]
0x52B9DB: lea     esi, [ebp+224h]
0x52B9E1: mov     ebp, 2
0x52B9E6: mov     ebx, 5
0x52B9EB: jmp     short loc_52B9F0
0x52B9ED: align 10h
0x52B9F0: mov     eax, [esi]
0x52B9F2: mov     edx, [eax+4]
0x52B9F5: mov     ecx, esi
0x52B9F7: call    edx
0x52B9F9: add     esi, 0Ch
0x52B9FC: sub     ebx, 1
0x52B9FF: jnz     short loc_52B9F0
0x52BA01: mov     eax, [edi]
0x52BA03: mov     edx, [eax+4]
0x52BA06: mov     ecx, edi
0x52BA08: call    edx
0x52BA0A: add     edi, 18h
0x52BA0D: sub     ebp, 1
0x52BA10: jnz     short loc_52B9E6
0x52BA12: mov     ecx, [esp+14h+var_4]
0x52BA16: pop     edi
0x52BA17: pop     esi
0x52BA18: pop     ebp
0x52BA19: pop     ebx
0x52BA1A: add     esp, 4
0x52BA1D: jmp     j_TESForm_ClearComponentReferences
