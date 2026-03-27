0x8BC0F0: push    ebx
0x8BC0F1: push    esi
0x8BC0F2: mov     esi, ecx
0x8BC0F4: mov     edx, [esi+8]
0x8BC0F7: mov     eax, [edx+4]
0x8BC0FA: mov     ebx, [esi+0Ch]
0x8BC0FD: mov     ecx, eax
0x8BC0FF: sub     ecx, ebx
0x8BC101: mov     ebx, [esp+8+arg_4]
0x8BC105: cmp     ebx, ecx
0x8BC107: jle     short loc_8BC145
0x8BC109: sub     eax, ecx
0x8BC10B: add     eax, ebx
0x8BC10D: push    edi
0x8BC10E: mov     edi, eax
0x8BC110: mov     eax, [edx+8]
0x8BC113: lea     ecx, [edi+1]
0x8BC116: and     eax, 3FFFFFFFh
0x8BC11B: cmp     eax, ecx
0x8BC11D: jge     short loc_8BC133
0x8BC11F: add     eax, eax
0x8BC121: cmp     ecx, eax
0x8BC123: jl      short loc_8BC127
0x8BC125: mov     eax, ecx
0x8BC127: push    1
0x8BC129: push    eax
0x8BC12A: push    edx
0x8BC12B: call    sub_8A6E40
0x8BC130: add     esp, 0Ch
0x8BC133: mov     eax, [esi+8]
0x8BC136: mov     [eax+4], edi
0x8BC139: mov     ecx, [esi+8]
0x8BC13C: mov     edx, [ecx]
0x8BC13E: mov     byte ptr [edi+edx], 0
0x8BC142: pop     edi
0x8BC143: jmp     short loc_8BC158
0x8BC145: mov     ecx, [edx+8]
0x8BC148: and     ecx, 3FFFFFFFh
0x8BC14E: cmp     ecx, eax
0x8BC150: jle     short loc_8BC158
0x8BC152: mov     edx, [edx]
0x8BC154: mov     byte ptr [eax+edx], 0
0x8BC158: mov     eax, [esp+8+arg_0]
0x8BC15C: mov     ecx, [esi+8]
0x8BC15F: mov     edx, [ecx]
0x8BC161: push    ebx
0x8BC162: push    eax
0x8BC163: add     edx, [esi+0Ch]
0x8BC166: push    edx
0x8BC167: call    sub_8B1890
0x8BC16C: mov     eax, [esi+0Ch]
0x8BC16F: add     eax, ebx
0x8BC171: add     esp, 0Ch
0x8BC174: mov     [esi+0Ch], eax
0x8BC177: pop     esi
0x8BC178: mov     eax, ebx
0x8BC17A: pop     ebx
0x8BC17B: retn    8
