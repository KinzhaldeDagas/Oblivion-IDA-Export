0x795A40: push    ecx
0x795A41: push    ebx
0x795A42: push    ebp
0x795A43: mov     ebp, [esp+0Ch+arg_4]
0x795A47: push    esi
0x795A48: mov     esi, ecx
0x795A4A: push    edi
0x795A4B: mov     edi, [esi+4]
0x795A4E: test    edi, edi
0x795A50: jz      short loc_795A5D
0x795A52: mov     eax, [esi+8]
0x795A55: mov     ecx, eax
0x795A57: sub     ecx, edi
0x795A59: sar     ecx, 1
0x795A5B: jnz     short loc_795A61
0x795A5D: xor     ebx, ebx
0x795A5F: jmp     short loc_795A7F
0x795A61: cmp     edi, eax
0x795A63: jbe     short loc_795A6A
0x795A65: call    __invalid_parameter_noinfo
0x795A6A: test    ebp, ebp
0x795A6C: jz      short loc_795A72
0x795A6E: cmp     ebp, esi
0x795A70: jz      short loc_795A77
0x795A72: call    __invalid_parameter_noinfo
0x795A77: mov     ebx, [esp+14h+Src]
0x795A7B: sub     ebx, edi
0x795A7D: sar     ebx, 1
0x795A7F: mov     edx, [esp+14h+arg_C]
0x795A83: mov     eax, [esp+14h+Src]
0x795A87: push    edx; int
0x795A88: push    1; int
0x795A8A: push    eax; Src
0x795A8B: push    ebp; int
0x795A8C: mov     ecx, esi
0x795A8E: call    sub_7952B0
0x795A93: mov     edi, [esi+4]
0x795A96: cmp     edi, [esi+8]
0x795A99: jbe     short loc_795AA0
0x795A9B: call    __invalid_parameter_noinfo
0x795AA0: mov     [esp+14h+Src], edi
0x795AA4: lea     edi, [edi+ebx*2]
0x795AA7: cmp     edi, [esi+8]
0x795AAA: ja      short loc_795AB1
0x795AAC: cmp     edi, [esi+4]
0x795AAF: jnb     short loc_795AB6
0x795AB1: call    __invalid_parameter_noinfo
0x795AB6: mov     eax, [esp+14h+arg_0]
0x795ABA: mov     [eax+4], edi
0x795ABD: pop     edi
0x795ABE: mov     [eax], esi
0x795AC0: pop     esi
0x795AC1: pop     ebp
0x795AC2: pop     ebx
0x795AC3: pop     ecx
0x795AC4: retn    10h
