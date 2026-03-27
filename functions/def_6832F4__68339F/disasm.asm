0x68339F: mov     ecx, [esi+8]; jumptable 006832F4 default case
0x6833A2: test    ecx, ecx
0x6833A4: jz      short loc_6833D7
0x6833A6: cmp     byte ptr [ecx+20h], 1
0x6833AA: jnz     short loc_6833D7
0x6833AC: call    sub_5660A0
0x6833B1: test    al, al
0x6833B3: jnz     short loc_6833D7
0x6833B5: mov     eax, [esi+8]
0x6833B8: mov     ebp, [edi]
0x6833BA: mov     [edi+8], eax
0x6833BD: mov     edx, [esi]
0x6833BF: mov     eax, [edx+0CCh]
0x6833C5: mov     ecx, esi
0x6833C7: add     ebp, 0D0h ; 'Ð'
0x6833CD: call    eax
0x6833CF: mov     edx, [ebp+0]
0x6833D2: push    eax
0x6833D3: mov     ecx, edi
0x6833D5: call    edx
0x6833D7: mov     ecx, [ebx+58h]
0x6833DA: test    ecx, ecx
0x6833DC: jz      short loc_6833E6
0x6833DE: mov     eax, [ecx]
0x6833E0: mov     edx, [eax]
0x6833E2: push    1
0x6833E4: call    edx
0x6833E6: mov     [ebx+58h], edi
0x6833E9: mov     eax, ebx
0x6833EB: mov     ecx, [esp+8+arg_14]
0x6833EF: mov     large fs:0, ecx
0x6833F6: pop     ecx
0x6833F7: pop     edi
0x6833F8: pop     esi
0x6833F9: pop     ebp
0x6833FA: pop     ebx
0x6833FB: add     esp, 18h
0x6833FE: retn    4
