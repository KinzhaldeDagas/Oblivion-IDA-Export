0x7732B0: push    ebx
0x7732B1: mov     ebx, [esp+4+arg_0]
0x7732B5: push    ebp
0x7732B6: push    esi
0x7732B7: mov     ebp, ecx
0x7732B9: push    edi
0x7732BA: xor     esi, esi
0x7732BC: lea     edi, [ebp+0Ch]
0x7732BF: nop
0x7732C0: cmp     byte ptr [esi+ebp+5Ch], 0
0x7732C5: jz      short loc_7732E9
0x7732C7: mov     edx, [edi+30h]
0x7732CA: mov     ecx, ds:0B42834h
0x7732D0: mov     eax, [ecx]
0x7732D2: mov     eax, [eax+0C8h]
0x7732D8: push    0
0x7732DA: push    edx
0x7732DB: movzx   edx, word ptr ds:0B42824h[esi*2]
0x7732E3: push    edx
0x7732E4: push    ebx
0x7732E5: call    eax
0x7732E7: jmp     short loc_77330F
0x7732E9: cmp     byte ptr [esi+ebp+2Ch], 0
0x7732EE: jz      short loc_77330F
0x7732F0: mov     eax, [edi]
0x7732F2: mov     ecx, ds:0B42834h
0x7732F8: mov     edx, [ecx]
0x7732FA: mov     edx, [edx+0C8h]
0x773300: push    0
0x773302: push    eax
0x773303: movzx   eax, word ptr ds:0B42824h[esi*2]
0x77330B: push    eax
0x77330C: push    ebx
0x77330D: call    edx
0x77330F: add     esi, 1
0x773312: add     edi, 4
0x773315: cmp     esi, 8
0x773318: jl      short loc_7732C0
0x77331A: pop     edi
0x77331B: pop     esi
0x77331C: pop     ebp
0x77331D: xor     eax, eax
0x77331F: pop     ebx
0x773320: retn    4
