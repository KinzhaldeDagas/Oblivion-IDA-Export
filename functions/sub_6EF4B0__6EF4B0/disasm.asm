0x6EF4B0: sub     esp, 8
0x6EF4B3: push    ebx
0x6EF4B4: push    ebp
0x6EF4B5: push    esi
0x6EF4B6: mov     esi, ecx
0x6EF4B8: mov     eax, [esi+4]
0x6EF4BB: test    eax, eax
0x6EF4BD: push    edi
0x6EF4BE: jnz     short loc_6EF4C4
0x6EF4C0: xor     ecx, ecx
0x6EF4C2: jmp     short loc_6EF4C9
0x6EF4C4: mov     ecx, [esi+8]
0x6EF4C7: sub     ecx, eax
0x6EF4C9: mov     edi, [esp+18h+arg_0]
0x6EF4CD: cmp     ecx, edi
0x6EF4CF: jnb     short loc_6EF505
0x6EF4D1: test    eax, eax
0x6EF4D3: jnz     short loc_6EF4D9
0x6EF4D5: xor     ebx, ebx
0x6EF4D7: jmp     short loc_6EF4DE
0x6EF4D9: mov     ebx, [esi+8]
0x6EF4DC: sub     ebx, eax
0x6EF4DE: mov     ebp, [esi+8]
0x6EF4E1: cmp     eax, ebp
0x6EF4E3: jbe     short loc_6EF4EA
0x6EF4E5: call    __invalid_parameter_noinfo
0x6EF4EA: lea     eax, [esp+18h+arg_4]
0x6EF4EE: push    eax; int
0x6EF4EF: sub     edi, ebx
0x6EF4F1: push    edi; int
0x6EF4F2: push    ebp; Src
0x6EF4F3: push    esi; int
0x6EF4F4: mov     ecx, esi
0x6EF4F6: call    sub_6EF2F0
0x6EF4FB: pop     edi
0x6EF4FC: pop     esi
0x6EF4FD: pop     ebp
0x6EF4FE: pop     ebx
0x6EF4FF: add     esp, 8
0x6EF502: retn    8
0x6EF505: test    eax, eax
0x6EF507: jz      short loc_6EF54F
0x6EF509: mov     ebp, [esi+8]
0x6EF50C: mov     ecx, ebp
0x6EF50E: sub     ecx, eax
0x6EF510: cmp     edi, ecx
0x6EF512: jnb     short loc_6EF54F
0x6EF514: cmp     eax, ebp
0x6EF516: jbe     short loc_6EF51D
0x6EF518: call    __invalid_parameter_noinfo
0x6EF51D: mov     ebx, [esi+4]
0x6EF520: cmp     ebx, [esi+8]
0x6EF523: jbe     short loc_6EF52A
0x6EF525: call    __invalid_parameter_noinfo
0x6EF52A: add     edi, ebx
0x6EF52C: cmp     edi, [esi+8]
0x6EF52F: mov     [esp+18h+var_4], ebx
0x6EF533: ja      short loc_6EF53A
0x6EF535: cmp     edi, [esi+4]
0x6EF538: jnb     short loc_6EF53F
0x6EF53A: call    __invalid_parameter_noinfo
0x6EF53F: push    ebp; Src
0x6EF540: push    esi; int
0x6EF541: push    edi; Dst
0x6EF542: push    esi; int
0x6EF543: lea     ecx, [esp+28h+var_8]
0x6EF547: push    ecx; int
0x6EF548: mov     ecx, esi
0x6EF54A: call    sub_788B10
0x6EF54F: pop     edi
0x6EF550: pop     esi
0x6EF551: pop     ebp
0x6EF552: pop     ebx
0x6EF553: add     esp, 8
0x6EF556: retn    8
