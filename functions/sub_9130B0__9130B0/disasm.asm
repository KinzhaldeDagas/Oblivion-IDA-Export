0x9130B0: push    ebx
0x9130B1: mov     ebx, large fs:2Ch
0x9130B8: push    esi
0x9130B9: mov     esi, ecx
0x9130BB: mov     eax, [esi+3Ch]
0x9130BE: test    eax, eax
0x9130C0: push    edi
0x9130C1: mov     edi, ds:0BA9DE4h
0x9130C7: js      short loc_9130F0
0x9130C9: mov     ecx, [ebx+edi*4]
0x9130CC: mov     ecx, [ecx+19Ch]
0x9130D2: test    ecx, ecx
0x9130D4: jnz     short loc_9130DC
0x9130D6: mov     ecx, ds:0BA7D9Ch
0x9130DC: mov     edx, [esi+34h]
0x9130DF: and     eax, 3FFFFFFFh
0x9130E4: push    14h
0x9130E6: shl     eax, 2
0x9130E9: push    eax
0x9130EA: push    edx
0x9130EB: call    sub_8A75D0
0x9130F0: mov     eax, [esi+30h]
0x9130F3: test    eax, eax
0x9130F5: js      short loc_91311E
0x9130F7: mov     ecx, [ebx+edi*4]
0x9130FA: mov     ecx, [ecx+19Ch]
0x913100: test    ecx, ecx
0x913102: jnz     short loc_91310A
0x913104: mov     ecx, ds:0BA7D9Ch
0x91310A: mov     edx, [esi+28h]
0x91310D: and     eax, 3FFFFFFFh
0x913112: push    14h
0x913114: shl     eax, 2
0x913117: push    eax
0x913118: push    edx
0x913119: call    sub_8A75D0
0x91311E: mov     eax, [esi+24h]
0x913121: test    eax, eax
0x913123: js      short loc_91314C
0x913125: mov     ecx, [ebx+edi*4]
0x913128: mov     ecx, [ecx+19Ch]
0x91312E: test    ecx, ecx
0x913130: jnz     short loc_913138
0x913132: mov     ecx, ds:0BA7D9Ch
0x913138: mov     edx, [esi+1Ch]
0x91313B: and     eax, 3FFFFFFFh
0x913140: push    14h
0x913142: shl     eax, 2
0x913145: push    eax
0x913146: push    edx
0x913147: call    sub_8A75D0
0x91314C: mov     eax, [esi+18h]
0x91314F: test    eax, eax
0x913151: js      short loc_91317A
0x913153: mov     ecx, [ebx+edi*4]
0x913156: mov     ecx, [ecx+19Ch]
0x91315C: test    ecx, ecx
0x91315E: jnz     short loc_913166
0x913160: mov     ecx, ds:0BA7D9Ch
0x913166: mov     edx, [esi+10h]
0x913169: and     eax, 3FFFFFFFh
0x91316E: push    14h
0x913170: shl     eax, 4
0x913173: push    eax
0x913174: push    edx
0x913175: call    sub_8A75D0
0x91317A: pop     edi
0x91317B: pop     esi
0x91317C: pop     ebx
0x91317D: retn
