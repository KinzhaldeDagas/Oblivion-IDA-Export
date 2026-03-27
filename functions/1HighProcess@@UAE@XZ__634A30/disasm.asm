0x634A30: push    0FFFFFFFFh
0x634A32: push    offset ??1HighProcess@@UAE@XZ_SEH
0x634A37: mov     eax, large fs:0
0x634A3D: push    eax
0x634A3E: sub     esp, 8
0x634A41: push    ebx
0x634A42: push    ebp
0x634A43: push    esi
0x634A44: push    edi
0x634A45: mov     eax, ds:0B30AACh
0x634A4A: xor     eax, esp
0x634A4C: push    eax; ArgList
0x634A4D: lea     eax, [esp+28h+var_C]
0x634A51: mov     large fs:0, eax
0x634A57: mov     edi, ecx
0x634A59: mov     [esp+28h+var_10], edi
0x634A5D: mov     dword ptr [edi], offset ??_7HighProcess@@6B@; const HighProcess::`vftable'
0x634A63: mov     eax, ds:0B333C4h
0x634A68: mov     eax, [eax+58h]
0x634A6B: cmp     eax, edi
0x634A6D: mov     [esp+28h+var_4], 1
0x634A75: jnz     short loc_634A93
0x634A77: mov     ecx, ds:0B33A98h
0x634A7D: cmp     byte ptr [ecx+0CD4h], 0
0x634A84: jnz     short loc_634A93
0x634A86: push    offset aDonTKillThePla; "Don't kill the PlayerCharacter HighProc"...
0x634A8B: call    PrintError
0x634A90: add     esp, 4
0x634A93: mov     eax, [edi+268h]
0x634A99: xor     ebx, ebx
0x634A9B: cmp     eax, ebx
0x634A9D: jz      short loc_634B09
0x634A9F: cmp     [eax+1Ch], ebx
0x634AA2: jz      short loc_634ADD
0x634AA4: mov     ecx, [eax+1Ch]
0x634AA7: mov     edx, [ecx]
0x634AA9: mov     edx, [edx+88h]
0x634AAF: push    eax
0x634AB0: lea     eax, [esp+2Ch+var_14]
0x634AB4: push    eax
0x634AB5: call    edx
0x634AB7: mov     eax, dword ptr [esp+28h+var_14]
0x634ABB: cmp     eax, ebx
0x634ABD: jz      short loc_634ADD
0x634ABF: mov     esi, eax
0x634AC1: add     eax, 4
0x634AC4: push    eax; lpAddend
0x634AC5: call    dword ptr ds:0A2807Ch
0x634ACB: test    eax, eax
0x634ACD: jnz     short loc_634ADD
0x634ACF: cmp     esi, ebx
0x634AD1: jz      short loc_634ADD
0x634AD3: mov     eax, [esi]
0x634AD5: mov     edx, [eax]
0x634AD7: push    1
0x634AD9: mov     ecx, esi
0x634ADB: call    edx
0x634ADD: mov     esi, [edi+268h]
0x634AE3: cmp     esi, ebx
0x634AE5: jz      short loc_634B09
0x634AE7: lea     eax, [esi+4]
0x634AEA: push    eax; lpAddend
0x634AEB: call    dword ptr ds:0A2807Ch
0x634AF1: test    eax, eax
0x634AF3: jnz     short loc_634B03
0x634AF5: cmp     esi, ebx
0x634AF7: jz      short loc_634B03
0x634AF9: mov     edx, [esi]
0x634AFB: mov     eax, [edx]
0x634AFD: push    1
0x634AFF: mov     ecx, esi
0x634B01: call    eax
0x634B03: mov     [edi+268h], ebx
0x634B09: mov     esi, [edi+2B4h]
0x634B0F: cmp     esi, ebx
0x634B11: jz      short loc_634B23
0x634B13: mov     ecx, esi
0x634B15: call    sub_493B70
0x634B1A: push    esi
0x634B1B: call    FormHeapFree
0x634B20: add     esp, 4
0x634B23: mov     esi, [edi+18Ch]
0x634B29: cmp     esi, ebx
0x634B2B: mov     [edi+2B4h], ebx
0x634B31: mov     [edi+1D4h], ebx
0x634B37: jz      short loc_634B56
0x634B39: lea     esp, [esp+0]
0x634B40: mov     eax, [esi]
0x634B42: cmp     eax, ebx
0x634B44: jz      short loc_634B56
0x634B46: push    eax
0x634B47: call    FormHeapFree
0x634B4C: mov     esi, [esi+4]
0x634B4F: add     esp, 4
0x634B52: cmp     esi, ebx
0x634B54: jnz     short loc_634B40
0x634B56: mov     esi, [edi+18Ch]
0x634B5C: cmp     [esi+4], ebx
0x634B5F: jz      short loc_634B77
0x634B61: mov     eax, [esi+4]
0x634B64: mov     ebp, [eax+4]
0x634B67: push    eax
0x634B68: call    FormHeapFree
0x634B6D: add     esp, 4
0x634B70: cmp     ebp, ebx
0x634B72: mov     [esi+4], ebp
0x634B75: jnz     short loc_634B61
0x634B77: mov     [esi], ebx
0x634B79: mov     eax, [edi+18Ch]
0x634B7F: push    eax
0x634B80: call    FormHeapFree
0x634B85: lea     ecx, [edi+190h]
0x634B8B: add     esp, 4
0x634B8E: cmp     [ecx+4], ebx
0x634B91: jnz     short loc_634B97
0x634B93: cmp     [ecx], ebx
0x634B95: jz      short loc_634B9C
0x634B97: call    BSSimpleList_Clear
0x634B9C: lea     esi, [edi+220h]
0x634BA2: mov     ebx, 2
0x634BA7: mov     ecx, [esi]
0x634BA9: test    ecx, ecx
0x634BAB: jz      short loc_634BE0
0x634BAD: call    sub_6B7260
0x634BB2: test    al, al
0x634BB4: jz      short loc_634BBD
0x634BB6: mov     ecx, [esi]
0x634BB8: call    sub_6B7240
0x634BBD: mov     ecx, [esi]
0x634BBF: call    sub_6B73C0
0x634BC4: mov     ebp, [esi]
0x634BC6: test    ebp, ebp
0x634BC8: jz      short loc_634BDA
0x634BCA: mov     ecx, ebp; this
0x634BCC: call    sub_6B73E0
0x634BD1: push    ebp
0x634BD2: call    FormHeapFree
0x634BD7: add     esp, 4
0x634BDA: mov     dword ptr [esi], 0
0x634BE0: add     esi, 4
0x634BE3: sub     ebx, 1
0x634BE6: jnz     short loc_634BA7
0x634BE8: mov     eax, [edi+288h]
0x634BEE: test    eax, eax
0x634BF0: jz      short loc_634BF6
0x634BF2: mov     byte ptr [eax+10h], 1
0x634BF6: mov     esi, [edi+250h]
0x634BFC: test    esi, esi
0x634BFE: jz      short loc_634C10
0x634C00: mov     ecx, esi
0x634C02: call    sub_6B81D0
0x634C07: push    esi
0x634C08: call    FormHeapFree
0x634C0D: add     esp, 4
0x634C10: mov     esi, [edi+2A4h]
0x634C16: test    esi, esi
0x634C18: jz      short loc_634C55
0x634C1A: cmp     dword ptr [esi+4], 0
0x634C1E: jz      short loc_634C36
0x634C20: mov     eax, [esi+4]
0x634C23: mov     ebp, [eax+4]
0x634C26: push    eax
0x634C27: call    FormHeapFree
0x634C2C: add     esp, 4
0x634C2F: test    ebp, ebp
0x634C31: mov     [esi+4], ebp
0x634C34: jnz     short loc_634C20
0x634C36: mov     dword ptr [esi], 0
0x634C3C: mov     eax, [edi+2A4h]
0x634C42: push    eax
0x634C43: call    FormHeapFree
0x634C48: add     esp, 4
0x634C4B: mov     dword ptr [edi+2A4h], 0
0x634C55: mov     esi, [edi+268h]
0x634C5B: test    esi, esi
0x634C5D: mov     byte ptr [esp+28h+var_4], 0
0x634C62: jz      short loc_634C80
0x634C64: lea     ecx, [esi+4]
0x634C67: push    ecx; lpAddend
0x634C68: call    dword ptr ds:0A2807Ch
0x634C6E: test    eax, eax
0x634C70: jnz     short loc_634C80
0x634C72: test    esi, esi
0x634C74: jz      short loc_634C80
0x634C76: mov     edx, [esi]
0x634C78: mov     eax, [edx]
0x634C7A: push    1
0x634C7C: mov     ecx, esi
0x634C7E: call    eax
0x634C80: mov     ecx, edi; this
0x634C82: mov     [esp+28h+var_4], 0FFFFFFFFh
0x634C8A: call    ??1MiddleHighProcess@@UAE@XZ; MiddleHighProcess::~MiddleHighProcess(void)
0x634C8F: mov     ecx, dword ptr [esp+28h+var_C]
0x634C93: mov     large fs:0, ecx
0x634C9A: pop     ecx
0x634C9B: pop     edi
0x634C9C: pop     esi
0x634C9D: pop     ebp
0x634C9E: pop     ebx
0x634C9F: add     esp, 14h
0x634CA2: retn
