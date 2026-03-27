0x68BD40: push    esi
0x68BD41: push    edi
0x68BD42: mov     edi, [esp+8+arg_0]
0x68BD46: test    edi, edi
0x68BD48: mov     esi, ecx
0x68BD4A: jz      short loc_68BD96
0x68BD4C: push    ebx
0x68BD4D: mov     ebx, [esp+0Ch+arg_4]
0x68BD51: push    ebx
0x68BD52: call    sub_68A160
0x68BD57: mov     ecx, eax
0x68BD59: call    sub_8AA390
0x68BD5E: test    al, al
0x68BD60: jnz     short loc_68BD6F
0x68BD62: mov     eax, [esi]
0x68BD64: mov     edx, [eax+0Ch]
0x68BD67: mov     ecx, esi
0x68BD69: call    edx
0x68BD6B: test    al, al
0x68BD6D: jz      short loc_68BD95
0x68BD6F: push    ebx
0x68BD70: push    edi
0x68BD71: mov     ecx, esi
0x68BD73: call    sub_68AFB0
0x68BD78: mov     ecx, ds:0B3BF80h
0x68BD7E: push    edi
0x68BD7F: call    sub_6825C0
0x68BD84: test    al, al
0x68BD86: jnz     short loc_68BD95
0x68BD88: mov     eax, [esi]
0x68BD8A: mov     edx, [eax+14h]
0x68BD8D: push    0
0x68BD8F: push    ebx
0x68BD90: push    edi
0x68BD91: mov     ecx, esi
0x68BD93: call    edx
0x68BD95: pop     ebx
0x68BD96: pop     edi
0x68BD97: pop     esi
0x68BD98: retn    8
