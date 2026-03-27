0x5E8D90: push    esi
0x5E8D91: mov     esi, [esp+4+arg_0]
0x5E8D95: push    edi
0x5E8D96: xor     edi, edi
0x5E8D98: test    esi, esi
0x5E8D9A: jz      short loc_5E8DCB
0x5E8D9C: mov     eax, [esi+0Ch]
0x5E8D9F: mov     ecx, ds:0B33A98h
0x5E8DA5: push    eax; _DWORD
0x5E8DA6: call    TESDataHandler_IsFormIDCreated?
0x5E8DAB: test    al, al
0x5E8DAD: jz      short loc_5E8DCB
0x5E8DAF: mov     cl, [esi+20h]
0x5E8DB2: cmp     cl, 13h
0x5E8DB5: mov     eax, 20000h
0x5E8DBA: jz      short loc_5E8DC1
0x5E8DBC: cmp     cl, 11h
0x5E8DBF: jnz     short loc_5E8DCD
0x5E8DC1: pop     edi
0x5E8DC2: mov     eax, 30000h
0x5E8DC7: pop     esi
0x5E8DC8: retn    4
0x5E8DCB: mov     eax, edi
0x5E8DCD: pop     edi
0x5E8DCE: pop     esi
0x5E8DCF: retn    4
