0x7734E0: push    ecx
0x7734E1: push    ebx
0x7734E2: push    ebp
0x7734E3: push    esi
0x7734E4: push    0Ch; Size
0x7734E6: mov     esi, ecx
0x7734E8: call    FormHeapAlloc
0x7734ED: xor     ebp, ebp
0x7734EF: add     esp, 4
0x7734F2: cmp     eax, ebp
0x7734F4: jz      short loc_77350A
0x7734F6: mov     ecx, [esp+10h+arg_0]
0x7734FA: push    ecx
0x7734FB: mov     ecx, eax
0x7734FD: call    sub_7733D0
0x773502: mov     ecx, eax
0x773504: mov     [esp+10h+var_4], ecx
0x773508: jmp     short loc_773510
0x77350A: mov     [esp+10h+var_4], ebp
0x77350E: mov     ecx, ebp
0x773510: xor     ebx, ebx
0x773512: cmp     [esp+10h+arg_0], ebp
0x773516: jbe     short loc_77356A
0x773518: push    edi
0x773519: lea     esp, [esp+0]
0x773520: cmp     ebx, [ecx+4]
0x773523: jb      short loc_773529
0x773525: xor     edi, edi
0x773527: jmp     short loc_77352D
0x773529: mov     edi, [ecx]
0x77352B: add     edi, ebp
0x77352D: mov     eax, [esi+4]
0x773530: cmp     [esi+8], eax
0x773533: jnz     short loc_77354E
0x773535: test    eax, eax
0x773537: jbe     short loc_77353D
0x773539: add     eax, eax
0x77353B: jmp     short loc_773542
0x77353D: mov     eax, 1
0x773542: push    eax
0x773543: mov     ecx, esi
0x773545: call    sub_6E8CA0
0x77354A: mov     ecx, [esp+14h+var_4]
0x77354E: mov     edx, [esi+8]
0x773551: mov     eax, [esi]
0x773553: mov     [eax+edx*4], edi
0x773556: add     dword ptr [esi+8], 1
0x77355A: add     ebx, 1
0x77355D: add     ebp, 0B8h ; '¸'
0x773563: cmp     ebx, [esp+14h+arg_0]
0x773567: jb      short loc_773520
0x773569: pop     edi
0x77356A: mov     edx, [esi+14h]
0x77356D: mov     [ecx+8], edx
0x773570: mov     [esi+14h], ecx
0x773573: pop     esi
0x773574: pop     ebp
0x773575: pop     ebx
0x773576: pop     ecx
0x773577: retn    4
