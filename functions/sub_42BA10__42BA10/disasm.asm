0x42BA10: push    esi
0x42BA11: mov     esi, ecx
0x42BA13: mov     eax, [esi]
0x42BA15: push    edi
0x42BA16: mov     edi, [esp+8+arg_0]
0x42BA1A: cmp     eax, [edi]
0x42BA1C: jz      short loc_42BA25
0x42BA1E: pop     edi
0x42BA1F: mov     al, 1
0x42BA21: pop     esi
0x42BA22: retn    4
0x42BA25: lea     ecx, [edi+4]
0x42BA28: push    ecx
0x42BA29: lea     ecx, [esi+4]
0x42BA2C: call    sub_8AA390
0x42BA31: test    al, al
0x42BA33: jnz     short loc_42BA1E
0x42BA35: add     edi, 10h
0x42BA38: push    edi
0x42BA39: lea     ecx, [esi+10h]
0x42BA3C: call    sub_8AA390
0x42BA41: test    al, al
0x42BA43: pop     edi
0x42BA44: setnz   al
0x42BA47: pop     esi
0x42BA48: retn    4
