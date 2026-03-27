0x772430: push    ecx
0x772431: push    ebx
0x772432: push    ebp
0x772433: push    esi
0x772434: push    0Ch; Size
0x772436: mov     esi, ecx
0x772438: call    FormHeapAlloc
0x77243D: xor     ebp, ebp
0x77243F: add     esp, 4
0x772442: cmp     eax, ebp
0x772444: jz      short loc_77245A
0x772446: mov     ecx, [esp+10h+arg_0]
0x77244A: push    ecx
0x77244B: mov     ecx, eax
0x77244D: call    sub_772360
0x772452: mov     ecx, eax
0x772454: mov     [esp+10h+var_4], ecx
0x772458: jmp     short loc_772460
0x77245A: mov     [esp+10h+var_4], ebp
0x77245E: mov     ecx, ebp
0x772460: xor     ebx, ebx
0x772462: cmp     [esp+10h+arg_0], ebp
0x772466: jbe     short loc_7724B7
0x772468: push    edi
0x772469: lea     esp, [esp+0]
0x772470: cmp     ebx, [ecx+4]
0x772473: jb      short loc_772479
0x772475: xor     edi, edi
0x772477: jmp     short loc_77247D
0x772479: mov     edi, [ecx]
0x77247B: add     edi, ebp
0x77247D: mov     eax, [esi+4]
0x772480: cmp     [esi+8], eax
0x772483: jnz     short loc_77249E
0x772485: test    eax, eax
0x772487: jbe     short loc_77248D
0x772489: add     eax, eax
0x77248B: jmp     short loc_772492
0x77248D: mov     eax, 1
0x772492: push    eax
0x772493: mov     ecx, esi
0x772495: call    sub_6E8CA0
0x77249A: mov     ecx, [esp+14h+var_4]
0x77249E: mov     edx, [esi+8]
0x7724A1: mov     eax, [esi]
0x7724A3: mov     [eax+edx*4], edi
0x7724A6: add     dword ptr [esi+8], 1
0x7724AA: add     ebx, 1
0x7724AD: add     ebp, 60h ; '`'
0x7724B0: cmp     ebx, [esp+14h+arg_0]
0x7724B4: jb      short loc_772470
0x7724B6: pop     edi
0x7724B7: mov     edx, [esi+14h]
0x7724BA: mov     [ecx+8], edx
0x7724BD: mov     [esi+14h], ecx
0x7724C0: pop     esi
0x7724C1: pop     ebp
0x7724C2: pop     ebx
0x7724C3: pop     ecx
0x7724C4: retn    4
