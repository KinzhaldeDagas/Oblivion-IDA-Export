0x740580: push    esi
0x740581: push    edi
0x740582: mov     edi, [esp+8+arg_0]
0x740586: push    edi
0x740587: mov     esi, ecx
0x740589: call    sub_73F270
0x74058E: test    al, al
0x740590: jnz     short loc_740597
0x740592: pop     edi
0x740593: pop     esi
0x740594: retn    4
0x740597: mov     ecx, [esi+5Ch]
0x74059A: mov     eax, [edi+5Ch]
0x74059D: mov     edx, [ecx]
0x74059F: push    eax
0x7405A0: mov     eax, [edx+2Ch]
0x7405A3: call    eax
0x7405A5: test    al, al
0x7405A7: pop     edi
0x7405A8: setnz   al
0x7405AB: pop     esi
0x7405AC: retn    4
