0x6C7AD0: sub     esp, 8
0x6C7AD3: push    ebp
0x6C7AD4: push    esi
0x6C7AD5: mov     esi, [esp+10h+arg_0]
0x6C7AD9: push    esi
0x6C7ADA: mov     ebp, ecx
0x6C7ADC: call    nullsub_returnvVoid_1arg
0x6C7AE1: cmp     dword ptr [esi+0D8h], 0A010068h
0x6C7AEB: mov     ecx, esi
0x6C7AED: jnb     loc_6C7B8F
0x6C7AF3: call    sub_7124A0
0x6C7AF8: push    eax; a2
0x6C7AF9: lea     ecx, [ebp+20h]; this
0x6C7AFC: call    NiSmartPointer_Set??
0x6C7B01: xor     eax, eax
0x6C7B03: cmp     [ebp+0Ch], eax
0x6C7B06: mov     [esp+10h+var_4], eax
0x6C7B0A: jbe     loc_6C7BA7
0x6C7B10: push    ebx
0x6C7B11: push    edi
0x6C7B12: mov     [esp+18h+var_8], eax
0x6C7B16: jmp     short loc_6C7B24
0x6C7B18: jmp     short loc_6C7B20
0x6C7B1A: align 10h
0x6C7B20: mov     esi, [esp+18h+arg_0]
0x6C7B24: mov     ecx, esi
0x6C7B26: call    sub_7124A0
0x6C7B2B: mov     ecx, [esp+18h+var_8]
0x6C7B2F: mov     edi, eax
0x6C7B31: mov     eax, [ebp+14h]
0x6C7B34: mov     esi, [eax+ecx+4]
0x6C7B38: cmp     esi, edi
0x6C7B3A: lea     ebx, [eax+ecx+4]
0x6C7B3E: jz      short loc_6C7B70
0x6C7B40: test    esi, esi
0x6C7B42: jz      short loc_6C7B60
0x6C7B44: lea     edx, [esi+4]
0x6C7B47: push    edx; lpAddend
0x6C7B48: call    dword ptr ds:0A2807Ch
0x6C7B4E: test    eax, eax
0x6C7B50: jnz     short loc_6C7B60
0x6C7B52: test    esi, esi
0x6C7B54: jz      short loc_6C7B60
0x6C7B56: mov     eax, [esi]
0x6C7B58: mov     edx, [eax]
0x6C7B5A: push    1
0x6C7B5C: mov     ecx, esi
0x6C7B5E: call    edx
0x6C7B60: test    edi, edi
0x6C7B62: mov     [ebx], edi
0x6C7B64: jz      short loc_6C7B70
0x6C7B66: add     edi, 4
0x6C7B69: push    edi; lpAddend
0x6C7B6A: call    dword ptr ds:0A28078h
0x6C7B70: mov     eax, [esp+18h+var_4]
0x6C7B74: add     [esp+18h+var_8], 10h
0x6C7B79: add     eax, 1
0x6C7B7C: cmp     eax, [ebp+0Ch]
0x6C7B7F: mov     [esp+18h+var_4], eax
0x6C7B83: jb      short loc_6C7B20
0x6C7B85: pop     edi
0x6C7B86: pop     ebx
0x6C7B87: pop     esi
0x6C7B88: pop     ebp
0x6C7B89: add     esp, 8
0x6C7B8C: retn    4
0x6C7B8F: call    sub_7124A0
0x6C7B94: push    eax; a2
0x6C7B95: lea     ecx, [ebp+20h]; this
0x6C7B98: call    NiSmartPointer_Set??
0x6C7B9D: mov     ecx, esi
0x6C7B9F: call    sub_7124A0
0x6C7BA4: mov     [ebp+40h], eax
0x6C7BA7: pop     esi
0x6C7BA8: pop     ebp
0x6C7BA9: add     esp, 8
0x6C7BAC: retn    4
