0x91EF50: sub     esp, 3Ch
0x91EF53: push    ebx
0x91EF54: mov     ebx, [esp+40h+arg_4]
0x91EF58: cmp     word ptr [ebx+4], 0
0x91EF5D: push    esi
0x91EF5E: jz      short loc_91EF64
0x91EF60: inc     word ptr [ebx+6]
0x91EF64: mov     eax, [ebx+10h]
0x91EF67: mov     cl, [ebx+18h]
0x91EF6A: mov     esi, [ebx+14h]
0x91EF6D: push    ebp
0x91EF6E: mov     ebp, [ebx+0Ch]
0x91EF71: mov     [esp+48h+var_1C], ebx
0x91EF75: mov     [esp+48h+var_18], eax
0x91EF79: mov     [esp+48h+var_14], esi
0x91EF7D: mov     [esp+48h+var_10], ebp
0x91EF81: mov     [esp+48h+var_C], cl
0x91EF85: mov     cl, [eax+91h]
0x91EF8B: test    cl, cl
0x91EF8D: push    edi
0x91EF8E: jnz     short loc_91EFBC
0x91EF90: mov     cl, [esi+91h]
0x91EF96: test    cl, cl
0x91EF98: jnz     short loc_91EFBC
0x91EF9A: mov     edx, [eax+54h]
0x91EF9D: cmp     edx, [esi+54h]
0x91EFA0: jz      short loc_91EFBC
0x91EFA2: push    esi
0x91EFA3: push    eax
0x91EFA4: mov     eax, [eax+8]
0x91EFA7: push    eax
0x91EFA8: call    sub_8CD320
0x91EFAD: mov     ebp, [esp+58h+var_10]
0x91EFB1: mov     esi, [esp+58h+var_14]
0x91EFB5: mov     eax, [esp+58h+var_18]
0x91EFB9: add     esp, 0Ch
0x91EFBC: mov     dl, [esi+91h]
0x91EFC2: mov     cl, [eax+91h]
0x91EFC8: test    dl, dl
0x91EFCA: setnz   dl
0x91EFCD: movzx   edx, dl
0x91EFD0: movsx   edi, cl
0x91EFD3: cmp     edi, edx
0x91EFD5: jnz     short loc_91EFF3
0x91EFD7: mov     eax, [eax+6Ch]
0x91EFDA: mov     esi, [esi+6Ch]
0x91EFDD: lea     ecx, [esi+eax]
0x91EFE0: cmp     ecx, 8
0x91EFE3: jge     short loc_91EFEC
0x91EFE5: cmp     eax, esi
0x91EFE7: setnl   al
0x91EFEA: jmp     short loc_91EFF8
0x91EFEC: cmp     eax, esi
0x91EFEE: setle   al
0x91EFF1: jmp     short loc_91EFF8
0x91EFF3: test    cl, cl
0x91EFF5: setnz   al
0x91EFF8: movzx   edx, al
0x91EFFB: mov     [esp+4Ch+var_C+1], al
0x91EFFF: mov     edi, [esp+edx*4+4Ch+var_18]
0x91F003: mov     eax, [edi+54h]
0x91F006: mov     [ebx+8], eax
0x91F009: mov     edx, [ebp+0]
0x91F00C: lea     eax, [esp+4Ch+var_2C]
0x91F010: push    eax
0x91F011: mov     ecx, ebp
0x91F013: mov     [esp+50h+var_34], edi
0x91F017: call    dword ptr [edx+20h]
0x91F01A: mov     ecx, [ebx+8]
0x91F01D: mov     edx, [ecx]
0x91F01F: lea     eax, [esp+44h+var_24]
0x91F023: push    eax
0x91F024: push    ebx
0x91F025: call    dword ptr [edx+0Ch]
0x91F028: mov     eax, [edi+6Ch]
0x91F02B: add     edi, 68h ; 'h'
0x91F02E: xor     ebp, ebp
0x91F030: test    eax, eax
0x91F032: jle     short loc_91F04C
0x91F034: mov     esi, [edi]
0x91F036: mov     cl, [esp+44h+var_4]
0x91F03A: add     esi, 10h
0x91F03D: lea     ecx, [ecx+0]
0x91F040: cmp     [esi], cl
0x91F042: ja      short loc_91F04C
0x91F044: inc     ebp
0x91F045: add     esi, 1Ch
0x91F048: cmp     ebp, eax
0x91F04A: jl      short loc_91F040
0x91F04C: mov     ecx, [edi+8]
0x91F04F: and     ecx, 3FFFFFFFh
0x91F055: xor     edx, edx
0x91F057: cmp     eax, ecx
0x91F059: setnl   dl
0x91F05C: lea     ecx, [esp+44h+var_24]
0x91F060: push    ecx
0x91F061: lea     eax, [esp+48h+var_14]
0x91F065: push    ebp
0x91F066: mov     ecx, edi
0x91F068: mov     [esp+4Ch+var_24], eax
0x91F06C: dec     edx
0x91F06D: and     edx, ebp
0x91F06F: mov     esi, edx
0x91F071: mov     [esp+4Ch+var_20], 1
0x91F079: mov     [esp+4Ch+var_1C], 80000001h
0x91F081: call    sub_91EE60
0x91F086: cmp     esi, [edi+4]
0x91F089: mov     ecx, esi
0x91F08B: jge     short loc_91F0A5
0x91F08D: imul    esi, 1Ch
0x91F090: mov     eax, [edi]
0x91F092: mov     edx, [eax+esi]
0x91F095: add     eax, esi
0x91F097: mov     [edx+24h], eax
0x91F09A: mov     eax, [edi+4]
0x91F09D: inc     ecx
0x91F09E: add     esi, 1Ch
0x91F0A1: cmp     ecx, eax
0x91F0A3: jl      short loc_91F090
0x91F0A5: mov     esi, [ebx+24h]
0x91F0A8: mov     ecx, [esi+0Ch]
0x91F0AB: mov     eax, [ecx]
0x91F0AD: lea     edx, [esp+44h+var_24]
0x91F0B1: push    edx
0x91F0B2: xor     edx, edx
0x91F0B4: mov     dl, [ebx+19h]
0x91F0B7: mov     [esp+48h+var_30], esi
0x91F0BB: push    edx
0x91F0BC: call    dword ptr [eax+10h]
0x91F0BF: mov     eax, [esp+44h+var_24]
0x91F0C3: test    eax, eax
0x91F0C5: mov     [esi+14h], ax
0x91F0C9: jz      loc_91F217
0x91F0CF: mov     ebx, dword ptr [esp+44h+var_2C]
0x91F0D3: mov     ecx, [ebx+80h]
0x91F0D9: mov     esi, [ebx+84h]
0x91F0DF: mov     edx, [ebx+88h]
0x91F0E5: add     ebx, 80h ; '€'
0x91F0EB: mov     dword ptr [esp+44h+var_2C], ecx
0x91F0EF: lea     ecx, [esi+eax]
0x91F0F2: and     edx, 3FFFFFFFh
0x91F0F8: cmp     edx, ecx
0x91F0FA: jge     short loc_91F10C
0x91F0FC: push    1
0x91F0FE: push    ecx
0x91F0FF: push    ebx
0x91F100: call    sub_8A6E40
0x91F105: mov     eax, [esp+50h+var_24]
0x91F109: add     esp, 0Ch
0x91F10C: add     esi, eax
0x91F10E: mov     eax, dword ptr [esp+44h+var_2C]
0x91F112: mov     [ebx+4], esi
0x91F115: mov     esi, [ebx]
0x91F117: mov     edx, esi
0x91F119: sub     edx, eax
0x91F11B: xor     eax, eax
0x91F11D: cmp     ebp, eax
0x91F11F: mov     [esp+44h+var_28], edx
0x91F123: mov     dword ptr [esp+44h+var_2C], eax
0x91F127: jle     short loc_91F159
0x91F129: mov     [esp+44h+var_34], eax
0x91F12D: mov     dword ptr [esp+44h+var_2C], ebp
0x91F131: mov     ecx, [esp+44h+var_34]
0x91F135: mov     eax, [edi]
0x91F137: add     eax, ecx
0x91F139: mov     ecx, [eax+18h]
0x91F13C: test    ecx, ecx
0x91F13E: jz      short loc_91F14B
0x91F140: movzx   esi, word ptr [eax+14h]
0x91F144: add     ecx, edx
0x91F146: mov     [eax+18h], ecx
0x91F149: add     esi, ecx
0x91F14B: mov     ecx, [esp+44h+var_34]
0x91F14F: add     ecx, 1Ch
0x91F152: dec     ebp
0x91F153: mov     [esp+44h+var_34], ecx
0x91F157: jnz     short loc_91F131
0x91F159: mov     ebp, [esp+44h+var_30]
0x91F15D: movzx   eax, word ptr [ebp+14h]
0x91F161: mov     ecx, [ebx+4]
0x91F164: mov     edx, [ebx]
0x91F166: sub     ecx, eax
0x91F168: sub     ecx, esi
0x91F16A: add     ecx, edx
0x91F16C: push    ecx
0x91F16D: add     eax, esi
0x91F16F: push    esi
0x91F170: push    eax
0x91F171: call    j_unknown_libname_16
0x91F176: movzx   edx, word ptr [ebp+14h]
0x91F17A: mov     ecx, dword ptr [esp+50h+var_2C]
0x91F17E: mov     ebx, [esp+50h+var_28]
0x91F182: add     esp, 0Ch
0x91F185: mov     [ebp+18h], esi
0x91F188: mov     eax, [edi+4]
0x91F18B: inc     ecx
0x91F18C: add     ebx, edx
0x91F18E: cmp     ecx, eax
0x91F190: jge     short loc_91F1B7
0x91F192: mov     esi, ecx
0x91F194: imul    esi, 1Ch
0x91F197: mov     eax, [edi]
0x91F199: mov     edx, [eax+esi+18h]
0x91F19D: add     eax, esi
0x91F19F: test    edx, edx
0x91F1A1: jz      short loc_91F1A7
0x91F1A3: add     edx, ebx
0x91F1A5: jmp     short loc_91F1A9
0x91F1A7: xor     edx, edx
0x91F1A9: mov     [eax+18h], edx
0x91F1AC: mov     eax, [edi+4]
0x91F1AF: inc     ecx
0x91F1B0: add     esi, 1Ch
0x91F1B3: cmp     ecx, eax
0x91F1B5: jl      short loc_91F197
0x91F1B7: mov     ebx, [esp+44h+arg_C]
0x91F1BB: mov     esi, [esp+44h+var_30]
0x91F1BF: movzx   edx, word ptr [esi+14h]
0x91F1C3: mov     ecx, [esi+0Ch]
0x91F1C6: mov     eax, [ecx]
0x91F1C8: push    edx
0x91F1C9: mov     edx, [esi+18h]
0x91F1CC: push    edx
0x91F1CD: push    ebx
0x91F1CE: call    dword ptr [eax+18h]
0x91F1D1: movzx   eax, byte ptr [esi+11h]
0x91F1D5: mov     ecx, 2
0x91F1DA: sub     ecx, eax
0x91F1DC: mov     eax, [esi+ecx*4]
0x91F1DF: mov     dx, [eax+78h]
0x91F1E3: mov     [esi+12h], dx
0x91F1E7: mov     ecx, [eax+78h]
0x91F1EA: lea     esi, [eax+74h]
0x91F1ED: mov     eax, [esi+8]
0x91F1F0: and     eax, 3FFFFFFFh
0x91F1F5: cmp     ecx, eax
0x91F1F7: pop     edi
0x91F1F8: pop     ebp
0x91F1F9: jnz     short loc_91F206
0x91F1FB: push    4
0x91F1FD: push    esi
0x91F1FE: call    sub_8A6EE0
0x91F203: add     esp, 8
0x91F206: mov     ecx, [esi+4]
0x91F209: mov     edx, [esi]
0x91F20B: mov     [edx+ecx*4], ebx
0x91F20E: inc     dword ptr [esi+4]
0x91F211: pop     esi
0x91F212: pop     ebx
0x91F213: add     esp, 3Ch
0x91F216: retn
0x91F217: mov     dword ptr [esi+18h], 0
0x91F21E: jmp     short loc_91F1BF
