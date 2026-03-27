0x98BD7C: push    ebp
0x98BD7D: mov     ebp, esp
0x98BD7F: push    ecx
0x98BD80: push    ebx
0x98BD81: push    esi
0x98BD82: mov     esi, ecx
0x98BD84: xor     ebx, ebx
0x98BD86: cmp     esi, ebx
0x98BD88: jnz     short loc_98BDA8
0x98BD8A: call    __errno
0x98BD8F: push    16h
0x98BD91: pop     esi
0x98BD92: push    ebx
0x98BD93: push    ebx
0x98BD94: push    ebx
0x98BD95: push    ebx
0x98BD96: push    ebx
0x98BD97: mov     [eax], esi
0x98BD99: call    __invalid_parameter
0x98BD9E: add     esp, 14h
0x98BDA1: mov     eax, esi
0x98BDA3: jmp     loc_98BE51
0x98BDA8: cmp     [ebp+arg_0], ebx
0x98BDAB: push    edi
0x98BDAC: ja      short loc_98BDCC
0x98BDAE: call    __errno
0x98BDB3: push    16h
0x98BDB5: pop     esi
0x98BDB6: push    ebx
0x98BDB7: push    ebx
0x98BDB8: push    ebx
0x98BDB9: push    ebx
0x98BDBA: push    ebx
0x98BDBB: mov     [eax], esi
0x98BDBD: call    __invalid_parameter
0x98BDC2: add     esp, 14h
0x98BDC5: mov     eax, esi
0x98BDC7: jmp     loc_98BE50
0x98BDCC: xor     ecx, ecx
0x98BDCE: cmp     [ebp+arg_8], ebx
0x98BDD1: mov     [esi], bl
0x98BDD3: setnz   cl
0x98BDD6: inc     ecx
0x98BDD7: cmp     [ebp+arg_0], ecx
0x98BDDA: ja      short loc_98BDE5
0x98BDDC: call    __errno
0x98BDE1: push    22h ; '"'
0x98BDE3: jmp     short loc_98BDB5
0x98BDE5: mov     ecx, [ebp+arg_4]
0x98BDE8: add     ecx, 0FFFFFFFEh
0x98BDEB: cmp     ecx, 22h ; '"'
0x98BDEE: ja      short loc_98BDAE
0x98BDF0: cmp     [ebp+arg_8], ebx
0x98BDF3: mov     [ebp+var_4], ebx
0x98BDF6: mov     ecx, esi
0x98BDF8: jz      short loc_98BE09
0x98BDFA: mov     byte ptr [esi], 2Dh ; '-'
0x98BDFD: lea     ecx, [esi+1]
0x98BE00: mov     [ebp+var_4], 1
0x98BE07: neg     eax
0x98BE09: mov     edi, ecx
0x98BE0B: xor     edx, edx
0x98BE0D: div     [ebp+arg_4]
0x98BE10: cmp     edx, 9
0x98BE13: jbe     short loc_98BE1A
0x98BE15: add     dl, 57h ; 'W'
0x98BE18: jmp     short loc_98BE1D
0x98BE1A: add     dl, 30h ; '0'
0x98BE1D: mov     [ecx], dl
0x98BE1F: inc     ecx
0x98BE20: inc     [ebp+var_4]
0x98BE23: xor     ebx, ebx
0x98BE25: cmp     eax, ebx
0x98BE27: jbe     short loc_98BE31
0x98BE29: mov     edx, [ebp+arg_0]
0x98BE2C: cmp     [ebp+var_4], edx
0x98BE2F: jb      short loc_98BE0B
0x98BE31: mov     eax, [ebp+var_4]
0x98BE34: cmp     eax, [ebp+arg_0]
0x98BE37: jb      short loc_98BE3D
0x98BE39: mov     [esi], bl
0x98BE3B: jmp     short loc_98BDDC
0x98BE3D: mov     [ecx], bl
0x98BE3F: dec     ecx
0x98BE40: mov     dl, [edi]
0x98BE42: mov     al, [ecx]
0x98BE44: mov     [ecx], dl
0x98BE46: dec     ecx
0x98BE47: mov     [edi], al
0x98BE49: inc     edi
0x98BE4A: cmp     edi, ecx
0x98BE4C: jb      short loc_98BE40
0x98BE4E: xor     eax, eax
0x98BE50: pop     edi
0x98BE51: pop     esi
0x98BE52: pop     ebx
0x98BE53: leave
0x98BE54: retn    0Ch
