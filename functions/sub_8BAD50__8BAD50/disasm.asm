0x8BAD50: push    ebx
0x8BAD51: mov     ebx, large fs:2Ch
0x8BAD58: push    esi
0x8BAD59: mov     esi, ecx
0x8BAD5B: mov     eax, [esi+20h]
0x8BAD5E: test    eax, eax
0x8BAD60: push    edi
0x8BAD61: mov     edi, ds:0BA9DE4h
0x8BAD67: js      short loc_8BAD8D
0x8BAD69: mov     ecx, [ebx+edi*4]
0x8BAD6C: mov     ecx, [ecx+19Ch]
0x8BAD72: test    ecx, ecx
0x8BAD74: jnz     short loc_8BAD7C
0x8BAD76: mov     ecx, ds:0BA7D9Ch
0x8BAD7C: mov     edx, [esi+18h]
0x8BAD7F: push    14h
0x8BAD81: and     eax, 3FFFFFFFh
0x8BAD86: push    eax
0x8BAD87: push    edx
0x8BAD88: call    sub_8A75D0
0x8BAD8D: mov     eax, [esi+14h]
0x8BAD90: test    eax, eax
0x8BAD92: js      short loc_8BADBB
0x8BAD94: mov     ecx, [ebx+edi*4]
0x8BAD97: mov     ecx, [ecx+19Ch]
0x8BAD9D: test    ecx, ecx
0x8BAD9F: jnz     short loc_8BADA7
0x8BADA1: mov     ecx, ds:0BA7D9Ch
0x8BADA7: mov     edx, [esi+0Ch]
0x8BADAA: and     eax, 3FFFFFFFh
0x8BADAF: push    14h
0x8BADB1: shl     eax, 2
0x8BADB4: push    eax
0x8BADB5: push    edx
0x8BADB6: call    sub_8A75D0
0x8BADBB: mov     eax, [esi+8]
0x8BADBE: test    eax, eax
0x8BADC0: js      short loc_8BADEB
0x8BADC2: mov     ecx, [ebx+edi*4]
0x8BADC5: mov     ecx, [ecx+19Ch]
0x8BADCB: test    ecx, ecx
0x8BADCD: jnz     short loc_8BADD5
0x8BADCF: mov     ecx, ds:0BA7D9Ch
0x8BADD5: and     eax, 3FFFFFFFh
0x8BADDA: lea     edx, [eax+eax*2]
0x8BADDD: mov     eax, [esi]
0x8BADDF: push    14h
0x8BADE1: shl     edx, 3
0x8BADE4: push    edx
0x8BADE5: push    eax
0x8BADE6: call    sub_8A75D0
0x8BADEB: pop     edi
0x8BADEC: pop     esi
0x8BADED: pop     ebx
0x8BADEE: retn
