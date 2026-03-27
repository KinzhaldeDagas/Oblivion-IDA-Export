0x707B50: push    ebx
0x707B51: push    ebp
0x707B52: mov     ebp, [esp+8+arg_0]
0x707B56: push    ebp
0x707B57: mov     ebx, ecx
0x707B59: call    sub_700200
0x707B5E: test    al, al
0x707B60: jnz     short loc_707B69
0x707B62: pop     ebp
0x707B63: xor     al, al
0x707B65: pop     ebx
0x707B66: retn    4
0x707B69: mov     al, [ebp+18h]
0x707B6C: xor     al, [ebx+18h]
0x707B6F: test    al, 1
0x707B71: jnz     short loc_707B62
0x707B73: lea     ecx, [ebp+30h]
0x707B76: push    ecx
0x707B77: lea     ecx, [ebx+30h]
0x707B7A: call    sub_718B20
0x707B7F: test    al, al
0x707B81: jnz     short loc_707B62
0x707B83: mov     eax, [ebx+0A4h]
0x707B89: cmp     eax, [ebp+0A4h]
0x707B8F: jnz     short loc_707B62
0x707B91: test    eax, eax
0x707B93: push    esi
0x707B94: push    edi
0x707B95: jbe     short loc_707BCE
0x707B97: mov     esi, [ebx+9Ch]
0x707B9D: test    esi, esi
0x707B9F: mov     edi, [ebp+9Ch]
0x707BA5: jz      short loc_707BCE
0x707BA7: mov     ecx, [esi+8]
0x707BAA: test    ecx, ecx
0x707BAC: lea     eax, [esi+8]
0x707BAF: mov     esi, [esi]
0x707BB1: lea     eax, [edi+8]
0x707BB4: mov     edi, [edi]
0x707BB6: mov     eax, [eax]
0x707BB8: jz      short loc_707BF7
0x707BBA: test    eax, eax
0x707BBC: jz      short loc_707BEE
0x707BBE: mov     edx, [ecx]
0x707BC0: push    eax
0x707BC1: mov     eax, [edx+2Ch]
0x707BC4: call    eax
0x707BC6: test    al, al
0x707BC8: jz      short loc_707BEE
0x707BCA: test    esi, esi
0x707BCC: jnz     short loc_707BA7
0x707BCE: mov     ecx, [ebx+0A8h]
0x707BD4: test    ecx, ecx
0x707BD6: mov     eax, [ebp+0A8h]
0x707BDC: jz      short loc_707BFD
0x707BDE: test    eax, eax
0x707BE0: jz      short loc_707BFD
0x707BE2: mov     edx, [ecx]
0x707BE4: push    eax
0x707BE5: mov     eax, [edx+2Ch]
0x707BE8: call    eax
0x707BEA: test    al, al
0x707BEC: jnz     short loc_707C01
0x707BEE: pop     edi
0x707BEF: pop     esi
0x707BF0: pop     ebp
0x707BF1: xor     al, al
0x707BF3: pop     ebx
0x707BF4: retn    4
0x707BF7: test    eax, eax
0x707BF9: jnz     short loc_707BEE
0x707BFB: jmp     short loc_707BCA
0x707BFD: cmp     ecx, eax
0x707BFF: jnz     short loc_707BEE
0x707C01: pop     edi
0x707C02: pop     esi
0x707C03: pop     ebp
0x707C04: mov     al, 1
0x707C06: pop     ebx
0x707C07: retn    4
