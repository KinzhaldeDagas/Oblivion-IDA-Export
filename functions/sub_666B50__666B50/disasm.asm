0x666B50: push    esi
0x666B51: mov     esi, ecx
0x666B53: call    MobileObject_GetCharProxy
0x666B58: test    eax, eax
0x666B5A: jz      short loc_666BA7
0x666B5C: mov     eax, [eax+364h]
0x666B62: test    eax, eax
0x666B64: jz      short loc_666B99
0x666B66: mov     eax, [eax+8]
0x666B69: test    eax, eax
0x666B6B: jz      short loc_666B86
0x666B6D: add     eax, 14h
0x666B70: jz      short loc_666B86
0x666B72: mov     eax, [eax+1Ch]
0x666B75: mov     ecx, [esi+1F0h]
0x666B7B: shr     eax, 10h
0x666B7E: push    eax
0x666B7F: call    sub_531E80
0x666B84: pop     esi
0x666B85: retn
0x666B86: mov     ecx, [esi+1F0h]
0x666B8C: xor     eax, eax
0x666B8E: shr     eax, 10h
0x666B91: push    eax
0x666B92: call    sub_531E80
0x666B97: pop     esi
0x666B98: retn
0x666B99: mov     ecx, [esi+1F0h]
0x666B9F: xor     eax, eax
0x666BA1: push    eax
0x666BA2: call    sub_531E80
0x666BA7: pop     esi
0x666BA8: retn
