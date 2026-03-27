0x7729E0: push    ecx
0x7729E1: push    ebx
0x7729E2: push    ebp
0x7729E3: push    esi
0x7729E4: push    0Ch; Size
0x7729E6: mov     esi, ecx
0x7729E8: call    FormHeapAlloc
0x7729ED: xor     ebp, ebp
0x7729EF: add     esp, 4
0x7729F2: cmp     eax, ebp
0x7729F4: jz      short loc_772A0A
0x7729F6: mov     ecx, [esp+10h+arg_0]
0x7729FA: push    ecx
0x7729FB: mov     ecx, eax
0x7729FD: call    sub_772870
0x772A02: mov     ecx, eax
0x772A04: mov     [esp+10h+var_4], ecx
0x772A08: jmp     short loc_772A10
0x772A0A: mov     [esp+10h+var_4], ebp
0x772A0E: mov     ecx, ebp
0x772A10: xor     ebx, ebx
0x772A12: cmp     [esp+10h+arg_0], ebp
0x772A16: jbe     short loc_772A67
0x772A18: push    edi
0x772A19: lea     esp, [esp+0]
0x772A20: cmp     ebx, [ecx+4]
0x772A23: jb      short loc_772A29
0x772A25: xor     edi, edi
0x772A27: jmp     short loc_772A2D
0x772A29: mov     edi, [ecx]
0x772A2B: add     edi, ebp
0x772A2D: mov     eax, [esi+4]
0x772A30: cmp     [esi+8], eax
0x772A33: jnz     short loc_772A4E
0x772A35: test    eax, eax
0x772A37: jbe     short loc_772A3D
0x772A39: add     eax, eax
0x772A3B: jmp     short loc_772A42
0x772A3D: mov     eax, 1
0x772A42: push    eax
0x772A43: mov     ecx, esi
0x772A45: call    sub_6E8CA0
0x772A4A: mov     ecx, [esp+14h+var_4]
0x772A4E: mov     edx, [esi+8]
0x772A51: mov     eax, [esi]
0x772A53: mov     [eax+edx*4], edi
0x772A56: add     dword ptr [esi+8], 1
0x772A5A: add     ebx, 1
0x772A5D: add     ebp, 14h
0x772A60: cmp     ebx, [esp+14h+arg_0]
0x772A64: jb      short loc_772A20
0x772A66: pop     edi
0x772A67: mov     edx, [esi+14h]
0x772A6A: mov     [ecx+8], edx
0x772A6D: mov     [esi+14h], ecx
0x772A70: pop     esi
0x772A71: pop     ebp
0x772A72: pop     ebx
0x772A73: pop     ecx
0x772A74: retn    4
