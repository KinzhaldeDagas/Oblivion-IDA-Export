0x8EEBC0: push    ebp
0x8EEBC1: mov     ebp, esp
0x8EEBC3: and     esp, 0FFFFFFF0h
0x8EEBC6: sub     esp, 144h
0x8EEBCC: mov     edx, [ebp+arg_0]
0x8EEBCF: fld     dword ptr [edx+30h]
0x8EEBD2: mov     eax, ds:0B30AACh
0x8EEBD7: push    ebx
0x8EEBD8: mov     ebx, ecx
0x8EEBDA: fld     dword ptr [ebx+24h]
0x8EEBDD: push    esi
0x8EEBDE: fcomp   dword ptr ds:0A2FAA8h
0x8EEBE4: mov     [esp+14Ch+var_4], eax
0x8EEBEB: push    edi
0x8EEBEC: mov     ecx, 0Ch
0x8EEBF1: mov     esi, edx
0x8EEBF3: fnstsw  ax
0x8EEBF5: lea     edi, [esp+150h+var_50]
0x8EEBFC: rep movsd
0x8EEBFE: test    ah, 41h
0x8EEC01: jnz     short loc_8EEC05
0x8EEC03: fchs
0x8EEC05: fld     dword ptr [esp+150h+var_50+4]
0x8EEC0C: mov     eax, [edx+34h]
0x8EEC0F: mov     ecx, large fs:2Ch
0x8EEC16: fadd    st, st(1)
0x8EEC18: mov     edx, ds:0BA9DE4h
0x8EEC1E: mov     [esp+150h+var_110], eax
0x8EEC22: mov     eax, [ecx+edx*4]
0x8EEC25: fstp    dword ptr [esp+150h+var_50+4]
0x8EEC2C: fld     dword ptr [esp+150h+var_40+4]
0x8EEC33: mov     esi, [eax+1A4h]
0x8EEC39: mov     edi, [eax+1A8h]
0x8EEC3F: fadd    st, st(1)
0x8EEC41: cmp     esi, edi
0x8EEC43: mov     [esp+150h+var_125], 1
0x8EEC48: fstp    dword ptr [esp+150h+var_40+4]
0x8EEC4F: fstp    st
0x8EEC51: jnb     short loc_8EEC77
0x8EEC53: mov     esi, eax
0x8EEC55: mov     ecx, [esi+1A4h]
0x8EEC5B: mov     dword ptr [ecx], offset aTtrcheightfild; "TtrcHeightFild"
0x8EEC61: rdtsc
0x8EEC63: mov     [esp+150h+var_13C], eax
0x8EEC67: mov     edx, [esp+150h+var_13C]
0x8EEC6B: mov     [ecx+4], edx
0x8EEC6E: add     ecx, 0Ch
0x8EEC71: mov     [esi+1A4h], ecx
0x8EEC77: movaps  xmm0, xmmword ptr [ebx+30h]
0x8EEC7B: movaps  xmm1, [esp+150h+var_50]
0x8EEC83: movaps  xmm3, xmmword ptr [ebx+40h]
0x8EEC87: movaps  xmm2, xmmword ptr ds:0A97DD0h
0x8EEC8E: mov     edx, [ebx]
0x8EEC90: movaps  xmm4, xmm1
0x8EEC93: addps   xmm4, xmm3
0x8EEC96: mulps   xmm4, xmm0
0x8EEC99: addps   xmm4, xmm2
0x8EEC9C: movaps  xmmword ptr [esp+150h+var_7C+0Ch], xmm4
0x8EECA4: mov     eax, [esp+150h+var_7C+0Ch]
0x8EECAB: mov     ecx, [esp+150h+var_7C+14h]
0x8EECB2: shr     eax, 6
0x8EECB5: shr     ecx, 6
0x8EECB8: movsx   esi, ax
0x8EECBB: movsx   eax, cx
0x8EECBE: mulps   xmm1, xmm0
0x8EECC1: mov     [esp+150h+var_11C], eax
0x8EECC5: movaps  xmmword ptr [esp+150h+var_F4+4], xmm1
0x8EECCA: movaps  xmm1, [esp+150h+var_40]
0x8EECD2: lea     eax, [esp+150h+var_140]
0x8EECD6: mulps   xmm1, xmm0
0x8EECD9: push    eax
0x8EECDA: mov     ecx, ebx
0x8EECDC: mov     [esp+154h+var_124], esi
0x8EECE0: movaps  [esp+154h+var_A0], xmm1
0x8EECE8: call    dword ptr [edx+28h]
0x8EECEB: mov     al, byte ptr [esp+150h+var_140]
0x8EECEF: test    al, al
0x8EECF1: mov     ecx, [esp+150h+var_F4+8]
0x8EECF5: mov     edx, dword ptr [esp+150h+var_A0+4]
0x8EECFC: mov     [esp+150h+var_F4+10h], ecx
0x8EED00: mov     dword ptr [esp+150h+var_A0+0Ch], edx
0x8EED07: jnz     short loc_8EED25
0x8EED09: fld     [esp+150h+var_F4+0Ch]
0x8EED0D: fadd    [esp+150h+var_F4+4]
0x8EED11: fstp    [esp+150h+var_F4+8]
0x8EED15: fld     dword ptr [esp+150h+var_A0+8]
0x8EED1C: fadd    dword ptr [esp+150h+var_A0]
0x8EED23: jmp     short loc_8EED3F
0x8EED25: fld     [esp+150h+var_F4+4]
0x8EED29: fsub    [esp+150h+var_F4+0Ch]
0x8EED2D: fstp    [esp+150h+var_F4+8]
0x8EED31: fld     dword ptr [esp+150h+var_A0]
0x8EED38: fsub    dword ptr [esp+150h+var_A0+8]
0x8EED3F: fstp    dword ptr [esp+150h+var_A0+4]
0x8EED46: or      ecx, 0FFFFFFFFh
0x8EED49: fld     dword ptr [esp+150h+var_A0]
0x8EED50: fsub    [esp+150h+var_F4+4]
0x8EED54: fst     [esp+150h+var_134]
0x8EED58: fabs
0x8EED5A: fst     [esp+150h+var_20]
0x8EED61: fcomp   dword ptr ds:0A9B0D8h
0x8EED67: fnstsw  ax
0x8EED69: test    ah, 5
0x8EED6C: jp      short loc_8EED85
0x8EED6E: mov     [esp+150h+var_D0], 0
0x8EED79: mov     edx, ecx
0x8EED7B: mov     [esp+150h+var_DC], 7F7FFFFFh
0x8EED83: jmp     short loc_8EEDD7
0x8EED85: fld     dword ptr ds:0A2F948h
0x8EED8B: fdiv    [esp+150h+var_134]
0x8EED8F: fst     [esp+150h+var_7C+0Ch]
0x8EED96: fld     [esp+150h+var_134]
0x8EED9A: fcomp   dword ptr ds:0A2FAA8h
0x8EEDA0: fnstsw  ax
0x8EEDA2: test    ah, 5
0x8EEDA5: jp      short loc_8EEDB6
0x8EEDA7: fld     st
0x8EEDA9: mov     edx, ecx
0x8EEDAB: fchs
0x8EEDAD: fstp    [esp+150h+var_D0]
0x8EEDB4: jmp     short loc_8EEDC7
0x8EEDB6: inc     esi
0x8EEDB7: fst     [esp+150h+var_D0]
0x8EEDBE: mov     edx, 1
0x8EEDC3: mov     [esp+150h+var_124], esi
0x8EEDC7: fild    [esp+150h+var_124]
0x8EEDCB: fsub    [esp+150h+var_F4+4]
0x8EEDCF: fmul    st, st(1)
0x8EEDD1: fstp    [esp+150h+var_DC]
0x8EEDD5: fstp    st
0x8EEDD7: fld     dword ptr [esp+150h+var_A0+4]
0x8EEDDE: mov     [esp+150h+var_FC], edx
0x8EEDE2: fsub    [esp+150h+var_F4+8]
0x8EEDE6: fst     [esp+150h+var_134]
0x8EEDEA: fabs
0x8EEDEC: fcomp   dword ptr ds:0A9B0D8h
0x8EEDF2: fnstsw  ax
0x8EEDF4: test    ah, 5
0x8EEDF7: jp      short loc_8EEE12
0x8EEDF9: mov     [esp+150h+var_CC], 0
0x8EEE04: mov     [esp+150h+var_F8], ecx
0x8EEE08: mov     [esp+150h+var_D8], 7F7FFFFFh
0x8EEE10: jmp     short loc_8EEE66
0x8EEE12: fld     dword ptr ds:0A2F948h
0x8EEE18: fdiv    [esp+150h+var_134]
0x8EEE1C: fld     [esp+150h+var_134]
0x8EEE20: fcomp   dword ptr ds:0A2FAA8h
0x8EEE26: fnstsw  ax
0x8EEE28: test    ah, 5
0x8EEE2B: jp      short loc_8EEE3E
0x8EEE2D: fld     st
0x8EEE2F: mov     [esp+150h+var_F8], ecx
0x8EEE33: fchs
0x8EEE35: fstp    [esp+150h+var_CC]
0x8EEE3C: jmp     short loc_8EEE56
0x8EEE3E: mov     eax, [esp+150h+var_120]
0x8EEE42: fst     [esp+150h+var_CC]
0x8EEE49: inc     eax
0x8EEE4A: mov     [esp+150h+var_F8], 1
0x8EEE52: mov     [esp+150h+var_120], eax
0x8EEE56: fild    [esp+150h+var_120]
0x8EEE5A: fsub    [esp+150h+var_F4+8]
0x8EEE5E: fmul    st, st(1)
0x8EEE60: fstp    [esp+150h+var_D8]
0x8EEE64: fstp    st
0x8EEE66: fld     dword ptr [esp+150h+var_A0+8]
0x8EEE6D: mov     edi, [esp+150h+var_11C]
0x8EEE71: fsub    [esp+150h+var_F4+0Ch]
0x8EEE75: fst     [esp+150h+var_134]
0x8EEE79: fabs
0x8EEE7B: fst     dword ptr [esp+150h+var_B0+0Ch]
0x8EEE82: fcomp   dword ptr ds:0A9B0D8h
0x8EEE88: fnstsw  ax
0x8EEE8A: test    ah, 5
0x8EEE8D: jp      short loc_8EEEA8
0x8EEE8F: mov     [esp+150h+var_C8], 0
0x8EEE9A: mov     [esp+150h+var_F4], ecx
0x8EEE9E: mov     [esp+150h+var_D4], 7F7FFFFFh
0x8EEEA6: jmp     short loc_8EEEFF
0x8EEEA8: fld     dword ptr ds:0A2F948h
0x8EEEAE: fdiv    [esp+150h+var_134]
0x8EEEB2: fst     [esp+150h+var_7C+14h]
0x8EEEB9: fld     [esp+150h+var_134]
0x8EEEBD: fcomp   dword ptr ds:0A2FAA8h
0x8EEEC3: fnstsw  ax
0x8EEEC5: test    ah, 5
0x8EEEC8: jp      short loc_8EEEDB
0x8EEECA: fld     st
0x8EEECC: mov     [esp+150h+var_F4], ecx
0x8EEED0: fchs
0x8EEED2: fstp    [esp+150h+var_C8]
0x8EEED9: jmp     short loc_8EEEEF
0x8EEEDB: inc     edi
0x8EEEDC: fst     [esp+150h+var_C8]
0x8EEEE3: mov     [esp+150h+var_F4], 1
0x8EEEEB: mov     [esp+150h+var_11C], edi
0x8EEEEF: fild    [esp+150h+var_11C]
0x8EEEF3: fsub    [esp+150h+var_F4+0Ch]
0x8EEEF7: fmul    st, st(1)
0x8EEEF9: fstp    [esp+150h+var_D4]
0x8EEEFD: fstp    st
0x8EEEFF: fld     [esp+150h+var_C8]
0x8EEF06: fadd    [esp+150h+var_D0]
0x8EEF0D: fld     dword ptr ds:0A2FAA8h
0x8EEF13: fucompp
0x8EEF15: fnstsw  ax
0x8EEF17: test    ah, 44h
0x8EEF1A: jnp     loc_8EFC50
0x8EEF20: fld     [esp+150h+var_CC]
0x8EEF27: fadd    [esp+150h+var_D0]
0x8EEF2E: fld     dword ptr ds:0A2FAA8h
0x8EEF34: fucompp
0x8EEF36: fnstsw  ax
0x8EEF38: test    ah, 44h
0x8EEF3B: jnp     loc_8EFC50
0x8EEF41: fld     [esp+150h+var_CC]
0x8EEF48: fadd    [esp+150h+var_C8]
0x8EEF4F: fld     dword ptr ds:0A2FAA8h
0x8EEF55: fucompp
0x8EEF57: fnstsw  ax
0x8EEF59: test    ah, 44h
0x8EEF5C: jnp     loc_8EFC50
0x8EEF62: test    edx, edx
0x8EEF64: mov     eax, [esp+150h+var_F4+4]
0x8EEF68: mov     ecx, [esp+150h+var_F4+8]
0x8EEF6C: mov     dword ptr [esp+150h+var_C4+4], eax
0x8EEF73: mov     eax, [esp+150h+var_F4+0Ch]
0x8EEF77: mov     dword ptr [esp+150h+var_C4+8], ecx
0x8EEF7E: mov     ecx, [esp+150h+var_F4+10h]
0x8EEF82: mov     dword ptr [esp+150h+var_C4+0Ch], eax
0x8EEF89: mov     [esp+150h+var_B4], ecx
0x8EEF90: mov     [esp+150h+var_108], esi
0x8EEF94: jle     short loc_8EF008
0x8EEF96: test    esi, esi
0x8EEF98: jg      loc_8EF134
0x8EEF9E: fld     dword ptr [esp+150h+var_A0]
0x8EEFA5: fcomp   dword ptr ds:0A2FAA8h
0x8EEFAB: fnstsw  ax
0x8EEFAD: test    ah, 5
0x8EEFB0: jp      short loc_8EEFF4
0x8EEFB2: mov     ecx, large fs:2Ch
0x8EEFB9: mov     edx, ds:0BA9DE4h
0x8EEFBF: mov     eax, [ecx+edx*4]
0x8EEFC2: mov     esi, [eax+1A4h]
0x8EEFC8: cmp     esi, [eax+1A8h]
0x8EEFCE: jnb     loc_8F00BF
0x8EEFD4: mov     esi, eax
0x8EEFD6: mov     ecx, [esi+1A4h]
0x8EEFDC: mov     dword ptr [ecx], offset aEt; "Et"
0x8EEFE2: rdtsc
0x8EEFE4: mov     [esp+150h+var_110], eax
0x8EEFE8: mov     edx, [esp+150h+var_110]
0x8EEFEC: mov     [ecx+4], edx
0x8EEFEF: jmp     loc_8F00B6
0x8EEFF4: fld     [esp+150h+var_D0]
0x8EEFFB: mov     esi, 1
0x8EF000: fmul    [esp+150h+var_F4+4]
0x8EF004: fchs
0x8EF006: jmp     short loc_8EF07D
0x8EF008: mov     eax, [ebx+0Ch]
0x8EF00B: lea     ecx, [eax-2]
0x8EF00E: cmp     esi, ecx
0x8EF010: jle     loc_8EF134
0x8EF016: dec     eax
0x8EF017: mov     [esp+150h+var_13C], eax
0x8EF01B: fild    [esp+150h+var_13C]
0x8EF01F: fld     dword ptr [esp+150h+var_A0]
0x8EF026: fcomp   st(1)
0x8EF028: fnstsw  ax
0x8EF02A: test    ah, 41h
0x8EF02D: jnz     short loc_8EF070
0x8EF02F: mov     ecx, large fs:2Ch
0x8EF036: fstp    st
0x8EF038: mov     edx, ds:0BA9DE4h
0x8EF03E: mov     eax, [ecx+edx*4]
0x8EF041: mov     esi, [eax+1A4h]
0x8EF047: cmp     esi, [eax+1A8h]
0x8EF04D: jnb     loc_8F00BF
0x8EF053: mov     esi, eax
0x8EF055: mov     ecx, [esi+1A4h]
0x8EF05B: mov     dword ptr [ecx], offset aEt; "Et"
0x8EF061: rdtsc
0x8EF063: mov     [esp+150h+var_110], eax
0x8EF067: mov     eax, [esp+150h+var_110]
0x8EF06B: jmp     loc_8F00B3
0x8EF070: fsubr   [esp+150h+var_F4+4]
0x8EF074: mov     esi, ecx
0x8EF076: fmul    [esp+150h+var_D0]
0x8EF07D: fld     [esp+150h+var_D0]
0x8EF084: movaps  xmm2, xmmword ptr ds:0A6DFE0h
0x8EF08B: fadd    st, st(1)
0x8EF08D: mov     [esp+150h+var_124], esi
0x8EF091: fstp    [esp+150h+var_DC]
0x8EF095: fst     [esp+150h+var_13C]
0x8EF099: movss   xmm0, [esp+150h+var_13C]
0x8EF09F: fmul    dword ptr [esp+150h+var_B0+0Ch]
0x8EF0A6: shufps  xmm0, xmm0, 0
0x8EF0AA: subps   xmm2, xmm0
0x8EF0AD: mulps   xmm2, xmmword ptr [esp+150h+var_F4+4]
0x8EF0B2: movaps  xmm1, xmm0
0x8EF0B5: fstp    [esp+150h+var_13C]
0x8EF0B9: mulps   xmm1, [esp+150h+var_A0]
0x8EF0C1: addps   xmm2, xmm1
0x8EF0C4: movaps  [esp+150h+var_C4+4], xmm2
0x8EF0CC: fld     [esp+150h+var_13C]
0x8EF0D0: fistp   [esp+150h+var_138]
0x8EF0D4: mov     eax, [esp+150h+var_138]
0x8EF0D8: mov     ecx, [esp+150h+var_F4]
0x8EF0DC: mov     edi, [esp+150h+var_11C]
0x8EF0E0: imul    eax, ecx
0x8EF0E3: lea     edi, [edi+eax-2]
0x8EF0E7: mov     [esp+150h+var_11C], edi
0x8EF0EB: fild    [esp+150h+var_11C]
0x8EF0EF: fcomp   dword ptr [esp+150h+var_C4+0Ch]
0x8EF0F6: fnstsw  ax
0x8EF0F8: test    ah, 41h
0x8EF0FB: jp      short loc_8EF117
0x8EF0FD: lea     ecx, [ecx+0]
0x8EF100: inc     edi
0x8EF101: mov     [esp+150h+var_11C], edi
0x8EF105: fild    [esp+150h+var_11C]
0x8EF109: fcomp   dword ptr [esp+150h+var_C4+0Ch]
0x8EF110: fnstsw  ax
0x8EF112: test    ah, 41h
0x8EF115: jnp     short loc_8EF100
0x8EF117: sar     ecx, 1
0x8EF119: add     edi, ecx
0x8EF11B: mov     [esp+150h+var_11C], edi
0x8EF11F: fild    [esp+150h+var_11C]
0x8EF123: fsub    [esp+150h+var_F4+0Ch]
0x8EF127: fmul    [esp+150h+var_7C+14h]
0x8EF12E: fstp    [esp+150h+var_D4]
0x8EF132: jmp     short loc_8EF138
0x8EF134: mov     edi, [esp+150h+var_11C]
0x8EF138: mov     eax, [esp+150h+var_F4]
0x8EF13C: test    eax, eax
0x8EF13E: jle     short loc_8EF1B2
0x8EF140: test    edi, edi
0x8EF142: jg      loc_8EF2D5
0x8EF148: fld     dword ptr [esp+150h+var_A0+8]
0x8EF14F: fcomp   dword ptr ds:0A2FAA8h
0x8EF155: fnstsw  ax
0x8EF157: test    ah, 5
0x8EF15A: jp      short loc_8EF19E
0x8EF15C: mov     ecx, large fs:2Ch
0x8EF163: mov     edx, ds:0BA9DE4h
0x8EF169: mov     eax, [ecx+edx*4]
0x8EF16C: mov     esi, [eax+1A4h]
0x8EF172: cmp     esi, [eax+1A8h]
0x8EF178: jnb     loc_8F00BF
0x8EF17E: mov     esi, eax
0x8EF180: mov     ecx, [esi+1A4h]
0x8EF186: mov     dword ptr [ecx], offset aEt; "Et"
0x8EF18C: rdtsc
0x8EF18E: mov     [esp+150h+var_110], eax
0x8EF192: mov     edx, [esp+150h+var_110]
0x8EF196: mov     [ecx+4], edx
0x8EF199: jmp     loc_8F00B6
0x8EF19E: fld     [esp+150h+var_C8]
0x8EF1A5: mov     edi, 1
0x8EF1AA: fmul    [esp+150h+var_F4+0Ch]
0x8EF1AE: fchs
0x8EF1B0: jmp     short loc_8EF227
0x8EF1B2: mov     eax, [ebx+10h]
0x8EF1B5: lea     ecx, [eax-2]
0x8EF1B8: cmp     edi, ecx
0x8EF1BA: jle     loc_8EF2D5
0x8EF1C0: dec     eax
0x8EF1C1: mov     [esp+150h+var_13C], eax
0x8EF1C5: fild    [esp+150h+var_13C]
0x8EF1C9: fld     dword ptr [esp+150h+var_A0+8]
0x8EF1D0: fcomp   st(1)
0x8EF1D2: fnstsw  ax
0x8EF1D4: test    ah, 41h
0x8EF1D7: jnz     short loc_8EF21A
0x8EF1D9: mov     ecx, large fs:2Ch
0x8EF1E0: fstp    st
0x8EF1E2: mov     edx, ds:0BA9DE4h
0x8EF1E8: mov     eax, [ecx+edx*4]
0x8EF1EB: mov     esi, [eax+1A4h]
0x8EF1F1: cmp     esi, [eax+1A8h]
0x8EF1F7: jnb     loc_8F00BF
0x8EF1FD: mov     esi, eax
0x8EF1FF: mov     ecx, [esi+1A4h]
0x8EF205: mov     dword ptr [ecx], offset aEt; "Et"
0x8EF20B: rdtsc
0x8EF20D: mov     [esp+150h+var_110], eax
0x8EF211: mov     eax, [esp+150h+var_110]
0x8EF215: jmp     loc_8F00B3
0x8EF21A: fsubr   [esp+150h+var_F4+0Ch]
0x8EF21E: mov     edi, ecx
0x8EF220: fmul    [esp+150h+var_C8]
0x8EF227: fld     [esp+150h+var_C8]
0x8EF22E: movaps  xmm2, xmmword ptr ds:0A6DFE0h
0x8EF235: fadd    st, st(1)
0x8EF237: mov     [esp+150h+var_11C], edi
0x8EF23B: fstp    [esp+150h+var_D4]
0x8EF23F: fst     [esp+150h+var_13C]
0x8EF243: movss   xmm0, [esp+150h+var_13C]
0x8EF249: fmul    [esp+150h+var_20]
0x8EF250: shufps  xmm0, xmm0, 0
0x8EF254: subps   xmm2, xmm0
0x8EF257: mulps   xmm2, xmmword ptr [esp+150h+var_F4+4]
0x8EF25C: movaps  xmm1, xmm0
0x8EF25F: fstp    [esp+150h+var_13C]
0x8EF263: mulps   xmm1, [esp+150h+var_A0]
0x8EF26B: addps   xmm2, xmm1
0x8EF26E: movaps  [esp+150h+var_C4+4], xmm2
0x8EF276: fld     [esp+150h+var_13C]
0x8EF27A: fistp   [esp+150h+var_138]
0x8EF27E: mov     ecx, [esp+150h+var_138]
0x8EF282: mov     eax, [esp+150h+var_108]
0x8EF286: imul    ecx, edx
0x8EF289: lea     esi, [ecx+eax-2]
0x8EF28D: mov     [esp+150h+var_124], esi
0x8EF291: fild    [esp+150h+var_124]
0x8EF295: fcomp   dword ptr [esp+150h+var_C4+4]
0x8EF29C: fnstsw  ax
0x8EF29E: test    ah, 41h
0x8EF2A1: jp      short loc_8EF2BA
0x8EF2A3: inc     esi
0x8EF2A4: mov     [esp+150h+var_124], esi
0x8EF2A8: fild    [esp+150h+var_124]
0x8EF2AC: fcomp   dword ptr [esp+150h+var_C4+4]
0x8EF2B3: fnstsw  ax
0x8EF2B5: test    ah, 41h
0x8EF2B8: jnp     short loc_8EF2A3
0x8EF2BA: sar     edx, 1
0x8EF2BC: add     esi, edx
0x8EF2BE: mov     [esp+150h+var_124], esi
0x8EF2C2: fild    [esp+150h+var_124]
0x8EF2C6: fsub    [esp+150h+var_F4+4]
0x8EF2CA: fmul    [esp+150h+var_7C+0Ch]
0x8EF2D1: fstp    [esp+150h+var_DC]
0x8EF2D5: mov     eax, [ebx+0Ch]
0x8EF2D8: cmp     esi, eax
0x8EF2DA: jb      short loc_8EF31E
0x8EF2DC: mov     ecx, large fs:2Ch
0x8EF2E3: mov     edx, ds:0BA9DE4h
0x8EF2E9: mov     eax, [ecx+edx*4]
0x8EF2EC: mov     esi, [eax+1A4h]
0x8EF2F2: cmp     esi, [eax+1A8h]
0x8EF2F8: jnb     loc_8F00BF
0x8EF2FE: mov     esi, eax
0x8EF300: mov     ecx, [esi+1A4h]
0x8EF306: mov     dword ptr [ecx], offset aEt; "Et"
0x8EF30C: rdtsc
0x8EF30E: mov     [esp+150h+var_110], eax
0x8EF312: mov     edx, [esp+150h+var_110]
0x8EF316: mov     [ecx+4], edx
0x8EF319: jmp     loc_8F00B6
0x8EF31E: mov     edx, [esp+150h+var_FC]
0x8EF322: mov     ecx, esi
0x8EF324: sub     ecx, edx
0x8EF326: cmp     ecx, eax
0x8EF328: jb      short loc_8EF36C
0x8EF32A: mov     ecx, large fs:2Ch
0x8EF331: mov     edx, ds:0BA9DE4h
0x8EF337: mov     eax, [ecx+edx*4]
0x8EF33A: mov     esi, [eax+1A4h]
0x8EF340: cmp     esi, [eax+1A8h]
0x8EF346: jnb     loc_8F00BF
0x8EF34C: mov     esi, eax
0x8EF34E: mov     ecx, [esi+1A4h]
0x8EF354: mov     dword ptr [ecx], offset aEt; "Et"
0x8EF35A: rdtsc
0x8EF35C: mov     [esp+150h+var_110], eax
0x8EF360: mov     edx, [esp+150h+var_110]
0x8EF364: mov     [ecx+4], edx
0x8EF367: jmp     loc_8F00B6
0x8EF36C: fld     dword ptr ds:0A2FAA8h
0x8EF372: mov     edx, [esp+150h+var_FC]
0x8EF376: mov     eax, [esp+150h+var_F4]
0x8EF37A: fld     [esp+150h+var_CC]
0x8EF381: mov     cl, byte ptr [esp+150h+var_140]
0x8EF385: fucompp
0x8EF387: xor     eax, edx
0x8EF389: setnl   dl
0x8EF38C: test    cl, cl
0x8EF38E: setnz   cl
0x8EF391: fnstsw  ax
0x8EF393: xor     dl, cl
0x8EF395: test    ah, 44h
0x8EF398: mov     byte ptr [esp+150h+var_B0+8], dl
0x8EF39F: jp      short loc_8EF3B0
0x8EF3A1: mov     byte ptr [esp+150h+var_B0+8], 0
0x8EF3A9: mov     dl, byte ptr [esp+150h+var_B0+8]
0x8EF3B0: mov     al, byte ptr [esp+150h+var_140]
0x8EF3B4: test    al, al
0x8EF3B6: mov     ecx, 2
0x8EF3BB: mov     [esp+150h+var_10C], ecx
0x8EF3BF: jnz     short loc_8EF3C5
0x8EF3C1: add     esi, edi
0x8EF3C3: jmp     short loc_8EF3C7
0x8EF3C5: sub     esi, edi
0x8EF3C7: test    dl, dl
0x8EF3C9: mov     [esp+150h+var_120], esi
0x8EF3CD: fild    [esp+150h+var_120]
0x8EF3D1: fsubr   dword ptr [esp+150h+var_C4+8]
0x8EF3D8: jz      short loc_8EF3F7
0x8EF3DA: fabs
0x8EF3DC: fcomp   dword ptr ds:0A2F948h
0x8EF3E2: fnstsw  ax
0x8EF3E4: test    ah, 41h
0x8EF3E7: jnz     short loc_8EF3EF
0x8EF3E9: sub     esi, [esp+150h+var_F8]
0x8EF3ED: jmp     short loc_8EF418
0x8EF3EF: xor     ecx, ecx
0x8EF3F1: mov     [esp+150h+var_10C], ecx
0x8EF3F5: jmp     short loc_8EF41C
0x8EF3F7: fild    [esp+150h+var_F8]
0x8EF3FB: fmul    st, st(1)
0x8EF3FD: fcomp   dword ptr ds:0A2FAA8h
0x8EF403: fnstsw  ax
0x8EF405: fstp    st
0x8EF407: test    ah, 41h
0x8EF40A: jnz     short loc_8EF41C
0x8EF40C: mov     eax, [esp+150h+var_F8]
0x8EF410: xor     ecx, ecx
0x8EF412: mov     [esp+150h+var_10C], ecx
0x8EF416: add     esi, eax
0x8EF418: mov     [esp+150h+var_120], esi
0x8EF41C: fld     dword ptr ds:0A2FAA8h
0x8EF422: fld     [esp+150h+var_CC]
0x8EF429: fucompp
0x8EF42B: fnstsw  ax
0x8EF42D: test    ah, 44h
0x8EF430: jnp     short loc_8EF44B
0x8EF432: fild    [esp+150h+var_120]
0x8EF436: fsub    [esp+150h+var_F4+8]
0x8EF43A: fimul   [esp+150h+var_F8]
0x8EF43E: fmul    [esp+150h+var_CC]
0x8EF445: fstp    [esp+150h+var_D8]
0x8EF449: jmp     short loc_8EF453
0x8EF44B: mov     [esp+150h+var_D8], 7F7FFFFFh
0x8EF453: fld     dword ptr ds:0A2FAA8h
0x8EF459: fld     [esp+150h+var_D0]
0x8EF460: fucompp
0x8EF462: fnstsw  ax
0x8EF464: test    ah, 44h
0x8EF467: jp      short loc_8EF471
0x8EF469: fld     dword ptr ds:0A3B888h
0x8EF46F: jmp     short loc_8EF47C
0x8EF471: fld     [esp+150h+var_DC]
0x8EF475: fsub    [esp+150h+var_D0]
0x8EF47C: fld     dword ptr ds:0A2FAA8h
0x8EF482: fld     [esp+150h+var_CC]
0x8EF489: fucompp
0x8EF48B: fnstsw  ax
0x8EF48D: test    ah, 44h
0x8EF490: jp      short loc_8EF49F
0x8EF492: mov     dword ptr [esp+150h+var_C4+8], 0FF7FFFFFh
0x8EF49D: jmp     short loc_8EF4B1
0x8EF49F: fld     [esp+150h+var_D8]
0x8EF4A3: fsub    [esp+150h+var_CC]
0x8EF4AA: fstp    dword ptr [esp+150h+var_C4+8]
0x8EF4B1: fld     dword ptr ds:0A2FAA8h
0x8EF4B7: fld     [esp+150h+var_C8]
0x8EF4BE: fucompp
0x8EF4C0: fnstsw  ax
0x8EF4C2: test    ah, 44h
0x8EF4C5: jp      short loc_8EF4D4
0x8EF4C7: mov     dword ptr [esp+150h+var_C4+0Ch], 0FF7FFFFFh
0x8EF4D2: jmp     short loc_8EF4E6
0x8EF4D4: fld     [esp+150h+var_D4]
0x8EF4D8: fsub    [esp+150h+var_C8]
0x8EF4DF: fstp    dword ptr [esp+150h+var_C4+0Ch]
0x8EF4E6: test    dl, dl
0x8EF4E8: jz      short loc_8EF509
0x8EF4EA: test    ecx, ecx
0x8EF4EC: jnz     short loc_8EF4F7
0x8EF4EE: fstp    st
0x8EF4F0: mov     eax, 1
0x8EF4F5: jmp     short loc_8EF561
0x8EF4F7: fcomp   dword ptr [esp+150h+var_C4+0Ch]
0x8EF4FE: fnstsw  ax
0x8EF500: test    ah, 41h
0x8EF503: jnz     short loc_8EF55C
0x8EF505: xor     eax, eax
0x8EF507: jmp     short loc_8EF561
0x8EF509: fld     [esp+150h+var_20]
0x8EF510: fcomp   dword ptr [esp+150h+var_B0+0Ch]
0x8EF517: fnstsw  ax
0x8EF519: test    ah, 5
0x8EF51C: jp      short loc_8EF538
0x8EF51E: test    ecx, ecx
0x8EF520: jz      short loc_8EF526
0x8EF522: fstp    st
0x8EF524: jmp     short loc_8EF55C
0x8EF526: fcomp   dword ptr [esp+150h+var_C4+8]
0x8EF52D: fnstsw  ax
0x8EF52F: test    ah, 41h
0x8EF532: jnz     short loc_8EF4F0
0x8EF534: xor     eax, eax
0x8EF536: jmp     short loc_8EF561
0x8EF538: test    ecx, ecx
0x8EF53A: fstp    st
0x8EF53C: jz      short loc_8EF542
0x8EF53E: xor     eax, eax
0x8EF540: jmp     short loc_8EF561
0x8EF542: fld     dword ptr [esp+150h+var_C4+8]
0x8EF549: fcomp   dword ptr [esp+150h+var_C4+0Ch]
0x8EF550: fnstsw  ax
0x8EF552: test    ah, 41h
0x8EF555: mov     eax, 1
0x8EF55A: jz      short loc_8EF561
0x8EF55C: mov     eax, 2
0x8EF561: fld     [esp+eax*4+150h+var_DC]
0x8EF565: mov     esi, [esp+eax*4+150h+var_124]
0x8EF569: mov     edx, [esp+eax*4+150h+var_FC]
0x8EF56D: fsub    [esp+eax*4+150h+var_D0]
0x8EF574: sub     esi, edx
0x8EF576: mov     [esp+eax*4+150h+var_124], esi
0x8EF57A: mov     ecx, [esp+150h+var_124]
0x8EF57E: fstp    [esp+eax*4+150h+var_DC]
0x8EF582: mov     [esp+150h+var_134], eax
0x8EF586: mov     eax, [ebx+0Ch]
0x8EF589: cmp     ecx, eax
0x8EF58B: mov     [esp+150h+var_12C], 7F7FFFFFh
0x8EF593: mov     dword ptr [esp+150h+var_B0+4], 0
0x8EF59E: mov     [esp+150h+var_100], 0BF800000h
0x8EF5A6: jnb     loc_8EFB91
0x8EF5AC: lea     esp, [esp+0]
0x8EF5B0: mov     eax, [esp+150h+var_11C]
0x8EF5B4: cmp     eax, [ebx+10h]
0x8EF5B7: jnb     loc_8EFB91
0x8EF5BD: fld     [esp+150h+var_100]
0x8EF5C1: mov     ecx, [ebp+arg_8]
0x8EF5C4: fcomp   dword ptr [ecx+4]
0x8EF5C7: fnstsw  ax
0x8EF5C9: test    ah, 41h
0x8EF5CC: jz      loc_8EFBD3
0x8EF5D2: mov     edi, [esp+150h+var_134]
0x8EF5D6: mov     edx, [esp+edi*4+150h+var_DC]
0x8EF5DA: lea     eax, [esp+edi*4+150h+var_DC]
0x8EF5DE: mov     [esp+150h+var_130], eax
0x8EF5E2: mov     eax, edx
0x8EF5E4: push    eax
0x8EF5E5: lea     ecx, [esp+0C4h]
0x8EF5EC: mov     [esp+154h+var_118], edx
0x8EF5F0: call    sub_535AA0
0x8EF5F5: mov     esi, [esp+150h+var_124]
0x8EF5F9: movaps  xmm0, xmmword ptr [esp+0C0h]
0x8EF601: mov     ecx, [esp+150h+var_FC]
0x8EF605: movaps  xmm2, xmmword ptr ds:0A6DFE0h
0x8EF60C: shufps  xmm0, xmm0, 0
0x8EF610: subps   xmm2, xmm0
0x8EF613: mulps   xmm2, xmmword ptr [esp+150h+var_F4+4]
0x8EF618: mov     eax, esi
0x8EF61A: sub     eax, ecx
0x8EF61C: test    edi, edi
0x8EF61E: mov     ecx, [esp+150h+var_11C]
0x8EF622: movaps  xmm1, xmm0
0x8EF625: mulps   xmm1, [esp+150h+var_A0]
0x8EF62D: addps   xmm2, xmm1
0x8EF630: movaps  [esp+150h+var_C4+4], xmm2
0x8EF638: mov     [esp+150h+var_104], eax
0x8EF63C: jnz     short loc_8EF678
0x8EF63E: mov     edi, [esp+150h+var_F4]
0x8EF642: mov     edx, [ebx]
0x8EF644: sub     ecx, edi
0x8EF646: push    ecx
0x8EF647: push    esi
0x8EF648: mov     ecx, ebx
0x8EF64A: call    dword ptr [edx+24h]
0x8EF64D: fstp    [esp+150h+var_13C]
0x8EF651: mov     edi, [esp+150h+var_11C]
0x8EF655: mov     eax, [ebx]
0x8EF657: push    edi
0x8EF658: push    esi
0x8EF659: mov     ecx, ebx
0x8EF65B: call    dword ptr [eax+24h]
0x8EF65E: fild    [esp+150h+var_11C]
0x8EF662: fsubr   dword ptr [esp+150h+var_C4+0Ch]
0x8EF669: fabs
0x8EF66B: fld     [esp+150h+var_13C]
0x8EF66F: fsub    st, st(2)
0x8EF671: fmulp   st(1), st
0x8EF673: jmp     loc_8EF706
0x8EF678: cmp     edi, 2
0x8EF67B: mov     edi, [esp+150h+var_11C]
0x8EF67F: jnz     short loc_8EF6AE
0x8EF681: mov     edx, [ebx]
0x8EF683: push    edi
0x8EF684: push    eax
0x8EF685: mov     ecx, ebx
0x8EF687: call    dword ptr [edx+24h]
0x8EF68A: fstp    [esp+150h+var_13C]
0x8EF68E: mov     eax, [ebx]
0x8EF690: push    edi
0x8EF691: push    esi
0x8EF692: mov     ecx, ebx
0x8EF694: call    dword ptr [eax+24h]
0x8EF697: fild    [esp+150h+var_124]
0x8EF69B: fsubr   dword ptr [esp+150h+var_C4+4]
0x8EF6A2: fabs
0x8EF6A4: fld     [esp+150h+var_13C]
0x8EF6A8: fsub    st, st(2)
0x8EF6AA: fmulp   st(1), st
0x8EF6AC: jmp     short loc_8EF706
0x8EF6AE: fild    [esp+150h+var_124]
0x8EF6B2: mov     dl, byte ptr [esp+150h+var_B0+8]
0x8EF6B9: test    dl, dl
0x8EF6BB: mov     [esp+150h+var_108], edi
0x8EF6BF: fsubr   dword ptr [esp+150h+var_C4+4]
0x8EF6C6: fabs
0x8EF6C8: fstp    [esp+150h+var_138]
0x8EF6CC: jz      short loc_8EF6DA
0x8EF6CE: mov     edx, edi
0x8EF6D0: sub     edx, [esp+150h+var_F4]
0x8EF6D4: mov     [esp+150h+var_108], edx
0x8EF6D8: jmp     short loc_8EF6E2
0x8EF6DA: mov     edx, [esp+150h+var_F4]
0x8EF6DE: mov     ecx, edi
0x8EF6E0: sub     ecx, edx
0x8EF6E2: mov     edx, [ebx]
0x8EF6E4: push    ecx
0x8EF6E5: push    eax
0x8EF6E6: mov     ecx, ebx
0x8EF6E8: call    dword ptr [edx+24h]
0x8EF6EB: fstp    [esp+150h+var_13C]
0x8EF6EF: mov     ecx, [esp+150h+var_108]
0x8EF6F3: mov     eax, [ebx]
0x8EF6F5: push    ecx
0x8EF6F6: push    esi
0x8EF6F7: mov     ecx, ebx
0x8EF6F9: call    dword ptr [eax+24h]
0x8EF6FC: fld     [esp+150h+var_13C]
0x8EF700: fsub    st, st(1)
0x8EF702: fmul    [esp+150h+var_138]
0x8EF706: mov     cl, [esp+150h+var_125]
0x8EF70A: fadd    st, st(1)
0x8EF70C: test    cl, cl
0x8EF70E: fstp    [esp+150h+var_114]
0x8EF712: fstp    st
0x8EF714: fld     [esp+150h+var_B4]
0x8EF71B: fcomp   [esp+150h+var_114]
0x8EF71F: fnstsw  ax
0x8EF721: jz      short loc_8EF782
0x8EF723: test    ah, 1
0x8EF726: jz      loc_8EFAAD
0x8EF72C: fld     dword ptr [esp+150h+var_B0+4]
0x8EF733: fsub    [esp+150h+var_12C]
0x8EF737: fld     [esp+150h+var_B4]
0x8EF73E: fsub    [esp+150h+var_114]
0x8EF742: fld     [esp+150h+var_118]
0x8EF746: fsub    [esp+150h+var_100]
0x8EF74A: fmul    [esp+150h+var_110]
0x8EF74E: fsubr   st, st(2)
0x8EF750: fcompp
0x8EF752: fnstsw  ax
0x8EF754: test    ah, 41h
0x8EF757: jnp     loc_8EFAAB
0x8EF75D: fcomp   dword ptr ds:0A2FAA8h
0x8EF763: fnstsw  ax
0x8EF765: test    ah, 41h
0x8EF768: jp      short loc_8EF7A1
0x8EF76A: mov     edx, [esp+150h+var_100]
0x8EF76E: push    edx; float
0x8EF76F: push    0; float
0x8EF771: call    sub_8AC0D0
0x8EF776: fst     [esp+158h+var_108]
0x8EF77A: add     esp, 8
0x8EF77D: jmp     loc_8EF833
0x8EF782: test    ah, 1
0x8EF785: jz      loc_8EFAAD
0x8EF78B: fld     dword ptr [esp+150h+var_B0+4]
0x8EF792: fcomp   [esp+150h+var_12C]
0x8EF796: fnstsw  ax
0x8EF798: test    ah, 5
0x8EF79B: jnp     loc_8EFAAD
0x8EF7A1: fld     [esp+150h+var_B4]
0x8EF7A8: fsub    [esp+150h+var_114]
0x8EF7AC: fld     [esp+150h+var_100]
0x8EF7B0: fcomp   dword ptr ds:0A2FAA8h
0x8EF7B6: fnstsw  ax
0x8EF7B8: test    ah, 1
0x8EF7BB: jnz     short loc_8EF7E0
0x8EF7BD: fld     dword ptr [esp+150h+var_B0+4]
0x8EF7C4: fsub    [esp+150h+var_12C]
0x8EF7C8: fld     st
0x8EF7CA: fsubrp  st(2), st
0x8EF7CC: fxch    st(1)
0x8EF7CE: fdivr   st, st(1)
0x8EF7D0: fld     [esp+150h+var_118]
0x8EF7D4: fsub    [esp+150h+var_100]
0x8EF7D8: fmulp   st(1), st
0x8EF7DA: fadd    [esp+150h+var_100]
0x8EF7DE: jmp     short loc_8EF82D
0x8EF7E0: fld     [esp+150h+var_118]
0x8EF7E4: fsub    [esp+150h+var_100]
0x8EF7E8: fdivr   [esp+150h+var_118]
0x8EF7EC: fld     dword ptr ds:0A2F948h
0x8EF7F2: fsub    st, st(1)
0x8EF7F4: fmul    [esp+150h+var_114]
0x8EF7F8: fxch    st(1)
0x8EF7FA: fmul    [esp+150h+var_12C]
0x8EF7FE: faddp   st(1), st
0x8EF800: fsubr   [esp+150h+var_F4+10h]
0x8EF804: fcom    dword ptr ds:0A2FAA8h
0x8EF80A: fnstsw  ax
0x8EF80C: test    ah, 5
0x8EF80F: jp      short loc_8EF821
0x8EF811: test    cl, cl
0x8EF813: fstp    st
0x8EF815: jz      loc_8EFAAB
0x8EF81B: fld     dword ptr ds:0A2FAA8h
0x8EF821: fld     st
0x8EF823: fsubrp  st(2), st
0x8EF825: fxch    st(1)
0x8EF827: fdivr   st, st(1)
0x8EF829: fmul    [esp+150h+var_118]
0x8EF82D: fst     [esp+150h+var_108]
0x8EF831: fstp    st(1)
0x8EF833: mov     eax, [esp+150h+var_114]
0x8EF837: mov     ecx, [esp+150h+var_B4]
0x8EF83E: mov     edx, [esp+150h+var_118]
0x8EF842: mov     [esp+150h+var_12C], eax
0x8EF846: mov     eax, [ebp+arg_8]
0x8EF849: fcomp   dword ptr [eax+4]
0x8EF84C: mov     dword ptr [esp+150h+var_B0+4], ecx
0x8EF853: mov     [esp+150h+var_100], edx
0x8EF857: fnstsw  ax
0x8EF859: test    ah, 41h
0x8EF85C: jz      loc_8EFC15
0x8EF862: mov     ecx, [esp+150h+var_F4]
0x8EF866: mov     esi, [esp+150h+var_11C]
0x8EF86A: mov     al, byte ptr [esp+150h+var_B0+8]
0x8EF871: mov     edx, [ebx]
0x8EF873: sub     esi, ecx
0x8EF875: test    al, al
0x8EF877: mov     dword ptr [esp+150h+var_40+4], 3F800000h
0x8EF882: mov     dword ptr [esp+150h+var_50+0Ch], 0
0x8EF88D: mov     dword ptr [esp+150h+var_50+4], 3F800000h
0x8EF898: mov     ecx, ebx
0x8EF89A: push    esi
0x8EF89B: jz      short loc_8EF907
0x8EF89D: mov     eax, [esp+154h+var_124]
0x8EF8A1: push    eax
0x8EF8A2: call    dword ptr [edx+24h]
0x8EF8A5: fstp    [esp+150h+var_138]
0x8EF8A9: mov     eax, [esp+150h+var_104]
0x8EF8AD: mov     edx, [ebx]
0x8EF8AF: push    edi
0x8EF8B0: push    eax
0x8EF8B1: mov     ecx, ebx
0x8EF8B3: call    dword ptr [edx+24h]
0x8EF8B6: fstp    [esp+150h+var_114]
0x8EF8BA: cmp     [esp+150h+var_134], 1
0x8EF8BF: mov     edx, [ebx]
0x8EF8C1: mov     ecx, ebx
0x8EF8C3: jnz     short loc_8EF8E3
0x8EF8C5: mov     eax, [esp+150h+var_104]
0x8EF8C9: push    esi
0x8EF8CA: push    eax
0x8EF8CB: call    dword ptr [edx+24h]
0x8EF8CE: fst     [esp+150h+var_104]
0x8EF8D2: fsub    [esp+150h+var_138]
0x8EF8D6: fld     [esp+150h+var_104]
0x8EF8DA: fsub    [esp+150h+var_114]
0x8EF8DE: jmp     loc_8EF988
0x8EF8E3: mov     eax, [esp+150h+var_124]
0x8EF8E7: push    edi
0x8EF8E8: push    eax
0x8EF8E9: call    dword ptr [edx+24h]
0x8EF8EC: fstp    [esp+150h+var_104]
0x8EF8F0: fld     [esp+150h+var_114]
0x8EF8F4: cmp     edi, esi
0x8EF8F6: fsub    [esp+150h+var_104]
0x8EF8FA: fld     [esp+150h+var_138]
0x8EF8FE: fsub    [esp+150h+var_104]
0x8EF902: jmp     loc_8EF98A
0x8EF907: mov     eax, [esp+154h+var_104]
0x8EF90B: push    eax
0x8EF90C: call    dword ptr [edx+24h]
0x8EF90F: fstp    [esp+150h+var_114]
0x8EF913: mov     eax, [esp+150h+var_124]
0x8EF917: mov     edx, [ebx]
0x8EF919: push    edi
0x8EF91A: push    eax
0x8EF91B: mov     ecx, ebx
0x8EF91D: call    dword ptr [edx+24h]
0x8EF920: fstp    [esp+150h+var_13C]
0x8EF924: mov     eax, [esp+150h+var_134]
0x8EF928: test    eax, eax
0x8EF92A: jz      short loc_8EF967
0x8EF92C: cmp     eax, 1
0x8EF92F: jnz     short loc_8EF946
0x8EF931: fld     [esp+150h+var_20]
0x8EF938: fcomp   dword ptr [esp+150h+var_B0+0Ch]
0x8EF93F: fnstsw  ax
0x8EF941: test    ah, 5
0x8EF944: jnp     short loc_8EF967
0x8EF946: mov     eax, [esp+150h+var_104]
0x8EF94A: mov     edx, [ebx]
0x8EF94C: push    edi
0x8EF94D: push    eax
0x8EF94E: mov     ecx, ebx
0x8EF950: call    dword ptr [edx+24h]
0x8EF953: fst     [esp+150h+var_138]
0x8EF957: fsub    [esp+150h+var_13C]
0x8EF95B: cmp     edi, esi
0x8EF95D: fld     [esp+150h+var_114]
0x8EF961: fsub    [esp+150h+var_138]
0x8EF965: jmp     short loc_8EF98A
0x8EF967: mov     eax, [esp+150h+var_124]
0x8EF96B: mov     edx, [ebx]
0x8EF96D: push    esi
0x8EF96E: push    eax
0x8EF96F: mov     ecx, ebx
0x8EF971: call    dword ptr [edx+24h]
0x8EF974: fstp    [esp+150h+var_138]
0x8EF978: fld     [esp+150h+var_114]
0x8EF97C: fsub    [esp+150h+var_138]
0x8EF980: fld     [esp+150h+var_138]
0x8EF984: fsub    [esp+150h+var_13C]
0x8EF988: cmp     esi, edi
0x8EF98A: fild    [esp+150h+var_FC]
0x8EF98E: movaps  xmm0, xmmword ptr [ebx+30h]
0x8EF992: setnle  cl
0x8EF995: movzx   eax, cl
0x8EF998: mov     cl, byte ptr [esp+150h+var_140]
0x8EF99C: fmul    st, st(2)
0x8EF99E: test    cl, cl
0x8EF9A0: setnz   dl
0x8EF9A3: fstp    dword ptr [esp+150h+var_50]
0x8EF9AA: movzx   ecx, dl
0x8EF9AD: fild    [esp+150h+var_F4]
0x8EF9B1: mov     edx, [esp+150h+var_108]
0x8EF9B5: xor     eax, ecx
0x8EF9B7: fmul    st, st(1)
0x8EF9B9: mov     ecx, [esp+150h+var_11C]
0x8EF9BD: mov     dword ptr [esp+150h+var_40+4], edx
0x8EF9C4: mov     edx, [esp+150h+var_F4]
0x8EF9C8: fstp    dword ptr [esp+150h+var_50+8]
0x8EF9CF: movaps  xmm1, [esp+150h+var_50]
0x8EF9D7: mulps   xmm1, xmm0
0x8EF9DA: fstp    st
0x8EF9DC: sar     edx, 1
0x8EF9DE: fstp    st
0x8EF9E0: sub     ecx, edx
0x8EF9E2: mov     edx, [esp+150h+var_FC]
0x8EF9E6: dec     ecx
0x8EF9E7: movaps  xmm0, xmm1
0x8EF9EA: mulps   xmm0, xmm1
0x8EF9ED: movaps  xmm2, xmm0
0x8EF9F0: shufps  xmm2, xmm0, 55h ; 'U'
0x8EF9F4: addss   xmm2, xmm0
0x8EF9F8: movaps  xmm3, xmm0
0x8EF9FB: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8EF9FF: shl     ecx, 0Fh
0x8EFA02: sar     edx, 1
0x8EFA04: sub     ecx, edx
0x8EFA06: mov     edx, [esp+150h+var_124]
0x8EFA0A: movaps  xmm0, xmm3
0x8EFA0D: addss   xmm0, xmm2
0x8EFA11: movaps  xmmword ptr [esp+150h+var_7C+0Ch], xmm0
0x8EFA19: rsqrtss xmm2, xmm0
0x8EFA1D: movss   [esp+150h+var_7C+0Ch], xmm2
0x8EFA26: movaps  xmm2, xmmword ptr [esp+150h+var_7C+0Ch]
0x8EFA2E: mulss   xmm0, xmm2
0x8EFA32: mulss   xmm0, xmm2
0x8EFA36: add     ecx, edx
0x8EFA38: lea     eax, [eax+ecx*2-2]
0x8EFA3C: mov     ecx, [ebp+arg_8]
0x8EFA3F: mov     edx, [ecx]
0x8EFA41: mov     [esp+150h+var_58], 40400000h
0x8EFA4C: movss   xmm3, [esp+150h+var_58]
0x8EFA55: subss   xmm3, xmm0
0x8EFA59: mov     dword ptr [esp+150h+var_40], eax
0x8EFA60: mov     [esp+150h+var_54], 3F000000h
0x8EFA6B: movss   xmm0, [esp+150h+var_54]
0x8EFA74: mulss   xmm0, xmm2
0x8EFA78: lea     eax, [esp+150h+var_50]
0x8EFA7F: mulss   xmm0, xmm3
0x8EFA83: push    eax
0x8EFA84: mov     eax, [ebp+arg_4]
0x8EFA87: movaps  xmm2, xmm0
0x8EFA8A: shufps  xmm2, xmm0, 0
0x8EFA8E: mulps   xmm2, xmm1
0x8EFA91: push    eax
0x8EFA92: movaps  [esp+158h+var_50], xmm2
0x8EFA9A: call    dword ptr [edx]
0x8EFA9C: mov     al, [esp+150h+var_125]
0x8EFAA0: test    al, al
0x8EFAA2: jz      short loc_8EFACB
0x8EFAA4: mov     [esp+150h+var_125], 0
0x8EFAA9: jmp     short loc_8EFACB
0x8EFAAB: fstp    st
0x8EFAAD: mov     ecx, [esp+150h+var_114]
0x8EFAB1: mov     edx, [esp+150h+var_B4]
0x8EFAB8: mov     eax, [esp+150h+var_118]
0x8EFABC: mov     [esp+150h+var_12C], ecx
0x8EFAC0: mov     dword ptr [esp+150h+var_B0+4], edx
0x8EFAC7: mov     [esp+150h+var_100], eax
0x8EFACB: mov     eax, [esp+150h+var_134]
0x8EFACF: mov     edi, [esp+eax*4+150h+var_124]
0x8EFAD3: fld     [esp+eax*4+150h+var_D0]
0x8EFADA: mov     esi, [esp+eax*4+150h+var_FC]
0x8EFADE: mov     ecx, [esp+150h+var_10C]
0x8EFAE2: add     edi, esi
0x8EFAE4: mov     [esp+eax*4+150h+var_124], edi
0x8EFAE8: mov     eax, [esp+150h+var_130]
0x8EFAEC: fadd    dword ptr [eax]
0x8EFAEE: mov     edx, 2
0x8EFAF3: xor     ecx, edx
0x8EFAF5: mov     [esp+150h+var_10C], ecx
0x8EFAF9: fstp    dword ptr [eax]
0x8EFAFB: mov     al, byte ptr [esp+150h+var_B0+8]
0x8EFB02: test    al, al
0x8EFB04: jz      short loc_8EFB2D
0x8EFB06: test    ecx, ecx
0x8EFB08: jnz     short loc_8EFB14
0x8EFB0A: mov     [esp+150h+var_134], 1
0x8EFB12: jmp     short loc_8EFB84
0x8EFB14: fld     [esp+150h+var_DC]
0x8EFB18: fcomp   [esp+150h+var_D4]
0x8EFB1C: fnstsw  ax
0x8EFB1E: test    ah, 5
0x8EFB21: jp      short loc_8EFB80
0x8EFB23: mov     [esp+150h+var_134], 0
0x8EFB2B: jmp     short loc_8EFB84
0x8EFB2D: fld     [esp+150h+var_20]
0x8EFB34: fcomp   dword ptr [esp+150h+var_B0+0Ch]
0x8EFB3B: fnstsw  ax
0x8EFB3D: test    ah, 5
0x8EFB40: jp      short loc_8EFB5B
0x8EFB42: test    ecx, ecx
0x8EFB44: jnz     short loc_8EFB80
0x8EFB46: fld     [esp+150h+var_DC]
0x8EFB4A: fcomp   [esp+150h+var_D8]
0x8EFB4E: fnstsw  ax
0x8EFB50: test    ah, 5
0x8EFB53: jp      short loc_8EFB0A
0x8EFB55: mov     [esp+150h+var_134], ecx
0x8EFB59: jmp     short loc_8EFB84
0x8EFB5B: test    ecx, ecx
0x8EFB5D: jz      short loc_8EFB69
0x8EFB5F: mov     [esp+150h+var_134], 0
0x8EFB67: jmp     short loc_8EFB84
0x8EFB69: fld     [esp+150h+var_D8]
0x8EFB6D: mov     [esp+150h+var_134], 1
0x8EFB75: fcomp   [esp+150h+var_D4]
0x8EFB79: fnstsw  ax
0x8EFB7B: test    ah, 5
0x8EFB7E: jnp     short loc_8EFB84
0x8EFB80: mov     [esp+150h+var_134], edx
0x8EFB84: mov     ecx, [esp+150h+var_124]
0x8EFB88: cmp     ecx, [ebx+0Ch]
0x8EFB8B: jb      loc_8EF5B0
0x8EFB91: mov     ecx, large fs:2Ch
0x8EFB98: mov     edx, ds:0BA9DE4h
0x8EFB9E: mov     eax, [ecx+edx*4]
0x8EFBA1: mov     esi, [eax+1A4h]
0x8EFBA7: cmp     esi, [eax+1A8h]
0x8EFBAD: jnb     loc_8F00BF
0x8EFBB3: mov     esi, eax
0x8EFBB5: mov     ecx, [esi+1A4h]
0x8EFBBB: mov     dword ptr [ecx], offset aEt; "Et"
0x8EFBC1: rdtsc
0x8EFBC3: mov     [esp+150h+var_130], eax
0x8EFBC7: mov     edx, [esp+150h+var_130]
0x8EFBCB: mov     [ecx+4], edx
0x8EFBCE: jmp     loc_8F00B6
0x8EFBD3: mov     ecx, large fs:2Ch
0x8EFBDA: mov     edx, ds:0BA9DE4h
0x8EFBE0: mov     eax, [ecx+edx*4]
0x8EFBE3: mov     esi, [eax+1A4h]
0x8EFBE9: cmp     esi, [eax+1A8h]
0x8EFBEF: jnb     loc_8F00BF
0x8EFBF5: mov     esi, eax
0x8EFBF7: mov     ecx, [esi+1A4h]
0x8EFBFD: mov     dword ptr [ecx], offset aEt; "Et"
0x8EFC03: rdtsc
0x8EFC05: mov     [esp+150h+var_130], eax
0x8EFC09: mov     edx, [esp+150h+var_130]
0x8EFC0D: mov     [ecx+4], edx
0x8EFC10: jmp     loc_8F00B6
0x8EFC15: mov     ecx, large fs:2Ch
0x8EFC1C: mov     edx, ds:0BA9DE4h
0x8EFC22: mov     eax, [ecx+edx*4]
0x8EFC25: mov     esi, [eax+1A4h]
0x8EFC2B: cmp     esi, [eax+1A8h]
0x8EFC31: jnb     loc_8F00BF
0x8EFC37: mov     esi, eax
0x8EFC39: mov     ecx, [esi+1A4h]
0x8EFC3F: mov     dword ptr [ecx], offset aEt; "Et"
0x8EFC45: rdtsc
0x8EFC47: mov     [esp+150h+var_130], eax
0x8EFC4B: jmp     loc_8F00AF
0x8EFC50: mov     eax, [ebx+0Ch]
0x8EFC53: dec     eax
0x8EFC54: cmp     esi, eax
0x8EFC56: jnb     loc_8F007D
0x8EFC5C: mov     ecx, [ebx+10h]
0x8EFC5F: dec     ecx
0x8EFC60: cmp     edi, ecx
0x8EFC62: jnb     loc_8F007D
0x8EFC68: fild    [esp+150h+var_11C]
0x8EFC6C: mov     edx, [ebx]
0x8EFC6E: lea     eax, [esp+150h+var_125]
0x8EFC72: mov     [esp+150h+var_130], 3F800000h
0x8EFC7A: fsubr   [esp+150h+var_F4+0Ch]
0x8EFC7E: movss   xmm0, [esp+150h+var_130]
0x8EFC84: shufps  xmm0, xmm0, 0
0x8EFC88: push    eax
0x8EFC89: fstp    [esp+154h+var_118]
0x8EFC8D: mov     ecx, ebx
0x8EFC8F: fild    [esp+154h+var_124]
0x8EFC93: mov     [esp+154h+var_7C], 3F800000h
0x8EFC9E: movaps  xmmword ptr [esp+0C4h], xmm0
0x8EFCA6: fsubr   [esp+154h+var_F4+4]
0x8EFCAA: fstp    [esp+154h+var_12C]
0x8EFCAE: call    dword ptr [edx+28h]
0x8EFCB1: mov     cl, [eax]
0x8EFCB3: mov     edx, [ebx]
0x8EFCB5: test    cl, cl
0x8EFCB7: push    edi
0x8EFCB8: mov     ecx, ebx
0x8EFCBA: jz      loc_8EFD6D
0x8EFCC0: push    esi
0x8EFCC1: call    dword ptr [edx+24h]
0x8EFCC4: fstp    [esp+150h+var_10C]
0x8EFCC8: mov     edx, [ebx]
0x8EFCCA: lea     eax, [edi+1]
0x8EFCCD: lea     ecx, [esi+1]
0x8EFCD0: push    eax
0x8EFCD1: push    ecx
0x8EFCD2: mov     ecx, ebx
0x8EFCD4: call    dword ptr [edx+24h]
0x8EFCD7: fstp    [esp+150h+var_138]
0x8EFCDB: fld     [esp+150h+var_12C]
0x8EFCDF: mov     edx, [ebx]
0x8EFCE1: fcomp   [esp+150h+var_118]
0x8EFCE5: mov     ecx, ebx
0x8EFCE7: fnstsw  ax
0x8EFCE9: test    ah, 41h
0x8EFCEC: jnz     short loc_8EFD27
0x8EFCEE: push    edi
0x8EFCEF: lea     eax, [esi+1]
0x8EFCF2: push    eax
0x8EFCF3: call    dword ptr [edx+24h]
0x8EFCF6: fld     [esp+150h+var_10C]
0x8EFCFA: fsubr   st, st(1)
0x8EFCFC: fstp    [esp+150h+var_13C]
0x8EFD00: fld     [esp+150h+var_138]
0x8EFD04: fsub    st, st(1)
0x8EFD06: fstp    [esp+150h+var_138]
0x8EFD0A: fstp    st
0x8EFD0C: fld     [esp+150h+var_13C]
0x8EFD10: fmul    [esp+150h+var_12C]
0x8EFD14: fld     [esp+150h+var_138]
0x8EFD18: fmul    [esp+150h+var_118]
0x8EFD1C: faddp   st(1), st
0x8EFD1E: fadd    [esp+150h+var_10C]
0x8EFD22: jmp     loc_8EFDDA
0x8EFD27: lea     eax, [edi+1]
0x8EFD2A: push    eax
0x8EFD2B: push    esi
0x8EFD2C: call    dword ptr [edx+24h]
0x8EFD2F: fld     [esp+150h+var_138]
0x8EFD33: fsub    st, st(1)
0x8EFD35: fstp    [esp+150h+var_13C]
0x8EFD39: fsub    [esp+150h+var_10C]
0x8EFD3D: fstp    [esp+150h+var_138]
0x8EFD41: fld     [esp+150h+var_13C]
0x8EFD45: fmul    [esp+150h+var_12C]
0x8EFD49: fld     [esp+150h+var_138]
0x8EFD4D: fmul    [esp+150h+var_118]
0x8EFD51: faddp   st(1), st
0x8EFD53: fadd    [esp+150h+var_10C]
0x8EFD57: fld     [esp+150h+var_13C]
0x8EFD5B: fchs
0x8EFD5D: fstp    dword ptr [esp+0C0h]
0x8EFD64: fld     [esp+150h+var_138]
0x8EFD68: jmp     loc_8EFE32
0x8EFD6D: lea     eax, [esi+1]
0x8EFD70: push    eax
0x8EFD71: call    dword ptr [edx+24h]
0x8EFD74: fstp    [esp+150h+var_108]
0x8EFD78: mov     edx, [ebx]
0x8EFD7A: lea     eax, [edi+1]
0x8EFD7D: push    eax
0x8EFD7E: push    esi
0x8EFD7F: mov     ecx, ebx
0x8EFD81: call    dword ptr [edx+24h]
0x8EFD84: fstp    [esp+150h+var_13C]
0x8EFD88: fld     [esp+150h+var_12C]
0x8EFD8C: mov     ecx, ebx
0x8EFD8E: fadd    [esp+150h+var_118]
0x8EFD92: fcomp   dword ptr ds:0A2F948h
0x8EFD98: fnstsw  ax
0x8EFD9A: test    ah, 41h
0x8EFD9D: jnz     short loc_8EFDF2
0x8EFD9F: mov     edx, [ebx]
0x8EFDA1: lea     eax, [edi+1]
0x8EFDA4: push    eax
0x8EFDA5: lea     eax, [esi+1]
0x8EFDA8: push    eax
0x8EFDA9: call    dword ptr [edx+24h]
0x8EFDAC: fld     [esp+150h+var_13C]
0x8EFDB0: fsubr   st, st(1)
0x8EFDB2: fstp    [esp+150h+var_13C]
0x8EFDB6: fsub    [esp+150h+var_108]
0x8EFDBA: fstp    [esp+150h+var_138]
0x8EFDBE: fld     [esp+150h+var_12C]
0x8EFDC2: fsub    dword ptr ds:0A2F948h
0x8EFDC8: fmul    [esp+150h+var_13C]
0x8EFDCC: fld     [esp+150h+var_138]
0x8EFDD0: fmul    [esp+150h+var_118]
0x8EFDD4: faddp   st(1), st
0x8EFDD6: fadd    [esp+150h+var_108]
0x8EFDDA: fld     [esp+150h+var_13C]
0x8EFDDE: mov     edx, 1
0x8EFDE3: fchs
0x8EFDE5: fstp    dword ptr [esp+0C0h]
0x8EFDEC: fld     [esp+150h+var_138]
0x8EFDF0: jmp     short loc_8EFE34
0x8EFDF2: mov     eax, [ebx]
0x8EFDF4: push    edi
0x8EFDF5: push    esi
0x8EFDF6: call    dword ptr [eax+24h]
0x8EFDF9: fld     [esp+150h+var_108]
0x8EFDFD: fsub    st, st(1)
0x8EFDFF: fstp    [esp+150h+var_138]
0x8EFE03: fld     [esp+150h+var_13C]
0x8EFE07: fsub    st, st(1)
0x8EFE09: fstp    [esp+150h+var_13C]
0x8EFE0D: fld     [esp+150h+var_138]
0x8EFE11: fmul    [esp+150h+var_12C]
0x8EFE15: fld     [esp+150h+var_13C]
0x8EFE19: fmul    [esp+150h+var_118]
0x8EFE1D: faddp   st(1), st
0x8EFE1F: faddp   st(1), st
0x8EFE21: fld     [esp+150h+var_138]
0x8EFE25: fchs
0x8EFE27: fstp    dword ptr [esp+0C0h]
0x8EFE2E: fld     [esp+150h+var_13C]
0x8EFE32: xor     edx, edx
0x8EFE34: fchs
0x8EFE36: fstp    [esp+150h+anonymous_0]
0x8EFE3D: fld     [esp+150h+var_F4+10h]
0x8EFE41: fsub    st, st(1)
0x8EFE43: fstp    [esp+150h+var_12C]
0x8EFE47: fld     dword ptr [esp+150h+var_A0+0Ch]
0x8EFE4E: fsub    st, st(1)
0x8EFE50: fstp    [esp+150h+var_10C]
0x8EFE54: fstp    st
0x8EFE56: fld     [esp+150h+var_10C]
0x8EFE5A: fcomp   [esp+150h+var_12C]
0x8EFE5E: fnstsw  ax
0x8EFE60: test    ah, 41h
0x8EFE63: jnz     short loc_8EFEA7
0x8EFE65: mov     ecx, large fs:2Ch
0x8EFE6C: mov     edx, ds:0BA9DE4h
0x8EFE72: mov     eax, [ecx+edx*4]
0x8EFE75: mov     esi, [eax+1A4h]
0x8EFE7B: cmp     esi, [eax+1A8h]
0x8EFE81: jnb     loc_8F00BF
0x8EFE87: mov     esi, eax
0x8EFE89: mov     ecx, [esi+1A4h]
0x8EFE8F: mov     dword ptr [ecx], offset aEt; "Et"
0x8EFE95: rdtsc
0x8EFE97: mov     [esp+150h+var_130], eax
0x8EFE9B: mov     edx, [esp+150h+var_130]
0x8EFE9F: mov     [ecx+4], edx
0x8EFEA2: jmp     loc_8F00B6
0x8EFEA7: fld     [esp+150h+var_12C]
0x8EFEAB: fcomp   dword ptr ds:0A2FAA8h
0x8EFEB1: fld     [esp+150h+var_12C]
0x8EFEB5: fnstsw  ax
0x8EFEB7: test    ah, 5
0x8EFEBA: jp      short loc_8EFF0E
0x8EFEBC: fsub    [esp+150h+var_110]
0x8EFEC0: fcomp   [esp+150h+var_10C]
0x8EFEC4: fnstsw  ax
0x8EFEC6: test    ah, 5
0x8EFEC9: jp      short loc_8EFF06
0x8EFECB: mov     ecx, large fs:2Ch
0x8EFED2: mov     edx, ds:0BA9DE4h
0x8EFED8: mov     eax, [ecx+edx*4]
0x8EFEDB: mov     esi, [eax+1A4h]
0x8EFEE1: cmp     esi, [eax+1A8h]
0x8EFEE7: jnb     loc_8F00BF
0x8EFEED: mov     esi, eax
0x8EFEEF: mov     ecx, [esi+1A4h]
0x8EFEF5: mov     dword ptr [ecx], offset aEt; "Et"
0x8EFEFB: rdtsc
0x8EFEFD: mov     [esp+150h+var_130], eax
0x8EFF01: jmp     loc_8F00AF
0x8EFF06: fld     dword ptr ds:0A2FAA8h
0x8EFF0C: jmp     short loc_8EFF40
0x8EFF0E: fcomp   dword ptr ds:0A2FAA8h
0x8EFF14: fnstsw  ax
0x8EFF16: test    ah, 5
0x8EFF19: jnp     loc_8F0042
0x8EFF1F: fld     [esp+150h+var_10C]
0x8EFF23: fcomp   dword ptr ds:0A2FAA8h
0x8EFF29: fnstsw  ax
0x8EFF2B: test    ah, 1
0x8EFF2E: jz      loc_8F0042
0x8EFF34: fld     [esp+150h+var_12C]
0x8EFF38: fsub    [esp+150h+var_10C]
0x8EFF3C: fdivr   [esp+150h+var_12C]
0x8EFF40: mov     ecx, [ebp+arg_8]
0x8EFF43: fld     st
0x8EFF45: fcomp   dword ptr [ecx+4]
0x8EFF48: fnstsw  ax
0x8EFF4A: test    ah, 5
0x8EFF4D: jp      loc_8F0008
0x8EFF53: movaps  xmm0, xmmword ptr [ebx+30h]
0x8EFF57: fstp    [esp+150h+var_7C]
0x8EFF5E: movaps  xmm1, xmmword ptr [esp+0C0h]
0x8EFF66: mov     eax, [ecx]
0x8EFF68: mulps   xmm1, xmm0
0x8EFF6B: movaps  xmm0, xmm1
0x8EFF6E: mulps   xmm0, xmm1
0x8EFF71: movaps  xmm2, xmm0
0x8EFF74: shufps  xmm2, xmm0, 55h ; 'U'
0x8EFF78: addss   xmm2, xmm0
0x8EFF7C: movaps  xmm3, xmm0
0x8EFF7F: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8EFF83: movaps  xmm0, xmm3
0x8EFF86: addss   xmm0, xmm2
0x8EFF8A: movaps  xmmword ptr [esp+150h+var_7C+0Ch], xmm0
0x8EFF92: rsqrtss xmm2, xmm0
0x8EFF96: movss   [esp+150h+var_7C+0Ch], xmm2
0x8EFF9F: movaps  xmm2, xmmword ptr [esp+150h+var_7C+0Ch]
0x8EFFA7: mulss   xmm0, xmm2
0x8EFFAB: mulss   xmm0, xmm2
0x8EFFAF: shl     edi, 0Fh
0x8EFFB2: add     edi, esi
0x8EFFB4: lea     edx, [edx+edi*2]
0x8EFFB7: mov     [esp+150h+var_130], 40400000h
0x8EFFBF: movss   xmm3, [esp+150h+var_130]
0x8EFFC5: subss   xmm3, xmm0
0x8EFFC9: mov     [esp+150h+var_80], edx
0x8EFFD0: mov     [esp+150h+var_130], 3F000000h
0x8EFFD8: movss   xmm0, [esp+150h+var_130]
0x8EFFDE: mulss   xmm0, xmm2
0x8EFFE2: lea     edx, [esp+0C0h]
0x8EFFE9: mulss   xmm0, xmm3
0x8EFFED: push    edx
0x8EFFEE: mov     edx, [ebp+arg_4]
0x8EFFF1: movaps  xmm2, xmm0
0x8EFFF4: shufps  xmm2, xmm0, 0
0x8EFFF8: mulps   xmm2, xmm1
0x8EFFFB: push    edx
0x8EFFFC: movaps  xmmword ptr [esp+0C8h], xmm2
0x8F0004: call    dword ptr [eax]
0x8F0006: jmp     short loc_8F000A
0x8F0008: fstp    st
0x8F000A: mov     ecx, large fs:2Ch
0x8F0011: mov     edx, ds:0BA9DE4h
0x8F0017: mov     eax, [ecx+edx*4]
0x8F001A: mov     esi, [eax+1A4h]
0x8F0020: cmp     esi, [eax+1A8h]
0x8F0026: jnb     loc_8F00BF
0x8F002C: mov     esi, eax
0x8F002E: mov     ecx, [esi+1A4h]
0x8F0034: mov     dword ptr [ecx], offset aEt; "Et"
0x8F003A: rdtsc
0x8F003C: mov     [esp+150h+var_130], eax
0x8F0040: jmp     short loc_8F00AF
0x8F0042: mov     ecx, large fs:2Ch
0x8F0049: mov     edx, ds:0BA9DE4h
0x8F004F: mov     eax, [ecx+edx*4]
0x8F0052: mov     esi, [eax+1A4h]
0x8F0058: cmp     esi, [eax+1A8h]
0x8F005E: jnb     short loc_8F00BF
0x8F0060: mov     esi, eax
0x8F0062: mov     ecx, [esi+1A4h]
0x8F0068: mov     dword ptr [ecx], offset aEt; "Et"
0x8F006E: rdtsc
0x8F0070: mov     [esp+150h+var_130], eax
0x8F0074: mov     edx, [esp+150h+var_130]
0x8F0078: mov     [ecx+4], edx
0x8F007B: jmp     short loc_8F00B6
0x8F007D: mov     ecx, large fs:2Ch
0x8F0084: mov     edx, ds:0BA9DE4h
0x8F008A: mov     eax, [ecx+edx*4]
0x8F008D: mov     esi, [eax+1A4h]
0x8F0093: cmp     esi, [eax+1A8h]
0x8F0099: jnb     short loc_8F00BF
0x8F009B: mov     esi, eax
0x8F009D: mov     ecx, [esi+1A4h]
0x8F00A3: mov     dword ptr [ecx], offset aEt; "Et"
0x8F00A9: rdtsc
0x8F00AB: mov     [esp+150h+var_130], eax
0x8F00AF: mov     eax, [esp+150h+var_130]
0x8F00B3: mov     [ecx+4], eax
0x8F00B6: add     ecx, 0Ch
0x8F00B9: mov     [esi+1A4h], ecx
0x8F00BF: mov     ecx, [esp+150h+var_4]
0x8F00C6: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8F00CB: pop     edi
0x8F00CC: pop     esi
0x8F00CD: pop     ebx
0x8F00CE: mov     esp, ebp
0x8F00D0: pop     ebp
0x8F00D1: retn    0Ch
