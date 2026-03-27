0x51F370: mov     eax, [esp+arg_0]
0x51F374: push    eax
0x51F375: call    sub_51F1D0
0x51F37A: test    eax, eax
0x51F37C: jz      short loc_51F3B4
0x51F37E: movzx   ecx, word ptr [eax+18h]
0x51F382: cmp     cx, 0FFFFh
0x51F387: jnz     short loc_51F39E
0x51F389: mov     ecx, [eax+14h]
0x51F38C: push    esi
0x51F38D: lea     esi, [ecx+1]
0x51F390: mov     dl, [ecx]
0x51F392: add     ecx, 1
0x51F395: test    dl, dl
0x51F397: jnz     short loc_51F390
0x51F399: sub     ecx, esi
0x51F39B: pop     esi
0x51F39C: jmp     short loc_51F3A1
0x51F39E: movzx   ecx, cx
0x51F3A1: test    ecx, ecx
0x51F3A3: jz      short loc_51F3B4
0x51F3A5: mov     eax, [eax+14h]
0x51F3A8: test    eax, eax
0x51F3AA: jnz     short locret_51F3B6
0x51F3AC: mov     eax, offset EmptyString
0x51F3B1: retn    4
0x51F3B4: xor     eax, eax
0x51F3B6: retn    4
