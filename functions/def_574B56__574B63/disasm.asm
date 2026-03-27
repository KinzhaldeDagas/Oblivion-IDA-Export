0x574B63: movzx   eax, al; jumptable 00574B56 default case
0x574B66: lea     edx, ds:0[eax*8]
0x574B6D: sub     edx, eax
0x574B6F: mov     eax, [ebp+38h]
0x574B72: lea     ebp, [eax+edx*8+128h]
0x574B79: fld     dword ptr [ebp+30h]
0x574B7C: fadd    dword ptr [ebp+24h]
0x574B7F: call    Double_To_SInt32
0x574B84: add     ebx, eax
0x574B86: cmp     [esp+arg_14], edi
0x574B8A: mov     [esp+arg_20], ebx
0x574B8E: jnz     short loc_574B94
0x574B90: mov     [esp+arg_24], ebx
0x574B94: mov     ecx, [esp+arg_38]
0x574B98: cmp     ebx, [ecx]
0x574B9A: jle     loc_574D40
0x574BA0: mov     ecx, [esp+arg_14]
0x574BA4: test    ecx, ecx
0x574BA6: jz      short loc_574BF1
0x574BA8: mov     eax, [esi]
0x574BAA: fild    [esp+arg_10]
0x574BAE: mov     edx, eax
0x574BB0: neg     edx
0x574BB2: sbb     edx, edx
0x574BB4: and     edx, ecx
0x574BB6: mov     cl, [esp+arg_44]
0x574BBA: mov     [edx+eax], cl
0x574BBD: mov     edx, [esp+arg_1C]
0x574BC1: mov     eax, [edx+38h]
0x574BC4: fadd    dword ptr [eax]
0x574BC6: call    Double_To_SInt32
0x574BCB: mov     [esp+arg_10], eax
0x574BCF: mov     eax, [esp+arg_24]
0x574BD3: cmp     [esp+arg_C], eax
0x574BD7: jg      short loc_574BDD
0x574BD9: mov     [esp+arg_C], eax
0x574BDD: add     [esp+arg_34], 1
0x574BE2: mov     [esp+arg_14], 0
0x574BEA: sub     ebx, eax
0x574BEC: jmp     loc_574D40
0x574BF1: mov     ecx, esi
0x574BF3: call    BSStringT_GetLen
0x574BF8: movzx   ecx, word ptr [esi+6]
0x574BFC: cmp     eax, ecx
0x574BFE: jb      short loc_574C6C
0x574C00: mov     ecx, esi
0x574C02: call    BSStringT_GetLen
0x574C07: mov     ecx, eax
0x574C09: movzx   eax, word ptr [esi+6]
0x574C0D: add     ecx, 1
0x574C10: cmp     ecx, eax
0x574C12: mov     ecx, esi
0x574C14: jb      short loc_574C46
0x574C16: push    offset asc_A68A2C; "\n\n"
0x574C1B: call    BSStringT_Append
0x574C20: mov     ebx, [esi]
0x574C22: mov     ecx, esi
0x574C24: call    BSStringT_GetLen
0x574C29: sub     eax, 1
0x574C2C: neg     ebx
0x574C2E: sbb     ebx, ebx
0x574C30: and     ebx, eax
0x574C32: mov     eax, [esi]
0x574C34: mov     byte ptr [ebx+eax], 0
0x574C38: mov     ebx, [esi]
0x574C3A: mov     ecx, esi
0x574C3C: call    BSStringT_GetLen
0x574C41: sub     eax, 2
0x574C44: jmp     short loc_574C5C
0x574C46: push    offset asc_A366D0; "\n"
0x574C4B: call    BSStringT_Append
0x574C50: mov     ebx, [esi]
0x574C52: mov     ecx, esi
0x574C54: call    BSStringT_GetLen
0x574C59: sub     eax, 1
0x574C5C: neg     ebx
0x574C5E: sbb     ebx, ebx
0x574C60: and     ebx, eax
0x574C62: mov     eax, [esi]
0x574C64: mov     byte ptr [ebx+eax], 0
0x574C68: mov     ebx, [esp+arg_20]
0x574C6C: mov     ecx, [esp+arg_18]
0x574C70: add     ecx, 2
0x574C73: cmp     ecx, edi
0x574C75: jbe     short loc_574C9D
0x574C77: mov     eax, [esi]
0x574C79: mov     edx, eax
0x574C7B: neg     edx
0x574C7D: sbb     edx, edx
0x574C7F: lea     ebx, [ecx-2]
0x574C82: and     edx, ebx
0x574C84: mov     dl, [edx+eax]
0x574C87: mov     ebx, eax
0x574C89: neg     ebx
0x574C8B: sbb     ebx, ebx
0x574C8D: and     ebx, ecx
0x574C8F: sub     ecx, 1
0x574C92: cmp     ecx, edi
0x574C94: mov     [ebx+eax], dl
0x574C97: ja      short loc_574C77
0x574C99: mov     ebx, [esp+arg_20]
0x574C9D: mov     eax, [esi]
0x574C9F: fild    [esp+arg_10]
0x574CA3: mov     ecx, eax
0x574CA5: neg     ecx
0x574CA7: sbb     ecx, ecx
0x574CA9: lea     edx, [edi-1]
0x574CAC: and     ecx, edx
0x574CAE: mov     dl, [esp+arg_44]
0x574CB2: mov     byte ptr [ecx+eax], 2Dh ; '-'
0x574CB6: mov     eax, [esi]
0x574CB8: mov     ecx, eax
0x574CBA: neg     ecx
0x574CBC: sbb     ecx, ecx
0x574CBE: and     ecx, edi
0x574CC0: mov     [ecx+eax], dl
0x574CC3: mov     eax, [esp+arg_1C]
0x574CC7: mov     ecx, [eax+38h]
0x574CCA: fadd    dword ptr [ecx]
0x574CCC: call    Double_To_SInt32
0x574CD1: fld     dword ptr [ebp+30h]
0x574CD4: fadd    dword ptr [ebp+24h]
0x574CD7: mov     [esp+arg_10], eax
0x574CDB: call    Double_To_SInt32
0x574CE0: mov     ecx, ebx
0x574CE2: sub     ecx, eax
0x574CE4: cmp     [esp+arg_C], ecx
0x574CE8: jg      short loc_574CEE
0x574CEA: mov     [esp+arg_C], ecx
0x574CEE: xor     ebx, ebx
0x574CF0: add     [esp+arg_34], 1
0x574CF5: mov     [esp+arg_14], ebx
0x574CF9: jmp     short loc_574D40
0x574CFB: mov     dl, [esp+arg_44]
0x574CFF: fild    [esp+arg_10]
0x574D03: mov     [ecx], dl
0x574D05: mov     eax, [ebp+38h]
0x574D08: fadd    dword ptr [eax]
0x574D0A: call    Double_To_SInt32
0x574D0F: cmp     [esp+arg_C], ebx
0x574D13: mov     [esp+arg_10], eax
0x574D17: jg      short loc_574D1D
0x574D19: mov     [esp+arg_C], ebx
0x574D1D: xor     ebx, ebx
0x574D1F: add     [esp+arg_34], 1
0x574D24: mov     [esp+arg_14], ebx
0x574D28: jmp     short loc_574D40
0x574D2A: mov     eax, 1B4E81B5h
0x574D2F: imul    ebx
0x574D31: sar     edx, 3
0x574D34: mov     ecx, edx
0x574D36: shr     ecx, 1Fh
0x574D39: lea     ebx, [edx+ecx+1]
0x574D3D: imul    ebx, 4Bh ; 'K'
0x574D40: mov     eax, [esp+arg_2C]
0x574D44: test    eax, eax
0x574D46: jle     short loc_574D4E
0x574D48: cmp     [esp+arg_34], eax
0x574D4C: jge     short loc_574D5D
0x574D4E: add     edi, 1
0x574D51: cmp     edi, [esp+arg_18]
0x574D55: jb      loc_574B10
0x574D5B: jmp     short loc_574DA2
0x574D5D: mov     eax, [esi]
0x574D5F: mov     cl, [esp+arg_44]
0x574D63: mov     edx, eax
0x574D65: neg     edx
0x574D67: sbb     edx, edx
0x574D69: and     edx, edi
0x574D6B: cmp     [edx+eax], cl
0x574D6E: jz      short loc_574D80
0x574D70: sub     edi, 1
0x574D73: mov     edx, eax
0x574D75: neg     edx
0x574D77: sbb     edx, edx
0x574D79: and     edx, edi
0x574D7B: cmp     [edx+eax], cl
0x574D7E: jnz     short loc_574D70
0x574D80: mov     edx, [esp+arg_1C]
0x574D84: fild    [esp+arg_10]
0x574D88: mov     ecx, eax
0x574D8A: neg     ecx
0x574D8C: sbb     ecx, ecx
0x574D8E: and     ecx, edi
0x574D90: mov     byte ptr [ecx+eax], 0
0x574D94: mov     eax, [edx+38h]
0x574D97: fsub    dword ptr [eax]
0x574D99: call    Double_To_SInt32
0x574D9E: mov     [esp+arg_10], eax
0x574DA2: mov     ecx, [esi]
0x574DA4: cmp     byte ptr [ecx], 0
0x574DA7: jz      short loc_574DB4
0x574DA9: cmp     edi, [esp+arg_18]
0x574DAD: jb      short loc_574DB4
0x574DAF: add     [esp+arg_34], 1
0x574DB4: cmp     [esp+arg_C], ebx
0x574DB8: jg      short loc_574DBE
0x574DBA: mov     [esp+arg_C], ebx
0x574DBE: mov     edx, [esp+arg_C]
0x574DC2: mov     eax, [esp+arg_38]
0x574DC6: mov     ecx, [esp+arg_10]
0x574DCA: pop     edi
0x574DCB: mov     [eax], edx
0x574DCD: mov     edx, [esp-4+arg_3C]
0x574DD1: mov     eax, [esp-4+arg_34]
0x574DD5: pop     esi
0x574DD6: pop     ebp
0x574DD7: mov     [edx], ecx
0x574DD9: pop     ebx
0x574DDA: add     esp, 24h
0x574DDD: retn    14h
