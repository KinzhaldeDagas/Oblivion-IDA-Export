0x6EF020: sub     esp, 20h
0x6EF023: push    ebx
0x6EF024: push    ebp
0x6EF025: push    esi
0x6EF026: xor     ebx, ebx
0x6EF028: push    edi
0x6EF029: mov     [esp+30h+var_8], ecx
0x6EF02D: mov     [esp+30h+var_14], ebx
0x6EF031: mov     [esp+30h+var_18], ebx
0x6EF035: mov     ecx, [esp+30h+arg_0]
0x6EF039: mov     eax, [ecx]
0x6EF03B: mov     eax, [eax+10h]
0x6EF03E: push    1
0x6EF040: push    4
0x6EF042: lea     edx, [esp+38h+var_1C]
0x6EF046: push    edx
0x6EF047: call    eax
0x6EF049: test    al, al
0x6EF04B: jz      loc_6EF2C1
0x6EF051: mov     ecx, [esp+30h+var_1C]
0x6EF055: sub     esp, 34h
0x6EF058: mov     esi, esp
0x6EF05A: mov     [esi], ebx
0x6EF05C: mov     [esi+4], ebx
0x6EF05F: mov     edi, ebx
0x6EF061: cmp     ebx, edi
0x6EF063: mov     [esp+64h+var_20], ecx
0x6EF067: mov     [esp+64h+var_10], esp
0x6EF06B: mov     [esi+0Ch], ebx
0x6EF06E: mov     [esi+10h], ebx
0x6EF071: mov     [esi+14h], ebx
0x6EF074: jbe     short loc_6EF07B
0x6EF076: call    __invalid_parameter_noinfo
0x6EF07B: mov     ebp, [esi+0Ch]
0x6EF07E: cmp     ebp, [esi+10h]
0x6EF081: jbe     short loc_6EF088
0x6EF083: call    __invalid_parameter_noinfo
0x6EF088: cmp     ebp, edi
0x6EF08A: jz      short loc_6EF0B3
0x6EF08C: mov     eax, [esi+10h]
0x6EF08F: sub     eax, edi
0x6EF091: sar     eax, 2
0x6EF094: test    eax, eax
0x6EF096: lea     ecx, ds:0[eax*4]
0x6EF09D: lea     ebx, [ecx+ebp]
0x6EF0A0: jle     short loc_6EF0AE
0x6EF0A2: push    ecx; Src
0x6EF0A3: push    edi; Src
0x6EF0A4: push    ecx; DstSize
0x6EF0A5: push    ebp; Dst
0x6EF0A6: call    _memmove_s
0x6EF0AB: add     esp, 10h
0x6EF0AE: mov     [esi+10h], ebx
0x6EF0B1: xor     ebx, ebx
0x6EF0B3: mov     edx, [esp+64h+var_14]
0x6EF0B7: mov     eax, [esp+64h+var_18]
0x6EF0BB: lea     edi, [edx+eax]
0x6EF0BE: mov     edx, [esp+64h+var_8]
0x6EF0C2: mov     eax, [esp+64h+var_20]
0x6EF0C6: mov     dword ptr [esi+30h], 0Fh
0x6EF0CD: mov     [esi+2Ch], ebx
0x6EF0D0: mov     ecx, edi
0x6EF0D2: shl     ecx, 4
0x6EF0D5: mov     byte ptr [esi+1Ch], 0
0x6EF0D9: lea     esi, [ecx+edx]
0x6EF0DC: push    eax
0x6EF0DD: mov     ecx, esi
0x6EF0DF: mov     [esp+68h+var_10], edi
0x6EF0E3: call    sub_6EEEE0
0x6EF0E8: xor     ebp, ebp
0x6EF0EA: cmp     [esp+30h+var_1C], ebx
0x6EF0EE: jbe     loc_6EF28D
0x6EF0F4: mov     [esp+30h+var_20], ebx
0x6EF0F8: jmp     short loc_6EF104
0x6EF0FA: align 10h
0x6EF100: mov     edi, [esp+30h+var_10]
0x6EF104: mov     eax, [esi+4]
0x6EF107: cmp     eax, ebx
0x6EF109: jz      short loc_6EF125
0x6EF10B: mov     ecx, [esi+8]
0x6EF10E: sub     ecx, eax
0x6EF110: mov     eax, 4EC4EC4Fh
0x6EF115: imul    ecx
0x6EF117: sar     edx, 4
0x6EF11A: mov     eax, edx
0x6EF11C: shr     eax, 1Fh
0x6EF11F: add     eax, edx
0x6EF121: cmp     ebp, eax
0x6EF123: jb      short loc_6EF12A
0x6EF125: call    __invalid_parameter_noinfo
0x6EF12A: mov     ebx, [esp+30h+arg_4]
0x6EF12E: fldz
0x6EF130: mov     ecx, [ebx+edi*4]
0x6EF133: mov     eax, [esi+4]
0x6EF136: mov     edi, [esp+30h+var_20]
0x6EF13A: push    ecx
0x6EF13B: add     eax, edi
0x6EF13D: fstp    [esp+34h+var_34]; int
0x6EF140: mov     [eax+4], ecx
0x6EF143: push    ecx; int
0x6EF144: lea     ecx, [eax+8]; int
0x6EF147: mov     dword ptr [eax], 1
0x6EF14D: call    sub_527160
0x6EF152: mov     eax, [esi+4]
0x6EF155: test    eax, eax
0x6EF157: jz      short loc_6EF173
0x6EF159: mov     ecx, [esi+8]
0x6EF15C: sub     ecx, eax
0x6EF15E: mov     eax, 4EC4EC4Fh
0x6EF163: imul    ecx
0x6EF165: sar     edx, 4
0x6EF168: mov     eax, edx
0x6EF16A: shr     eax, 1Fh
0x6EF16D: add     eax, edx
0x6EF16F: cmp     ebp, eax
0x6EF171: jb      short loc_6EF178
0x6EF173: call    __invalid_parameter_noinfo
0x6EF178: mov     ecx, [esi+4]
0x6EF17B: mov     eax, [edi+ecx+0Ch]
0x6EF17F: test    eax, eax
0x6EF181: lea     edi, [edi+ecx+8]
0x6EF185: jz      short loc_6EF191
0x6EF187: mov     edx, [edi+8]
0x6EF18A: sub     edx, eax
0x6EF18C: sar     edx, 2
0x6EF18F: jnz     short loc_6EF196
0x6EF191: call    __invalid_parameter_noinfo
0x6EF196: mov     edx, [esp+30h+var_10]
0x6EF19A: mov     edx, [ebx+edx*4]
0x6EF19D: mov     ecx, [esp+30h+arg_0]
0x6EF1A1: mov     edi, [edi+4]
0x6EF1A4: mov     eax, [ecx]
0x6EF1A6: mov     eax, [eax+10h]
0x6EF1A9: push    edx
0x6EF1AA: push    4
0x6EF1AC: push    edi
0x6EF1AD: call    eax
0x6EF1AF: test    al, al
0x6EF1B1: jz      loc_6EF2C1
0x6EF1B7: mov     ebx, [esp+30h+arg_0]
0x6EF1BB: mov     edx, [ebx]
0x6EF1BD: mov     edx, [edx+10h]
0x6EF1C0: push    1
0x6EF1C2: push    4
0x6EF1C4: lea     eax, [esp+38h+var_C]
0x6EF1C8: push    eax
0x6EF1C9: mov     ecx, ebx
0x6EF1CB: call    edx
0x6EF1CD: test    al, al
0x6EF1CF: jz      loc_6EF2C1
0x6EF1D5: mov     eax, [esi+4]
0x6EF1D8: test    eax, eax
0x6EF1DA: jz      short loc_6EF1F6
0x6EF1DC: mov     ecx, [esi+8]
0x6EF1DF: sub     ecx, eax
0x6EF1E1: mov     eax, 4EC4EC4Fh
0x6EF1E6: imul    ecx
0x6EF1E8: sar     edx, 4
0x6EF1EB: mov     eax, edx
0x6EF1ED: shr     eax, 1Fh
0x6EF1F0: add     eax, edx
0x6EF1F2: cmp     ebp, eax
0x6EF1F4: jb      short loc_6EF1FB
0x6EF1F6: call    __invalid_parameter_noinfo
0x6EF1FB: mov     eax, [esi+4]
0x6EF1FE: mov     edi, [esp+30h+var_20]
0x6EF202: mov     edx, [edi+eax+2Ch]
0x6EF206: lea     ecx, [edi+eax+18h]
0x6EF20A: mov     eax, [esp+30h+var_C]
0x6EF20E: cmp     eax, edx
0x6EF210: ja      short loc_6EF21C
0x6EF212: push    0FFFFFFFFh
0x6EF214: push    eax
0x6EF215: call    sub_4134E0
0x6EF21A: jmp     short loc_6EF226
0x6EF21C: push    0
0x6EF21E: sub     eax, edx
0x6EF220: push    eax
0x6EF221: call    sub_6EDAA0
0x6EF226: mov     eax, [esi+4]
0x6EF229: test    eax, eax
0x6EF22B: jz      short loc_6EF247
0x6EF22D: mov     ecx, [esi+8]
0x6EF230: sub     ecx, eax
0x6EF232: mov     eax, 4EC4EC4Fh
0x6EF237: imul    ecx
0x6EF239: sar     edx, 4
0x6EF23C: mov     eax, edx
0x6EF23E: shr     eax, 1Fh
0x6EF241: add     eax, edx
0x6EF243: cmp     ebp, eax
0x6EF245: jb      short loc_6EF24C
0x6EF247: call    __invalid_parameter_noinfo
0x6EF24C: mov     ecx, [esi+4]
0x6EF24F: cmp     dword ptr [edi+ecx+30h], 10h
0x6EF254: lea     eax, [edi+ecx+18h]
0x6EF258: jb      short loc_6EF25F
0x6EF25A: mov     eax, [eax+4]
0x6EF25D: jmp     short loc_6EF262
0x6EF25F: add     eax, 4
0x6EF262: mov     ecx, [esp+30h+var_C]
0x6EF266: mov     edx, [ebx]
0x6EF268: mov     edx, [edx+10h]
0x6EF26B: push    ecx
0x6EF26C: push    1
0x6EF26E: push    eax
0x6EF26F: mov     ecx, ebx
0x6EF271: call    edx
0x6EF273: test    al, al
0x6EF275: jz      short loc_6EF2C1
0x6EF277: add     ebp, 1
0x6EF27A: add     edi, 34h ; '4'
0x6EF27D: xor     ebx, ebx
0x6EF27F: cmp     ebp, [esp+30h+var_1C]
0x6EF283: mov     [esp+30h+var_20], edi
0x6EF287: jb      loc_6EF100
0x6EF28D: mov     eax, [esp+30h+var_18]
0x6EF291: add     eax, 1
0x6EF294: cmp     eax, 2
0x6EF297: mov     [esp+30h+var_18], eax
0x6EF29B: jb      loc_6EF035
0x6EF2A1: mov     eax, [esp+30h+var_14]
0x6EF2A5: add     eax, 2
0x6EF2A8: cmp     eax, 4
0x6EF2AB: mov     [esp+30h+var_14], eax
0x6EF2AF: jb      loc_6EF031
0x6EF2B5: mov     al, 1
0x6EF2B7: pop     edi
0x6EF2B8: pop     esi
0x6EF2B9: pop     ebp
0x6EF2BA: pop     ebx
0x6EF2BB: add     esp, 20h
0x6EF2BE: retn    8
0x6EF2C1: pop     edi
0x6EF2C2: pop     esi
0x6EF2C3: pop     ebp
0x6EF2C4: xor     al, al
0x6EF2C6: pop     ebx
0x6EF2C7: add     esp, 20h
0x6EF2CA: retn    8
