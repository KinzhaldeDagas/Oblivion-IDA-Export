0x91BFB0: push    ecx
0x91BFB1: push    ebx
0x91BFB2: push    ebp
0x91BFB3: push    esi
0x91BFB4: push    edi
0x91BFB5: mov     ebp, ecx
0x91BFB7: xor     edi, edi
0x91BFB9: cmp     ebp, edi
0x91BFBB: mov     [esp+14h+var_4], ebp
0x91BFBF: jz      short loc_91BFC6
0x91BFC1: lea     eax, [ebp+28h]
0x91BFC4: jmp     short loc_91BFC8
0x91BFC6: xor     eax, eax
0x91BFC8: mov     ebx, [esp+14h+arg_0]
0x91BFCC: push    eax
0x91BFCD: mov     ecx, ebx
0x91BFCF: call    sub_899CA0
0x91BFD4: cmp     ebp, edi
0x91BFD6: jz      short loc_91BFDD
0x91BFD8: lea     eax, [ebp+2Ch]
0x91BFDB: jmp     short loc_91BFDF
0x91BFDD: xor     eax, eax
0x91BFDF: push    eax
0x91BFE0: mov     ecx, ebx
0x91BFE2: call    sub_899D20
0x91BFE7: mov     ecx, ds:0BA7D98h
0x91BFED: mov     eax, [ecx]
0x91BFEF: push    32h ; '2'
0x91BFF1: push    10h
0x91BFF3: call    dword ptr [eax+10h]
0x91BFF6: cmp     eax, edi
0x91BFF8: jz      short loc_91C009
0x91BFFA: mov     [eax+4], edi
0x91BFFD: mov     [eax+8], edi
0x91C000: mov     dword ptr [eax+0Ch], 80000000h
0x91C007: mov     edi, eax
0x91C009: lea     esi, [ebp+30h]
0x91C00C: mov     [edi], ebx
0x91C00E: mov     ecx, [esi+8]
0x91C011: mov     eax, [esi+4]
0x91C014: and     ecx, 3FFFFFFFh
0x91C01A: cmp     eax, ecx
0x91C01C: jnz     short loc_91C029
0x91C01E: push    4
0x91C020: push    esi
0x91C021: call    sub_8A6EE0
0x91C026: add     esp, 8
0x91C029: mov     edx, [esi+4]
0x91C02C: mov     eax, [esi]
0x91C02E: mov     [eax+edx*4], edi
0x91C031: inc     dword ptr [esi+4]
0x91C034: mov     ecx, [ebx+3Ch]
0x91C037: xor     eax, eax
0x91C039: test    ecx, ecx
0x91C03B: mov     [esp+14h+arg_0], eax
0x91C03F: jle     short loc_91C080
0x91C041: mov     ecx, [ebx+38h]
0x91C044: mov     esi, [ecx+eax*4]
0x91C047: mov     ecx, [esi+38h]
0x91C04A: add     esi, 34h ; '4'
0x91C04D: xor     edi, edi
0x91C04F: test    ecx, ecx
0x91C051: jle     short loc_91C074
0x91C053: add     ebp, 28h ; '('
0x91C056: mov     eax, [esi]
0x91C058: mov     ecx, [eax+edi*4]
0x91C05B: mov     edx, [ebp+0]
0x91C05E: push    ecx
0x91C05F: mov     ecx, ebp
0x91C061: call    dword ptr [edx+4]
0x91C064: mov     eax, [esi+4]
0x91C067: inc     edi
0x91C068: cmp     edi, eax
0x91C06A: jl      short loc_91C056
0x91C06C: mov     ebp, [esp+14h+var_4]
0x91C070: mov     eax, [esp+14h+arg_0]
0x91C074: mov     ecx, [ebx+3Ch]
0x91C077: inc     eax
0x91C078: cmp     eax, ecx
0x91C07A: mov     [esp+14h+arg_0], eax
0x91C07E: jl      short loc_91C041
0x91C080: mov     ecx, [ebx+48h]
0x91C083: xor     eax, eax
0x91C085: test    ecx, ecx
0x91C087: mov     [esp+14h+arg_0], eax
0x91C08B: jle     short loc_91C0CF
0x91C08D: lea     ecx, [ecx+0]
0x91C090: mov     edx, [ebx+44h]
0x91C093: mov     esi, [edx+eax*4]
0x91C096: mov     ecx, [esi+38h]
0x91C099: add     esi, 34h ; '4'
0x91C09C: xor     edi, edi
0x91C09E: test    ecx, ecx
0x91C0A0: jle     short loc_91C0C3
0x91C0A2: add     ebp, 28h ; '('
0x91C0A5: mov     ecx, [esi]
0x91C0A7: mov     edx, [ecx+edi*4]
0x91C0AA: mov     eax, [ebp+0]
0x91C0AD: push    edx
0x91C0AE: mov     ecx, ebp
0x91C0B0: call    dword ptr [eax+4]
0x91C0B3: mov     eax, [esi+4]
0x91C0B6: inc     edi
0x91C0B7: cmp     edi, eax
0x91C0B9: jl      short loc_91C0A5
0x91C0BB: mov     eax, [esp+14h+arg_0]
0x91C0BF: mov     ebp, [esp+14h+var_4]
0x91C0C3: mov     ecx, [ebx+48h]
0x91C0C6: inc     eax
0x91C0C7: cmp     eax, ecx
0x91C0C9: mov     [esp+14h+arg_0], eax
0x91C0CD: jl      short loc_91C090
0x91C0CF: mov     ebx, [ebx+30h]
0x91C0D2: test    ebx, ebx
0x91C0D4: jz      short loc_91C0F8
0x91C0D6: mov     eax, [ebx+38h]
0x91C0D9: xor     esi, esi
0x91C0DB: test    eax, eax
0x91C0DD: jle     short loc_91C0F8
0x91C0DF: lea     edi, [ebp+28h]
0x91C0E2: mov     ecx, [ebx+34h]
0x91C0E5: mov     edx, [ecx+esi*4]
0x91C0E8: mov     eax, [edi]
0x91C0EA: push    edx
0x91C0EB: mov     ecx, edi
0x91C0ED: call    dword ptr [eax+4]
0x91C0F0: mov     eax, [ebx+38h]
0x91C0F3: inc     esi
0x91C0F4: cmp     esi, eax
0x91C0F6: jl      short loc_91C0E2
0x91C0F8: pop     edi
0x91C0F9: pop     esi
0x91C0FA: pop     ebp
0x91C0FB: pop     ebx
0x91C0FC: pop     ecx
0x91C0FD: retn    4
