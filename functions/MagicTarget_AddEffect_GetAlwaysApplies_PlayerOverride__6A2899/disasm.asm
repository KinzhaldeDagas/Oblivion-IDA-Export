0x6A2899: cmp     ebx, ds:0B333C4h
0x6A289F: jnz     short loc_6A28DA
0x6A28A1: mov     eax, [ebp+0Ch]
0x6A28A4: cmp     dword ptr [eax+10h], 0
0x6A28A8: jnz     short loc_6A28DA
0x6A28AA: mov     eax, [esi]
0x6A28AC: mov     edx, [eax+18h]
0x6A28AF: mov     ecx, esi
0x6A28B1: call    edx
0x6A28B3: test    eax, eax
0x6A28B5: jz      short loc_6A28D3
0x6A28B7: mov     eax, [esi]
0x6A28B9: mov     edx, [eax+18h]
0x6A28BC: mov     ecx, esi
0x6A28BE: call    edx
0x6A28C0: cmp     eax, 2
0x6A28C3: jz      short loc_6A28D3
0x6A28C5: mov     eax, [esi]
0x6A28C7: mov     edx, [eax+18h]
0x6A28CA: mov     ecx, esi
0x6A28CC: call    edx
0x6A28CE: cmp     eax, 3
0x6A28D1: jnz     short loc_6A28DA
0x6A28D3: mov     eax, 1
0x6A28D8: jmp     short loc_6A28DC
0x6A28DA: xor     eax, eax
0x6A28DC: or      [esp+arg_13], al
