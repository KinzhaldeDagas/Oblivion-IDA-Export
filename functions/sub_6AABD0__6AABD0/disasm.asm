0x6AABD0: sub     esp, 210h
0x6AABD6: mov     eax, ds:0B30AACh
0x6AABDB: xor     eax, esp
0x6AABDD: mov     [esp+210h+var_4], eax
0x6AABE4: mov     eax, [esp+210h+arg_0]
0x6AABEB: push    ebp
0x6AABEC: mov     ebp, ecx
0x6AABEE: cmp     dword ptr [ebp+8], 0
0x6AABF2: mov     ecx, [esp+214h+arg_C]
0x6AABF9: push    esi
0x6AABFA: mov     esi, [esp+218h+pszFileName]
0x6AAC01: mov     [esp+218h+var_1F8], ebp
0x6AAC05: mov     [esp+218h+var_1FC], eax
0x6AAC09: mov     [esp+218h+var_204], esi
0x6AAC0D: mov     [esp+218h+var_200], ecx
0x6AAC11: jnz     short loc_6AAC1B
0x6AAC13: xor     ax, ax
0x6AAC16: jmp     loc_6AB0D8
0x6AAC1B: push    edi
0x6AAC1C: push    48h ; 'H'
0x6AAC1E: lea     edx, [esp+220h+pmmioinfo]
0x6AAC25: push    0
0x6AAC27: push    edx
0x6AAC28: call    __memset
0x6AAC2D: mov     edx, ds:0B33A04h
0x6AAC33: add     esp, 0Ch
0x6AAC36: test    edx, edx
0x6AAC38: mov     [esp+21Ch+pmmioinfo.fccIOProc], 564157h
0x6AAC43: mov     [esp+21Ch+pmmioinfo.pIOProc], offset sub_6AAAA0
0x6AAC4E: jz      short loc_6AAC6E
0x6AAC50: mov     eax, [edx]
0x6AAC52: push    0FFFFFFFFh
0x6AAC54: push    0
0x6AAC56: push    0
0x6AAC58: mov     ecx, edx
0x6AAC5A: mov     edx, [eax+4]
0x6AAC5D: push    esi
0x6AAC5E: call    edx
0x6AAC60: test    eax, eax
0x6AAC62: jnz     loc_6AAD06
0x6AAC68: mov     edx, ds:0B33A04h
0x6AAC6E: mov     eax, ds:0A7712Ch
0x6AAC73: mov     ecx, ds:0A77130h
0x6AAC79: mov     [esp+21Ch+var_108], eax
0x6AAC80: mov     eax, ds:0A77134h
0x6AAC85: mov     [esp+21Ch+var_100], eax
0x6AAC8C: mov     [esp+21Ch+var_104], ecx
0x6AAC93: mov     eax, esi
0x6AAC95: mov     cl, [eax]
0x6AAC97: add     eax, 1
0x6AAC9A: test    cl, cl
0x6AAC9C: jnz     short loc_6AAC95
0x6AAC9E: lea     edi, [esp+21Ch+var_108]
0x6AACA5: sub     eax, esi
0x6AACA7: add     edi, 0FFFFFFFFh
0x6AACAA: lea     ebx, [ebx+0]
0x6AACB0: mov     cl, [edi+1]
0x6AACB3: add     edi, 1
0x6AACB6: test    cl, cl
0x6AACB8: jnz     short loc_6AACB0
0x6AACBA: mov     ecx, eax
0x6AACBC: shr     ecx, 2
0x6AACBF: rep movsd
0x6AACC1: mov     ecx, eax
0x6AACC3: and     ecx, 3
0x6AACC6: test    edx, edx
0x6AACC8: rep movsb
0x6AACCA: jz      loc_6AAD7D
0x6AACD0: mov     eax, [edx]
0x6AACD2: push    0FFFFFFFFh
0x6AACD4: push    0
0x6AACD6: push    0
0x6AACD8: lea     ecx, [esp+228h+var_108]
0x6AACDF: push    ecx
0x6AACE0: mov     ecx, edx
0x6AACE2: mov     edx, [eax+4]
0x6AACE5: call    edx
0x6AACE7: test    eax, eax
0x6AACE9: jz      loc_6AAD7D
0x6AACEF: push    10000h
0x6AACF4: lea     eax, [esp+220h+pmmioinfo]
0x6AACFB: push    eax
0x6AACFC: lea     ecx, [esp+224h+var_108]
0x6AAD03: push    ecx
0x6AAD04: jmp     short loc_6AAD14
0x6AAD06: push    10000h; fdwOpen
0x6AAD0B: lea     edx, [esp+220h+pmmioinfo]
0x6AAD12: push    edx; pmmioinfo
0x6AAD13: push    esi; pszFileName
0x6AAD14: call    dword ptr ds:0A282D8h
0x6AAD1A: mov     esi, eax
0x6AAD1C: test    esi, esi
0x6AAD1E: jz      short loc_6AAD7D
0x6AAD20: mov     edi, ds:0A282D4h
0x6AAD26: push    0; fuDescend
0x6AAD28: push    0; pmmckiParent
0x6AAD2A: lea     eax, [esp+224h+pmmcki]
0x6AAD2E: push    eax; pmmcki
0x6AAD2F: push    esi; hmmio
0x6AAD30: call    edi ; mmioDescend
0x6AAD32: cmp     eax, 109h
0x6AAD37: jz      short loc_6AAD74
0x6AAD39: push    10h; fuDescend
0x6AAD3B: lea     ecx, [esp+220h+pmmcki]
0x6AAD3F: push    ecx; pmmckiParent
0x6AAD40: lea     edx, [esp+224h+var_1F4]
0x6AAD44: push    edx; pmmcki
0x6AAD45: push    esi; hmmio
0x6AAD46: mov     [esp+22Ch+var_1F4.ckid], 20746D66h
0x6AAD4E: call    edi ; mmioDescend
0x6AAD50: cmp     eax, 109h
0x6AAD55: jz      short loc_6AAD74
0x6AAD57: cmp     [esp+21Ch+var_1F4.cksize], 10h
0x6AAD5C: jb      short loc_6AAD74
0x6AAD5E: push    10h; cch
0x6AAD60: lea     eax, [esp+220h+pch]
0x6AAD64: push    eax; pch
0x6AAD65: push    esi; hmmio
0x6AAD66: call    dword ptr ds:0A282DCh
0x6AAD6C: cmp     word ptr [esp+21Ch+pch], 1
0x6AAD72: jz      short loc_6AAD85
0x6AAD74: push    0; fuClose
0x6AAD76: push    esi; hmmio
0x6AAD77: call    dword ptr ds:0A282CCh
0x6AAD7D: xor     ax, ax
0x6AAD80: jmp     loc_6AB0D7
0x6AAD85: push    ebx
0x6AAD86: push    0; fuAscend
0x6AAD88: lea     ecx, [esp+224h+var_1F4]
0x6AAD8C: push    ecx; pmmcki
0x6AAD8D: push    esi; hmmio
0x6AAD8E: call    dword ptr ds:0A282C8h
0x6AAD94: push    10h; fuDescend
0x6AAD96: lea     edx, [esp+224h+pmmcki]
0x6AAD9A: push    edx; pmmckiParent
0x6AAD9B: lea     eax, [esp+228h+var_1F4]
0x6AAD9F: push    eax; pmmcki
0x6AADA0: push    esi; hmmio
0x6AADA1: mov     [esp+230h+var_1F4.ckid], 61746164h
0x6AADA9: call    edi ; mmioDescend
0x6AADAB: mov     ebx, [esp+220h+arg_8]
0x6AADB2: mov     ecx, [esp+220h+var_1F4.cksize]
0x6AADB6: xor     eax, eax
0x6AADB8: test    bl, 1
0x6AADBB: mov     [esp+220h+var_12C], eax
0x6AADC2: mov     edi, ecx
0x6AADC4: mov     [esp+220h+var_124], eax
0x6AADCB: mov     [esp+220h+var_120], eax
0x6AADD2: mov     [esp+220h+var_11C], eax
0x6AADD9: mov     [esp+220h+var_118], eax
0x6AADE0: mov     [esp+220h+var_114], eax
0x6AADE7: mov     [esp+220h+var_110], eax
0x6AADEE: mov     [esp+220h+var_10C], eax
0x6AADF5: mov     [esp+220h+var_12C], 24h ; '$'
0x6AAE00: jz      short loc_6AAE09
0x6AAE02: mov     eax, 40h ; '@'
0x6AAE07: jmp     short loc_6AAE2C
0x6AAE09: test    bl, 4
0x6AAE0C: jz      short loc_6AAE1A
0x6AAE0E: test    bl, 2
0x6AAE11: jz      short loc_6AAE1A
0x6AAE13: mov     eax, 30010h
0x6AAE18: jmp     short loc_6AAE2C
0x6AAE1A: test    ebx, 10Ah
0x6AAE20: jnz     short loc_6AAE27
0x6AAE22: test    bl, 2
0x6AAE25: jz      short loc_6AAE2C
0x6AAE27: mov     eax, 20010h
0x6AAE2C: or      eax, 0A0h
0x6AAE31: test    byte ptr [ebp+0ACh], 4
0x6AAE38: mov     [esp+220h+var_128], eax
0x6AAE3F: jz      short loc_6AAE4D
0x6AAE41: or      eax, 40000h
0x6AAE46: mov     [esp+220h+var_128], eax
0x6AAE4D: mov     edx, ds:0A78FC8h
0x6AAE53: mov     eax, ds:0A78FCCh
0x6AAE58: mov     [esp+220h+var_124], ecx
0x6AAE5F: mov     ecx, ds:0A78FC4h
0x6AAE65: mov     [esp+220h+var_118], ecx
0x6AAE6C: mov     ecx, ds:0A78FD0h
0x6AAE72: push    12h; Size
0x6AAE74: mov     [esp+224h+var_114], edx
0x6AAE7B: mov     [esp+224h+var_110], eax
0x6AAE82: mov     [esp+224h+var_10C], ecx
0x6AAE89: call    FormHeapAlloc
0x6AAE8E: mov     edx, dword ptr [esp+224h+pch]
0x6AAE92: mov     [esp+224h+var_11C], eax
0x6AAE99: mov     [eax], edx
0x6AAE9B: mov     eax, [esp+224h+var_1DC]
0x6AAE9F: mov     ecx, [esp+224h+var_11C]
0x6AAEA6: mov     [ecx+4], eax
0x6AAEA9: mov     edx, [esp+224h+var_1D8]
0x6AAEAD: mov     eax, [esp+224h+var_11C]
0x6AAEB4: mov     [eax+8], edx
0x6AAEB7: mov     ecx, [esp+224h+var_1D4]
0x6AAEBB: mov     edx, [esp+224h+var_11C]
0x6AAEC2: mov     [edx+0Ch], ecx
0x6AAEC5: mov     eax, [esp+224h+var_11C]
0x6AAECC: mov     word ptr [eax+10h], 0
0x6AAED2: mov     ecx, [esp+224h+var_11C]
0x6AAED9: movzx   ebp, word ptr [ecx+0Eh]
0x6AAEDD: mov     eax, [esp+224h+var_124]
0x6AAEE4: xor     edx, edx
0x6AAEE6: shr     ebp, 3
0x6AAEE9: div     ebp
0x6AAEEB: add     esp, 4
0x6AAEEE: push    0
0x6AAEF0: mov     ebp, eax
0x6AAEF2: mov     eax, 10624DD3h
0x6AAEF7: mul     dword ptr [ecx+4]
0x6AAEFA: mov     ecx, edx
0x6AAEFC: xor     edx, edx
0x6AAEFE: shr     ecx, 6
0x6AAF01: mov     eax, ebp
0x6AAF03: div     ecx
0x6AAF05: mov     ebp, [esp+224h+var_1FC]
0x6AAF09: push    ebp
0x6AAF0A: movzx   edx, ax
0x6AAF0D: mov     eax, [esp+228h+var_1F8]
0x6AAF11: mov     eax, [eax+8]
0x6AAF14: mov     ecx, [eax]
0x6AAF16: mov     [esp+228h+var_208], edx
0x6AAF1A: lea     edx, [esp+228h+var_12C]
0x6AAF21: push    edx
0x6AAF22: push    eax
0x6AAF23: mov     eax, [ecx+0Ch]
0x6AAF26: call    eax
0x6AAF28: mov     ebp, [ebp+0]
0x6AAF2B: xor     ecx, ecx
0x6AAF2D: cmp     eax, ecx
0x6AAF2F: jge     short loc_6AAF78
0x6AAF31: test    bl, 2
0x6AAF34: jz      short loc_6AAF57
0x6AAF36: mov     ax, word ptr [esp+220h+pch+2]
0x6AAF3B: cmp     ax, 1
0x6AAF3F: jbe     short loc_6AAF57
0x6AAF41: mov     ecx, [esp+220h+var_204]
0x6AAF45: movzx   edx, ax
0x6AAF48: push    ecx
0x6AAF49: push    edx; ArgList
0x6AAF4A: push    offset aAttemptingToPl; "Attempting to play %i channel sound \"%"...
0x6AAF4F: call    PrintError
0x6AAF54: add     esp, 0Ch
0x6AAF57: mov     eax, [esp+220h+var_11C]
0x6AAF5E: push    eax
0x6AAF5F: call    FormHeapFree
0x6AAF64: add     esp, 4
0x6AAF67: push    0; fuClose
0x6AAF69: push    esi; hmmio
0x6AAF6A: call    dword ptr ds:0A282CCh
0x6AAF70: xor     ax, ax
0x6AAF73: jmp     loc_6AB0D6
0x6AAF78: push    ecx
0x6AAF79: push    ecx
0x6AAF7A: push    ecx
0x6AAF7B: lea     eax, [esp+22Ch+var_20C]
0x6AAF7F: push    eax
0x6AAF80: lea     eax, [esp+230h+var_210]
0x6AAF84: push    eax
0x6AAF85: push    edi
0x6AAF86: mov     [esp+238h+var_210], ecx
0x6AAF8A: mov     [esp+238h+var_20C], ecx
0x6AAF8E: mov     edx, [ebp+0]
0x6AAF91: push    ecx
0x6AAF92: mov     ecx, [edx+2Ch]
0x6AAF95: push    ebp
0x6AAF96: call    ecx
0x6AAF98: test    eax, eax
0x6AAF9A: push    0; fuInfo
0x6AAF9C: jl      loc_6AB11A
0x6AAFA2: mov     ebx, [esp+224h+var_210]
0x6AAFA6: lea     edx, [esp+224h+var_1BC]
0x6AAFAA: push    edx; pmmioinfo
0x6AAFAB: push    esi; hmmio
0x6AAFAC: call    dword ptr ds:0A282E0h
0x6AAFB2: xor     edi, edi
0x6AAFB4: cmp     [esp+220h+var_1F4.cksize], edi
0x6AAFB8: jbe     short loc_6AB003
0x6AAFBA: lea     ebx, [ebx+0]
0x6AAFC0: mov     eax, [esp+220h+var_1BC.pchNext]
0x6AAFC7: cmp     eax, [esp+220h+var_1BC.pchEndRead]
0x6AAFCE: jnz     short loc_6AAFE6
0x6AAFD0: push    0; fuAdvance
0x6AAFD2: lea     ecx, [esp+224h+var_1BC]
0x6AAFD6: push    ecx; pmmioinfo
0x6AAFD7: push    esi; hmmio
0x6AAFD8: call    dword ptr ds:0A282D0h
0x6AAFDE: test    eax, eax
0x6AAFE0: jnz     loc_6AB0F1
0x6AAFE6: mov     edx, [esp+220h+var_1BC.pchNext]
0x6AAFED: mov     al, [edx]
0x6AAFEF: mov     [edi+ebx], al
0x6AAFF2: add     [esp+220h+var_1BC.pchNext], 1
0x6AAFFA: add     edi, 1
0x6AAFFD: cmp     edi, [esp+220h+var_1F4.cksize]
0x6AB001: jb      short loc_6AAFC0
0x6AB003: mov     ecx, [esp+220h+var_20C]
0x6AB007: mov     edx, [esp+220h+var_210]
0x6AB00B: mov     eax, [ebp+0]
0x6AB00E: mov     eax, [eax+4Ch]
0x6AB011: push    0
0x6AB013: push    0
0x6AB015: push    ecx
0x6AB016: push    edx
0x6AB017: push    ebp
0x6AB018: call    eax
0x6AB01A: push    0; fuClose
0x6AB01C: push    esi; hmmio
0x6AB01D: call    dword ptr ds:0A282CCh
0x6AB023: mov     ebx, [esp+220h+var_200]
0x6AB027: test    ebx, ebx
0x6AB029: jz      loc_6AB0C1
0x6AB02F: mov     ecx, 9
0x6AB034: lea     esi, [esp+220h+var_12C]
0x6AB03B: mov     edi, ebx
0x6AB03D: push    12h; Size
0x6AB03F: rep movsd
0x6AB041: call    FormHeapAlloc
0x6AB046: mov     ecx, [esp+224h+var_11C]
0x6AB04D: mov     [ebx+10h], eax
0x6AB050: movzx   edx, word ptr [ecx+10h]
0x6AB054: mov     [eax+10h], dx
0x6AB058: mov     ecx, [esp+224h+var_11C]
0x6AB05F: mov     edx, [ecx+8]
0x6AB062: mov     eax, [ebx+10h]
0x6AB065: mov     [eax+8], edx
0x6AB068: mov     ecx, [esp+224h+var_11C]
0x6AB06F: movzx   edx, word ptr [ecx+0Ch]
0x6AB073: mov     eax, [ebx+10h]
0x6AB076: mov     [eax+0Ch], dx
0x6AB07A: mov     ecx, [esp+224h+var_11C]
0x6AB081: movzx   edx, word ptr [ecx+2]
0x6AB085: mov     eax, [ebx+10h]
0x6AB088: mov     [eax+2], dx
0x6AB08C: mov     ecx, [esp+224h+var_11C]
0x6AB093: mov     edx, [ecx+4]
0x6AB096: mov     eax, [ebx+10h]
0x6AB099: mov     [eax+4], edx
0x6AB09C: mov     ecx, [esp+224h+var_11C]
0x6AB0A3: movzx   edx, word ptr [ecx+0Eh]
0x6AB0A7: mov     eax, [ebx+10h]
0x6AB0AA: mov     [eax+0Eh], dx
0x6AB0AE: mov     ecx, [esp+224h+var_11C]
0x6AB0B5: movzx   edx, word ptr [ecx]
0x6AB0B8: mov     eax, [ebx+10h]
0x6AB0BB: add     esp, 4
0x6AB0BE: mov     [eax], dx
0x6AB0C1: mov     eax, [esp+220h+var_11C]
0x6AB0C8: push    eax
0x6AB0C9: call    FormHeapFree
0x6AB0CE: mov     ax, word ptr [esp+224h+var_208]
0x6AB0D3: add     esp, 4
0x6AB0D6: pop     ebx
0x6AB0D7: pop     edi
0x6AB0D8: mov     ecx, [esp+218h+var_4]
0x6AB0DF: pop     esi
0x6AB0E0: pop     ebp
0x6AB0E1: xor     ecx, esp
0x6AB0E3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6AB0E8: add     esp, 210h
0x6AB0EE: retn    10h
0x6AB0F1: mov     ecx, [esp+220h+var_11C]
0x6AB0F8: push    ecx
0x6AB0F9: call    FormHeapFree
0x6AB0FE: mov     eax, [esp+224h+var_20C]
0x6AB102: mov     ecx, [esp+224h+var_210]
0x6AB106: mov     edx, [ebp+0]
0x6AB109: mov     edx, [edx+4Ch]
0x6AB10C: add     esp, 4
0x6AB10F: push    0
0x6AB111: push    0
0x6AB113: push    eax
0x6AB114: push    ecx
0x6AB115: push    ebp
0x6AB116: call    edx
0x6AB118: push    0; fuClose
0x6AB11A: push    esi; hmmio
0x6AB11B: call    dword ptr ds:0A282CCh
0x6AB121: xor     ax, ax
0x6AB124: jmp     short loc_6AB0D6
