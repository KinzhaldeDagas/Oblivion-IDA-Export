0x46DCA0: mov     eax, [esp+arg_0]
0x46DCA4: push    esi
0x46DCA5: push    0; int
0x46DCA7: push    offset ??_R0?AVTESModelList@@@8; struct TypeDescriptor *
0x46DCAC: push    offset ??_R0?AVBaseFormComponent@@@8; struct _s_RTTICompleteObjectLocator *
0x46DCB1: push    0; int
0x46DCB3: push    eax; void *
0x46DCB4: mov     esi, ecx
0x46DCB6: call    OblivionDynamicCast
0x46DCBB: add     esp, 14h
0x46DCBE: test    eax, eax
0x46DCC0: jnz     short loc_46DCC8
0x46DCC2: mov     al, 1
0x46DCC4: pop     esi
0x46DCC5: retn    4
0x46DCC8: add     esi, 4
0x46DCCB: push    edi
0x46DCCC: lea     edi, [eax+4]
0x46DCCF: jz      short loc_46DCFD
0x46DCD1: test    edi, edi
0x46DCD3: jz      short loc_46DD08
0x46DCD5: mov     eax, [esi]
0x46DCD7: test    eax, eax
0x46DCD9: mov     ecx, [edi]
0x46DCDB: jnz     short loc_46DCE1
0x46DCDD: test    ecx, ecx
0x46DCDF: jmp     short loc_46DCF1
0x46DCE1: test    ecx, ecx
0x46DCE3: jz      short loc_46DD0C
0x46DCE5: push    ecx; Str2
0x46DCE6: push    eax; Str1
0x46DCE7: call    __strcmp
0x46DCEC: add     esp, 8
0x46DCEF: test    eax, eax
0x46DCF1: jnz     short loc_46DD0C
0x46DCF3: mov     esi, [esi+4]
0x46DCF6: test    esi, esi
0x46DCF8: mov     edi, [edi+4]
0x46DCFB: jnz     short loc_46DCD1
0x46DCFD: test    edi, edi
0x46DCFF: jnz     short loc_46DD0C
0x46DD01: pop     edi
0x46DD02: xor     al, al
0x46DD04: pop     esi
0x46DD05: retn    4
0x46DD08: test    esi, esi
0x46DD0A: jmp     short loc_46DCFF
0x46DD0C: pop     edi
0x46DD0D: mov     al, 1
0x46DD0F: pop     esi
0x46DD10: retn    4
