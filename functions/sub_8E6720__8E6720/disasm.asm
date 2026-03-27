0x8E6720: sub     esp, 8
0x8E6723: mov     eax, [esp+8+arg_4]
0x8E6727: push    ebx
0x8E6728: mov     ebx, [esp+0Ch+arg_0]
0x8E672C: push    esi
0x8E672D: mov     esi, ecx
0x8E672F: push    edi
0x8E6730: mov     edi, [eax+4]
0x8E6733: mov     eax, [esi+4]
0x8E6736: lea     ecx, [eax+edi]
0x8E6739: sub     eax, ebx
0x8E673B: mov     [esp+14h+arg_0], eax
0x8E673F: mov     eax, [esi+8]
0x8E6742: and     eax, 3FFFFFFFh
0x8E6747: cmp     eax, ecx
0x8E6749: mov     [esp+14h+var_8], ecx
0x8E674D: jge     short loc_8E6767
0x8E674F: add     eax, eax
0x8E6751: cmp     ecx, eax
0x8E6753: jl      short loc_8E6757
0x8E6755: mov     eax, ecx
0x8E6757: push    4
0x8E6759: push    eax
0x8E675A: push    esi
0x8E675B: call    sub_8A6E40
0x8E6760: mov     ecx, [esp+20h+var_8]
0x8E6764: add     esp, 0Ch
0x8E6767: mov     eax, [esi]
0x8E6769: push    ebp
0x8E676A: lea     ebp, ds:0[ebx*4]
0x8E6771: lea     edx, [eax+ebp]
0x8E6774: mov     [esp+18h+var_4], edx
0x8E6778: lea     edx, [edi+ebx]
0x8E677B: lea     edx, [eax+edx*4]
0x8E677E: mov     eax, [esp+18h+arg_0]
0x8E6782: dec     eax
0x8E6783: js      short loc_8E679F
0x8E6785: mov     ebx, [esp+18h+var_4]
0x8E6789: lea     ecx, [edx+eax*4]
0x8E678C: sub     ebx, edx
0x8E678E: inc     eax
0x8E678F: nop
0x8E6790: mov     edx, [ebx+ecx]
0x8E6793: mov     [ecx], edx
0x8E6795: sub     ecx, 4
0x8E6798: dec     eax
0x8E6799: jnz     short loc_8E6790
0x8E679B: mov     ecx, [esp+18h+var_8]
0x8E679F: mov     eax, [esp+18h+arg_4]
0x8E67A3: mov     ebx, [eax]
0x8E67A5: mov     eax, [esi]
0x8E67A7: add     eax, ebp
0x8E67A9: lea     edx, [edi-1]
0x8E67AC: test    edx, edx
0x8E67AE: pop     ebp
0x8E67AF: jl      short loc_8E67DB
0x8E67B1: mov     edi, ebx
0x8E67B3: lea     ecx, [eax+edx*4]
0x8E67B6: sub     edi, eax
0x8E67B8: lea     eax, [edx+1]
0x8E67BB: jmp     short loc_8E67C0
0x8E67BD: align 10h
0x8E67C0: mov     edx, [edi+ecx]
0x8E67C3: mov     [ecx], edx
0x8E67C5: sub     ecx, 4
0x8E67C8: dec     eax
0x8E67C9: jnz     short loc_8E67C0
0x8E67CB: mov     eax, [esp+14h+var_8]
0x8E67CF: pop     edi
0x8E67D0: mov     [esi+4], eax
0x8E67D3: pop     esi
0x8E67D4: pop     ebx
0x8E67D5: add     esp, 8
0x8E67D8: retn    8
0x8E67DB: pop     edi
0x8E67DC: mov     [esi+4], ecx
0x8E67DF: pop     esi
0x8E67E0: pop     ebx
0x8E67E1: add     esp, 8
0x8E67E4: retn    8
