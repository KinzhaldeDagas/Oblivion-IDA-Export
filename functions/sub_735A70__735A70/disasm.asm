0x735A70: sub     esp, 10h
0x735A73: push    ebx
0x735A74: push    esi
0x735A75: mov     esi, [esp+18h+arg_0]
0x735A79: mov     eax, [esi]
0x735A7B: mov     edx, [eax+8]
0x735A7E: push    edi
0x735A7F: mov     edi, ecx
0x735A81: push    1
0x735A83: mov     ecx, esi
0x735A85: call    edx
0x735A87: mov     eax, [esp+1Ch+arg_14]
0x735A8B: push    1
0x735A8D: lea     ecx, [esp+20h+arg_14]
0x735A91: push    ecx
0x735A92: mov     ebx, 2
0x735A97: push    ebx
0x735A98: lea     edx, [esp+28h+var_10]
0x735A9C: push    edx
0x735A9D: mov     dword ptr [eax], 1
0x735AA3: mov     eax, [esi+4]
0x735AA6: push    esi
0x735AA7: mov     [esp+30h+arg_14], ebx
0x735AAB: call    eax
0x735AAD: add     esp, 14h
0x735AB0: cmp     word ptr [esp+1Ch+var_10], 1DAh
0x735AB7: jz      short loc_735AC4
0x735AB9: pop     edi
0x735ABA: pop     esi
0x735ABB: xor     al, al
0x735ABD: pop     ebx
0x735ABE: add     esp, 10h
0x735AC1: retn    18h
0x735AC4: mov     eax, [esi+4]
0x735AC7: push    ebp
0x735AC8: push    1
0x735ACA: lea     ecx, [esp+24h+arg_14]
0x735ACE: push    ecx
0x735ACF: push    1
0x735AD1: lea     edx, [esp+2Ch+arg_0]
0x735AD5: push    edx
0x735AD6: push    esi
0x735AD7: mov     [esp+34h+arg_14], 1
0x735ADF: call    eax
0x735AE1: add     esp, 14h
0x735AE4: lea     ebp, [edi+80h]
0x735AEA: push    ebp; lpCriticalSection
0x735AEB: call    dword ptr ds:0A2806Ch
0x735AF1: call    dword ptr ds:0A2808Ch
0x735AF7: mov     ecx, 1
0x735AFC: add     [ebp+7Ch], ecx
0x735AFF: push    ecx
0x735B00: lea     edx, [esp+24h+arg_14]
0x735B04: push    edx
0x735B05: mov     [ebp+78h], eax
0x735B08: push    ecx
0x735B09: lea     eax, [edi+106h]
0x735B0F: push    eax
0x735B10: mov     eax, [esi+4]
0x735B13: push    esi
0x735B14: mov     [esp+34h+arg_14], ecx
0x735B18: call    eax
0x735B1A: mov     eax, [esi+4]
0x735B1D: push    1
0x735B1F: lea     ecx, [esp+38h+arg_14]
0x735B23: push    ecx
0x735B24: push    ebx
0x735B25: lea     edx, [esp+40h+var_10]
0x735B29: push    edx
0x735B2A: push    esi
0x735B2B: mov     [esp+48h+arg_14], ebx
0x735B2F: call    eax
0x735B31: mov     edx, [esi+4]
0x735B34: push    1
0x735B36: lea     ecx, [esp+4Ch+arg_14]
0x735B3A: push    ecx
0x735B3B: lea     eax, [edi+100h]
0x735B41: push    ebx
0x735B42: push    eax
0x735B43: push    esi
0x735B44: mov     [esp+5Ch+arg_14], ebx
0x735B48: mov     [esp+5Ch+var_8], eax
0x735B4C: call    edx
0x735B4E: mov     edx, [esi+4]
0x735B51: push    1
0x735B53: lea     ecx, [esp+60h+arg_14]
0x735B57: push    ecx
0x735B58: lea     eax, [edi+102h]
0x735B5E: push    ebx
0x735B5F: push    eax
0x735B60: push    esi
0x735B61: mov     [esp+70h+arg_14], ebx
0x735B68: mov     [esp+70h+var_4], eax
0x735B6C: call    edx
0x735B6E: mov     ecx, [esi+4]
0x735B71: add     esp, 50h
0x735B74: push    1
0x735B76: lea     eax, [esp+24h+arg_14]
0x735B7A: push    eax
0x735B7B: mov     [esp+28h+arg_14], ebx
0x735B7F: push    2
0x735B81: lea     ebx, [edi+104h]
0x735B87: push    ebx
0x735B88: push    esi
0x735B89: call    ecx
0x735B8B: mov     ecx, [esi+4]
0x735B8E: push    1
0x735B90: lea     edx, [esp+38h+arg_14]
0x735B94: push    edx
0x735B95: push    4
0x735B97: lea     eax, [esp+40h+var_C]
0x735B9B: push    eax
0x735B9C: mov     [esp+44h+arg_14], 4
0x735BA4: push    esi
0x735BA5: call    ecx
0x735BA7: mov     ecx, [esi+4]
0x735BAA: push    1
0x735BAC: lea     edx, [esp+4Ch+arg_14]
0x735BB0: push    edx
0x735BB1: push    4
0x735BB3: lea     eax, [esp+54h+var_C]
0x735BB7: push    eax
0x735BB8: push    esi
0x735BB9: mov     [esp+5Ch+arg_14], 4
0x735BC1: call    ecx
0x735BC3: mov     eax, ds:0A853D4h
0x735BC8: mov     edx, [esi]
0x735BCA: mov     edx, [edx+0Ch]
0x735BCD: add     esp, 3Ch
0x735BD0: push    eax
0x735BD1: push    54h ; 'T'
0x735BD3: mov     ecx, esi
0x735BD5: call    edx
0x735BD7: mov     edx, [esi+4]
0x735BDA: push    1
0x735BDC: lea     eax, [esp+24h+arg_14]
0x735BE0: push    eax
0x735BE1: push    4
0x735BE3: lea     ecx, [esp+2Ch+var_C]
0x735BE7: push    ecx
0x735BE8: push    esi
0x735BE9: mov     [esp+34h+arg_14], 4
0x735BF1: call    edx
0x735BF3: mov     ecx, ds:0A853D4h
0x735BF9: mov     eax, [esi]
0x735BFB: mov     edx, [eax+0Ch]
0x735BFE: add     esp, 14h
0x735C01: push    ecx
0x735C02: push    194h
0x735C07: mov     ecx, esi
0x735C09: call    edx
0x735C0B: mov     al, byte ptr [esp+20h+arg_0]
0x735C0F: xor     edx, edx
0x735C11: cmp     al, 1
0x735C13: jnz     short loc_735C1D
0x735C15: mov     [edi+107h], al
0x735C1B: jmp     short loc_735C2B
0x735C1D: cmp     al, dl
0x735C1F: jnz     loc_735CB0
0x735C25: mov     [edi+107h], dl
0x735C2B: movzx   ecx, word ptr [ebx]
0x735C2E: cmp     cx, 4
0x735C32: ja      short loc_735CB0
0x735C34: mov     al, [edi+106h]
0x735C3A: cmp     al, 2
0x735C3C: ja      short loc_735CB0
0x735C3E: cmp     al, dl
0x735C40: jz      short loc_735CB0
0x735C42: cmp     cx, 4
0x735C46: jz      short loc_735C53
0x735C48: cmp     cx, 2
0x735C4C: mov     esi, offset unk_B25E48
0x735C51: jnz     short loc_735C58
0x735C53: mov     esi, offset unk_B25E00
0x735C58: lea     eax, [edi+108h]
0x735C5E: mov     edi, eax
0x735C60: mov     ecx, 11h
0x735C65: rep movsd
0x735C67: mov     ecx, [esp+20h+var_8]
0x735C6B: movzx   ecx, word ptr [ecx]
0x735C6E: mov     esi, [esp+20h+arg_4]
0x735C72: mov     edi, [esp+20h+arg_C]
0x735C76: mov     [esi], ecx
0x735C78: mov     ecx, [esp+20h+var_4]
0x735C7C: movzx   ecx, word ptr [ecx]
0x735C7F: mov     esi, [esp+20h+arg_8]
0x735C83: mov     [esi], ecx
0x735C85: mov     esi, eax
0x735C87: mov     eax, [esp+20h+arg_10]
0x735C8B: mov     ecx, 11h
0x735C90: rep movsd
0x735C92: mov     [eax], dl
0x735C94: add     dword ptr [ebp+7Ch], 0FFFFFFFFh
0x735C98: jnz     short loc_735C9D
0x735C9A: mov     [ebp+78h], edx
0x735C9D: push    ebp; lpCriticalSection
0x735C9E: call    dword ptr ds:0A28074h
0x735CA4: pop     ebp
0x735CA5: pop     edi
0x735CA6: pop     esi
0x735CA7: mov     al, 1
0x735CA9: pop     ebx
0x735CAA: add     esp, 10h
0x735CAD: retn    18h
0x735CB0: add     dword ptr [ebp+7Ch], 0FFFFFFFFh
0x735CB4: jnz     short loc_735CB9
0x735CB6: mov     [ebp+78h], edx
0x735CB9: push    ebp; lpCriticalSection
0x735CBA: call    dword ptr ds:0A28074h
0x735CC0: pop     ebp
0x735CC1: pop     edi
0x735CC2: pop     esi
0x735CC3: xor     al, al
0x735CC5: pop     ebx
0x735CC6: add     esp, 10h
0x735CC9: retn    18h
