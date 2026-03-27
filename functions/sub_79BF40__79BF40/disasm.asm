0x79BF40: push    ebp
0x79BF41: mov     ebp, esp
0x79BF43: push    0FFFFFFFFh
0x79BF45: push    offset SEH_79BF40
0x79BF4A: mov     eax, large fs:0
0x79BF50: push    eax
0x79BF51: sub     esp, 0Ch
0x79BF54: push    ebx
0x79BF55: push    esi
0x79BF56: push    edi
0x79BF57: mov     eax, ds:0B30AACh
0x79BF5C: xor     eax, ebp
0x79BF5E: push    eax
0x79BF5F: lea     eax, [ebp+var_C]
0x79BF62: mov     large fs:0, eax
0x79BF68: mov     [ebp+var_10], esp
0x79BF6B: mov     esi, [ebp+arg_0]
0x79BF6E: mov     edi, [ebp+arg_4]
0x79BF71: xor     ebx, ebx
0x79BF73: mov     [ebp+var_14], esi
0x79BF76: mov     [ebp+var_4], ebx
0x79BF79: lea     esp, [esp+0]
0x79BF80: cmp     edi, ebx
0x79BF82: jbe     short loc_79BFD0
0x79BF84: mov     [ebp+arg_4], esi
0x79BF87: mov     [ebp+var_18], esi
0x79BF8A: cmp     esi, ebx
0x79BF8C: mov     byte ptr [ebp+var_4], 1
0x79BF90: jz      short loc_79BF9D
0x79BF92: mov     eax, [ebp+arg_8]
0x79BF95: push    eax
0x79BF96: mov     ecx, esi
0x79BF98: call    sub_7A3580
0x79BF9D: sub     edi, 1
0x79BFA0: add     esi, 10h
0x79BFA3: mov     byte ptr [ebp+var_4], bl
0x79BFA6: mov     [ebp+arg_0], esi
0x79BFA9: jmp     short loc_79BF80
0x79BFAB: mov     esi, [ebp+var_14]
0x79BFAE: mov     edi, [ebp+arg_0]
0x79BFB1: cmp     esi, edi
0x79BFB3: jz      short loc_79BFC7
0x79BFB5: mov     ebx, [ebp+arg_C]
0x79BFB8: push    esi
0x79BFB9: mov     ecx, ebx
0x79BFBB: call    sub_79BFF0
0x79BFC0: add     esi, 10h
0x79BFC3: cmp     esi, edi
0x79BFC5: jnz     short loc_79BFB8
0x79BFC7: xor     ebx, ebx
0x79BFC9: push    ebx
0x79BFCA: push    ebx
0x79BFCB: call    ThrowException??
0x79BFD0: mov     ecx, [ebp+var_C]
0x79BFD3: mov     large fs:0, ecx
0x79BFDA: pop     ecx
0x79BFDB: pop     edi
0x79BFDC: pop     esi
0x79BFDD: pop     ebx
0x79BFDE: mov     esp, ebp
0x79BFE0: pop     ebp
0x79BFE1: retn
