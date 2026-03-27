0x8E68A0: push    esi
0x8E68A1: push    edi
0x8E68A2: mov     edi, [esp+8+arg_0]
0x8E68A6: movzx   eax, word ptr [edi+16h]
0x8E68AA: cmp     [edi+10h], eax
0x8E68AD: jnz     short loc_8E68FC
0x8E68AF: mov     edx, large fs:2Ch
0x8E68B6: mov     ecx, ds:0BA9DE4h
0x8E68BC: mov     ecx, [edx+ecx*4]
0x8E68BF: mov     ecx, [ecx+19Ch]
0x8E68C5: push    24h ; '$'
0x8E68C7: push    eax
0x8E68C8: call    sub_8A7560
0x8E68CD: mov     edx, [edi+8]
0x8E68D0: mov     esi, eax
0x8E68D2: mov     eax, [edi+4]
0x8E68D5: and     edx, 3FFFFFFFh
0x8E68DB: cmp     eax, edx
0x8E68DD: jnz     short loc_8E68EA
0x8E68DF: push    4
0x8E68E1: push    edi
0x8E68E2: call    sub_8A6EE0
0x8E68E7: add     esp, 8
0x8E68EA: mov     eax, [edi+4]
0x8E68ED: mov     ecx, [edi]
0x8E68EF: mov     [ecx+eax*4], esi
0x8E68F2: inc     dword ptr [edi+4]
0x8E68F5: mov     dword ptr [edi+10h], 0
0x8E68FC: mov     edx, [edi+4]
0x8E68FF: mov     ecx, [edi]
0x8E6901: mov     esi, [ecx+edx*4-4]
0x8E6905: mov     eax, [edi+10h]
0x8E6908: movzx   ecx, word ptr [edi+14h]
0x8E690C: add     esi, eax
0x8E690E: lea     edx, [ecx+eax]
0x8E6911: mov     eax, [esp+8+arg_4]
0x8E6915: push    ecx
0x8E6916: push    eax
0x8E6917: push    esi
0x8E6918: mov     [edi+10h], edx
0x8E691B: call    sub_8B1890
0x8E6920: movzx   ecx, word ptr [esi+0Ch]
0x8E6924: mov     edx, [esi+14h]
0x8E6927: mov     ax, [esi+0Eh]
0x8E692B: mov     edx, [edx+24h]
0x8E692E: mov     [edx+ecx*8], esi
0x8E6931: mov     ecx, [esi+18h]
0x8E6934: movzx   edx, ax
0x8E6937: mov     eax, [ecx+24h]
0x8E693A: add     esp, 0Ch
0x8E693D: mov     [eax+edx*8], esi
0x8E6940: pop     edi
0x8E6941: mov     eax, esi
0x8E6943: pop     esi
0x8E6944: retn
