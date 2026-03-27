0x8E88A0: mov     eax, [ecx+18h]
0x8E88A3: push    esi
0x8E88A4: lea     esi, [ecx+10h]
0x8E88A7: push    edi
0x8E88A8: mov     edi, [esp+8+arg_4]
0x8E88AC: and     eax, 3FFFFFFFh
0x8E88B1: cmp     eax, edi
0x8E88B3: jge     short loc_8E88C9
0x8E88B5: add     eax, eax
0x8E88B7: cmp     edi, eax
0x8E88B9: jl      short loc_8E88BD
0x8E88BB: mov     eax, edi
0x8E88BD: push    8
0x8E88BF: push    eax
0x8E88C0: push    esi
0x8E88C1: call    sub_8A6E40
0x8E88C6: add     esp, 0Ch
0x8E88C9: xor     eax, eax
0x8E88CB: test    edi, edi
0x8E88CD: mov     [esi+4], edi
0x8E88D0: jle     short loc_8E891C
0x8E88D2: mov     edx, [esp+8+arg_0]
0x8E88D6: push    ebx
0x8E88D7: mov     ebx, [esp+0Ch+arg_8]
0x8E88DB: mov     ecx, ebx
0x8E88DD: sub     ecx, edx
0x8E88DF: push    ebp
0x8E88E0: mov     [esp+10h+arg_4], ecx
0x8E88E4: mov     ecx, [edx]
0x8E88E6: test    ecx, ecx
0x8E88E8: jz      short loc_8E8912
0x8E88EA: test    ebx, ebx
0x8E88EC: mov     ebp, [esi]
0x8E88EE: mov     [ebp+eax*8+0], ecx
0x8E88F2: jz      short loc_8E88FD
0x8E88F4: mov     ecx, [esp+10h+arg_4]
0x8E88F8: mov     ecx, [ecx+edx]
0x8E88FB: jmp     short loc_8E88FF
0x8E88FD: xor     ecx, ecx
0x8E88FF: mov     ebp, [esi]
0x8E8901: mov     [ebp+eax*8+4], ecx
0x8E8905: mov     ecx, [edx]
0x8E8907: cmp     word ptr [ecx+4], 0
0x8E890C: jz      short loc_8E8912
0x8E890E: inc     word ptr [ecx+6]
0x8E8912: inc     eax
0x8E8913: add     edx, 4
0x8E8916: cmp     eax, edi
0x8E8918: jl      short loc_8E88E4
0x8E891A: pop     ebp
0x8E891B: pop     ebx
0x8E891C: pop     edi
0x8E891D: pop     esi
0x8E891E: retn    0Ch
