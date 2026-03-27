0x4FD2A0: push    esi
0x4FD2A1: push    edi; ArgList
0x4FD2A2: mov     edi, [esp+8+arg_0]
0x4FD2A6: lea     eax, [edi+50h]
0x4FD2A9: xor     dl, dl
0x4FD2AB: test    eax, eax
0x4FD2AD: jz      short loc_4FD2F3
0x4FD2AF: nop
0x4FD2B0: mov     esi, [eax+4]
0x4FD2B3: test    esi, esi
0x4FD2B5: jnz     short loc_4FD2BB
0x4FD2B7: cmp     [eax], esi
0x4FD2B9: jz      short loc_4FD2F3
0x4FD2BB: mov     eax, [eax]
0x4FD2BD: mov     ecx, [eax+410h]
0x4FD2C3: add     ecx, 0FFFFFFF0h; switch 16 cases
0x4FD2C6: cmp     ecx, 0Fh
0x4FD2C9: ja      short def_4FD2D2; jumptable 004FD2D2 default case, cases 21-28,30
0x4FD2CB: movzx   ecx, ds:byte_4FD358[ecx]
0x4FD2D2: jmp     ds:jpt_4FD2D2[ecx*4]; switch jump
0x4FD2D9: test    dl, dl; jumptable 004FD2D2 case 16
0x4FD2DB: jnz     short loc_4FD2FA
0x4FD2DD: mov     dl, 1
0x4FD2DF: jmp     short loc_4FD2ED; jumptable 004FD2D2 cases 18-20,29,31
0x4FD2E1: test    dl, dl; jumptable 004FD2D2 case 17
0x4FD2E3: jz      short loc_4FD314
0x4FD2E5: xor     dl, dl
0x4FD2E7: jmp     short loc_4FD2ED; jumptable 004FD2D2 cases 18-20,29,31
0x4FD2E9: test    dl, dl; jumptable 004FD2D2 default case, cases 21-28,30
0x4FD2EB: jz      short loc_4FD32E
0x4FD2ED: mov     eax, esi; jumptable 004FD2D2 cases 18-20,29,31
0x4FD2EF: test    eax, eax
0x4FD2F1: jnz     short loc_4FD2B0
0x4FD2F3: pop     edi
0x4FD2F4: mov     al, 1
0x4FD2F6: pop     esi
0x4FD2F7: retn    4
0x4FD2FA: mov     edx, [eax]
0x4FD2FC: push    offset aNestedBeginEnd; "Nested begin/end blocks are not allowed"...
0x4FD301: push    edi; int
0x4FD302: mov     [edi+1Ch], edx
0x4FD305: call    sub_4FCE30
0x4FD30A: add     esp, 8
0x4FD30D: pop     edi
0x4FD30E: xor     al, al
0x4FD310: pop     esi
0x4FD311: retn    4
0x4FD314: mov     eax, [eax]
0x4FD316: push    offset aEndWithoutMatc; "End without matching Begin."
0x4FD31B: push    edi; int
0x4FD31C: mov     [edi+1Ch], eax
0x4FD31F: call    sub_4FCE30
0x4FD324: add     esp, 8
0x4FD327: pop     edi
0x4FD328: xor     al, al
0x4FD32A: pop     esi
0x4FD32B: retn    4
0x4FD32E: mov     ecx, [eax]
0x4FD330: push    offset aAllScriptComma; "All script commands must be inside a be"...
0x4FD335: push    edi; int
0x4FD336: mov     [edi+1Ch], ecx
0x4FD339: call    sub_4FCE30
0x4FD33E: add     esp, 8
0x4FD341: pop     edi
0x4FD342: xor     al, al
0x4FD344: pop     esi
0x4FD345: retn    4
