0x8DCE80: push    ebx
0x8DCE81: push    esi
0x8DCE82: mov     esi, [esp+8+arg_0]
0x8DCE86: push    edi
0x8DCE87: mov     edi, [esi+128h]
0x8DCE8D: dec     edi
0x8DCE8E: js      short loc_8DCEAB
0x8DCE90: mov     ebx, [esp+0Ch+arg_4]
0x8DCE94: mov     eax, [esi+124h]
0x8DCE9A: mov     ecx, [eax+edi*4]
0x8DCE9D: test    ecx, ecx
0x8DCE9F: jz      short loc_8DCEA8
0x8DCEA1: mov     edx, [ecx]
0x8DCEA3: push    ebx
0x8DCEA4: push    esi
0x8DCEA5: call    dword ptr [edx+4]
0x8DCEA8: dec     edi
0x8DCEA9: jns     short loc_8DCE94
0x8DCEAB: mov     edx, [esi+128h]
0x8DCEB1: dec     edx
0x8DCEB2: js      short loc_8DCEFD
0x8DCEB4: mov     eax, [esi+124h]
0x8DCEBA: cmp     dword ptr [eax+edx*4], 0
0x8DCEBE: jnz     short loc_8DCEFA
0x8DCEC0: mov     ebx, [esi+128h]
0x8DCEC6: dec     ebx
0x8DCEC7: mov     ecx, ebx
0x8DCEC9: cmp     edx, ecx
0x8DCECB: mov     [esi+128h], ebx
0x8DCED1: mov     eax, edx
0x8DCED3: jge     short loc_8DCEFA
0x8DCED5: jmp     short loc_8DCEE0
0x8DCED7: align 10h
0x8DCEE0: mov     ecx, [esi+124h]
0x8DCEE6: mov     edi, [ecx+eax*4+4]
0x8DCEEA: lea     ecx, [ecx+eax*4]
0x8DCEED: mov     [ecx], edi
0x8DCEEF: mov     ecx, [esi+128h]
0x8DCEF5: inc     eax
0x8DCEF6: cmp     eax, ecx
0x8DCEF8: jl      short loc_8DCEE0
0x8DCEFA: dec     edx
0x8DCEFB: jns     short loc_8DCEB4
0x8DCEFD: pop     edi
0x8DCEFE: pop     esi
0x8DCEFF: pop     ebx
0x8DCF00: retn
