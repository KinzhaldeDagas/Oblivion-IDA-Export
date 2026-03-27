0x6F1BF0: push    esi
0x6F1BF1: xor     eax, eax
0x6F1BF3: push    edi
0x6F1BF4: mov     edi, [esp+8+arg_0]
0x6F1BF8: cmp     edi, eax
0x6F1BFA: mov     esi, ecx
0x6F1BFC: mov     [esi+4], eax
0x6F1BFF: mov     [esi+8], eax
0x6F1C02: mov     [esi+0Ch], eax
0x6F1C05: jnz     short loc_6F1C0E
0x6F1C07: pop     edi
0x6F1C08: xor     al, al
0x6F1C0A: pop     esi
0x6F1C0B: retn    4
0x6F1C0E: cmp     edi, 3FFFFFFFh
0x6F1C14: jbe     short loc_6F1C1B
0x6F1C16: call    sub_6F1780
0x6F1C1B: push    eax
0x6F1C1C: push    edi; char *
0x6F1C1D: call    sub_78FB60
0x6F1C22: mov     [esi+4], eax
0x6F1C25: mov     [esi+8], eax
0x6F1C28: add     esp, 8
0x6F1C2B: lea     eax, [eax+edi*4]
0x6F1C2E: mov     [esi+0Ch], eax
0x6F1C31: pop     edi
0x6F1C32: mov     al, 1
0x6F1C34: pop     esi
0x6F1C35: retn    4
