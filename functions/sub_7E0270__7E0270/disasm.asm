0x7E0270: sub     esp, 30h
0x7E0273: push    ebx
0x7E0274: push    ebp
0x7E0275: push    esi
0x7E0276: mov     ebx, ecx
0x7E0278: push    edi
0x7E0279: mov     edi, [esp+40h+a2]
0x7E027D: xor     ecx, ecx
0x7E027F: xor     esi, esi
0x7E0281: mov     eax, edi
0x7E0283: mov     edx, 4
0x7E0288: mul     edx
0x7E028A: seto    cl
0x7E028D: mov     [esp+40h+var_1C], ebx
0x7E0291: mov     [esp+40h+var_20], esi
0x7E0295: neg     ecx
0x7E0297: or      ecx, eax
0x7E0299: push    ecx; Size
0x7E029A: call    FormHeapAlloc
0x7E029F: mov     ebp, eax
0x7E02A1: xor     ecx, ecx
0x7E02A3: mov     eax, edi
0x7E02A5: mov     edx, 2
0x7E02AA: mul     edx
0x7E02AC: seto    cl
0x7E02AF: neg     ecx
0x7E02B1: or      ecx, eax
0x7E02B3: push    ecx; Size
0x7E02B4: call    FormHeapAlloc
0x7E02B9: mov     [esp+48h+Src], eax
0x7E02BD: lea     eax, ds:0[edi*4]
0x7E02C4: push    eax
0x7E02C5: push    esi
0x7E02C6: push    ebp
0x7E02C7: call    __memset
0x7E02CC: mov     ecx, [ebx+0E4h]; this
0x7E02D2: add     esp, 14h
0x7E02D5: call    BSRenderedTexture__GetInnerTexture
0x7E02DA: mov     ecx, [eax+24h]
0x7E02DD: mov     edx, [ecx]
0x7E02DF: mov     eax, [edx+14h]
0x7E02E2: call    eax
0x7E02E4: fld     qword ptr ds:0A2FAA0h
0x7E02EA: mov     ebx, eax
0x7E02EC: xor     eax, eax
0x7E02EE: test    edi, edi
0x7E02F0: mov     [esp+40h+var_24], ebx
0x7E02F4: mov     [esp+40h+var_30], eax
0x7E02F8: jle     short loc_7E0327
0x7E02FA: fild    [esp+40h+a2]
0x7E02FE: fstp    [esp+40h+var_2C]
0x7E0302: fld     [esp+40h+var_2C]
0x7E0306: fild    [esp+40h+var_30]
0x7E030A: add     eax, 1
0x7E030D: cmp     eax, edi
0x7E030F: mov     [esp+40h+var_30], eax
0x7E0313: fadd    st, st(2)
0x7E0315: fstp    [esp+40h+var_14]
0x7E0319: fld     [esp+40h+var_14]
0x7E031D: fdiv    st, st(1)
0x7E031F: fstp    dword ptr [ebp+eax*4-4]
0x7E0323: jl      short loc_7E0306
0x7E0325: fstp    st
0x7E0327: xor     ecx, ecx
0x7E0329: fstp    st
0x7E032B: test    edi, edi
0x7E032D: jle     short loc_7E0397
0x7E032F: mov     eax, edi
0x7E0331: sar     eax, 1
0x7E0333: mov     [esp+40h+var_14], eax
0x7E0337: jmp     short loc_7E0344
0x7E0339: align 10h
0x7E0340: mov     eax, [esp+40h+var_14]
0x7E0344: cmp     ecx, esi
0x7E0346: jle     short loc_7E0360
0x7E0348: fld     dword ptr [ebp+esi*4+0]
0x7E034C: fstp    [esp+40h+var_18]
0x7E0350: fld     dword ptr [ebp+ecx*4+0]
0x7E0354: fstp    dword ptr [ebp+esi*4+0]
0x7E0358: fld     [esp+40h+var_18]
0x7E035C: fstp    dword ptr [ebp+ecx*4+0]
0x7E0360: xor     edx, edx
0x7E0362: cmp     esi, eax
0x7E0364: setnl   dl
0x7E0367: xor     ebx, ebx
0x7E0369: cmp     eax, 2
0x7E036C: setnl   bl
0x7E036F: test    ebx, edx
0x7E0371: jz      short loc_7E038A
0x7E0373: sub     esi, eax
0x7E0375: sar     eax, 1
0x7E0377: xor     edx, edx
0x7E0379: cmp     esi, eax
0x7E037B: setnl   dl
0x7E037E: xor     ebx, ebx
0x7E0380: cmp     eax, 2
0x7E0383: setnl   bl
0x7E0386: test    ebx, edx
0x7E0388: jnz     short loc_7E0373
0x7E038A: add     ecx, 1
0x7E038D: add     esi, eax
0x7E038F: cmp     ecx, edi
0x7E0391: jl      short loc_7E0340
0x7E0393: mov     ebx, [esp+40h+var_24]
0x7E0397: xor     ecx, ecx
0x7E0399: test    edi, edi
0x7E039B: jle     short loc_7E03DE
0x7E039D: fld     qword ptr ds:0A3DDD0h
0x7E03A3: fld     dword ptr [ebp+ecx*4+0]
0x7E03A7: mov     edx, [esp+40h+Src]
0x7E03AB: fnstcw  word ptr [esp+40h+var_30]
0x7E03AF: add     ecx, 1
0x7E03B2: movzx   eax, word ptr [esp+40h+var_30]
0x7E03B7: fmul    st, st(1)
0x7E03B9: or      eax, 0C00h
0x7E03BE: cmp     ecx, edi
0x7E03C0: mov     [esp+40h+var_14], eax
0x7E03C4: fldcw   word ptr [esp+40h+var_14]
0x7E03C8: fistp   [esp+40h+var_14]
0x7E03CC: mov     ax, word ptr [esp+40h+var_14]
0x7E03D1: mov     [edx+ecx*2-2], ax
0x7E03D6: fldcw   word ptr [esp+40h+var_30]
0x7E03DA: jl      short loc_7E03A3
0x7E03DC: fstp    st
0x7E03DE: mov     eax, [ebx]
0x7E03E0: mov     edx, [eax+4Ch]
0x7E03E3: push    0
0x7E03E5: push    0
0x7E03E7: lea     ecx, [esp+48h+var_8]
0x7E03EB: push    ecx
0x7E03EC: push    0
0x7E03EE: push    ebx
0x7E03EF: call    edx
0x7E03F1: mov     esi, [esp+40h+Src]
0x7E03F5: mov     ecx, [esp+40h+Dst]
0x7E03F9: lea     eax, [edi+edi]
0x7E03FC: push    eax; Size
0x7E03FD: push    esi; Src
0x7E03FE: push    ecx; Dst
0x7E03FF: call    _memcpy
0x7E0404: mov     edx, [ebx]
0x7E0406: mov     eax, [edx+50h]
0x7E0409: add     esp, 0Ch
0x7E040C: push    0
0x7E040E: push    ebx
0x7E040F: call    eax
0x7E0411: push    ebp
0x7E0412: call    FormHeapFree
0x7E0417: push    esi
0x7E0418: call    FormHeapFree
0x7E041D: mov     ecx, [esp+48h+var_1C]
0x7E0421: mov     eax, [ecx+0E0h]
0x7E0427: add     esp, 8
0x7E042A: test    eax, eax
0x7E042C: jz      short loc_7E043B
0x7E042E: mov     ebx, [esp+40h+var_24]
0x7E0432: mov     cl, byte ptr [esp+40h+var_20]
0x7E0436: add     eax, 20h ; ' '
0x7E0439: jmp     short loc_7E044A
0x7E043B: xor     ebx, ebx
0x7E043D: mov     [esp+40h+var_24], ebx
0x7E0441: lea     eax, [esp+40h+var_24]
0x7E0445: mov     ecx, 1
0x7E044A: test    cl, 1
0x7E044D: mov     esi, [eax]
0x7E044F: jz      short loc_7E046D
0x7E0451: test    ebx, ebx
0x7E0453: jz      short loc_7E046D
0x7E0455: lea     edx, [ebx+4]
0x7E0458: push    edx; lpAddend
0x7E0459: call    dword ptr ds:0A2807Ch
0x7E045F: test    eax, eax
0x7E0461: jnz     short loc_7E046D
0x7E0463: mov     eax, [ebx]
0x7E0465: mov     edx, [eax]
0x7E0467: push    1
0x7E0469: mov     ecx, ebx
0x7E046B: call    edx
0x7E046D: mov     ecx, [esi+24h]
0x7E0470: mov     eax, [ecx]
0x7E0472: mov     edx, [eax+14h]
0x7E0475: call    edx
0x7E0477: mov     [esp+40h+var_24], eax
0x7E047B: xor     ecx, ecx
0x7E047D: mov     eax, edi
0x7E047F: shl     eax, 6
0x7E0482: mov     edx, 4
0x7E0487: mul     edx
0x7E0489: seto    cl
0x7E048C: neg     ecx
0x7E048E: or      ecx, eax
0x7E0490: push    ecx; Size
0x7E0491: call    FormHeapAlloc
0x7E0496: mov     esi, edi
0x7E0498: shl     esi, 8
0x7E049B: push    esi
0x7E049C: mov     ebx, eax
0x7E049E: push    0
0x7E04A0: push    ebx
0x7E04A1: mov     [esp+50h+var_14], ebx
0x7E04A5: mov     [esp+50h+var_C], esi
0x7E04A9: call    __memset
0x7E04AE: mov     eax, [esp+50h+a3]
0x7E04B2: add     esp, 10h
0x7E04B5: test    eax, eax
0x7E04B7: mov     ebp, 1
0x7E04BC: jle     loc_7E0666
0x7E04C2: fld     qword ptr ds:0A2FAA0h
0x7E04C8: mov     [esp+40h+Src], 0
0x7E04D0: mov     [esp+40h+var_18], eax
0x7E04D4: mov     ebx, ebp
0x7E04D6: add     ebp, ebp
0x7E04D8: mov     eax, ebp
0x7E04DA: neg     eax
0x7E04DC: mov     [esp+40h+a3], eax
0x7E04E0: fild    [esp+40h+a3]
0x7E04E4: mov     [esp+40h+var_10], ebp
0x7E04E8: fdivr   qword ptr ds:0A91CF0h
0x7E04EE: fstp    [esp+40h+var_2C]
0x7E04F2: fmul    [esp+40h+var_2C]
0x7E04F6: fstp    [esp+40h+a3]
0x7E04FA: fld     [esp+40h+a3]
0x7E04FE: call    __CIsin
0x7E0503: fstp    [esp+40h+a3]
0x7E0507: fld     [esp+40h+a3]
0x7E050B: fstp    [esp+40h+a3]
0x7E050F: fld     [esp+40h+a3]
0x7E0513: fld     qword ptr ds:0A3F400h
0x7E0519: fmul    st, st(1)
0x7E051B: fmulp   st(1), st
0x7E051D: fstp    [esp+40h+var_30]
0x7E0521: fld     [esp+40h+var_2C]
0x7E0525: call    __CIsin
0x7E052A: fstp    [esp+40h+a3]
0x7E052E: fld     [esp+40h+a3]
0x7E0532: xor     eax, eax
0x7E0534: test    ebx, ebx
0x7E0536: fstp    [esp+40h+var_20]
0x7E053A: fld1
0x7E053C: mov     [esp+40h+var_1C], eax
0x7E0540: fstp    [esp+40h+var_2C]
0x7E0544: fldz
0x7E0546: fstp    [esp+40h+a3]
0x7E054A: jle     loc_7E064B
0x7E0550: fld     [esp+40h+var_30]
0x7E0554: fld     [esp+40h+var_20]
0x7E0558: fld     qword ptr ds:0A2FAA0h
0x7E055E: cmp     eax, edi
0x7E0560: fld     [esp+40h+var_2C]
0x7E0564: fld     [esp+40h+a3]
0x7E0568: mov     esi, eax
0x7E056A: mov     [esp+40h+var_30], esi
0x7E056E: jge     loc_7E060A
0x7E0574: mov     ecx, [esp+40h+Src]
0x7E0578: fstp    st(3)
0x7E057A: fild    [esp+40h+a2]
0x7E057E: add     eax, ecx
0x7E0580: mov     ecx, eax
0x7E0582: mov     edx, ebp
0x7E0584: mov     ebp, [esp+40h+var_14]
0x7E0588: fstp    [esp+40h+var_2C]
0x7E058C: fld     [esp+40h+var_2C]
0x7E0590: add     eax, ebx
0x7E0592: shl     ecx, 4
0x7E0595: shl     edx, 4
0x7E0598: shl     eax, 4
0x7E059B: lea     ecx, [ecx+ebp+8]
0x7E059F: lea     eax, [eax+ebp+8]
0x7E05A3: jmp     short loc_7E05A9
0x7E05A5: fxch    st(3)
0x7E05A7: fxch    st(1)
0x7E05A9: lea     ebp, [ebx+esi]
0x7E05AC: mov     [esp+40h+a3], ebp
0x7E05B0: fild    [esp+40h+a3]
0x7E05B4: mov     ebp, [esp+40h+var_10]
0x7E05B8: add     esi, ebp
0x7E05BA: fadd    st, st(3)
0x7E05BC: fdiv    st, st(1)
0x7E05BE: fld     st
0x7E05C0: fchs
0x7E05C2: fstp    dword ptr [eax-8]
0x7E05C5: fild    [esp+40h+var_30]
0x7E05C9: mov     [esp+40h+var_30], esi
0x7E05CD: fadd    st, st(4)
0x7E05CF: fdiv    st, st(2)
0x7E05D1: fstp    [esp+40h+a3]
0x7E05D5: fld     [esp+40h+a3]
0x7E05D9: fst     dword ptr [eax-4]
0x7E05DC: fstp    dword ptr [ecx-4]
0x7E05DF: fstp    dword ptr [ecx-8]
0x7E05E2: fxch    st(1)
0x7E05E4: fst     dword ptr [eax]
0x7E05E6: fxch    st(3)
0x7E05E8: fst     dword ptr [eax+4]
0x7E05EB: add     eax, edx
0x7E05ED: fxch    st(3)
0x7E05EF: fst     dword ptr [ecx]
0x7E05F1: fxch    st(3)
0x7E05F3: fst     dword ptr [ecx+4]
0x7E05F6: add     ecx, edx
0x7E05F8: cmp     esi, edi
0x7E05FA: jl      short loc_7E05A5
0x7E05FC: mov     eax, [esp+40h+var_1C]
0x7E0600: fstp    st(1)
0x7E0602: fld     [esp+40h+var_20]
0x7E0606: fxch    st(3)
0x7E0608: fxch    st(1)
0x7E060A: fxch    st(1)
0x7E060C: add     eax, 1
0x7E060F: cmp     eax, ebx
0x7E0611: fst     [esp+40h+a3]
0x7E0615: fld     st
0x7E0617: mov     [esp+40h+var_1C], eax
0x7E061B: fmul    st, st(5)
0x7E061D: fld     st(2)
0x7E061F: fmul    st, st(5)
0x7E0621: fsubp   st(1), st
0x7E0623: faddp   st(1), st
0x7E0625: fstp    [esp+40h+var_2C]
0x7E0629: fld     st
0x7E062B: fmul    st, st(4)
0x7E062D: fld     st(3)
0x7E062F: fmul    [esp+40h+a3]
0x7E0633: faddp   st(1), st
0x7E0635: faddp   st(1), st
0x7E0637: fstp    [esp+40h+a3]
0x7E063B: jl      loc_7E055E
0x7E0641: mov     esi, [esp+40h+var_C]
0x7E0645: fstp    st(1)
0x7E0647: fstp    st(1)
0x7E0649: jmp     short loc_7E0651
0x7E064B: fld     qword ptr ds:0A2FAA0h
0x7E0651: add     [esp+40h+Src], edi
0x7E0655: sub     [esp+40h+var_18], 1
0x7E065A: jnz     loc_7E04D4
0x7E0660: mov     ebx, [esp+40h+var_14]
0x7E0664: fstp    st
0x7E0666: mov     edi, [esp+40h+var_24]
0x7E066A: mov     edx, [edi]
0x7E066C: mov     ecx, [edx+4Ch]
0x7E066F: push    0
0x7E0671: push    0
0x7E0673: lea     eax, [esp+48h+var_8]
0x7E0677: push    eax
0x7E0678: push    0
0x7E067A: push    edi
0x7E067B: call    ecx
0x7E067D: mov     edx, [esp+40h+Dst]
0x7E0681: push    esi; Size
0x7E0682: push    ebx; Src
0x7E0683: push    edx; Dst
0x7E0684: call    _memcpy
0x7E0689: mov     eax, [edi]
0x7E068B: mov     ecx, [eax+50h]
0x7E068E: add     esp, 0Ch
0x7E0691: push    0
0x7E0693: push    edi
0x7E0694: call    ecx
0x7E0696: push    ebx
0x7E0697: call    FormHeapFree
0x7E069C: add     esp, 4
0x7E069F: pop     edi
0x7E06A0: pop     esi
0x7E06A1: pop     ebp
0x7E06A2: pop     ebx
0x7E06A3: add     esp, 30h
0x7E06A6: retn    8
