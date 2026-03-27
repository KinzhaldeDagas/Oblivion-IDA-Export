0x6489E0: sub     esp, 18h
0x6489E3: push    ebp
0x6489E4: push    esi
0x6489E5: mov     esi, [esp+20h+arg_0]
0x6489E9: mov     eax, [esi]
0x6489EB: mov     edx, [eax+198h]
0x6489F1: push    edi
0x6489F2: xor     ebp, ebp
0x6489F4: push    ebp
0x6489F5: mov     ecx, esi
0x6489F7: mov     [esp+28h+var_15], 0
0x6489FC: call    edx
0x6489FE: test    al, al
0x648A00: jnz     short loc_648A0C
0x648A02: mov     eax, [esi+8]
0x648A05: shr     eax, 0Bh
0x648A08: test    al, 1
0x648A0A: jz      short loc_648A11
0x648A0C: mov     [esp+24h+var_15], 1
0x648A11: lea     ecx, [esi+44h]
0x648A14: mov     [esp+24h+var_8], ecx
0x648A18: call    GetExtraDataFollower
0x648A1D: mov     edi, eax
0x648A1F: cmp     edi, ebp
0x648A21: mov     [esp+24h+var_4], edi
0x648A25: jz      loc_648C56
0x648A2B: push    8; Size
0x648A2D: call    FormHeapAlloc
0x648A32: add     esp, 4
0x648A35: cmp     eax, ebp
0x648A37: jz      short loc_648A46
0x648A39: mov     esi, eax
0x648A3B: mov     [eax], ebp
0x648A3D: mov     [eax+4], ebp
0x648A40: mov     [esp+24h+var_14], esi
0x648A44: jmp     short loc_648A4C
0x648A46: mov     [esp+24h+var_14], ebp
0x648A4A: mov     esi, ebp
0x648A4C: push    8; Size
0x648A4E: call    FormHeapAlloc
0x648A53: add     esp, 4
0x648A56: cmp     eax, ebp
0x648A58: jz      short loc_648A65
0x648A5A: mov     [eax], ebp
0x648A5C: mov     [eax+4], ebp
0x648A5F: mov     [esp+24h+var_10], eax
0x648A63: jmp     short loc_648A69
0x648A65: mov     [esp+24h+var_10], ebp
0x648A69: mov     eax, [esp+24h+var_10]
0x648A6D: push    ebx
0x648A6E: mov     ebx, [edi+0Ch]
0x648A71: cmp     ebx, ebp
0x648A73: mov     [esp+28h+var_C], eax
0x648A77: jz      short loc_648ACE
0x648A79: lea     esp, [esp+0]
0x648A80: mov     edi, [ebx]
0x648A82: cmp     edi, ebp
0x648A84: jz      short loc_648ACE
0x648A86: mov     esi, eax
0x648A88: add     eax, 4
0x648A8B: cmp     [eax], ebp
0x648A8D: jz      short loc_648A9A
0x648A8F: nop
0x648A90: mov     esi, [eax]
0x648A92: cmp     [esi+4], ebp
0x648A95: lea     eax, [esi+4]
0x648A98: jnz     short loc_648A90
0x648A9A: cmp     [esi], ebp
0x648A9C: jz      short loc_648ABD
0x648A9E: push    8; Size
0x648AA0: call    FormHeapAlloc
0x648AA5: add     esp, 4
0x648AA8: cmp     eax, ebp
0x648AAA: jz      short loc_648AB6
0x648AAC: mov     [eax], edi
0x648AAE: mov     [eax+4], ebp
0x648AB1: mov     [esi+4], eax
0x648AB4: jmp     short loc_648ABF
0x648AB6: xor     eax, eax
0x648AB8: mov     [esi+4], eax
0x648ABB: jmp     short loc_648ABF
0x648ABD: mov     [esi], edi
0x648ABF: mov     ebx, [ebx+4]
0x648AC2: cmp     ebx, ebp
0x648AC4: mov     esi, [esp+28h+var_14]
0x648AC8: mov     eax, [esp+28h+var_10]
0x648ACC: jnz     short loc_648A80
0x648ACE: cmp     eax, ebp
0x648AD0: jz      loc_648BF1
0x648AD6: mov     ecx, [esp+28h+var_C]
0x648ADA: mov     edi, [ecx]
0x648ADC: cmp     edi, ebp
0x648ADE: jz      loc_648BF1
0x648AE4: cmp     [esp+28h+var_15], 0
0x648AE9: jz      short loc_648B26
0x648AEB: cmp     [esi], ebp
0x648AED: jz      short loc_648B1F
0x648AEF: push    8; Size
0x648AF1: call    FormHeapAlloc
0x648AF6: add     esp, 4
0x648AF9: cmp     eax, ebp
0x648AFB: jz      short loc_648B14
0x648AFD: mov     edx, [esi]
0x648AFF: mov     [eax], edx
0x648B01: mov     [eax+4], ebp
0x648B04: mov     ecx, [esi+4]
0x648B07: mov     [eax+4], ecx
0x648B0A: mov     [esi+4], eax
0x648B0D: mov     [esi], edi
0x648B0F: jmp     loc_648BDE
0x648B14: mov     ecx, [esi+4]
0x648B17: xor     eax, eax
0x648B19: mov     [eax+4], ecx
0x648B1C: mov     [esi+4], eax
0x648B1F: mov     [esi], edi
0x648B21: jmp     loc_648BDE
0x648B26: cmp     edi, ds:0B333C4h
0x648B2C: jz      loc_648BDE
0x648B32: mov     ecx, [esp+28h+arg_0]
0x648B36: xor     bl, bl
0x648B38: call    sub_5E03A0
0x648B3D: mov     ecx, [esp+28h+var_8]
0x648B41: mov     esi, eax
0x648B43: call    ExtraDataList__GetExtraPackage
0x648B48: test    esi, esi
0x648B4A: mov     ebp, eax
0x648B4C: jz      short loc_648B59
0x648B4E: mov     ecx, esi
0x648B50: call    sub_567770
0x648B55: test    al, al
0x648B57: jz      short loc_648B5F
0x648B59: test    ebp, ebp
0x648B5B: jz      short loc_648B5F
0x648B5D: mov     esi, ebp
0x648B5F: test    esi, esi
0x648B61: jz      short loc_648B6B
0x648B63: cmp     byte ptr [esi+20h], 2
0x648B67: jnz     short loc_648B6B
0x648B69: mov     bl, 1
0x648B6B: mov     ecx, edi
0x648B6D: call    sub_5E03A0
0x648B72: lea     ecx, [edi+44h]
0x648B75: mov     esi, eax
0x648B77: call    ExtraDataList__GetExtraPackage
0x648B7C: test    esi, esi
0x648B7E: mov     ebp, eax
0x648B80: jz      short loc_648B91
0x648B82: mov     ecx, esi
0x648B84: call    sub_567770
0x648B89: test    al, al
0x648B8B: jz      short loc_648B93
0x648B8D: test    ebp, ebp
0x648B8F: jz      short loc_648B93
0x648B91: mov     esi, ebp
0x648B93: test    bl, bl
0x648B95: jnz     short loc_648BB2
0x648B97: test    esi, esi
0x648B99: jz      short loc_648BA6
0x648B9B: mov     al, [esi+20h]
0x648B9E: cmp     al, 1
0x648BA0: jz      short loc_648BB2
0x648BA2: cmp     al, 7
0x648BA4: jz      short loc_648BB2
0x648BA6: mov     ecx, [esp+28h+var_14]
0x648BAA: push    edi
0x648BAB: call    BSSimpleList_PushFront
0x648BB0: jmp     short loc_648BD8
0x648BB2: mov     ecx, edi; this
0x648BB4: call    Actor__GetProcessLevel
0x648BB9: test    eax, eax
0x648BBB: jz      short loc_648BD8
0x648BBD: mov     edx, [edi]
0x648BBF: fld     [esp+28h+arg_4]
0x648BC3: mov     eax, [edx+1C0h]
0x648BC9: push    ecx
0x648BCA: mov     ecx, edi
0x648BCC: fstp    [esp+2Ch+var_2C]
0x648BCF: call    eax
0x648BD1: mov     ecx, edi
0x648BD3: call    RunScripts
0x648BD8: mov     esi, [esp+28h+var_14]
0x648BDC: xor     ebp, ebp
0x648BDE: mov     ecx, [esp+28h+var_C]
0x648BE2: mov     eax, [ecx+4]
0x648BE5: cmp     eax, ebp
0x648BE7: mov     [esp+28h+var_C], eax
0x648BEB: jnz     loc_648AD6
0x648BF1: mov     edi, [esp+28h+var_14]
0x648BF5: cmp     edi, ebp
0x648BF7: pop     ebx
0x648BF8: jz      short loc_648C17
0x648BFA: lea     ebx, [ebx+0]
0x648C00: mov     eax, [esi]
0x648C02: cmp     eax, ebp
0x648C04: jz      short loc_648C17
0x648C06: mov     ecx, [esp+24h+var_8]
0x648C0A: push    eax
0x648C0B: call    sub_424D00
0x648C10: mov     esi, [esi+4]
0x648C13: cmp     esi, ebp
0x648C15: jnz     short loc_648C00
0x648C17: mov     ecx, [esp+24h+var_10]
0x648C1B: call    BSSimpleList_Clear
0x648C20: mov     edx, [esp+24h+var_10]
0x648C24: push    edx
0x648C25: call    FormHeapFree
0x648C2A: add     esp, 4
0x648C2D: mov     ecx, edi
0x648C2F: call    BSSimpleList_Clear
0x648C34: push    edi
0x648C35: call    FormHeapFree
0x648C3A: mov     eax, [esp+28h+var_4]
0x648C3E: mov     eax, [eax+0Ch]
0x648C41: add     esp, 4
0x648C44: cmp     [eax+4], ebp
0x648C47: jnz     short loc_648C56
0x648C49: cmp     [eax], ebp
0x648C4B: jnz     short loc_648C56
0x648C4D: mov     ecx, [esp+24h+var_8]
0x648C51: call    sub_420F00
0x648C56: pop     edi
0x648C57: pop     esi
0x648C58: pop     ebp
0x648C59: add     esp, 18h
0x648C5C: retn    8
