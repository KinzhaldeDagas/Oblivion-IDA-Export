0x92DE30: push    ebp
0x92DE31: mov     ebp, esp
0x92DE33: and     esp, 0FFFFFFF0h
0x92DE36: sub     esp, 0A4h
0x92DE3C: mov     eax, [ebp+arg_10]
0x92DE3F: mov     ecx, [ebp+arg_C]
0x92DE42: push    ebx
0x92DE43: mov     byte ptr [eax], 0
0x92DE46: cmp     byte ptr [ecx], 0
0x92DE49: push    esi
0x92DE4A: push    edi
0x92DE4B: jz      loc_92E638
0x92DE51: mov     esi, [ebp+arg_0]
0x92DE54: mov     edx, [esi+8]
0x92DE57: mov     ebx, [esi+4]
0x92DE5A: mov     edi, [esi]
0x92DE5C: xor     ecx, ecx
0x92DE5E: xor     eax, eax
0x92DE60: cmp     edx, ecx
0x92DE62: mov     [esp+0B0h+var_6C], ebx
0x92DE66: mov     [esp+0B0h+var_44], edi
0x92DE6A: jle     short loc_92DE80
0x92DE6C: lea     esp, [esp+0]
0x92DE70: mov     edx, [esi+4]
0x92DE73: mov     [edx+eax*8+6], cx
0x92DE78: mov     edx, [esi+8]
0x92DE7B: inc     eax
0x92DE7C: cmp     eax, edx
0x92DE7E: jl      short loc_92DE70
0x92DE80: mov     edx, [esi+8]
0x92DE83: xor     eax, eax
0x92DE85: cmp     edx, ecx
0x92DE87: mov     [esp+0B0h+var_8C], eax
0x92DE8B: jle     loc_92E209
0x92DE91: mov     ecx, [esi+4]
0x92DE94: lea     eax, [ecx+eax*8]
0x92DE97: mov     edx, 1
0x92DE9C: cmp     [eax+6], dx
0x92DEA0: jz      loc_92E1F3
0x92DEA6: movzx   ecx, word ptr [eax+2]
0x92DEAA: mov     [eax+6], dx
0x92DEAE: mov     [ebx+ecx*8+6], dx
0x92DEB3: movzx   eax, word ptr [eax]
0x92DEB6: lea     ecx, [ebx+ecx*8]
0x92DEB9: movzx   ecx, word ptr [ecx]
0x92DEBC: mov     [esp+0B0h+var_7C], ecx
0x92DEC0: mov     esi, eax
0x92DEC2: shl     ecx, 4
0x92DEC5: add     ecx, edi
0x92DEC7: shl     esi, 4
0x92DECA: add     esi, edi
0x92DECC: fld     dword ptr [ecx]
0x92DECE: mov     [esp+0B0h+var_70], eax
0x92DED2: mov     [esp+0B0h+var_94], eax
0x92DED6: fsub    dword ptr [esi]
0x92DED8: mov     eax, [esp+0B0h+var_7C]
0x92DEDC: mov     [esp+0B0h+var_90], eax
0x92DEE0: lea     eax, [esp+0B0h+var_68]
0x92DEE4: fstp    dword ptr [esp+0B0h+var_60]
0x92DEE8: xor     edx, edx
0x92DEEA: fld     dword ptr [ecx+4]
0x92DEED: mov     [esp+0B0h+var_74], 358637BDh
0x92DEF5: fsub    dword ptr [esi+4]
0x92DEF8: fstp    dword ptr [esp+0B0h+var_60+4]
0x92DEFC: fld     dword ptr [ecx+8]
0x92DEFF: fsub    dword ptr [esi+8]
0x92DF02: fstp    dword ptr [esp+0B0h+var_60+8]
0x92DF06: fld     dword ptr [ecx+0Ch]
0x92DF09: fsub    dword ptr [esi+0Ch]
0x92DF0C: mov     [esp+0B0h+var_A0], 0
0x92DF14: mov     [esp+0B0h+var_98], 80000000h
0x92DF1C: mov     [esp+0B0h+var_9C], edx
0x92DF20: fstp    dword ptr [esp+0B0h+var_60+0Ch]
0x92DF24: movaps  xmm1, [esp+0B0h+var_60]
0x92DF29: movaps  xmm0, xmm1
0x92DF2C: mulps   xmm0, xmm1
0x92DF2F: movaps  xmm2, xmm0
0x92DF32: shufps  xmm2, xmm0, 55h ; 'U'
0x92DF36: movaps  xmm3, xmm0
0x92DF39: addss   xmm2, xmm0
0x92DF3D: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x92DF41: addss   xmm3, xmm2
0x92DF45: movss   dword ptr [eax], xmm3
0x92DF49: mov     eax, [esp+0B0h+var_68]
0x92DF4D: mov     [esp+0B0h+var_78], eax
0x92DF51: mov     eax, [esp+0B0h+var_70]
0x92DF55: cmp     [esp+0B0h+var_7C], eax
0x92DF59: jz      loc_92E185
0x92DF5F: fld     dword ptr ds:0A2FAA8h
0x92DF65: fld     dword ptr [esi+0Ch]
0x92DF68: fucompp
0x92DF6A: fnstsw  ax
0x92DF6C: test    ah, 44h
0x92DF6F: jp      loc_92E185
0x92DF75: fld     dword ptr ds:0A2FAA8h
0x92DF7B: fld     dword ptr [ecx+0Ch]
0x92DF7E: fucompp
0x92DF80: fnstsw  ax
0x92DF82: test    ah, 44h
0x92DF85: jp      loc_92E185
0x92DF8B: mov     ecx, [ebp+arg_8]
0x92DF8E: mov     eax, [ebp+arg_4]
0x92DF91: inc     ecx
0x92DF92: cmp     eax, ecx
0x92DF94: mov     [esp+0B0h+var_84], eax
0x92DF98: jge     loc_92E185
0x92DF9E: shl     eax, 4
0x92DFA1: lea     ecx, [eax+edi+0Ch]
0x92DFA5: mov     [esp+0B0h+var_80], ecx
0x92DFA9: lea     esp, [esp+0]
0x92DFB0: mov     eax, [esp+0B0h+var_84]
0x92DFB4: cmp     [esp+0B0h+var_70], eax
0x92DFB8: jz      loc_92E165
0x92DFBE: cmp     [esp+0B0h+var_7C], eax
0x92DFC2: jz      loc_92E165
0x92DFC8: fld     dword ptr ds:0A2FAA8h
0x92DFCE: mov     ecx, [esp+0B0h+var_80]
0x92DFD2: fld     dword ptr [ecx]
0x92DFD4: fucompp
0x92DFD6: fnstsw  ax
0x92DFD8: test    ah, 44h
0x92DFDB: jp      loc_92E165
0x92DFE1: fld     dword ptr [ecx-0Ch]
0x92DFE4: movaps  xmm0, xmm1
0x92DFE7: fsub    dword ptr [esi]
0x92DFE9: lea     eax, [esp+0B0h+var_88]
0x92DFED: fstp    dword ptr [esp+0B0h+var_40]
0x92DFF1: fld     dword ptr [ecx-8]
0x92DFF4: fsub    dword ptr [esi+4]
0x92DFF7: fstp    dword ptr [esp+0B0h+var_40+4]
0x92DFFB: fld     dword ptr [ecx-4]
0x92DFFE: fsub    dword ptr [esi+8]
0x92E001: fstp    dword ptr [esp+0B0h+var_40+8]
0x92E005: fld     dword ptr [ecx]
0x92E007: lea     ecx, [esp+0B0h+var_64]
0x92E00B: fsub    dword ptr [esi+0Ch]
0x92E00E: fstp    dword ptr [esp+0B0h+var_40+0Ch]
0x92E012: movaps  xmm2, [esp+0B0h+var_40]
0x92E017: mulps   xmm0, xmm2
0x92E01A: movaps  xmm3, xmm0
0x92E01D: shufps  xmm3, xmm0, 55h ; 'U'
0x92E021: addss   xmm3, xmm0
0x92E025: movaps  xmm4, xmm0
0x92E028: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x92E02C: addss   xmm4, xmm3
0x92E030: movaps  xmm0, xmm2
0x92E033: shufps  xmm0, xmm2, 0C9h ; 'É'
0x92E037: movaps  xmm3, xmm1
0x92E03A: shufps  xmm3, xmm1, 0D2h ; 'Ò'
0x92E03E: mulps   xmm3, xmm0
0x92E041: movaps  xmm0, xmm2
0x92E044: shufps  xmm0, xmm2, 0D2h ; 'Ò'
0x92E048: movaps  xmm2, xmm1
0x92E04B: shufps  xmm2, xmm1, 0C9h ; 'É'
0x92E04F: mulps   xmm2, xmm0
0x92E052: movaps  xmm0, xmm2
0x92E055: subps   xmm0, xmm3
0x92E058: mulps   xmm0, xmm0
0x92E05B: movaps  xmm2, xmm0
0x92E05E: shufps  xmm2, xmm0, 55h ; 'U'
0x92E062: movaps  xmm3, xmm0
0x92E065: addss   xmm2, xmm0
0x92E069: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x92E06D: movss   dword ptr [eax], xmm4
0x92E071: mov     eax, [ebp+arg_C]
0x92E074: addss   xmm3, xmm2
0x92E078: movss   dword ptr [ecx], xmm3
0x92E07C: fld     [esp+0B0h+var_64]
0x92E080: fcomp   dword ptr [eax+8]
0x92E083: fnstsw  ax
0x92E085: test    ah, 5
0x92E088: jp      loc_92E165
0x92E08E: fld     [esp+0B0h+var_88]
0x92E092: fcomp   [esp+0B0h+var_74]
0x92E096: fnstsw  ax
0x92E098: test    ah, 5
0x92E09B: jp      short loc_92E0DF
0x92E09D: mov     eax, [esp+0B0h+var_98]
0x92E0A1: and     eax, 3FFFFFFFh
0x92E0A6: cmp     edx, eax
0x92E0A8: jnz     short loc_92E0C2
0x92E0AA: lea     ecx, [esp+0B0h+var_A0]
0x92E0AE: push    4
0x92E0B0: push    ecx
0x92E0B1: call    sub_8A6EE0
0x92E0B6: mov     edx, [esp+0B8h+var_9C]
0x92E0BA: movaps  xmm1, [esp+0B8h+var_60]
0x92E0BF: add     esp, 8
0x92E0C2: mov     eax, [esp+0B0h+var_94]
0x92E0C6: mov     ecx, [esp+0B0h+var_A0]
0x92E0CA: mov     [ecx+edx*4], eax
0x92E0CD: mov     eax, [esp+0B0h+var_84]
0x92E0D1: mov     ecx, [esp+0B0h+var_88]
0x92E0D5: mov     [esp+0B0h+var_94], eax
0x92E0D9: mov     [esp+0B0h+var_74], ecx
0x92E0DD: jmp     short loc_92E15C
0x92E0DF: fld     [esp+0B0h+var_88]
0x92E0E3: fcomp   [esp+0B0h+var_78]
0x92E0E7: fnstsw  ax
0x92E0E9: test    ah, 41h
0x92E0EC: mov     eax, [esp+0B0h+var_98]
0x92E0F0: jnz     short loc_92E130
0x92E0F2: and     eax, 3FFFFFFFh
0x92E0F7: cmp     edx, eax
0x92E0F9: jnz     short loc_92E113
0x92E0FB: lea     edx, [esp+0B0h+var_A0]
0x92E0FF: push    4
0x92E101: push    edx
0x92E102: call    sub_8A6EE0
0x92E107: mov     edx, [esp+0B8h+var_9C]
0x92E10B: movaps  xmm1, [esp+0B8h+var_60]
0x92E110: add     esp, 8
0x92E113: mov     eax, [esp+0B0h+var_90]
0x92E117: mov     ecx, [esp+0B0h+var_A0]
0x92E11B: mov     [ecx+edx*4], eax
0x92E11E: mov     eax, [esp+0B0h+var_84]
0x92E122: mov     ecx, [esp+0B0h+var_88]
0x92E126: mov     [esp+0B0h+var_90], eax
0x92E12A: mov     [esp+0B0h+var_78], ecx
0x92E12E: jmp     short loc_92E15C
0x92E130: and     eax, 3FFFFFFFh
0x92E135: cmp     edx, eax
0x92E137: jnz     short loc_92E151
0x92E139: lea     edx, [esp+0B0h+var_A0]
0x92E13D: push    4
0x92E13F: push    edx
0x92E140: call    sub_8A6EE0
0x92E145: mov     edx, [esp+0B8h+var_9C]
0x92E149: movaps  xmm1, [esp+0B8h+var_60]
0x92E14E: add     esp, 8
0x92E151: mov     eax, [esp+0B0h+var_A0]
0x92E155: mov     ecx, [esp+0B0h+var_84]
0x92E159: mov     [eax+edx*4], ecx
0x92E15C: mov     edx, [esp+0B0h+var_9C]
0x92E160: inc     edx
0x92E161: mov     [esp+0B0h+var_9C], edx
0x92E165: mov     eax, [esp+0B0h+var_80]
0x92E169: mov     ecx, [esp+0B0h+var_84]
0x92E16D: add     eax, 10h
0x92E170: mov     [esp+0B0h+var_80], eax
0x92E174: mov     eax, [ebp+arg_8]
0x92E177: inc     ecx
0x92E178: inc     eax
0x92E179: cmp     ecx, eax
0x92E17B: mov     [esp+0B0h+var_84], ecx
0x92E17F: jl      loc_92DFB0
0x92E185: xor     ecx, ecx
0x92E187: test    edx, edx
0x92E189: jle     short loc_92E1BD
0x92E18B: jmp     short loc_92E190
0x92E18D: align 10h
0x92E190: mov     eax, [esp+0B0h+var_A0]
0x92E194: mov     eax, [eax+ecx*4]
0x92E197: cmp     eax, [esp+0B0h+var_94]
0x92E19B: jz      short loc_92E1B8
0x92E19D: cmp     eax, [esp+0B0h+var_90]
0x92E1A1: jz      short loc_92E1B8
0x92E1A3: mov     edx, [ebp+arg_10]
0x92E1A6: shl     eax, 4
0x92E1A9: mov     dword ptr [eax+edi+0Ch], 3F800000h
0x92E1B1: mov     byte ptr [edx], 1
0x92E1B4: mov     edx, [esp+0B0h+var_9C]
0x92E1B8: inc     ecx
0x92E1B9: cmp     ecx, edx
0x92E1BB: jl      short loc_92E190
0x92E1BD: mov     eax, [esp+0B0h+var_98]
0x92E1C1: test    eax, eax
0x92E1C3: js      short loc_92E1F0
0x92E1C5: mov     ecx, large fs:2Ch
0x92E1CC: mov     edx, ds:0BA9DE4h
0x92E1D2: and     eax, 3FFFFFFFh
0x92E1D7: shl     eax, 2
0x92E1DA: push    14h
0x92E1DC: push    eax
0x92E1DD: mov     eax, [esp+0B8h+var_A0]
0x92E1E1: push    eax
0x92E1E2: mov     eax, [ecx+edx*4]
0x92E1E5: mov     ecx, [eax+19Ch]
0x92E1EB: call    sub_8A75D0
0x92E1F0: mov     esi, [ebp+arg_0]
0x92E1F3: mov     eax, [esp+0B0h+var_8C]
0x92E1F7: mov     ecx, [esi+8]
0x92E1FA: inc     eax
0x92E1FB: cmp     eax, ecx
0x92E1FD: mov     [esp+0B0h+var_8C], eax
0x92E201: jl      loc_92DE91
0x92E207: xor     ecx, ecx
0x92E209: mov     edx, [esi+8]
0x92E20C: xor     eax, eax
0x92E20E: cmp     edx, ecx
0x92E210: jle     short loc_92E222
0x92E212: mov     edx, [esi+4]
0x92E215: mov     [edx+eax*8+6], cx
0x92E21A: mov     edx, [esi+8]
0x92E21D: inc     eax
0x92E21E: cmp     eax, edx
0x92E220: jl      short loc_92E212
0x92E222: mov     ecx, [ebp+arg_8]
0x92E225: mov     eax, [ebp+arg_4]
0x92E228: mov     edx, ecx
0x92E22A: sub     edx, eax
0x92E22C: cmp     edx, 2
0x92E22F: jle     loc_92E638
0x92E235: cmp     dword ptr [esi+8], 2
0x92E239: jle     loc_92E638
0x92E23F: inc     ecx
0x92E240: cmp     eax, ecx
0x92E242: mov     [esp+0B0h+var_90], eax
0x92E246: mov     [esp+0B0h+var_88], ecx
0x92E24A: jge     loc_92E638
0x92E250: shl     eax, 4
0x92E253: lea     eax, [eax+edi+0Ch]
0x92E257: mov     [esp+0B0h+var_94], eax
0x92E25B: jmp     short loc_92E260
0x92E25D: align 10h
0x92E260: fld     dword ptr ds:0A2FAA8h
0x92E266: fld     dword ptr [eax]
0x92E268: fucompp
0x92E26A: fnstsw  ax
0x92E26C: test    ah, 44h
0x92E26F: jp      loc_92E618
0x92E275: mov     ecx, [esi+8]
0x92E278: xor     eax, eax
0x92E27A: cmp     ecx, eax
0x92E27C: mov     edx, 80000000h
0x92E281: mov     [esp+0B0h+var_A0], eax
0x92E285: mov     [esp+0B0h+var_9C], eax
0x92E289: mov     [esp+0B0h+var_98], edx
0x92E28D: mov     [esp+0B0h+var_8C], eax
0x92E291: jle     loc_92E5E9
0x92E297: jmp     short loc_92E2A0
0x92E299: align 10h
0x92E2A0: mov     ecx, [esi+4]
0x92E2A3: cmp     word ptr [ecx+eax*8+6], 1
0x92E2A9: lea     ecx, [ecx+eax*8]
0x92E2AC: jz      loc_92E494
0x92E2B2: movzx   ecx, word ptr [ecx]
0x92E2B5: cmp     ecx, [esp+0B0h+var_90]
0x92E2B9: jnz     loc_92E494
0x92E2BF: mov     edx, [esi+4]
0x92E2C2: mov     word ptr [edx+eax*8+6], 1
0x92E2C9: mov     ecx, [esi+4]
0x92E2CC: movzx   edx, word ptr [ecx+eax*8+2]
0x92E2D1: mov     [esp+0B0h+var_64], 40400000h
0x92E2D9: movss   xmm0, [esp+0B0h+var_64]
0x92E2DF: lea     esi, [ebx+edx*8]
0x92E2E2: movaps  [esp+0B0h+var_20], xmm0
0x92E2EA: mov     [esp+0B0h+var_68], 3F000000h
0x92E2F2: movss   xmm0, [esp+0B0h+var_68]
0x92E2F8: mov     [esp+0B0h+var_78], esi
0x92E2FC: movaps  [esp+0B0h+var_10], xmm0
0x92E304: jmp     short loc_92E310
0x92E306: align 10h
0x92E310: movzx   eax, word ptr [esi+4]
0x92E314: mov     word ptr [ebx+eax*8+6], 1
0x92E31B: movzx   edx, word ptr [esi+4]
0x92E31F: movzx   eax, word ptr [ebx+edx*8]
0x92E323: movzx   ecx, word ptr [esi]
0x92E326: lea     edx, [ebx+edx*8]
0x92E329: movzx   edx, word ptr [edx+4]
0x92E32D: movzx   edx, word ptr [ebx+edx*8]
0x92E331: shl     ecx, 4
0x92E334: add     ecx, edi
0x92E336: shl     eax, 4
0x92E339: add     eax, edi
0x92E33B: fld     dword ptr [ecx]
0x92E33D: shl     edx, 4
0x92E340: add     edx, edi
0x92E342: fsub    dword ptr [eax]
0x92E344: mov     edi, [esp+0B0h+var_9C]
0x92E348: lea     ebx, [edi+1]
0x92E34B: fstp    dword ptr [esp+0B0h+var_60]
0x92E34F: fld     dword ptr [ecx+4]
0x92E352: fsub    dword ptr [eax+4]
0x92E355: fstp    dword ptr [esp+0B0h+var_60+4]
0x92E359: fld     dword ptr [ecx+8]
0x92E35C: fsub    dword ptr [eax+8]
0x92E35F: fstp    dword ptr [esp+0B0h+var_60+8]
0x92E363: fld     dword ptr [ecx+0Ch]
0x92E366: fsub    dword ptr [eax+0Ch]
0x92E369: fstp    dword ptr [esp+0B0h+var_60+0Ch]
0x92E36D: fld     dword ptr [edx]
0x92E36F: fsub    dword ptr [eax]
0x92E371: fstp    dword ptr [esp+0B0h+var_40]
0x92E375: fld     dword ptr [edx+4]
0x92E378: fsub    dword ptr [eax+4]
0x92E37B: fstp    dword ptr [esp+0B0h+var_40+4]
0x92E37F: fld     dword ptr [edx+8]
0x92E382: fsub    dword ptr [eax+8]
0x92E385: fstp    dword ptr [esp+0B0h+var_40+8]
0x92E389: fld     dword ptr [edx+0Ch]
0x92E38C: fsub    dword ptr [eax+0Ch]
0x92E38F: mov     eax, [esp+0B0h+var_98]
0x92E393: and     eax, 3FFFFFFFh
0x92E398: cmp     eax, ebx
0x92E39A: fstp    dword ptr [esp+0B0h+var_40+0Ch]
0x92E39E: jge     short loc_92E3B8
0x92E3A0: add     eax, eax
0x92E3A2: cmp     ebx, eax
0x92E3A4: jl      short loc_92E3A8
0x92E3A6: mov     eax, ebx
0x92E3A8: push    10h
0x92E3AA: push    eax
0x92E3AB: lea     eax, [esp+0B8h+var_A0]
0x92E3AF: push    eax
0x92E3B0: call    sub_8A6E40
0x92E3B5: add     esp, 0Ch
0x92E3B8: movaps  xmm0, [esp+0B0h+var_40]
0x92E3BD: movaps  xmm1, xmm0
0x92E3C0: shufps  xmm1, xmm0, 0C9h ; 'É'
0x92E3C4: mov     ecx, [esp+0B0h+var_A0]
0x92E3C8: movaps  xmm2, xmm1
0x92E3CB: movaps  xmm1, [esp+0B0h+var_60]
0x92E3D0: movaps  xmm3, xmm1
0x92E3D3: shufps  xmm3, xmm1, 0D2h ; 'Ò'
0x92E3D7: mulps   xmm3, xmm2
0x92E3DA: movaps  xmm2, xmm0
0x92E3DD: shufps  xmm2, xmm0, 0D2h ; 'Ò'
0x92E3E1: mov     eax, [esp+0B0h+var_6C]
0x92E3E5: movaps  xmm0, xmm1
0x92E3E8: shufps  xmm0, xmm1, 0C9h ; 'É'
0x92E3EC: movaps  xmm1, xmm0
0x92E3EF: mulps   xmm1, xmm2
0x92E3F2: subps   xmm1, xmm3
0x92E3F5: movaps  xmm0, xmm1
0x92E3F8: mulps   xmm0, xmm1
0x92E3FB: movaps  xmm2, xmm0
0x92E3FE: shufps  xmm2, xmm0, 55h ; 'U'
0x92E402: addss   xmm2, xmm0
0x92E406: movaps  xmm3, xmm0
0x92E409: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x92E40D: movaps  xmm0, xmm3
0x92E410: movaps  xmm3, [esp+0B0h+var_20]
0x92E418: addss   xmm0, xmm2
0x92E41C: movaps  [esp+0B0h+var_30], xmm0
0x92E424: rsqrtss xmm2, xmm0
0x92E428: movss   dword ptr [esp+0B0h+var_30], xmm2
0x92E431: movaps  xmm2, [esp+0B0h+var_30]
0x92E439: mulss   xmm0, xmm2
0x92E43D: mulss   xmm0, xmm2
0x92E441: subss   xmm3, xmm0
0x92E445: movaps  xmm0, [esp+0B0h+var_10]
0x92E44D: mulss   xmm0, xmm2
0x92E451: shl     edi, 4
0x92E454: add     edi, ecx
0x92E456: mulss   xmm0, xmm3
0x92E45A: mov     [esp+0B0h+var_9C], ebx
0x92E45E: mov     ebx, [esp+0B0h+var_6C]
0x92E462: movaps  xmm2, xmm0
0x92E465: shufps  xmm2, xmm0, 0
0x92E469: mulps   xmm2, xmm1
0x92E46C: movaps  xmmword ptr [edi], xmm2
0x92E46F: movzx   ecx, word ptr [esi+4]
0x92E473: movzx   edx, word ptr [eax+ecx*8+2]
0x92E478: mov     edi, [esp+0B0h+var_44]
0x92E47C: lea     esi, [eax+edx*8]
0x92E47F: cmp     esi, [esp+0B0h+var_78]
0x92E483: jnz     loc_92E310
0x92E489: mov     eax, [esp+0B0h+var_8C]
0x92E48D: mov     esi, [ebp+arg_0]
0x92E490: mov     edx, [esp+0B0h+var_98]
0x92E494: mov     ecx, [esi+8]
0x92E497: inc     eax
0x92E498: cmp     eax, ecx
0x92E49A: mov     [esp+0B0h+var_8C], eax
0x92E49E: jl      loc_92E2A0
0x92E4A4: mov     ecx, [esp+0B0h+var_9C]
0x92E4A8: test    ecx, ecx
0x92E4AA: jle     loc_92E5E9
0x92E4B0: mov     eax, [esp+0B0h+var_A0]
0x92E4B4: xorps   xmm2, xmm2
0x92E4B7: movaps  xmm0, xmmword ptr [eax]
0x92E4BA: add     eax, 10h
0x92E4BD: dec     ecx
0x92E4BE: addps   xmm2, xmm0
0x92E4C1: jnz     short loc_92E4B7
0x92E4C3: mov     ecx, [ebp+arg_C]
0x92E4C6: movaps  xmm0, xmm2
0x92E4C9: mulps   xmm0, xmm2
0x92E4CC: movaps  xmm1, xmm0
0x92E4CF: shufps  xmm1, xmm0, 55h ; 'U'
0x92E4D3: movaps  xmm3, xmm0
0x92E4D6: lea     eax, [esp+0B0h+var_74]
0x92E4DA: addss   xmm1, xmm0
0x92E4DE: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x92E4E2: addss   xmm3, xmm1
0x92E4E6: movss   dword ptr [eax], xmm3
0x92E4EA: fld     [esp+0B0h+var_74]
0x92E4EE: fcomp   dword ptr [ecx+0Ch]
0x92E4F1: fnstsw  ax
0x92E4F3: test    ah, 41h
0x92E4F6: jnz     loc_92E5E9
0x92E4FC: mov     eax, [esp+0B0h+var_9C]
0x92E500: movaps  xmm1, xmm0
0x92E503: shufps  xmm1, xmm0, 55h ; 'U'
0x92E507: addss   xmm1, xmm0
0x92E50B: movaps  xmm3, xmm0
0x92E50E: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x92E512: movaps  xmm0, xmm3
0x92E515: addss   xmm0, xmm1
0x92E519: movaps  [esp+0B0h+var_30], xmm0
0x92E521: rsqrtss xmm1, xmm0
0x92E525: movss   dword ptr [esp+0B0h+var_30], xmm1
0x92E52E: movaps  xmm1, [esp+0B0h+var_30]
0x92E536: mulss   xmm0, xmm1
0x92E53A: mulss   xmm0, xmm1
0x92E53E: mov     [esp+0B0h+var_70], 40400000h
0x92E546: movss   xmm3, [esp+0B0h+var_70]
0x92E54C: subss   xmm3, xmm0
0x92E550: mov     [esp+0B0h+var_80], 3F000000h
0x92E558: movss   xmm0, [esp+0B0h+var_80]
0x92E55E: mulss   xmm0, xmm1
0x92E562: mulss   xmm0, xmm3
0x92E566: movaps  xmm1, xmm0
0x92E569: xor     ecx, ecx
0x92E56B: test    eax, eax
0x92E56D: shufps  xmm1, xmm0, 0
0x92E571: mulps   xmm1, xmm2
0x92E574: jle     short loc_92E5D3
0x92E576: mov     edx, [ebp+arg_C]
0x92E579: fld     dword ptr ds:0A2F948h
0x92E57F: fsub    dword ptr [edx+0Ch]
0x92E582: mov     edx, [esp+0B0h+var_A0]
0x92E586: fstp    [esp+0B0h+var_8C]
0x92E58A: lea     ebx, [ebx+0]
0x92E590: movaps  xmm0, xmmword ptr [edx]
0x92E593: mulps   xmm0, xmm1
0x92E596: movaps  xmm2, xmm0
0x92E599: shufps  xmm2, xmm0, 55h ; 'U'
0x92E59D: movaps  xmm3, xmm0
0x92E5A0: lea     eax, [esp+0B0h+var_7C]
0x92E5A4: addss   xmm2, xmm0
0x92E5A8: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x92E5AC: addss   xmm3, xmm2
0x92E5B0: movss   dword ptr [eax], xmm3
0x92E5B4: fld     [esp+0B0h+var_7C]
0x92E5B8: fcomp   [esp+0B0h+var_8C]
0x92E5BC: fnstsw  ax
0x92E5BE: test    ah, 5
0x92E5C1: jnp     short loc_92E5E5
0x92E5C3: mov     eax, [esp+0B0h+var_9C]
0x92E5C7: inc     ecx
0x92E5C8: add     edx, 10h
0x92E5CB: cmp     ecx, eax
0x92E5CD: jl      short loc_92E590
0x92E5CF: mov     edx, [esp+0B0h+var_98]
0x92E5D3: mov     ecx, [esp+0B0h+var_94]
0x92E5D7: mov     eax, [ebp+arg_10]
0x92E5DA: mov     dword ptr [ecx], 3F800000h
0x92E5E0: mov     byte ptr [eax], 1
0x92E5E3: jmp     short loc_92E5E9
0x92E5E5: mov     edx, [esp+0B0h+var_98]
0x92E5E9: test    edx, edx
0x92E5EB: js      short loc_92E618
0x92E5ED: mov     ecx, [esp+0B0h+var_A0]
0x92E5F1: mov     eax, ds:0BA9DE4h
0x92E5F6: and     edx, 3FFFFFFFh
0x92E5FC: push    14h
0x92E5FE: shl     edx, 4
0x92E601: push    edx
0x92E602: mov     edx, large fs:2Ch
0x92E609: push    ecx
0x92E60A: mov     ecx, [edx+eax*4]
0x92E60D: mov     ecx, [ecx+19Ch]
0x92E613: call    sub_8A75D0
0x92E618: mov     ecx, [esp+0B0h+var_90]
0x92E61C: mov     eax, [esp+0B0h+var_94]
0x92E620: mov     edx, [esp+0B0h+var_88]
0x92E624: inc     ecx
0x92E625: add     eax, 10h
0x92E628: cmp     ecx, edx
0x92E62A: mov     [esp+0B0h+var_90], ecx
0x92E62E: mov     [esp+0B0h+var_94], eax
0x92E632: jl      loc_92E260
0x92E638: pop     edi
0x92E639: pop     esi
0x92E63A: pop     ebx
0x92E63B: mov     esp, ebp
0x92E63D: pop     ebp
0x92E63E: retn
