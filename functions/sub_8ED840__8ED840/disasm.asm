0x8ED840: push    ebp
0x8ED841: mov     ebp, esp
0x8ED843: and     esp, 0FFFFFFF0h
0x8ED846: sub     esp, 134h
0x8ED84C: mov     eax, ds:0B30AACh
0x8ED851: mov     edx, ds:0BA9DE4h
0x8ED857: push    ebx
0x8ED858: push    esi
0x8ED859: mov     esi, ecx
0x8ED85B: mov     ecx, large fs:2Ch
0x8ED862: mov     [esp+13Ch+var_4], eax
0x8ED869: mov     eax, [ecx+edx*4]
0x8ED86C: mov     ebx, [eax+1A8h]
0x8ED872: push    edi
0x8ED873: mov     edi, [eax+1A4h]
0x8ED879: cmp     edi, ebx
0x8ED87B: jnb     short loc_8ED8A1
0x8ED87D: mov     edi, eax
0x8ED87F: mov     ecx, [edi+1A4h]
0x8ED885: mov     dword ptr [ecx], offset aTtrcheightfild; "TtrcHeightFild"
0x8ED88B: rdtsc
0x8ED88D: mov     [esp+140h+var_130], eax
0x8ED891: mov     eax, [esp+140h+var_130]
0x8ED895: mov     [ecx+4], eax
0x8ED898: add     ecx, 0Ch
0x8ED89B: mov     [edi+1A4h], ecx
0x8ED8A1: mov     edx, [ebp+arg_0]
0x8ED8A4: movaps  xmm0, xmmword ptr [edx]
0x8ED8A7: movaps  xmm1, xmmword ptr [esi+30h]
0x8ED8AB: movaps  xmm3, xmmword ptr [esi+40h]
0x8ED8AF: movaps  xmm2, xmmword ptr ds:0A97DD0h
0x8ED8B6: movaps  xmm4, xmm0
0x8ED8B9: addps   xmm4, xmm3
0x8ED8BC: mulps   xmm4, xmm1
0x8ED8BF: addps   xmm4, xmm2
0x8ED8C2: movaps  [esp+140h+var_80], xmm4
0x8ED8CA: mov     ecx, dword ptr [esp+140h+var_80+8]
0x8ED8D1: mov     eax, dword ptr [esp+140h+var_80]
0x8ED8D8: shr     ecx, 6
0x8ED8DB: shr     eax, 6
0x8ED8DE: movsx   ecx, cx
0x8ED8E1: mulps   xmm0, xmm1
0x8ED8E4: movsx   edi, ax
0x8ED8E7: movaps  xmmword ptr [esp+140h+var_F4+4], xmm0
0x8ED8EC: movaps  xmm0, xmmword ptr [edx+10h]
0x8ED8F0: mov     edx, [esi]
0x8ED8F2: lea     eax, [esp+140h+var_12C]
0x8ED8F6: mov     [esp+140h+var_114], ecx
0x8ED8FA: mulps   xmm0, xmm1
0x8ED8FD: push    eax
0x8ED8FE: mov     ecx, esi
0x8ED900: mov     [esp+144h+var_11C], edi
0x8ED904: movaps  xmmword ptr [esp+144h+var_AC+0Ch], xmm0
0x8ED90C: call    dword ptr [edx+28h]
0x8ED90F: mov     al, byte ptr [esp+140h+var_12C]
0x8ED913: test    al, al
0x8ED915: mov     ecx, dword ptr [esp+140h+var_F4+8]
0x8ED919: mov     edx, dword ptr [esp+140h+var_AC+10h]
0x8ED920: mov     dword ptr [esp+140h+var_F4+10h], ecx
0x8ED924: mov     dword ptr [esp+140h+var_AC+18h], edx
0x8ED92B: jnz     short loc_8ED949
0x8ED92D: fld     dword ptr [esp+140h+var_F4+0Ch]
0x8ED931: fadd    dword ptr [esp+140h+var_F4+4]
0x8ED935: fstp    dword ptr [esp+140h+var_F4+8]
0x8ED939: fld     dword ptr [esp+140h+var_AC+14h]
0x8ED940: fadd    dword ptr [esp+140h+var_AC+0Ch]
0x8ED947: jmp     short loc_8ED963
0x8ED949: fld     dword ptr [esp+140h+var_F4+4]
0x8ED94D: fsub    dword ptr [esp+140h+var_F4+0Ch]
0x8ED951: fstp    dword ptr [esp+140h+var_F4+8]
0x8ED955: fld     dword ptr [esp+140h+var_AC+0Ch]
0x8ED95C: fsub    dword ptr [esp+140h+var_AC+14h]
0x8ED963: fstp    dword ptr [esp+140h+var_AC+10h]
0x8ED96A: or      ecx, 0FFFFFFFFh
0x8ED96D: fld     dword ptr [esp+140h+var_AC+0Ch]
0x8ED974: fsub    dword ptr [esp+140h+var_F4+4]
0x8ED978: fst     [esp+140h+var_124]
0x8ED97C: fabs
0x8ED97E: fst     [esp+140h+var_40]
0x8ED985: fcomp   dword ptr ds:0A9B0D8h
0x8ED98B: fnstsw  ax
0x8ED98D: test    ah, 5
0x8ED990: jp      short loc_8ED9A6
0x8ED992: mov     [esp+140h+var_D0], 0
0x8ED99A: mov     edx, ecx
0x8ED99C: mov     [esp+140h+var_E0], 7F7FFFFFh
0x8ED9A4: jmp     short loc_8ED9F2
0x8ED9A6: fld     dword ptr ds:0A2F948h
0x8ED9AC: fdiv    [esp+140h+var_124]
0x8ED9B0: fst     dword ptr [esp+140h+var_80]
0x8ED9B7: fld     [esp+140h+var_124]
0x8ED9BB: fcomp   dword ptr ds:0A2FAA8h
0x8ED9C1: fnstsw  ax
0x8ED9C3: test    ah, 5
0x8ED9C6: jp      short loc_8ED9D4
0x8ED9C8: fld     st
0x8ED9CA: mov     edx, ecx
0x8ED9CC: fchs
0x8ED9CE: fstp    [esp+140h+var_D0]
0x8ED9D2: jmp     short loc_8ED9E2
0x8ED9D4: inc     edi
0x8ED9D5: fst     [esp+140h+var_D0]
0x8ED9D9: mov     edx, 1
0x8ED9DE: mov     [esp+140h+var_11C], edi
0x8ED9E2: fild    [esp+140h+var_11C]
0x8ED9E6: fsub    dword ptr [esp+140h+var_F4+4]
0x8ED9EA: fmul    st, st(1)
0x8ED9EC: fstp    [esp+140h+var_E0]
0x8ED9F0: fstp    st
0x8ED9F2: fld     dword ptr [esp+140h+var_AC+10h]
0x8ED9F9: mov     [esp+140h+var_FC], edx
0x8ED9FD: fsub    dword ptr [esp+140h+var_F4+8]
0x8EDA01: fst     [esp+140h+var_124]
0x8EDA05: fabs
0x8EDA07: fcomp   dword ptr ds:0A9B0D8h
0x8EDA0D: fnstsw  ax
0x8EDA0F: test    ah, 5
0x8EDA12: jp      short loc_8EDA2A
0x8EDA14: mov     [esp+140h+var_CC], 0
0x8EDA1C: mov     [esp+140h+var_F8], ecx
0x8EDA20: mov     [esp+140h+var_DC], 7F7FFFFFh
0x8EDA28: jmp     short loc_8EDA78
0x8EDA2A: fld     dword ptr ds:0A2F948h
0x8EDA30: fdiv    [esp+140h+var_124]
0x8EDA34: fld     [esp+140h+var_124]
0x8EDA38: fcomp   dword ptr ds:0A2FAA8h
0x8EDA3E: fnstsw  ax
0x8EDA40: test    ah, 5
0x8EDA43: jp      short loc_8EDA53
0x8EDA45: fld     st
0x8EDA47: mov     [esp+140h+var_F8], ecx
0x8EDA4B: fchs
0x8EDA4D: fstp    [esp+140h+var_CC]
0x8EDA51: jmp     short loc_8EDA68
0x8EDA53: mov     eax, [esp+140h+var_118]
0x8EDA57: fst     [esp+140h+var_CC]
0x8EDA5B: inc     eax
0x8EDA5C: mov     [esp+140h+var_F8], 1
0x8EDA64: mov     [esp+140h+var_118], eax
0x8EDA68: fild    [esp+140h+var_118]
0x8EDA6C: fsub    dword ptr [esp+140h+var_F4+8]
0x8EDA70: fmul    st, st(1)
0x8EDA72: fstp    [esp+140h+var_DC]
0x8EDA76: fstp    st
0x8EDA78: fld     dword ptr [esp+140h+var_AC+14h]
0x8EDA7F: mov     ebx, [esp+140h+var_114]
0x8EDA83: fsub    dword ptr [esp+140h+var_F4+0Ch]
0x8EDA87: fst     [esp+140h+var_124]
0x8EDA8B: fabs
0x8EDA8D: fst     [esp+140h+var_B0]
0x8EDA94: fcomp   dword ptr ds:0A9B0D8h
0x8EDA9A: fnstsw  ax
0x8EDA9C: test    ah, 5
0x8EDA9F: jp      short loc_8EDAB7
0x8EDAA1: mov     [esp+140h+var_C8], 0
0x8EDAA9: mov     dword ptr [esp+140h+var_F4], ecx
0x8EDAAD: mov     [esp+140h+var_D8], 7F7FFFFFh
0x8EDAB5: jmp     short loc_8EDB08
0x8EDAB7: fld     dword ptr ds:0A2F948h
0x8EDABD: fdiv    [esp+140h+var_124]
0x8EDAC1: fst     dword ptr [esp+140h+var_80+8]
0x8EDAC8: fld     [esp+140h+var_124]
0x8EDACC: fcomp   dword ptr ds:0A2FAA8h
0x8EDAD2: fnstsw  ax
0x8EDAD4: test    ah, 5
0x8EDAD7: jp      short loc_8EDAE7
0x8EDAD9: fld     st
0x8EDADB: mov     dword ptr [esp+140h+var_F4], ecx
0x8EDADF: fchs
0x8EDAE1: fstp    [esp+140h+var_C8]
0x8EDAE5: jmp     short loc_8EDAF8
0x8EDAE7: inc     ebx
0x8EDAE8: fst     [esp+140h+var_C8]
0x8EDAEC: mov     dword ptr [esp+140h+var_F4], 1
0x8EDAF4: mov     [esp+140h+var_114], ebx
0x8EDAF8: fild    [esp+140h+var_114]
0x8EDAFC: fsub    dword ptr [esp+140h+var_F4+0Ch]
0x8EDB00: fmul    st, st(1)
0x8EDB02: fstp    [esp+140h+var_D8]
0x8EDB06: fstp    st
0x8EDB08: fld     [esp+140h+var_C8]
0x8EDB0C: fadd    [esp+140h+var_D0]
0x8EDB10: fld     dword ptr ds:0A2FAA8h
0x8EDB16: fucompp
0x8EDB18: fnstsw  ax
0x8EDB1A: test    ah, 44h
0x8EDB1D: jnp     loc_8EE795
0x8EDB23: fld     [esp+140h+var_CC]
0x8EDB27: fadd    [esp+140h+var_D0]
0x8EDB2B: fld     dword ptr ds:0A2FAA8h
0x8EDB31: fucompp
0x8EDB33: fnstsw  ax
0x8EDB35: test    ah, 44h
0x8EDB38: jnp     loc_8EE795
0x8EDB3E: fld     [esp+140h+var_CC]
0x8EDB42: fadd    [esp+140h+var_C8]
0x8EDB46: fld     dword ptr ds:0A2FAA8h
0x8EDB4C: fucompp
0x8EDB4E: fnstsw  ax
0x8EDB50: test    ah, 44h
0x8EDB53: jnp     loc_8EE795
0x8EDB59: test    edx, edx
0x8EDB5B: mov     eax, dword ptr [esp+140h+var_F4+4]
0x8EDB5F: mov     ecx, dword ptr [esp+140h+var_F4+8]
0x8EDB63: mov     dword ptr [esp+140h+var_C4+4], eax
0x8EDB6A: mov     eax, dword ptr [esp+140h+var_F4+0Ch]
0x8EDB6E: mov     dword ptr [esp+140h+var_C4+8], ecx
0x8EDB75: mov     ecx, dword ptr [esp+140h+var_F4+10h]
0x8EDB79: mov     dword ptr [esp+140h+var_C4+0Ch], eax
0x8EDB80: mov     [esp+140h+var_B4], ecx
0x8EDB87: mov     [esp+140h+var_D4], edi
0x8EDB8B: jle     short loc_8EDBF9
0x8EDB8D: test    edi, edi
0x8EDB8F: jg      loc_8EDD24
0x8EDB95: fld     dword ptr [esp+140h+var_AC+0Ch]
0x8EDB9C: fcomp   dword ptr ds:0A2FAA8h
0x8EDBA2: fnstsw  ax
0x8EDBA4: test    ah, 5
0x8EDBA7: jp      short loc_8EDBE8
0x8EDBA9: mov     ecx, large fs:2Ch
0x8EDBB0: mov     edx, ds:0BA9DE4h
0x8EDBB6: mov     eax, [ecx+edx*4]
0x8EDBB9: mov     esi, [eax+1A4h]
0x8EDBBF: cmp     esi, [eax+1A8h]
0x8EDBC5: jnb     loc_8EEB9D
0x8EDBCB: mov     esi, eax
0x8EDBCD: mov     ecx, [esi+1A4h]
0x8EDBD3: mov     dword ptr [ecx], offset aEt; "Et"
0x8EDBD9: rdtsc
0x8EDBDB: mov     [esp+140h+var_130], eax
0x8EDBDF: mov     edx, [esp+140h+var_130]
0x8EDBE3: jmp     loc_8EEB91
0x8EDBE8: fld     [esp+140h+var_D0]
0x8EDBEC: mov     edi, 1
0x8EDBF1: fmul    dword ptr [esp+140h+var_F4+4]
0x8EDBF5: fchs
0x8EDBF7: jmp     short loc_8EDC6E
0x8EDBF9: mov     eax, [esi+0Ch]
0x8EDBFC: lea     ecx, [eax-2]
0x8EDBFF: cmp     edi, ecx
0x8EDC01: jle     loc_8EDD24
0x8EDC07: dec     eax
0x8EDC08: mov     [esp+140h+var_130], eax
0x8EDC0C: fild    [esp+140h+var_130]
0x8EDC10: fld     dword ptr [esp+140h+var_AC+0Ch]
0x8EDC17: fcomp   st(1)
0x8EDC19: fnstsw  ax
0x8EDC1B: test    ah, 41h
0x8EDC1E: jnz     short loc_8EDC64
0x8EDC20: mov     ecx, large fs:2Ch
0x8EDC27: fstp    st
0x8EDC29: mov     edx, ds:0BA9DE4h
0x8EDC2F: mov     eax, [ecx+edx*4]
0x8EDC32: mov     esi, [eax+1A4h]
0x8EDC38: cmp     esi, [eax+1A8h]
0x8EDC3E: jnb     loc_8EEB9D
0x8EDC44: mov     esi, eax
0x8EDC46: mov     ecx, [esi+1A4h]
0x8EDC4C: mov     dword ptr [ecx], offset aEt; "Et"
0x8EDC52: rdtsc
0x8EDC54: mov     [esp+140h+var_130], eax
0x8EDC58: mov     eax, [esp+140h+var_130]
0x8EDC5C: mov     [ecx+4], eax
0x8EDC5F: jmp     loc_8EEB94
0x8EDC64: fsubr   dword ptr [esp+140h+var_F4+4]
0x8EDC68: mov     edi, ecx
0x8EDC6A: fmul    [esp+140h+var_D0]
0x8EDC6E: fld     [esp+140h+var_D0]
0x8EDC72: movaps  xmm2, xmmword ptr ds:0A6DFE0h
0x8EDC79: fadd    st, st(1)
0x8EDC7B: mov     [esp+140h+var_11C], edi
0x8EDC7F: fstp    [esp+140h+var_E0]
0x8EDC83: fst     [esp+140h+var_130]
0x8EDC87: movss   xmm0, [esp+140h+var_130]
0x8EDC8D: fmul    [esp+140h+var_B0]
0x8EDC94: shufps  xmm0, xmm0, 0
0x8EDC98: subps   xmm2, xmm0
0x8EDC9B: mulps   xmm2, xmmword ptr [esp+140h+var_F4+4]
0x8EDCA0: movaps  xmm1, xmm0
0x8EDCA3: fstp    [esp+140h+var_130]
0x8EDCA7: mulps   xmm1, xmmword ptr [esp+140h+var_AC+0Ch]
0x8EDCAF: addps   xmm2, xmm1
0x8EDCB2: movaps  [esp+140h+var_C4+4], xmm2
0x8EDCBA: fld     [esp+140h+var_130]
0x8EDCBE: fistp   [esp+140h+var_128]
0x8EDCC2: mov     ecx, [esp+140h+var_128]
0x8EDCC6: mov     ebx, dword ptr [esp+140h+var_F4]
0x8EDCCA: mov     eax, [esp+140h+var_114]
0x8EDCCE: imul    ecx, ebx
0x8EDCD1: lea     ecx, [eax+ecx-2]
0x8EDCD5: mov     [esp+140h+var_114], ecx
0x8EDCD9: fild    [esp+140h+var_114]
0x8EDCDD: fcomp   dword ptr [esp+140h+var_C4+0Ch]
0x8EDCE4: fnstsw  ax
0x8EDCE6: test    ah, 41h
0x8EDCE9: jp      short loc_8EDD07
0x8EDCEB: jmp     short loc_8EDCF0
0x8EDCED: align 10h
0x8EDCF0: inc     ecx
0x8EDCF1: mov     [esp+140h+var_114], ecx
0x8EDCF5: fild    [esp+140h+var_114]
0x8EDCF9: fcomp   dword ptr [esp+140h+var_C4+0Ch]
0x8EDD00: fnstsw  ax
0x8EDD02: test    ah, 41h
0x8EDD05: jnp     short loc_8EDCF0
0x8EDD07: sar     ebx, 1
0x8EDD09: add     ecx, ebx
0x8EDD0B: mov     [esp+140h+var_114], ecx
0x8EDD0F: fild    [esp+140h+var_114]
0x8EDD13: fsub    dword ptr [esp+140h+var_F4+0Ch]
0x8EDD17: fmul    dword ptr [esp+140h+var_80+8]
0x8EDD1E: fstp    [esp+140h+var_D8]
0x8EDD22: jmp     short loc_8EDD28
0x8EDD24: mov     ecx, [esp+140h+var_114]
0x8EDD28: mov     eax, dword ptr [esp+140h+var_F4]
0x8EDD2C: test    eax, eax
0x8EDD2E: jle     short loc_8EDD9C
0x8EDD30: test    ecx, ecx
0x8EDD32: jg      loc_8EDEC2
0x8EDD38: fld     dword ptr [esp+140h+var_AC+14h]
0x8EDD3F: fcomp   dword ptr ds:0A2FAA8h
0x8EDD45: fnstsw  ax
0x8EDD47: test    ah, 5
0x8EDD4A: jp      short loc_8EDD8B
0x8EDD4C: mov     ecx, large fs:2Ch
0x8EDD53: mov     edx, ds:0BA9DE4h
0x8EDD59: mov     eax, [ecx+edx*4]
0x8EDD5C: mov     esi, [eax+1A4h]
0x8EDD62: cmp     esi, [eax+1A8h]
0x8EDD68: jnb     loc_8EEB9D
0x8EDD6E: mov     esi, eax
0x8EDD70: mov     ecx, [esi+1A4h]
0x8EDD76: mov     dword ptr [ecx], offset aEt; "Et"
0x8EDD7C: rdtsc
0x8EDD7E: mov     [esp+140h+var_130], eax
0x8EDD82: mov     edx, [esp+140h+var_130]
0x8EDD86: jmp     loc_8EEB91
0x8EDD8B: fld     [esp+140h+var_C8]
0x8EDD8F: mov     ecx, 1
0x8EDD94: fmul    dword ptr [esp+140h+var_F4+0Ch]
0x8EDD98: fchs
0x8EDD9A: jmp     short loc_8EDE11
0x8EDD9C: mov     eax, [esi+10h]
0x8EDD9F: lea     ebx, [eax-2]
0x8EDDA2: cmp     ecx, ebx
0x8EDDA4: jle     loc_8EDEC2
0x8EDDAA: dec     eax
0x8EDDAB: mov     [esp+140h+var_130], eax
0x8EDDAF: fild    [esp+140h+var_130]
0x8EDDB3: fld     dword ptr [esp+140h+var_AC+14h]
0x8EDDBA: fcomp   st(1)
0x8EDDBC: fnstsw  ax
0x8EDDBE: test    ah, 41h
0x8EDDC1: jnz     short loc_8EDE07
0x8EDDC3: mov     ecx, large fs:2Ch
0x8EDDCA: fstp    st
0x8EDDCC: mov     edx, ds:0BA9DE4h
0x8EDDD2: mov     eax, [ecx+edx*4]
0x8EDDD5: mov     esi, [eax+1A4h]
0x8EDDDB: cmp     esi, [eax+1A8h]
0x8EDDE1: jnb     loc_8EEB9D
0x8EDDE7: mov     esi, eax
0x8EDDE9: mov     ecx, [esi+1A4h]
0x8EDDEF: mov     dword ptr [ecx], offset aEt; "Et"
0x8EDDF5: rdtsc
0x8EDDF7: mov     [esp+140h+var_130], eax
0x8EDDFB: mov     eax, [esp+140h+var_130]
0x8EDDFF: mov     [ecx+4], eax
0x8EDE02: jmp     loc_8EEB94
0x8EDE07: fsubr   dword ptr [esp+140h+var_F4+0Ch]
0x8EDE0B: mov     ecx, ebx
0x8EDE0D: fmul    [esp+140h+var_C8]
0x8EDE11: fld     [esp+140h+var_C8]
0x8EDE15: movaps  xmm2, xmmword ptr ds:0A6DFE0h
0x8EDE1C: fadd    st, st(1)
0x8EDE1E: mov     [esp+140h+var_114], ecx
0x8EDE22: fstp    [esp+140h+var_D8]
0x8EDE26: fst     [esp+140h+var_130]
0x8EDE2A: movss   xmm0, [esp+140h+var_130]
0x8EDE30: fmul    [esp+140h+var_40]
0x8EDE37: shufps  xmm0, xmm0, 0
0x8EDE3B: subps   xmm2, xmm0
0x8EDE3E: mulps   xmm2, xmmword ptr [esp+140h+var_F4+4]
0x8EDE43: movaps  xmm1, xmm0
0x8EDE46: fstp    [esp+140h+var_130]
0x8EDE4A: mulps   xmm1, xmmword ptr [esp+140h+var_AC+0Ch]
0x8EDE52: addps   xmm2, xmm1
0x8EDE55: movaps  [esp+140h+var_C4+4], xmm2
0x8EDE5D: fld     [esp+140h+var_130]
0x8EDE61: fistp   [esp+140h+var_128]
0x8EDE65: mov     eax, [esp+140h+var_128]
0x8EDE69: mov     edi, [esp+140h+var_D4]
0x8EDE6D: imul    eax, edx
0x8EDE70: lea     edi, [eax+edi-2]
0x8EDE74: mov     [esp+140h+var_11C], edi
0x8EDE78: fild    [esp+140h+var_11C]
0x8EDE7C: fcomp   dword ptr [esp+140h+var_C4+4]
0x8EDE83: fnstsw  ax
0x8EDE85: test    ah, 41h
0x8EDE88: jp      short loc_8EDEA7
0x8EDE8A: lea     ebx, [ebx+0]
0x8EDE90: inc     edi
0x8EDE91: mov     [esp+140h+var_11C], edi
0x8EDE95: fild    [esp+140h+var_11C]
0x8EDE99: fcomp   dword ptr [esp+140h+var_C4+4]
0x8EDEA0: fnstsw  ax
0x8EDEA2: test    ah, 41h
0x8EDEA5: jnp     short loc_8EDE90
0x8EDEA7: sar     edx, 1
0x8EDEA9: add     edi, edx
0x8EDEAB: mov     [esp+140h+var_11C], edi
0x8EDEAF: fild    [esp+140h+var_11C]
0x8EDEB3: fsub    dword ptr [esp+140h+var_F4+4]
0x8EDEB7: fmul    dword ptr [esp+140h+var_80]
0x8EDEBE: fstp    [esp+140h+var_E0]
0x8EDEC2: mov     eax, [esi+0Ch]
0x8EDEC5: cmp     edi, eax
0x8EDEC7: jb      short loc_8EDF08
0x8EDEC9: mov     ecx, large fs:2Ch
0x8EDED0: mov     edx, ds:0BA9DE4h
0x8EDED6: mov     eax, [ecx+edx*4]
0x8EDED9: mov     esi, [eax+1A4h]
0x8EDEDF: cmp     esi, [eax+1A8h]
0x8EDEE5: jnb     loc_8EEB9D
0x8EDEEB: mov     esi, eax
0x8EDEED: mov     ecx, [esi+1A4h]
0x8EDEF3: mov     dword ptr [ecx], offset aEt; "Et"
0x8EDEF9: rdtsc
0x8EDEFB: mov     [esp+140h+var_130], eax
0x8EDEFF: mov     edx, [esp+140h+var_130]
0x8EDF03: jmp     loc_8EEB91
0x8EDF08: mov     ebx, [esp+140h+var_FC]
0x8EDF0C: mov     edx, edi
0x8EDF0E: sub     edx, ebx
0x8EDF10: cmp     edx, eax
0x8EDF12: jb      short loc_8EDF56
0x8EDF14: mov     ecx, large fs:2Ch
0x8EDF1B: mov     edx, ds:0BA9DE4h
0x8EDF21: mov     eax, [ecx+edx*4]
0x8EDF24: mov     esi, [eax+1A4h]
0x8EDF2A: cmp     esi, [eax+1A8h]
0x8EDF30: jnb     loc_8EEB9D
0x8EDF36: mov     esi, eax
0x8EDF38: mov     ecx, [esi+1A4h]
0x8EDF3E: mov     dword ptr [ecx], offset aEt; "Et"
0x8EDF44: rdtsc
0x8EDF46: mov     [esp+140h+var_130], eax
0x8EDF4A: mov     eax, [esp+140h+var_130]
0x8EDF4E: mov     [ecx+4], eax
0x8EDF51: jmp     loc_8EEB94
0x8EDF56: mov     edx, dword ptr [esp+140h+var_F4]
0x8EDF5A: fld     dword ptr ds:0A2FAA8h
0x8EDF60: mov     ebx, [esp+140h+var_FC]
0x8EDF64: fld     [esp+140h+var_CC]
0x8EDF68: mov     al, byte ptr [esp+140h+var_12C]
0x8EDF6C: fucompp
0x8EDF6E: xor     edx, ebx
0x8EDF70: setnl   dl
0x8EDF73: test    al, al
0x8EDF75: setnz   al
0x8EDF78: xor     dl, al
0x8EDF7A: fnstsw  ax
0x8EDF7C: mov     [esp+140h+var_AC+4], dl
0x8EDF83: test    ah, 44h
0x8EDF86: jp      short loc_8EDF97
0x8EDF88: mov     [esp+140h+var_AC+4], 0
0x8EDF90: mov     dl, [esp+140h+var_AC+4]
0x8EDF97: mov     al, byte ptr [esp+140h+var_12C]
0x8EDF9B: test    al, al
0x8EDF9D: mov     ebx, 2
0x8EDFA2: mov     [esp+140h+var_104], ebx
0x8EDFA6: jnz     short loc_8EDFAC
0x8EDFA8: add     edi, ecx
0x8EDFAA: jmp     short loc_8EDFAE
0x8EDFAC: sub     edi, ecx
0x8EDFAE: test    dl, dl
0x8EDFB0: mov     [esp+140h+var_118], edi
0x8EDFB4: fild    [esp+140h+var_118]
0x8EDFB8: fsubr   dword ptr [esp+140h+var_C4+8]
0x8EDFBF: jz      short loc_8EDFDE
0x8EDFC1: fabs
0x8EDFC3: fcomp   dword ptr ds:0A2F948h
0x8EDFC9: fnstsw  ax
0x8EDFCB: test    ah, 41h
0x8EDFCE: jnz     short loc_8EDFD6
0x8EDFD0: sub     edi, [esp+140h+var_F8]
0x8EDFD4: jmp     short loc_8EDFFF
0x8EDFD6: xor     ebx, ebx
0x8EDFD8: mov     [esp+140h+var_104], ebx
0x8EDFDC: jmp     short loc_8EE003
0x8EDFDE: fild    [esp+140h+var_F8]
0x8EDFE2: fmul    st, st(1)
0x8EDFE4: fcomp   dword ptr ds:0A2FAA8h
0x8EDFEA: fnstsw  ax
0x8EDFEC: fstp    st
0x8EDFEE: test    ah, 41h
0x8EDFF1: jnz     short loc_8EE003
0x8EDFF3: mov     eax, [esp+140h+var_F8]
0x8EDFF7: xor     ebx, ebx
0x8EDFF9: mov     [esp+140h+var_104], ebx
0x8EDFFD: add     edi, eax
0x8EDFFF: mov     [esp+140h+var_118], edi
0x8EE003: fld     dword ptr ds:0A2FAA8h
0x8EE009: fld     [esp+140h+var_CC]
0x8EE00D: fucompp
0x8EE00F: fnstsw  ax
0x8EE011: test    ah, 44h
0x8EE014: jnp     short loc_8EE02C
0x8EE016: fild    [esp+140h+var_118]
0x8EE01A: fsub    dword ptr [esp+140h+var_F4+8]
0x8EE01E: fimul   [esp+140h+var_F8]
0x8EE022: fmul    [esp+140h+var_CC]
0x8EE026: fstp    [esp+140h+var_DC]
0x8EE02A: jmp     short loc_8EE034
0x8EE02C: mov     [esp+140h+var_DC], 7F7FFFFFh
0x8EE034: fld     dword ptr ds:0A2FAA8h
0x8EE03A: fld     [esp+140h+var_D0]
0x8EE03E: fucompp
0x8EE040: fnstsw  ax
0x8EE042: test    ah, 44h
0x8EE045: jp      short loc_8EE04F
0x8EE047: fld     dword ptr ds:0A3B888h
0x8EE04D: jmp     short loc_8EE057
0x8EE04F: fld     [esp+140h+var_E0]
0x8EE053: fsub    [esp+140h+var_D0]
0x8EE057: fld     dword ptr ds:0A2FAA8h
0x8EE05D: fld     [esp+140h+var_CC]
0x8EE061: fucompp
0x8EE063: fnstsw  ax
0x8EE065: test    ah, 44h
0x8EE068: jp      short loc_8EE077
0x8EE06A: mov     dword ptr [esp+140h+var_C4+8], 0FF7FFFFFh
0x8EE075: jmp     short loc_8EE086
0x8EE077: fld     [esp+140h+var_DC]
0x8EE07B: fsub    [esp+140h+var_CC]
0x8EE07F: fstp    dword ptr [esp+140h+var_C4+8]
0x8EE086: fld     dword ptr ds:0A2FAA8h
0x8EE08C: fld     [esp+140h+var_C8]
0x8EE090: fucompp
0x8EE092: fnstsw  ax
0x8EE094: test    ah, 44h
0x8EE097: jp      short loc_8EE0A6
0x8EE099: mov     dword ptr [esp+140h+var_C4+0Ch], 0FF7FFFFFh
0x8EE0A4: jmp     short loc_8EE0B5
0x8EE0A6: fld     [esp+140h+var_D8]
0x8EE0AA: fsub    [esp+140h+var_C8]
0x8EE0AE: fstp    dword ptr [esp+140h+var_C4+0Ch]
0x8EE0B5: test    dl, dl
0x8EE0B7: jz      short loc_8EE0D8
0x8EE0B9: test    ebx, ebx
0x8EE0BB: jnz     short loc_8EE0C6
0x8EE0BD: fstp    st
0x8EE0BF: mov     eax, 1
0x8EE0C4: jmp     short loc_8EE130
0x8EE0C6: fcomp   dword ptr [esp+140h+var_C4+0Ch]
0x8EE0CD: fnstsw  ax
0x8EE0CF: test    ah, 41h
0x8EE0D2: jnz     short loc_8EE12B
0x8EE0D4: xor     eax, eax
0x8EE0D6: jmp     short loc_8EE130
0x8EE0D8: fld     [esp+140h+var_40]
0x8EE0DF: fcomp   [esp+140h+var_B0]
0x8EE0E6: fnstsw  ax
0x8EE0E8: test    ah, 5
0x8EE0EB: jp      short loc_8EE107
0x8EE0ED: test    ebx, ebx
0x8EE0EF: jz      short loc_8EE0F5
0x8EE0F1: fstp    st
0x8EE0F3: jmp     short loc_8EE12B
0x8EE0F5: fcomp   dword ptr [esp+140h+var_C4+8]
0x8EE0FC: fnstsw  ax
0x8EE0FE: test    ah, 41h
0x8EE101: jnz     short loc_8EE0BF
0x8EE103: xor     eax, eax
0x8EE105: jmp     short loc_8EE130
0x8EE107: test    ebx, ebx
0x8EE109: fstp    st
0x8EE10B: jz      short loc_8EE111
0x8EE10D: xor     eax, eax
0x8EE10F: jmp     short loc_8EE130
0x8EE111: fld     dword ptr [esp+140h+var_C4+8]
0x8EE118: fcomp   dword ptr [esp+140h+var_C4+0Ch]
0x8EE11F: fnstsw  ax
0x8EE121: test    ah, 41h
0x8EE124: mov     eax, 1
0x8EE129: jz      short loc_8EE130
0x8EE12B: mov     eax, 2
0x8EE130: fld     [esp+eax*4+140h+var_E0]
0x8EE134: mov     ecx, [esp+eax*4+140h+var_FC]
0x8EE138: mov     edx, [esp+eax*4+140h+var_11C]
0x8EE13C: fsub    [esp+eax*4+140h+var_D0]
0x8EE140: sub     edx, ecx
0x8EE142: mov     [esp+eax*4+140h+var_11C], edx
0x8EE146: mov     ecx, [esp+140h+var_11C]
0x8EE14A: fstp    [esp+eax*4+140h+var_E0]
0x8EE14E: mov     [esp+140h+var_124], eax
0x8EE152: mov     eax, [esi+0Ch]
0x8EE155: cmp     ecx, eax
0x8EE157: mov     dword ptr [esp+140h+var_AC], 7F7FFFFFh
0x8EE162: mov     dword ptr [esp+140h+var_AC+8], 0
0x8EE16D: mov     [esp+140h+var_10C], 0BF800000h
0x8EE175: jnb     loc_8EE6DD
0x8EE17B: jmp     short loc_8EE180
0x8EE17D: align 10h
0x8EE180: mov     edx, [esp+140h+var_114]
0x8EE184: cmp     edx, [esi+10h]
0x8EE187: jnb     loc_8EE6DD
0x8EE18D: mov     eax, [ebp+arg_8]
0x8EE190: fld     [esp+140h+var_10C]
0x8EE194: fcomp   dword ptr [eax+4]
0x8EE197: fnstsw  ax
0x8EE199: test    ah, 41h
0x8EE19C: jz      loc_8EE718
0x8EE1A2: mov     edi, [esp+140h+var_124]
0x8EE1A6: mov     ecx, [esp+edi*4+140h+var_E0]
0x8EE1AA: lea     eax, [esp+edi*4+140h+var_E0]
0x8EE1AE: mov     edx, ecx
0x8EE1B0: mov     [esp+140h+var_108], ecx
0x8EE1B4: push    edx
0x8EE1B5: lea     ecx, [esp+144h+var_70]
0x8EE1BC: mov     [esp+144h+var_120], eax
0x8EE1C0: call    sub_535AA0
0x8EE1C5: mov     ebx, [esp+140h+var_11C]
0x8EE1C9: movaps  xmm0, xmmword ptr [esp+140h+var_70]
0x8EE1D1: mov     ecx, [esp+140h+var_FC]
0x8EE1D5: movaps  xmm2, xmmword ptr ds:0A6DFE0h
0x8EE1DC: shufps  xmm0, xmm0, 0
0x8EE1E0: subps   xmm2, xmm0
0x8EE1E3: mulps   xmm2, xmmword ptr [esp+140h+var_F4+4]
0x8EE1E8: mov     eax, ebx
0x8EE1EA: sub     eax, ecx
0x8EE1EC: test    edi, edi
0x8EE1EE: mov     ecx, [esp+140h+var_114]
0x8EE1F2: movaps  xmm1, xmm0
0x8EE1F5: mulps   xmm1, xmmword ptr [esp+140h+var_AC+0Ch]
0x8EE1FD: addps   xmm2, xmm1
0x8EE200: movaps  [esp+140h+var_C4+4], xmm2
0x8EE208: mov     [esp+140h+var_100], eax
0x8EE20C: jnz     short loc_8EE248
0x8EE20E: mov     edx, dword ptr [esp+140h+var_F4]
0x8EE212: mov     eax, [esi]
0x8EE214: sub     ecx, edx
0x8EE216: push    ecx
0x8EE217: push    ebx
0x8EE218: mov     ecx, esi
0x8EE21A: call    dword ptr [eax+24h]
0x8EE21D: fstp    [esp+140h+var_130]
0x8EE221: mov     edi, [esp+140h+var_114]
0x8EE225: mov     edx, [esi]
0x8EE227: push    edi
0x8EE228: push    ebx
0x8EE229: mov     ecx, esi
0x8EE22B: call    dword ptr [edx+24h]
0x8EE22E: fild    [esp+140h+var_114]
0x8EE232: fsubr   dword ptr [esp+140h+var_C4+0Ch]
0x8EE239: fabs
0x8EE23B: fld     [esp+140h+var_130]
0x8EE23F: fsub    st, st(2)
0x8EE241: fmulp   st(1), st
0x8EE243: jmp     loc_8EE2D6
0x8EE248: cmp     edi, 2
0x8EE24B: mov     edi, [esp+140h+var_114]
0x8EE24F: jnz     short loc_8EE27E
0x8EE251: mov     edx, [esi]
0x8EE253: push    edi
0x8EE254: push    eax
0x8EE255: mov     ecx, esi
0x8EE257: call    dword ptr [edx+24h]
0x8EE25A: fstp    [esp+140h+var_130]
0x8EE25E: mov     eax, [esi]
0x8EE260: push    edi
0x8EE261: push    ebx
0x8EE262: mov     ecx, esi
0x8EE264: call    dword ptr [eax+24h]
0x8EE267: fild    [esp+140h+var_11C]
0x8EE26B: fsubr   dword ptr [esp+140h+var_C4+4]
0x8EE272: fabs
0x8EE274: fld     [esp+140h+var_130]
0x8EE278: fsub    st, st(2)
0x8EE27A: fmulp   st(1), st
0x8EE27C: jmp     short loc_8EE2D6
0x8EE27E: fild    [esp+140h+var_11C]
0x8EE282: mov     dl, [esp+140h+var_AC+4]
0x8EE289: test    dl, dl
0x8EE28B: mov     [esp+140h+var_110], edi
0x8EE28F: fsubr   dword ptr [esp+140h+var_C4+4]
0x8EE296: fabs
0x8EE298: fstp    [esp+140h+var_128]
0x8EE29C: jz      short loc_8EE2AA
0x8EE29E: mov     edx, edi
0x8EE2A0: sub     edx, dword ptr [esp+140h+var_F4]
0x8EE2A4: mov     [esp+140h+var_110], edx
0x8EE2A8: jmp     short loc_8EE2B2
0x8EE2AA: mov     edx, dword ptr [esp+140h+var_F4]
0x8EE2AE: mov     ecx, edi
0x8EE2B0: sub     ecx, edx
0x8EE2B2: mov     edx, [esi]
0x8EE2B4: push    ecx
0x8EE2B5: push    eax
0x8EE2B6: mov     ecx, esi
0x8EE2B8: call    dword ptr [edx+24h]
0x8EE2BB: fstp    [esp+140h+var_130]
0x8EE2BF: mov     ecx, [esp+140h+var_110]
0x8EE2C3: mov     eax, [esi]
0x8EE2C5: push    ecx
0x8EE2C6: push    ebx
0x8EE2C7: mov     ecx, esi
0x8EE2C9: call    dword ptr [eax+24h]
0x8EE2CC: fld     [esp+140h+var_130]
0x8EE2D0: fsub    st, st(1)
0x8EE2D2: fmul    [esp+140h+var_128]
0x8EE2D6: faddp   st(1), st
0x8EE2D8: fld     [esp+140h+var_B4]
0x8EE2DF: fcomp   st(1)
0x8EE2E1: fnstsw  ax
0x8EE2E3: test    ah, 1
0x8EE2E6: jz      loc_8EE5FD
0x8EE2EC: fld     dword ptr [esp+140h+var_AC+8]
0x8EE2F3: fcomp   dword ptr [esp+140h+var_AC]
0x8EE2FA: fnstsw  ax
0x8EE2FC: test    ah, 5
0x8EE2FF: jnp     loc_8EE5FD
0x8EE305: fld     [esp+140h+var_B4]
0x8EE30C: fsub    st, st(1)
0x8EE30E: fld     [esp+140h+var_10C]
0x8EE312: fcomp   dword ptr ds:0A2FAA8h
0x8EE318: fnstsw  ax
0x8EE31A: test    ah, 1
0x8EE31D: jnz     short loc_8EE343
0x8EE31F: fld     dword ptr [esp+140h+var_AC+8]
0x8EE326: fsub    dword ptr [esp+140h+var_AC]
0x8EE32D: fld     st
0x8EE32F: fsub    st, st(2)
0x8EE331: fdivr   st, st(1)
0x8EE333: fld     [esp+140h+var_108]
0x8EE337: fsub    [esp+140h+var_10C]
0x8EE33B: fmulp   st(1), st
0x8EE33D: fadd    [esp+140h+var_10C]
0x8EE341: jmp     short loc_8EE383
0x8EE343: fld     [esp+140h+var_108]
0x8EE347: fsub    [esp+140h+var_10C]
0x8EE34B: fdivr   [esp+140h+var_108]
0x8EE34F: fld     dword ptr ds:0A2F948h
0x8EE355: fsub    st, st(1)
0x8EE357: fmul    st, st(3)
0x8EE359: fxch    st(1)
0x8EE35B: fmul    dword ptr [esp+140h+var_AC]
0x8EE362: faddp   st(1), st
0x8EE364: fsubr   dword ptr [esp+140h+var_F4+10h]
0x8EE368: fcom    dword ptr ds:0A2FAA8h
0x8EE36E: fnstsw  ax
0x8EE370: test    ah, 5
0x8EE373: jnp     loc_8EE5F9
0x8EE379: fld     st
0x8EE37B: fsub    st, st(2)
0x8EE37D: fdivr   st, st(1)
0x8EE37F: fmul    [esp+140h+var_108]
0x8EE383: mov     ecx, [ebp+arg_8]
0x8EE386: fstp    [esp+140h+var_110]
0x8EE38A: mov     eax, [esp+140h+var_108]
0x8EE38E: mov     edx, [esp+140h+var_B4]
0x8EE395: fstp    st
0x8EE397: fstp    st
0x8EE399: mov     [esp+140h+var_10C], eax
0x8EE39D: fstp    dword ptr [esp+140h+var_AC]
0x8EE3A4: fld     [esp+140h+var_110]
0x8EE3A8: mov     dword ptr [esp+140h+var_AC+8], edx
0x8EE3AF: fcomp   dword ptr [ecx+4]
0x8EE3B2: fnstsw  ax
0x8EE3B4: test    ah, 41h
0x8EE3B7: jz      loc_8EE753
0x8EE3BD: mov     ecx, dword ptr [esp+140h+var_F4]
0x8EE3C1: mov     ebx, [esp+140h+var_114]
0x8EE3C5: mov     al, [esp+140h+var_AC+4]
0x8EE3CC: mov     edx, [esi]
0x8EE3CE: sub     ebx, ecx
0x8EE3D0: test    al, al
0x8EE3D2: mov     [esp+140h+var_1C], 3F800000h
0x8EE3DD: mov     [esp+140h+var_24], 0
0x8EE3E8: mov     [esp+140h+var_2C], 3F800000h
0x8EE3F3: mov     ecx, esi
0x8EE3F5: push    ebx
0x8EE3F6: jz      short loc_8EE462
0x8EE3F8: mov     eax, [esp+144h+var_11C]
0x8EE3FC: push    eax
0x8EE3FD: call    dword ptr [edx+24h]
0x8EE400: fstp    [esp+140h+var_128]
0x8EE404: mov     eax, [esp+140h+var_100]
0x8EE408: mov     edx, [esi]
0x8EE40A: push    edi
0x8EE40B: push    eax
0x8EE40C: mov     ecx, esi
0x8EE40E: call    dword ptr [edx+24h]
0x8EE411: fstp    [esp+140h+var_D4]
0x8EE415: cmp     [esp+140h+var_124], 1
0x8EE41A: mov     edx, [esi]
0x8EE41C: mov     ecx, esi
0x8EE41E: jnz     short loc_8EE43E
0x8EE420: mov     eax, [esp+140h+var_100]
0x8EE424: push    ebx
0x8EE425: push    eax
0x8EE426: call    dword ptr [edx+24h]
0x8EE429: fst     [esp+140h+var_100]
0x8EE42D: fsub    [esp+140h+var_128]
0x8EE431: fld     [esp+140h+var_100]
0x8EE435: fsub    [esp+140h+var_D4]
0x8EE439: jmp     loc_8EE4E3
0x8EE43E: mov     eax, [esp+140h+var_11C]
0x8EE442: push    edi
0x8EE443: push    eax
0x8EE444: call    dword ptr [edx+24h]
0x8EE447: fstp    [esp+140h+var_100]
0x8EE44B: fld     [esp+140h+var_D4]
0x8EE44F: cmp     edi, ebx
0x8EE451: fsub    [esp+140h+var_100]
0x8EE455: fld     [esp+140h+var_128]
0x8EE459: fsub    [esp+140h+var_100]
0x8EE45D: jmp     loc_8EE4E5
0x8EE462: mov     eax, [esp+144h+var_100]
0x8EE466: push    eax
0x8EE467: call    dword ptr [edx+24h]
0x8EE46A: fstp    [esp+140h+var_D4]
0x8EE46E: mov     eax, [esp+140h+var_11C]
0x8EE472: mov     edx, [esi]
0x8EE474: push    edi
0x8EE475: push    eax
0x8EE476: mov     ecx, esi
0x8EE478: call    dword ptr [edx+24h]
0x8EE47B: fstp    [esp+140h+var_130]
0x8EE47F: mov     eax, [esp+140h+var_124]
0x8EE483: test    eax, eax
0x8EE485: jz      short loc_8EE4C2
0x8EE487: cmp     eax, 1
0x8EE48A: jnz     short loc_8EE4A1
0x8EE48C: fld     [esp+140h+var_40]
0x8EE493: fcomp   [esp+140h+var_B0]
0x8EE49A: fnstsw  ax
0x8EE49C: test    ah, 5
0x8EE49F: jnp     short loc_8EE4C2
0x8EE4A1: mov     eax, [esp+140h+var_100]
0x8EE4A5: mov     edx, [esi]
0x8EE4A7: push    edi
0x8EE4A8: push    eax
0x8EE4A9: mov     ecx, esi
0x8EE4AB: call    dword ptr [edx+24h]
0x8EE4AE: fst     [esp+140h+var_128]
0x8EE4B2: fsub    [esp+140h+var_130]
0x8EE4B6: cmp     edi, ebx
0x8EE4B8: fld     [esp+140h+var_D4]
0x8EE4BC: fsub    [esp+140h+var_128]
0x8EE4C0: jmp     short loc_8EE4E5
0x8EE4C2: mov     eax, [esp+140h+var_11C]
0x8EE4C6: mov     edx, [esi]
0x8EE4C8: push    ebx
0x8EE4C9: push    eax
0x8EE4CA: mov     ecx, esi
0x8EE4CC: call    dword ptr [edx+24h]
0x8EE4CF: fstp    [esp+140h+var_128]
0x8EE4D3: fld     [esp+140h+var_D4]
0x8EE4D7: fsub    [esp+140h+var_128]
0x8EE4DB: fld     [esp+140h+var_128]
0x8EE4DF: fsub    [esp+140h+var_130]
0x8EE4E3: cmp     ebx, edi
0x8EE4E5: fild    [esp+140h+var_FC]
0x8EE4E9: mov     bl, byte ptr [esp+140h+var_12C]
0x8EE4ED: movaps  xmm0, xmmword ptr [esi+30h]
0x8EE4F1: setnle  cl
0x8EE4F4: fmul    st, st(2)
0x8EE4F6: movzx   eax, cl
0x8EE4F9: test    bl, bl
0x8EE4FB: setnz   dl
0x8EE4FE: fstp    [esp+140h+var_30]
0x8EE505: movzx   ecx, dl
0x8EE508: fild    dword ptr [esp+140h+var_F4]
0x8EE50C: mov     edx, [esp+140h+var_110]
0x8EE510: xor     eax, ecx
0x8EE512: fmul    st, st(1)
0x8EE514: mov     ecx, [esp+140h+var_114]
0x8EE518: mov     [esp+140h+var_1C], edx
0x8EE51F: mov     edx, dword ptr [esp+140h+var_F4]
0x8EE523: fstp    [esp+140h+var_28]
0x8EE52A: movaps  xmm1, xmmword ptr [esp+140h+var_30]
0x8EE532: mulps   xmm1, xmm0
0x8EE535: fstp    st
0x8EE537: sar     edx, 1
0x8EE539: fstp    st
0x8EE53B: sub     ecx, edx
0x8EE53D: mov     edx, [esp+140h+var_FC]
0x8EE541: dec     ecx
0x8EE542: movaps  xmm0, xmm1
0x8EE545: mulps   xmm0, xmm1
0x8EE548: movaps  xmm2, xmm0
0x8EE54B: shufps  xmm2, xmm0, 55h ; 'U'
0x8EE54F: addss   xmm2, xmm0
0x8EE553: movaps  xmm3, xmm0
0x8EE556: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8EE55A: shl     ecx, 0Fh
0x8EE55D: sar     edx, 1
0x8EE55F: sub     ecx, edx
0x8EE561: mov     edx, [esp+140h+var_11C]
0x8EE565: movaps  xmm0, xmm3
0x8EE568: addss   xmm0, xmm2
0x8EE56C: movaps  [esp+140h+var_80], xmm0
0x8EE574: rsqrtss xmm2, xmm0
0x8EE578: movss   dword ptr [esp+140h+var_80], xmm2
0x8EE581: movaps  xmm2, [esp+140h+var_80]
0x8EE589: mulss   xmm0, xmm2
0x8EE58D: mulss   xmm0, xmm2
0x8EE591: add     ecx, edx
0x8EE593: lea     eax, [eax+ecx*2-2]
0x8EE597: mov     ecx, [ebp+arg_8]
0x8EE59A: mov     edx, [ecx]
0x8EE59C: mov     [esp+140h+var_44], 40400000h
0x8EE5A7: movss   xmm3, [esp+140h+var_44]
0x8EE5B0: subss   xmm3, xmm0
0x8EE5B4: mov     [esp+140h+var_20], eax
0x8EE5BB: mov     [esp+140h+var_48], 3F000000h
0x8EE5C6: movss   xmm0, [esp+140h+var_48]
0x8EE5CF: mulss   xmm0, xmm2
0x8EE5D3: lea     eax, [esp+140h+var_30]
0x8EE5DA: mulss   xmm0, xmm3
0x8EE5DE: push    eax
0x8EE5DF: mov     eax, [ebp+arg_4]
0x8EE5E2: movaps  xmm2, xmm0
0x8EE5E5: shufps  xmm2, xmm0, 0
0x8EE5E9: mulps   xmm2, xmm1
0x8EE5EC: push    eax
0x8EE5ED: movaps  xmmword ptr [esp+148h+var_30], xmm2
0x8EE5F5: call    dword ptr [edx]
0x8EE5F7: jmp     short loc_8EE61A
0x8EE5F9: fstp    st
0x8EE5FB: fstp    st
0x8EE5FD: mov     ecx, [esp+140h+var_B4]
0x8EE604: fstp    dword ptr [esp+140h+var_AC]
0x8EE60B: mov     edx, [esp+140h+var_108]
0x8EE60F: mov     dword ptr [esp+140h+var_AC+8], ecx
0x8EE616: mov     [esp+140h+var_10C], edx
0x8EE61A: mov     eax, [esp+140h+var_124]
0x8EE61E: mov     ebx, [esp+eax*4+140h+var_11C]
0x8EE622: fld     [esp+eax*4+140h+var_D0]
0x8EE626: mov     edi, [esp+eax*4+140h+var_FC]
0x8EE62A: mov     ecx, [esp+140h+var_104]
0x8EE62E: add     ebx, edi
0x8EE630: mov     [esp+eax*4+140h+var_11C], ebx
0x8EE634: mov     eax, [esp+140h+var_120]
0x8EE638: fadd    dword ptr [eax]
0x8EE63A: mov     edx, 2
0x8EE63F: xor     ecx, edx
0x8EE641: mov     [esp+140h+var_104], ecx
0x8EE645: fstp    dword ptr [eax]
0x8EE647: mov     al, [esp+140h+var_AC+4]
0x8EE64E: test    al, al
0x8EE650: jz      short loc_8EE679
0x8EE652: test    ecx, ecx
0x8EE654: jnz     short loc_8EE660
0x8EE656: mov     [esp+140h+var_124], 1
0x8EE65E: jmp     short loc_8EE6D0
0x8EE660: fld     [esp+140h+var_E0]
0x8EE664: fcomp   [esp+140h+var_D8]
0x8EE668: fnstsw  ax
0x8EE66A: test    ah, 5
0x8EE66D: jp      short loc_8EE6CC
0x8EE66F: mov     [esp+140h+var_124], 0
0x8EE677: jmp     short loc_8EE6D0
0x8EE679: fld     [esp+140h+var_40]
0x8EE680: fcomp   [esp+140h+var_B0]
0x8EE687: fnstsw  ax
0x8EE689: test    ah, 5
0x8EE68C: jp      short loc_8EE6A7
0x8EE68E: test    ecx, ecx
0x8EE690: jnz     short loc_8EE6CC
0x8EE692: fld     [esp+140h+var_E0]
0x8EE696: fcomp   [esp+140h+var_DC]
0x8EE69A: fnstsw  ax
0x8EE69C: test    ah, 5
0x8EE69F: jp      short loc_8EE656
0x8EE6A1: mov     [esp+140h+var_124], ecx
0x8EE6A5: jmp     short loc_8EE6D0
0x8EE6A7: test    ecx, ecx
0x8EE6A9: jz      short loc_8EE6B5
0x8EE6AB: mov     [esp+140h+var_124], 0
0x8EE6B3: jmp     short loc_8EE6D0
0x8EE6B5: fld     [esp+140h+var_DC]
0x8EE6B9: mov     [esp+140h+var_124], 1
0x8EE6C1: fcomp   [esp+140h+var_D8]
0x8EE6C5: fnstsw  ax
0x8EE6C7: test    ah, 5
0x8EE6CA: jnp     short loc_8EE6D0
0x8EE6CC: mov     [esp+140h+var_124], edx
0x8EE6D0: mov     eax, [esp+140h+var_11C]
0x8EE6D4: cmp     eax, [esi+0Ch]
0x8EE6D7: jb      loc_8EE180
0x8EE6DD: mov     ecx, large fs:2Ch
0x8EE6E4: mov     edx, ds:0BA9DE4h
0x8EE6EA: mov     eax, [ecx+edx*4]
0x8EE6ED: mov     esi, [eax+1A4h]
0x8EE6F3: cmp     esi, [eax+1A8h]
0x8EE6F9: jnb     loc_8EEB9D
0x8EE6FF: mov     esi, eax
0x8EE701: mov     ecx, [esi+1A4h]
0x8EE707: mov     dword ptr [ecx], offset aEt; "Et"
0x8EE70D: rdtsc
0x8EE70F: mov     [esp+140h+var_120], eax
0x8EE713: jmp     loc_8EEB8D
0x8EE718: mov     ecx, large fs:2Ch
0x8EE71F: mov     edx, ds:0BA9DE4h
0x8EE725: mov     eax, [ecx+edx*4]
0x8EE728: mov     esi, [eax+1A4h]
0x8EE72E: cmp     esi, [eax+1A8h]
0x8EE734: jnb     loc_8EEB9D
0x8EE73A: mov     esi, eax
0x8EE73C: mov     ecx, [esi+1A4h]
0x8EE742: mov     dword ptr [ecx], offset aEt; "Et"
0x8EE748: rdtsc
0x8EE74A: mov     [esp+140h+var_120], eax
0x8EE74E: jmp     loc_8EEB8D
0x8EE753: mov     ecx, large fs:2Ch
0x8EE75A: mov     edx, ds:0BA9DE4h
0x8EE760: mov     eax, [ecx+edx*4]
0x8EE763: mov     esi, [eax+1A4h]
0x8EE769: cmp     esi, [eax+1A8h]
0x8EE76F: jnb     loc_8EEB9D
0x8EE775: mov     esi, eax
0x8EE777: mov     ecx, [esi+1A4h]
0x8EE77D: mov     dword ptr [ecx], offset aEt; "Et"
0x8EE783: rdtsc
0x8EE785: mov     [esp+140h+var_120], eax
0x8EE789: mov     eax, [esp+140h+var_120]
0x8EE78D: mov     [ecx+4], eax
0x8EE790: jmp     loc_8EEB94
0x8EE795: mov     eax, [esi+0Ch]
0x8EE798: dec     eax
0x8EE799: cmp     edi, eax
0x8EE79B: jnb     loc_8EEB5B
0x8EE7A1: mov     ecx, [esi+10h]
0x8EE7A4: dec     ecx
0x8EE7A5: cmp     ebx, ecx
0x8EE7A7: jnb     loc_8EEB5B
0x8EE7AD: fild    [esp+140h+var_114]
0x8EE7B1: mov     edx, [esi]
0x8EE7B3: lea     eax, [esp+140h+var_90+0Fh]
0x8EE7BA: mov     [esp+140h+var_120], 3F800000h
0x8EE7C2: fsubr   dword ptr [esp+140h+var_F4+0Ch]
0x8EE7C6: movss   xmm0, [esp+140h+var_120]
0x8EE7CC: shufps  xmm0, xmm0, 0
0x8EE7D0: push    eax
0x8EE7D1: fstp    [esp+144h+var_108]
0x8EE7D5: mov     ecx, esi
0x8EE7D7: fild    [esp+144h+var_11C]
0x8EE7DB: mov     [esp+144h+var_5C], 3F800000h
0x8EE7E6: movaps  xmmword ptr [esp+144h+var_70], xmm0
0x8EE7EE: fsubr   dword ptr [esp+144h+var_F4+4]
0x8EE7F2: fstp    [esp+144h+var_10C]
0x8EE7F6: call    dword ptr [edx+28h]
0x8EE7F9: mov     cl, [eax]
0x8EE7FB: mov     edx, [esi]
0x8EE7FD: test    cl, cl
0x8EE7FF: push    ebx
0x8EE800: mov     ecx, esi
0x8EE802: jz      loc_8EE8B5
0x8EE808: push    edi
0x8EE809: call    dword ptr [edx+24h]
0x8EE80C: fstp    [esp+140h+var_104]
0x8EE810: mov     edx, [esi]
0x8EE812: lea     eax, [ebx+1]
0x8EE815: lea     ecx, [edi+1]
0x8EE818: push    eax
0x8EE819: push    ecx
0x8EE81A: mov     ecx, esi
0x8EE81C: call    dword ptr [edx+24h]
0x8EE81F: fstp    [esp+140h+var_128]
0x8EE823: fld     [esp+140h+var_10C]
0x8EE827: mov     edx, [esi]
0x8EE829: fcomp   [esp+140h+var_108]
0x8EE82D: mov     ecx, esi
0x8EE82F: fnstsw  ax
0x8EE831: test    ah, 41h
0x8EE834: jnz     short loc_8EE86F
0x8EE836: push    ebx
0x8EE837: lea     eax, [edi+1]
0x8EE83A: push    eax
0x8EE83B: call    dword ptr [edx+24h]
0x8EE83E: fld     [esp+140h+var_104]
0x8EE842: fsubr   st, st(1)
0x8EE844: fstp    [esp+140h+var_130]
0x8EE848: fld     [esp+140h+var_128]
0x8EE84C: fsub    st, st(1)
0x8EE84E: fstp    [esp+140h+var_128]
0x8EE852: fstp    st
0x8EE854: fld     [esp+140h+var_130]
0x8EE858: fmul    [esp+140h+var_10C]
0x8EE85C: fld     [esp+140h+var_128]
0x8EE860: fmul    [esp+140h+var_108]
0x8EE864: faddp   st(1), st
0x8EE866: fadd    [esp+140h+var_104]
0x8EE86A: jmp     loc_8EE922
0x8EE86F: lea     eax, [ebx+1]
0x8EE872: push    eax
0x8EE873: push    edi
0x8EE874: call    dword ptr [edx+24h]
0x8EE877: fld     [esp+140h+var_128]
0x8EE87B: fsub    st, st(1)
0x8EE87D: fstp    [esp+140h+var_130]
0x8EE881: fsub    [esp+140h+var_104]
0x8EE885: fstp    [esp+140h+var_128]
0x8EE889: fld     [esp+140h+var_130]
0x8EE88D: fmul    [esp+140h+var_10C]
0x8EE891: fld     [esp+140h+var_128]
0x8EE895: fmul    [esp+140h+var_108]
0x8EE899: faddp   st(1), st
0x8EE89B: fadd    [esp+140h+var_104]
0x8EE89F: fld     [esp+140h+var_130]
0x8EE8A3: fchs
0x8EE8A5: fstp    [esp+140h+var_70]
0x8EE8AC: fld     [esp+140h+var_128]
0x8EE8B0: jmp     loc_8EE97A
0x8EE8B5: lea     eax, [edi+1]
0x8EE8B8: push    eax
0x8EE8B9: call    dword ptr [edx+24h]
0x8EE8BC: fstp    [esp+140h+var_110]
0x8EE8C0: mov     edx, [esi]
0x8EE8C2: lea     eax, [ebx+1]
0x8EE8C5: push    eax
0x8EE8C6: push    edi
0x8EE8C7: mov     ecx, esi
0x8EE8C9: call    dword ptr [edx+24h]
0x8EE8CC: fstp    [esp+140h+var_130]
0x8EE8D0: fld     [esp+140h+var_10C]
0x8EE8D4: mov     ecx, esi
0x8EE8D6: fadd    [esp+140h+var_108]
0x8EE8DA: fcomp   dword ptr ds:0A2F948h
0x8EE8E0: fnstsw  ax
0x8EE8E2: test    ah, 41h
0x8EE8E5: jnz     short loc_8EE93A
0x8EE8E7: mov     edx, [esi]
0x8EE8E9: lea     eax, [ebx+1]
0x8EE8EC: push    eax
0x8EE8ED: lea     eax, [edi+1]
0x8EE8F0: push    eax
0x8EE8F1: call    dword ptr [edx+24h]
0x8EE8F4: fld     [esp+140h+var_130]
0x8EE8F8: fsubr   st, st(1)
0x8EE8FA: fstp    [esp+140h+var_130]
0x8EE8FE: fsub    [esp+140h+var_110]
0x8EE902: fstp    [esp+140h+var_128]
0x8EE906: fld     [esp+140h+var_10C]
0x8EE90A: fsub    dword ptr ds:0A2F948h
0x8EE910: fmul    [esp+140h+var_130]
0x8EE914: fld     [esp+140h+var_128]
0x8EE918: fmul    [esp+140h+var_108]
0x8EE91C: faddp   st(1), st
0x8EE91E: fadd    [esp+140h+var_110]
0x8EE922: fld     [esp+140h+var_130]
0x8EE926: mov     edx, 1
0x8EE92B: fchs
0x8EE92D: fstp    [esp+140h+var_70]
0x8EE934: fld     [esp+140h+var_128]
0x8EE938: jmp     short loc_8EE97C
0x8EE93A: mov     eax, [esi]
0x8EE93C: push    ebx
0x8EE93D: push    edi
0x8EE93E: call    dword ptr [eax+24h]
0x8EE941: fld     [esp+140h+var_110]
0x8EE945: fsub    st, st(1)
0x8EE947: fstp    [esp+140h+var_128]
0x8EE94B: fld     [esp+140h+var_130]
0x8EE94F: fsub    st, st(1)
0x8EE951: fstp    [esp+140h+var_130]
0x8EE955: fld     [esp+140h+var_128]
0x8EE959: fmul    [esp+140h+var_10C]
0x8EE95D: fld     [esp+140h+var_130]
0x8EE961: fmul    [esp+140h+var_108]
0x8EE965: faddp   st(1), st
0x8EE967: faddp   st(1), st
0x8EE969: fld     [esp+140h+var_128]
0x8EE96D: fchs
0x8EE96F: fstp    [esp+140h+var_70]
0x8EE976: fld     [esp+140h+var_130]
0x8EE97A: xor     edx, edx
0x8EE97C: fchs
0x8EE97E: fstp    [esp+140h+var_68]
0x8EE985: fld     dword ptr [esp+140h+var_F4+10h]
0x8EE989: fsub    st, st(1)
0x8EE98B: fstp    [esp+140h+var_104]
0x8EE98F: fld     dword ptr [esp+140h+var_AC+18h]
0x8EE996: fsub    st, st(1)
0x8EE998: fstp    [esp+140h+var_110]
0x8EE99C: fstp    st
0x8EE99E: fld     [esp+140h+var_110]
0x8EE9A2: fcomp   [esp+140h+var_104]
0x8EE9A6: fnstsw  ax
0x8EE9A8: test    ah, 41h
0x8EE9AB: jnz     short loc_8EE9E8
0x8EE9AD: mov     ecx, large fs:2Ch
0x8EE9B4: mov     edx, ds:0BA9DE4h
0x8EE9BA: mov     eax, [ecx+edx*4]
0x8EE9BD: mov     esi, [eax+1A4h]
0x8EE9C3: cmp     esi, [eax+1A8h]
0x8EE9C9: jnb     loc_8EEB9D
0x8EE9CF: mov     esi, eax
0x8EE9D1: mov     ecx, [esi+1A4h]
0x8EE9D7: mov     dword ptr [ecx], offset aEt; "Et"
0x8EE9DD: rdtsc
0x8EE9DF: mov     [esp+140h+var_120], eax
0x8EE9E3: jmp     loc_8EEB8D
0x8EE9E8: fld     [esp+140h+var_104]
0x8EE9EC: fcomp   dword ptr ds:0A2FAA8h
0x8EE9F2: fnstsw  ax
0x8EE9F4: test    ah, 5
0x8EE9F7: jnp     loc_8EEB20
0x8EE9FD: fld     [esp+140h+var_110]
0x8EEA01: fcomp   dword ptr ds:0A2FAA8h
0x8EEA07: fnstsw  ax
0x8EEA09: test    ah, 1
0x8EEA0C: jz      loc_8EEB20
0x8EEA12: fld     [esp+140h+var_104]
0x8EEA16: mov     ecx, [ebp+arg_8]
0x8EEA19: fsub    [esp+140h+var_110]
0x8EEA1D: fdivr   [esp+140h+var_104]
0x8EEA21: fld     st
0x8EEA23: fcomp   dword ptr [ecx+4]
0x8EEA26: fnstsw  ax
0x8EEA28: test    ah, 5
0x8EEA2B: jp      loc_8EEAE6
0x8EEA31: movaps  xmm0, xmmword ptr [esi+30h]
0x8EEA35: fstp    [esp+140h+var_5C]
0x8EEA3C: movaps  xmm1, xmmword ptr [esp+140h+var_70]
0x8EEA44: mulps   xmm1, xmm0
0x8EEA47: movaps  xmm0, xmm1
0x8EEA4A: mulps   xmm0, xmm1
0x8EEA4D: movaps  xmm2, xmm0
0x8EEA50: shufps  xmm2, xmm0, 55h ; 'U'
0x8EEA54: addss   xmm2, xmm0
0x8EEA58: movaps  xmm3, xmm0
0x8EEA5B: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8EEA5F: movaps  xmm0, xmm3
0x8EEA62: addss   xmm0, xmm2
0x8EEA66: movaps  [esp+140h+var_80], xmm0
0x8EEA6E: rsqrtss xmm2, xmm0
0x8EEA72: movss   dword ptr [esp+140h+var_80], xmm2
0x8EEA7B: movaps  xmm2, [esp+140h+var_80]
0x8EEA83: mulss   xmm0, xmm2
0x8EEA87: mulss   xmm0, xmm2
0x8EEA8B: shl     ebx, 0Fh
0x8EEA8E: add     ebx, edi
0x8EEA90: lea     eax, [edx+ebx*2]
0x8EEA93: mov     edx, [ecx]
0x8EEA95: mov     [esp+140h+var_120], 40400000h
0x8EEA9D: movss   xmm3, [esp+140h+var_120]
0x8EEAA3: subss   xmm3, xmm0
0x8EEAA7: mov     [esp+140h+var_60], eax
0x8EEAAE: mov     [esp+140h+var_120], 3F000000h
0x8EEAB6: movss   xmm0, [esp+140h+var_120]
0x8EEABC: mulss   xmm0, xmm2
0x8EEAC0: lea     eax, [esp+140h+var_70]
0x8EEAC7: mulss   xmm0, xmm3
0x8EEACB: push    eax
0x8EEACC: mov     eax, [ebp+arg_4]
0x8EEACF: movaps  xmm2, xmm0
0x8EEAD2: shufps  xmm2, xmm0, 0
0x8EEAD6: mulps   xmm2, xmm1
0x8EEAD9: push    eax
0x8EEADA: movaps  xmmword ptr [esp+148h+var_70], xmm2
0x8EEAE2: call    dword ptr [edx]
0x8EEAE4: jmp     short loc_8EEAE8
0x8EEAE6: fstp    st
0x8EEAE8: mov     ecx, large fs:2Ch
0x8EEAEF: mov     edx, ds:0BA9DE4h
0x8EEAF5: mov     eax, [ecx+edx*4]
0x8EEAF8: mov     esi, [eax+1A4h]
0x8EEAFE: cmp     esi, [eax+1A8h]
0x8EEB04: jnb     loc_8EEB9D
0x8EEB0A: mov     esi, eax
0x8EEB0C: mov     ecx, [esi+1A4h]
0x8EEB12: mov     dword ptr [ecx], offset aEt; "Et"
0x8EEB18: rdtsc
0x8EEB1A: mov     [esp+140h+var_120], eax
0x8EEB1E: jmp     short loc_8EEB8D
0x8EEB20: mov     ecx, large fs:2Ch
0x8EEB27: mov     edx, ds:0BA9DE4h
0x8EEB2D: mov     eax, [ecx+edx*4]
0x8EEB30: mov     esi, [eax+1A4h]
0x8EEB36: cmp     esi, [eax+1A8h]
0x8EEB3C: jnb     short loc_8EEB9D
0x8EEB3E: mov     esi, eax
0x8EEB40: mov     ecx, [esi+1A4h]
0x8EEB46: mov     dword ptr [ecx], offset aEt; "Et"
0x8EEB4C: rdtsc
0x8EEB4E: mov     [esp+140h+var_120], eax
0x8EEB52: mov     eax, [esp+140h+var_120]
0x8EEB56: mov     [ecx+4], eax
0x8EEB59: jmp     short loc_8EEB94
0x8EEB5B: mov     ecx, large fs:2Ch
0x8EEB62: mov     edx, ds:0BA9DE4h
0x8EEB68: mov     eax, [ecx+edx*4]
0x8EEB6B: mov     esi, [eax+1A4h]
0x8EEB71: cmp     esi, [eax+1A8h]
0x8EEB77: jnb     short loc_8EEB9D
0x8EEB79: mov     esi, eax
0x8EEB7B: mov     ecx, [esi+1A4h]
0x8EEB81: mov     dword ptr [ecx], offset aEt; "Et"
0x8EEB87: rdtsc
0x8EEB89: mov     [esp+140h+var_120], eax
0x8EEB8D: mov     edx, [esp+140h+var_120]
0x8EEB91: mov     [ecx+4], edx
0x8EEB94: add     ecx, 0Ch
0x8EEB97: mov     [esi+1A4h], ecx
0x8EEB9D: mov     ecx, [esp+140h+var_4]
0x8EEBA4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8EEBA9: pop     edi
0x8EEBAA: pop     esi
0x8EEBAB: pop     ebx
0x8EEBAC: mov     esp, ebp
0x8EEBAE: pop     ebp
0x8EEBAF: retn    0Ch
