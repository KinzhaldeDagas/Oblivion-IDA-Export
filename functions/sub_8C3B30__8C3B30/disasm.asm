0x8C3B30: sub     esp, 28h
0x8C3B33: mov     eax, ds:0B30AACh
0x8C3B38: xor     eax, esp
0x8C3B3A: mov     [esp+28h+var_4], eax
0x8C3B3E: push    ebx
0x8C3B3F: push    esi
0x8C3B40: mov     esi, [esp+30h+arg_0]
0x8C3B44: push    edi
0x8C3B45: push    esi
0x8C3B46: mov     edi, ecx
0x8C3B48: call    sub_8B04D0
0x8C3B4D: mov     eax, ds:0BA80F8h
0x8C3B52: push    eax; ArgList
0x8C3B53: call    TESOutput_PrintString
0x8C3B58: movzx   ebx, word ptr [esi+0Ah]
0x8C3B5C: movzx   ecx, word ptr [esi+8]
0x8C3B60: add     esp, 4
0x8C3B63: cmp     ebx, ecx
0x8C3B65: mov     [esp+34h+var_28], eax
0x8C3B69: jb      short loc_8C3B79
0x8C3B6B: movzx   edx, word ptr [esi+0Eh]
0x8C3B6F: add     edx, ebx
0x8C3B71: push    edx
0x8C3B72: mov     ecx, esi
0x8C3B74: call    NiTArray_SetSize
0x8C3B79: lea     eax, [esp+34h+var_28]
0x8C3B7D: push    eax
0x8C3B7E: push    ebx
0x8C3B7F: mov     ecx, esi
0x8C3B81: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8C3B86: test    edi, edi
0x8C3B88: jz      short loc_8C3B96
0x8C3B8A: mov     edi, [edi+8]
0x8C3B8D: test    edi, edi
0x8C3B8F: jz      short loc_8C3B96
0x8C3B91: mov     edi, [edi+10h]
0x8C3B94: jmp     short loc_8C3B98
0x8C3B96: xor     edi, edi
0x8C3B98: push    edi
0x8C3B99: lea     ecx, [esp+38h+var_24]
0x8C3B9D: push    offset a0x8x; "0x%8X"
0x8C3BA2: push    ecx
0x8C3BA3: call    __sprintf
0x8C3BA8: lea     edx, [esp+40h+var_24]
0x8C3BAC: push    edx; int
0x8C3BAD: push    offset aMoppcode; "MoppCode"
0x8C3BB2: call    TESOutput_PrintLabeledString
0x8C3BB7: movzx   edi, word ptr [esi+0Ah]
0x8C3BBB: mov     [esp+48h+var_28], eax
0x8C3BBF: movzx   eax, word ptr [esi+8]
0x8C3BC3: add     esp, 14h
0x8C3BC6: cmp     edi, eax
0x8C3BC8: jb      short loc_8C3BD8
0x8C3BCA: movzx   ecx, word ptr [esi+0Eh]
0x8C3BCE: add     ecx, edi
0x8C3BD0: push    ecx
0x8C3BD1: mov     ecx, esi
0x8C3BD3: call    NiTArray_SetSize
0x8C3BD8: lea     edx, [esp+34h+var_28]
0x8C3BDC: push    edx
0x8C3BDD: push    edi
0x8C3BDE: mov     ecx, esi
0x8C3BE0: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8C3BE5: mov     ecx, [esp+34h+var_4]
0x8C3BE9: pop     edi
0x8C3BEA: pop     esi
0x8C3BEB: pop     ebx
0x8C3BEC: xor     ecx, esp
0x8C3BEE: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8C3BF3: add     esp, 28h
0x8C3BF6: retn    4
