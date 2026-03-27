0x7374D8: xor     ebx, ebx; jumptable 007374AE default case
0x7374DA: mov     ebp, [esp+arg_88]
0x7374E1: xor     esi, esi
0x7374E3: test    ebp, ebp
0x7374E5: jbe     short loc_737535
0x7374E7: jmp     short loc_7374F0
0x7374E9: align 10h
0x7374F0: mov     eax, [edi+5Ch]
0x7374F3: mov     edx, [eax+esi*4+4]
0x7374F7: sub     edx, [eax+esi*4]
0x7374FA: push    1
0x7374FC: lea     ecx, [esp+4+arg_20]
0x737500: push    ecx
0x737501: mov     ecx, [edi+60h]
0x737504: push    edx
0x737505: mov     edx, [eax+ecx*4]
0x737508: imul    edx, ebx
0x73750B: add     edx, [eax+esi*4]
0x73750E: mov     eax, [esp+0Ch+arg_84]
0x737515: add     edx, [edi+50h]
0x737518: mov     [esp+0Ch+arg_20], 1
0x737520: push    edx
0x737521: push    eax
0x737522: mov     eax, [eax+4]
0x737525: call    eax
0x737527: add     esi, 1
0x73752A: add     esp, 14h
0x73752D: cmp     esi, ebp
0x73752F: jb      short loc_7374F0
0x737531: mov     eax, [esp+arg_18]
0x737535: add     eax, 1
0x737538: lea     ecx, [eax+1]
0x73753B: cmp     ecx, [esp+arg_14]
0x73753F: mov     [esp+arg_18], eax
0x737543: jb      loc_7374A9
0x737549: jmp     loc_7376CA
