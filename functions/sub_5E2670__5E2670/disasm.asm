0x5E2670: mov     eax, [esp+arg_0]
0x5E2674: push    esi
0x5E2675: mov     esi, ecx
0x5E2677: lea     ecx, [eax-0Ch]
0x5E267A: cmp     ecx, 14h
0x5E267D: ja      short sub_5E26BE
0x5E267F: cmp     eax, 12h
0x5E2682: jz      short loc_5E2689
0x5E2684: cmp     eax, 1Bh
0x5E2687: jnz     short loc_5E26A8
0x5E2689: lea     ecx, [esi+44h]; this
0x5E268C: call    ExtraDataList_GetContainerChanges
0x5E2691: test    eax, eax
0x5E2693: jz      short loc_5E269C
0x5E2695: mov     ecx, eax
0x5E2697: call    sub_484310
0x5E269C: mov     edx, [esi]
0x5E269E: mov     eax, [edx+2C0h]
0x5E26A4: mov     ecx, esi
0x5E26A6: call    eax
0x5E26A8: mov     ecx, ds:0B333C4h
0x5E26AE: cmp     esi, ecx
0x5E26B0: jnz     short sub_5E26BE
0x5E26B2: cmp     [esp+4+arg_4], 0
0x5E26B7: jz      short sub_5E26BE
0x5E26B9: call    sub_6670C0
