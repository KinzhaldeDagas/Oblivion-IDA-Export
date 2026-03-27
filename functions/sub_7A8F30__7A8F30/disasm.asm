0x7A8F30: sub     esp, 8
0x7A8F33: push    esi
0x7A8F34: mov     esi, ecx
0x7A8F36: mov     edx, [esi+4]
0x7A8F39: test    edx, edx
0x7A8F3B: push    edi
0x7A8F3C: jnz     short loc_7A8F42
0x7A8F3E: xor     ecx, ecx
0x7A8F40: jmp     short loc_7A8F4A
0x7A8F42: mov     ecx, [esi+8]
0x7A8F45: sub     ecx, edx
0x7A8F47: sar     ecx, 3
0x7A8F4A: test    edx, edx
0x7A8F4C: jz      short loc_7A8F8B
0x7A8F4E: mov     eax, [esi+0Ch]
0x7A8F51: sub     eax, edx
0x7A8F53: sar     eax, 3
0x7A8F56: cmp     ecx, eax
0x7A8F58: jnb     short loc_7A8F8B
0x7A8F5A: mov     ecx, [esp+10h+arg_0]
0x7A8F5E: mov     edx, [esp+10h+arg_0]
0x7A8F62: mov     edi, [esi+8]
0x7A8F65: mov     byte ptr [esp+10h+var_8], 0
0x7A8F6A: mov     eax, [esp+10h+var_8]
0x7A8F6E: push    eax
0x7A8F6F: push    ecx
0x7A8F70: push    esi
0x7A8F71: push    edx
0x7A8F72: push    1
0x7A8F74: push    edi
0x7A8F75: call    sub_7A8720
0x7A8F7A: add     esp, 18h
0x7A8F7D: add     edi, 8
0x7A8F80: mov     [esi+8], edi
0x7A8F83: pop     edi
0x7A8F84: pop     esi
0x7A8F85: add     esp, 8
0x7A8F88: retn    4
0x7A8F8B: mov     edi, [esi+8]
0x7A8F8E: cmp     edx, edi
0x7A8F90: jbe     short loc_7A8F97
0x7A8F92: call    __invalid_parameter_noinfo
0x7A8F97: mov     eax, [esp+10h+arg_0]
0x7A8F9B: push    eax
0x7A8F9C: push    edi
0x7A8F9D: push    esi
0x7A8F9E: lea     ecx, [esp+1Ch+var_8]
0x7A8FA2: push    ecx
0x7A8FA3: mov     ecx, esi
0x7A8FA5: call    sub_7A8D90
0x7A8FAA: pop     edi
0x7A8FAB: pop     esi
0x7A8FAC: add     esp, 8
0x7A8FAF: retn    4
