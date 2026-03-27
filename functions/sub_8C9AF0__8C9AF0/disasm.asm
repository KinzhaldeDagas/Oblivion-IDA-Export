0x8C9AF0: sub     esp, 34h
0x8C9AF3: push    ebx
0x8C9AF4: push    esi
0x8C9AF5: mov     esi, [esp+3Ch+arg_0]
0x8C9AF9: push    edi
0x8C9AFA: push    esi
0x8C9AFB: mov     edi, ecx
0x8C9AFD: call    sub_8AEAC0
0x8C9B02: mov     eax, ds:0BA815Ch
0x8C9B07: push    eax; ArgList
0x8C9B08: call    TESOutput_PrintString
0x8C9B0D: movzx   ebx, word ptr [esi+0Ah]
0x8C9B11: movzx   ecx, word ptr [esi+8]
0x8C9B15: add     esp, 4
0x8C9B18: cmp     ebx, ecx
0x8C9B1A: mov     [esp+40h+arg_0], eax
0x8C9B1E: jb      short loc_8C9B2E
0x8C9B20: movzx   edx, word ptr [esi+0Eh]
0x8C9B24: add     edx, ebx
0x8C9B26: push    edx
0x8C9B27: mov     ecx, esi
0x8C9B29: call    NiTArray_SetSize
0x8C9B2E: lea     eax, [esp+40h+arg_0]
0x8C9B32: push    eax
0x8C9B33: push    ebx
0x8C9B34: mov     ecx, esi
0x8C9B36: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8C9B3B: test    edi, edi
0x8C9B3D: jz      short loc_8C9B49
0x8C9B3F: mov     eax, [edi+8]
0x8C9B42: test    eax, eax
0x8C9B44: lea     ebx, [eax+20h]
0x8C9B47: jnz     short loc_8C9B4E
0x8C9B49: mov     ebx, offset xmmword_B2F090
0x8C9B4E: lea     ecx, [esp+40h+var_34]
0x8C9B52: push    ebx
0x8C9B53: push    ecx
0x8C9B54: call    sub_607740
0x8C9B59: add     ebx, 30h ; '0'
0x8C9B5C: lea     edx, [esp+48h+var_10]
0x8C9B60: push    ebx
0x8C9B61: push    edx
0x8C9B62: call    sub_43F3E0
0x8C9B67: add     esp, 10h
0x8C9B6A: push    offset aTrans; "Trans"
0x8C9B6F: lea     ecx, [esp+44h+var_10]
0x8C9B73: call    sub_707280
0x8C9B78: movzx   ebx, word ptr [esi+0Ah]
0x8C9B7C: mov     [esp+40h+arg_0], eax
0x8C9B80: movzx   eax, word ptr [esi+8]
0x8C9B84: cmp     ebx, eax
0x8C9B86: jb      short loc_8C9B96
0x8C9B88: movzx   ecx, word ptr [esi+0Eh]
0x8C9B8C: add     ecx, ebx
0x8C9B8E: push    ecx
0x8C9B8F: mov     ecx, esi
0x8C9B91: call    NiTArray_SetSize
0x8C9B96: lea     edx, [esp+40h+arg_0]
0x8C9B9A: push    edx
0x8C9B9B: push    ebx
0x8C9B9C: mov     ecx, esi
0x8C9B9E: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8C9BA3: push    offset off_A97270; ArgList
0x8C9BA8: lea     ecx, [esp+44h+var_34]
0x8C9BAC: call    sub_711A50
0x8C9BB1: movzx   ebx, word ptr [esi+0Ah]
0x8C9BB5: mov     [esp+40h+arg_0], eax
0x8C9BB9: movzx   eax, word ptr [esi+8]
0x8C9BBD: cmp     ebx, eax
0x8C9BBF: jb      short loc_8C9BCF
0x8C9BC1: movzx   ecx, word ptr [esi+0Eh]
0x8C9BC5: add     ecx, ebx
0x8C9BC7: push    ecx
0x8C9BC8: mov     ecx, esi
0x8C9BCA: call    NiTArray_SetSize
0x8C9BCF: lea     edx, [esp+40h+arg_0]
0x8C9BD3: push    edx
0x8C9BD4: push    ebx
0x8C9BD5: mov     ecx, esi
0x8C9BD7: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8C9BDC: test    edi, edi
0x8C9BDE: jz      short loc_8C9BF3
0x8C9BE0: mov     edi, [edi+8]
0x8C9BE3: test    edi, edi
0x8C9BE5: jz      short loc_8C9BF3
0x8C9BE7: mov     edi, [edi+10h]
0x8C9BEA: test    edi, edi
0x8C9BEC: jz      short loc_8C9BF3
0x8C9BEE: mov     ecx, [edi+8]
0x8C9BF1: jmp     short loc_8C9BF5
0x8C9BF3: xor     ecx, ecx
0x8C9BF5: test    ecx, ecx
0x8C9BF7: jz      short loc_8C9C01
0x8C9BF9: mov     eax, [ecx]
0x8C9BFB: mov     edx, [eax+30h]
0x8C9BFE: push    esi
0x8C9BFF: call    edx
0x8C9C01: pop     edi
0x8C9C02: pop     esi
0x8C9C03: pop     ebx
0x8C9C04: add     esp, 34h
0x8C9C07: retn    4
