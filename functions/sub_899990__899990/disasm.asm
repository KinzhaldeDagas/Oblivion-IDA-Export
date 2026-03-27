0x899990: push    ebx
0x899991: mov     ebx, [esp+4+arg_4]
0x899995: push    ebp
0x899996: push    esi
0x899997: lea     esi, [ebx+0B8h]
0x89999D: mov     ebp, ecx
0x89999F: mov     ecx, [esi+4]
0x8999A2: xor     eax, eax
0x8999A4: test    ecx, ecx
0x8999A6: push    edi
0x8999A7: jle     short loc_8999BD
0x8999A9: mov     edx, [esi]
0x8999AB: jmp     short loc_8999B0
0x8999AD: align 10h
0x8999B0: cmp     dword ptr [edx], 0
0x8999B3: jz      short loc_899A12
0x8999B5: inc     eax
0x8999B6: add     edx, 4
0x8999B9: cmp     eax, ecx
0x8999BB: jl      short loc_8999B0
0x8999BD: mov     edx, [esi+8]
0x8999C0: mov     eax, [esi+4]
0x8999C3: and     edx, 3FFFFFFFh
0x8999C9: cmp     eax, edx
0x8999CB: jnz     short loc_8999D8
0x8999CD: push    4
0x8999CF: push    esi
0x8999D0: call    sub_8A6EE0
0x8999D5: add     esp, 8
0x8999D8: mov     eax, [esi+4]
0x8999DB: mov     ecx, [esi]
0x8999DD: mov     edi, [esp+10h+arg_0]
0x8999E1: mov     [ecx+eax*4], edi
0x8999E4: inc     dword ptr [esi+4]
0x8999E7: mov     ecx, [edi+0Ch]
0x8999EA: cmp     word ptr [ecx+20h], 0FFFFh
0x8999F0: jnz     short loc_899A21
0x8999F2: mov     al, [ebx+91h]
0x8999F8: test    al, al
0x8999FA: jnz     short loc_899A21
0x8999FC: push    edi
0x8999FD: call    sub_8DDC90
0x899A02: mov     ecx, [ebx+54h]
0x899A05: push    edi
0x899A06: call    sub_8DE080
0x899A0B: pop     edi
0x899A0C: pop     esi
0x899A0D: pop     ebp
0x899A0E: pop     ebx
0x899A0F: retn    8
0x899A12: test    eax, eax
0x899A14: jl      short loc_8999BD
0x899A16: mov     ecx, [esi]
0x899A18: mov     edi, [esp+10h+arg_0]
0x899A1C: mov     [ecx+eax*4], edi
0x899A1F: jmp     short loc_8999E7
0x899A21: cmp     [ebx+54h], ecx
0x899A24: jz      short loc_899A40
0x899A26: mov     al, [ebx+91h]
0x899A2C: test    al, al
0x899A2E: jnz     short loc_899A40
0x899A30: mov     edx, [ecx+34h]
0x899A33: mov     eax, [edx]
0x899A35: push    eax
0x899A36: push    ebx
0x899A37: push    ebp
0x899A38: call    sub_8CD320
0x899A3D: add     esp, 0Ch
0x899A40: pop     edi
0x899A41: pop     esi
0x899A42: pop     ebp
0x899A43: pop     ebx
0x899A44: retn    8
