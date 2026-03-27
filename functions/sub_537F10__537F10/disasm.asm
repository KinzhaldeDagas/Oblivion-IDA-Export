0x537F10: push    ebp
0x537F11: mov     ebp, esp
0x537F13: and     esp, 0FFFFFFF0h
0x537F16: sub     esp, 184h
0x537F1C: mov     eax, ds:0B30AACh
0x537F21: xor     eax, esp
0x537F23: mov     [esp+184h+var_4], eax
0x537F2A: push    ebx
0x537F2B: push    esi
0x537F2C: mov     esi, ecx
0x537F2E: cmp     byte ptr [esi+8], 0
0x537F32: push    edi
0x537F33: mov     [esp+190h+var_14C], esi
0x537F37: mov     [esp+190h+var_160], 0
0x537F3F: jz      loc_53883D
0x537F45: fld     dword ptr [esi+14h]
0x537F48: fsub    [ebp+arg_0]
0x537F4B: fstp    dword ptr [esi+14h]
0x537F4E: mov     ecx, ds:0B333C4h
0x537F54: fld     dword ptr ds:0B37AE0h
0x537F5A: mov     eax, [ecx]
0x537F5C: mov     edx, [eax+174h]
0x537F62: fstp    [esp+190h+var_158]
0x537F66: fld     [esp+190h+var_158]
0x537F6A: fmul    st, st
0x537F6C: fstp    [esp+190h+var_178]
0x537F70: fld     [esp+190h+var_178]
0x537F74: fld     qword ptr ds:0A39088h
0x537F7A: fmul    st(1), st
0x537F7C: fxch    st(1)
0x537F7E: fstp    [esp+190h+var_158]
0x537F82: fmul    dword ptr ds:0B37AE8h
0x537F88: fstp    dword ptr [esp+190h+var_140+0Ch]
0x537F8C: call    edx
0x537F8E: fld     dword ptr [eax]
0x537F90: add     esi, 0Ch
0x537F93: fld     qword ptr ds:0A39088h
0x537F99: mov     [esp+190h+var_168], esi
0x537F9D: fmul    st(1), st
0x537F9F: fxch    st(1)
0x537FA1: fstp    dword ptr [esp+190h+var_B0]
0x537FA8: fld     dword ptr [eax+4]
0x537FAB: fmul    st, st(1)
0x537FAD: fstp    dword ptr [esp+190h+var_B0+4]
0x537FB4: fmul    dword ptr [eax+8]
0x537FB7: fstp    dword ptr [esp+190h+var_B0+8]
0x537FBE: mov     edi, edi
0x537FC0: mov     edi, [esp+190h+var_168]
0x537FC4: test    edi, edi
0x537FC6: jz      short loc_537FE2
0x537FC8: lea     eax, [esp+190h+var_140+8]
0x537FCC: push    eax
0x537FCD: mov     ecx, edi
0x537FCF: call    sub_677C70
0x537FD4: or      [esp+190h+var_160], 1
0x537FD9: cmp     dword ptr [eax], 0
0x537FDC: jz      short loc_537FE2
0x537FDE: mov     bl, 1
0x537FE0: jmp     short loc_537FE4
0x537FE2: xor     bl, bl
0x537FE4: test    byte ptr [esp+190h+var_160], 1
0x537FE9: jz      short loc_538014
0x537FEB: mov     esi, dword ptr [esp+190h+var_140+8]
0x537FEF: and     [esp+190h+var_160], 0FFFFFFFEh
0x537FF4: test    esi, esi
0x537FF6: jz      short loc_538014
0x537FF8: lea     ecx, [esi+4]
0x537FFB: push    ecx; lpAddend
0x537FFC: call    dword ptr ds:0A2807Ch
0x538002: test    eax, eax
0x538004: jnz     short loc_538014
0x538006: test    esi, esi
0x538008: jz      short loc_538014
0x53800A: mov     edx, [esi]
0x53800C: mov     eax, [edx]
0x53800E: push    1
0x538010: mov     ecx, esi
0x538012: call    eax
0x538014: test    bl, bl
0x538016: jz      loc_53883D
0x53801C: lea     ecx, [esp+190h+var_130]
0x538020: push    ecx
0x538021: mov     ecx, edi
0x538023: call    sub_677C70
0x538028: mov     edi, [eax]
0x53802A: mov     eax, [esp+190h+var_130]
0x53802E: test    eax, eax
0x538030: jz      short loc_538050
0x538032: mov     esi, eax
0x538034: add     eax, 4
0x538037: push    eax; lpAddend
0x538038: call    dword ptr ds:0A2807Ch
0x53803E: test    eax, eax
0x538040: jnz     short loc_538050
0x538042: test    esi, esi
0x538044: jz      short loc_538050
0x538046: mov     edx, [esi]
0x538048: mov     eax, [edx]
0x53804A: push    1
0x53804C: mov     ecx, esi
0x53804E: call    eax
0x538050: mov     esi, [edi+8]
0x538053: test    esi, esi
0x538055: jz      loc_53882D
0x53805B: cmp     byte ptr [esi+92h], 0
0x538062: jnz     loc_53882D
0x538068: mov     ecx, [esi+50h]
0x53806B: fld     [esp+190h+var_158]
0x53806F: movaps  xmm0, xmmword ptr [ecx+40h]
0x538073: movaps  [esp+190h+anonymous_0], xmm0
0x53807B: subps   xmm0, [esp+190h+var_B0]
0x538083: mulps   xmm0, xmm0
0x538086: movaps  xmm1, xmm0
0x538089: shufps  xmm1, xmm0, 55h ; 'U'
0x53808D: movaps  xmm2, xmm0
0x538090: addss   xmm1, xmm0
0x538094: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x538098: addss   xmm2, xmm1
0x53809C: movss   [esp+190h+var_148], xmm2
0x5380A2: fld     [esp+190h+var_148]
0x5380A6: fcompp
0x5380A8: fnstsw  ax
0x5380AA: test    ah, 41h
0x5380AD: jnz     short loc_5380E9
0x5380AF: mov     edx, [edi+18h]
0x5380B2: shr     edx, 3
0x5380B5: test    dl, 1
0x5380B8: jz      short loc_5380D9
0x5380BA: lea     eax, [esp+190h+var_154+3]
0x5380BE: push    eax
0x5380BF: mov     ecx, esi
0x5380C1: call    sub_8A63F0
0x5380C6: cmp     byte ptr [eax], 0
0x5380C9: jz      short loc_5380D9
0x5380CB: mov     edi, [edi+8]
0x5380CE: test    edi, edi
0x5380D0: jz      short loc_5380D9
0x5380D2: mov     ecx, edi
0x5380D4: call    sub_8A6440
0x5380D9: mov     ecx, [esp+190h+var_168]
0x5380DD: mov     edx, [ecx+4]
0x5380E0: mov     [esp+190h+var_168], edx
0x5380E4: jmp     loc_537FC0
0x5380E9: mov     ebx, [esp+190h+var_14C]
0x5380ED: cmp     dword ptr [ebx+20h], 1
0x5380F1: jbe     short loc_538155
0x5380F3: lea     eax, [esp+190h+anonymous_0]
0x5380FA: push    eax
0x5380FB: lea     ecx, [esp+194h+var_12C]
0x5380FF: push    ecx
0x538100: call    sub_43F3E0
0x538105: add     esp, 8
0x538108: fld     [esp+190h+var_12C]
0x53810C: fistp   [esp+190h+var_150]
0x538110: fld     [esp+190h+var_128]
0x538114: fistp   [esp+190h+var_15C]
0x538118: mov     eax, [esp+190h+var_15C]
0x53811C: mov     ecx, [ebx+20h]
0x53811F: mov     edx, [esp+190h+var_150]
0x538123: sar     eax, 0Ch
0x538126: sub     eax, [ebx+28h]
0x538129: movaps  xmm0, [esp+190h+anonymous_0]
0x538131: imul    eax, ecx
0x538134: sub     eax, [ebx+24h]
0x538137: sar     edx, 0Ch
0x53813A: add     eax, edx
0x53813C: mov     edx, ecx
0x53813E: imul    edx, ecx
0x538141: cmp     eax, edx
0x538143: jnb     short loc_53814D
0x538145: mov     ecx, [ebx+18h]
0x538148: fld     dword ptr [ecx+eax*4]
0x53814B: jmp     short loc_538168
0x53814D: fld     dword ptr ds:0A3B888h
0x538153: jmp     short loc_538168
0x538155: push    0
0x538157: push    0
0x538159: mov     ecx, ebx
0x53815B: call    sub_5377E0
0x538160: movaps  xmm0, [esp+190h+anonymous_0]
0x538168: fstp    [esp+190h+var_164]
0x53816C: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x538170: fld     [esp+190h+var_164]
0x538174: movss   [esp+190h+var_148], xmm0
0x53817A: fadd    dword ptr [esp+190h+var_140+0Ch]
0x53817E: fld     [esp+190h+var_148]
0x538182: fcompp
0x538184: fnstsw  ax
0x538186: test    ah, 41h
0x538189: jnz     short loc_53819B
0x53818B: mov     edx, [esp+190h+var_168]
0x53818F: mov     eax, [edx+4]
0x538192: mov     [esp+190h+var_168], eax
0x538196: jmp     loc_537FC0
0x53819B: mov     edx, [edi]
0x53819D: mov     edx, [edx+0B0h]
0x5381A3: lea     eax, [esp+190h+var_D0]
0x5381AA: push    eax
0x5381AB: mov     ecx, edi
0x5381AD: call    edx
0x5381AF: fld     [esp+190h+var_C8]
0x5381B6: fld     [esp+190h+var_164]
0x5381BA: fcom    st(1)
0x5381BC: fnstsw  ax
0x5381BE: fstp    st(1)
0x5381C0: test    ah, 1
0x5381C3: jnz     loc_5387EE
0x5381C9: mov     eax, [esi+8]
0x5381CC: fstp    st
0x5381CE: movaps  xmm0, xmmword ptr [eax+20h]
0x5381D2: mov     ecx, [esi+50h]
0x5381D5: movaps  [esp+190h+var_A0], xmm0
0x5381DD: movaps  xmm0, xmmword ptr [ecx+0D0h]
0x5381E4: movaps  [esp+190h+anonymous_2], xmm0
0x5381EC: call    sub_89DA90
0x5381F1: fstp    [esp+190h+var_178]
0x5381F5: fld     [esp+190h+var_B8]
0x5381FC: fld     [esp+190h+var_C8]
0x538203: fld     st
0x538205: fsubp   st(2), st
0x538207: fxch    st(1)
0x538209: fstp    [esp+190h+var_174]
0x53820D: fld     [esp+190h+var_174]
0x538211: fld     qword ptr ds:0A3C770h
0x538217: fmul    st, st(1)
0x538219: fadd    st, st(2)
0x53821B: fstp    [esp+190h+var_174]
0x53821F: fld     [esp+190h+var_164]
0x538223: fld     [esp+190h+var_174]
0x538227: fld     st
0x538229: fsubp   st(2), st
0x53822B: fxch    st(2)
0x53822D: fmul    qword ptr ds:0A563D8h
0x538233: faddp   st(3), st
0x538235: fxch    st(2)
0x538237: fstp    [esp+190h+var_174]
0x53823B: fsubr   [esp+190h+var_174]
0x53823F: fdivp   st(1), st
0x538241: fstp    [esp+190h+var_174]
0x538245: fldz
0x538247: fcomp   [esp+190h+var_174]
0x53824B: fnstsw  ax
0x53824D: test    ah, 1
0x538250: jnz     short loc_538262
0x538252: mov     ecx, [esp+190h+var_168]
0x538256: mov     edx, [ecx+4]
0x538259: mov     [esp+190h+var_168], edx
0x53825D: jmp     loc_537FC0
0x538262: push    edi
0x538263: call    sub_5362F0
0x538268: fstp    [esp+194h+var_170]
0x53826C: fld     [esp+194h+var_174]
0x538270: add     esp, 4
0x538273: fld     dword ptr ds:0B118E0h
0x538279: mov     byte ptr [esp+190h+var_16C+3], 1
0x53827E: fcomp   st(1)
0x538280: fnstsw  ax
0x538282: test    ah, 41h
0x538285: jnz     loc_53831D
0x53828B: fldz
0x53828D: fcomp   [esp+190h+var_170]
0x538291: fnstsw  ax
0x538293: test    ah, 5
0x538296: jp      loc_53831D
0x53829C: fld     dword ptr ds:0B118DCh
0x5382A2: fcomp   st(1)
0x5382A4: fnstsw  ax
0x5382A6: test    ah, 5
0x5382A9: jp      short loc_5382B5
0x5382AB: fstp    st
0x5382AD: fld     dword ptr ds:0B118D8h
0x5382B3: jmp     short loc_5382E3
0x5382B5: fld     dword ptr ds:0B118D4h
0x5382BB: fcomp   st(1)
0x5382BD: fnstsw  ax
0x5382BF: test    ah, 5
0x5382C2: jp      short loc_5382CE
0x5382C4: fstp    st
0x5382C6: fld     dword ptr ds:0B365A4h
0x5382CC: jmp     short loc_5382E3
0x5382CE: fld     dword ptr ds:0B365A0h
0x5382D4: fcompp
0x5382D6: fnstsw  ax
0x5382D8: test    ah, 5
0x5382DB: jp      short loc_5382E7
0x5382DD: fld     dword ptr ds:0B118D0h
0x5382E3: fstp    [esp+190h+var_170]
0x5382E7: movaps  xmm0, [esp+190h+anonymous_2]
0x5382EF: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x5382F3: movss   [esp+190h+var_148], xmm0
0x5382F9: fld     [esp+190h+var_148]
0x5382FD: fabs
0x5382FF: fstp    [esp+190h+var_174]
0x538303: fld     [esp+190h+var_174]
0x538307: fld     dword ptr ds:0B118CCh
0x53830D: fcompp
0x53830F: fnstsw  ax
0x538311: test    ah, 41h
0x538314: jnz     short loc_53831F
0x538316: mov     byte ptr [esp+190h+var_16C+3], 0
0x53831B: jmp     short loc_53831F
0x53831D: fstp    st
0x53831F: fld     [esp+190h+var_170]
0x538323: mov     eax, [esi+78h]
0x538326: add     eax, [esi+6Ch]
0x538329: fchs
0x53832B: fstp    [esp+190h+var_170]
0x53832F: xorps   xmm0, xmm0
0x538332: fld     [esp+190h+var_170]
0x538336: fmul    [esp+190h+var_178]
0x53833A: fstp    [esp+190h+var_174]
0x53833E: movss   xmm1, [esp+190h+var_174]
0x538344: movss   xmm0, xmm1
0x538348: movaps  xmm1, xmm0
0x53834B: shufps  xmm1, xmm0, 0
0x53834F: mulps   xmm1, [esp+190h+var_A0]
0x538357: movaps  [esp+190h+anonymous_1], xmm1
0x53835F: jnz     loc_5385C9
0x538365: lea     ecx, [esp+160h]
0x53836C: push    ecx
0x53836D: mov     ecx, edi
0x53836F: call    sub_8A3E00
0x538374: fldz
0x538376: movaps  xmm0, xmmword ptr [esp+190h+var_2C+0Ch]
0x53837E: fst     dword ptr [esp+190h+var_100]
0x538385: movaps  xmm1, xmmword ptr [esp+160h]
0x53838D: fst     dword ptr [esp+190h+var_100+4]
0x538394: fst     dword ptr [esp+190h+var_100+8]
0x53839B: subps   xmm0, xmm1
0x53839E: fstp    dword ptr [esp+190h+var_100+0Ch]
0x5383A5: movaps  [esp+190h+anonymous_3], xmm0
0x5383AD: fld     dword ptr [esp+190h+anonymous_3]
0x5383B4: fld     dword ptr [esp+190h+anonymous_3+4]
0x5383BB: fcom    st(1)
0x5383BD: fnstsw  ax
0x5383BF: fld     dword ptr [esp+190h+anonymous_3+8]
0x5383C6: test    ah, 41h
0x5383C9: jnz     short loc_5383E2
0x5383CB: fcom    st(1)
0x5383CD: fnstsw  ax
0x5383CF: test    ah, 41h
0x5383D2: jnz     short loc_5383DB
0x5383D4: mov     ecx, 2
0x5383D9: jmp     short loc_5383F4
0x5383DB: mov     ecx, 1
0x5383E0: jmp     short loc_5383F4
0x5383E2: fcom    st(2)
0x5383E4: fnstsw  ax
0x5383E6: test    ah, 41h
0x5383E9: jnz     short loc_5383F2
0x5383EB: mov     ecx, 2
0x5383F0: jmp     short loc_5383F4
0x5383F2: xor     ecx, ecx
0x5383F4: fxch    st(2)
0x5383F6: fcom    st(1)
0x5383F8: fnstsw  ax
0x5383FA: test    ah, 41h
0x5383FD: jnz     short loc_538418
0x5383FF: fstp    st
0x538401: fcompp
0x538403: fnstsw  ax
0x538405: test    ah, 41h
0x538408: jnz     short loc_538411
0x53840A: mov     ebx, 2
0x53840F: jmp     short loc_53842C
0x538411: mov     ebx, 1
0x538416: jmp     short loc_53842C
0x538418: fstp    st(1)
0x53841A: fcompp
0x53841C: fnstsw  ax
0x53841E: test    ah, 41h
0x538421: jnz     short loc_53842A
0x538423: mov     ebx, 2
0x538428: jmp     short loc_53842C
0x53842A: xor     ebx, ebx
0x53842C: fld     dword ptr [esp+ecx*4+190h+anonymous_3]
0x538433: lea     eax, [esp+ecx*4+190h+anonymous_3]
0x53843A: fld     dword ptr [esp+ebx*4+190h+anonymous_3]
0x538441: mov     [esp+190h+var_174], eax
0x538445: fmul    qword ptr ds:0A563D0h
0x53844B: fcompp
0x53844D: fnstsw  ax
0x53844F: test    ah, 5
0x538452: jp      loc_5385BC
0x538458: fld     [esp+190h+var_170]
0x53845C: push    ecx
0x53845D: fstp    [esp+194h+var_194]; float
0x538460: call    sub_537770
0x538465: mov     edx, [esp+194h+var_174]
0x538469: fld     dword ptr [edx]
0x53846B: mov     eax, [edi]
0x53846D: fdiv    dword ptr [esp+ebx*4+194h+anonymous_3]
0x538474: mov     edx, [eax+90h]
0x53847A: add     esp, 4
0x53847D: lea     ecx, [esp+190h+var_90]
0x538484: push    ecx
0x538485: mov     ecx, edi
0x538487: fmul    qword ptr ds:0A2FC80h
0x53848D: fmulp   st(1), st
0x53848F: fstp    dword ptr [esp+ebx*4+194h+var_100]
0x538496: call    edx
0x538498: fld     dword ptr [esp+190h+var_90+0Ch]
0x53849F: movaps  xmm2, [esp+190h+var_100]
0x5384A7: fld     st
0x5384A9: xorps   xmm4, xmm4
0x5384AC: fld     qword ptr ds:0A3D0C0h
0x5384B2: mov     eax, [esi+50h]
0x5384B5: fmul    st(1), st
0x5384B7: movaps  xmm6, xmm2
0x5384BA: fxch    st(2)
0x5384BC: shufps  xmm6, xmm2, 0D2h ; 'Ò'
0x5384C0: movaps  xmm7, xmm2
0x5384C3: fmul    st, st(1)
0x5384C5: shufps  xmm7, xmm2, 0C9h ; 'É'
0x5384C9: add     eax, 60h ; '`'
0x5384CC: fsub    qword ptr ds:0A2F928h
0x5384D2: fstp    [esp+190h+var_174]
0x5384D6: movss   xmm0, [esp+190h+var_174]
0x5384DC: fldz
0x5384DE: movss   xmm4, xmm0
0x5384E2: movaps  xmm0, [esp+190h+var_90]
0x5384EA: movaps  [esp+190h+var_80], xmm0
0x5384F2: fstp    dword ptr [esp+190h+var_80+0Ch]
0x5384F9: movaps  xmm1, [esp+190h+var_80]
0x538501: movaps  xmm0, xmm1
0x538504: mulps   xmm0, xmm2
0x538507: movaps  xmm3, xmm0
0x53850A: shufps  xmm3, xmm0, 55h ; 'U'
0x53850E: addss   xmm3, xmm0
0x538512: movaps  xmm5, xmm0
0x538515: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x538519: addss   xmm5, xmm3
0x53851D: movss   [esp+190h+var_148], xmm5
0x538523: fld     [esp+190h+var_148]
0x538527: fmulp   st(2), st
0x538529: xorps   xmm3, xmm3
0x53852C: fxch    st(1)
0x53852E: xorps   xmm5, xmm5
0x538531: fstp    [esp+190h+var_174]
0x538535: movss   xmm0, [esp+190h+var_174]
0x53853B: movss   xmm5, xmm0
0x53853F: fstp    [esp+190h+var_174]
0x538543: movss   xmm0, [esp+190h+var_174]
0x538549: movss   xmm3, xmm0
0x53854D: movaps  xmm0, xmm1
0x538550: shufps  xmm0, xmm1, 0C9h ; 'É'
0x538554: mulps   xmm0, xmm6
0x538557: movaps  xmm6, xmm1
0x53855A: shufps  xmm6, xmm1, 0D2h ; 'Ò'
0x53855E: shufps  xmm3, xmm3, 0
0x538562: mulps   xmm6, xmm7
0x538565: subps   xmm0, xmm6
0x538568: mulps   xmm0, xmm3
0x53856B: movaps  xmm3, xmm5
0x53856E: shufps  xmm3, xmm5, 0
0x538572: mulps   xmm3, xmm1
0x538575: movaps  xmm1, xmm4
0x538578: shufps  xmm1, xmm4, 0
0x53857C: mulps   xmm1, xmm2
0x53857F: addps   xmm3, xmm1
0x538582: addps   xmm0, xmm3
0x538585: movaps  [esp+190h+var_F0], xmm0
0x53858D: movaps  xmm1, xmmword ptr [eax]
0x538590: addps   xmm1, xmm0
0x538593: movaps  [esp+190h+var_F0], xmm1
0x53859B: push    0
0x53859D: push    0FF7FFF00h
0x5385A2: lea     ecx, [esp+198h+var_F0]
0x5385A9: push    ecx
0x5385AA: mov     ecx, ds:0BA7DA0h
0x5385B0: push    eax
0x5385B1: call    sub_8A78E0
0x5385B6: mov     ebx, [esp+190h+var_14C]
0x5385BA: jmp     short loc_5385D8
0x5385BC: mov     edx, [esi+50h]
0x5385BF: movaps  xmm0, xmmword ptr [edx+60h]
0x5385C3: mov     ebx, [esp+190h+var_14C]
0x5385C7: jmp     short loc_5385D0
0x5385C9: mov     eax, [esi+50h]
0x5385CC: movaps  xmm0, xmmword ptr [eax+60h]
0x5385D0: movaps  [esp+190h+var_F0], xmm0
0x5385D8: mov     ecx, esi
0x5385DA: call    sub_8A6410
0x5385DF: fld     [ebp+arg_0]
0x5385E2: mov     ecx, [esi+50h]
0x5385E5: mov     edx, [ecx]
0x5385E7: mov     edx, [edx+68h]
0x5385EA: lea     eax, [esp+190h+var_F0]
0x5385F1: push    eax
0x5385F2: lea     eax, [esp+194h+anonymous_1]
0x5385F9: push    eax
0x5385FA: push    ecx
0x5385FB: fstp    [esp+19Ch+var_19C]
0x5385FE: call    edx
0x538600: fld     [esp+190h+var_178]
0x538604: xorps   xmm0, xmm0
0x538607: fmul    qword ptr ds:0A3D360h
0x53860D: mov     ecx, esi
0x53860F: fstp    [esp+190h+var_178]
0x538613: movss   xmm1, [esp+190h+var_178]
0x538619: movss   xmm0, xmm1
0x53861D: movaps  xmm1, xmm0
0x538620: shufps  xmm1, xmm0, 0
0x538624: mulps   xmm1, [esp+190h+var_A0]
0x53862C: movaps  [esp+190h+var_70], xmm1
0x538634: call    sub_8A6410
0x538639: fld     [ebp+arg_0]
0x53863C: mov     ecx, [esi+50h]
0x53863F: mov     eax, [ecx]
0x538641: mov     eax, [eax+6Ch]
0x538644: lea     edx, [esp+190h+var_70]
0x53864B: push    edx
0x53864C: push    ecx
0x53864D: fstp    [esp+198h+var_198]
0x538650: call    eax
0x538652: cmp     byte ptr [esp+190h+var_16C+3], 0
0x538657: mov     ecx, [esi+50h]
0x53865A: movaps  xmm0, xmmword ptr [ecx+0D0h]
0x538661: movaps  [esp+190h+var_120], xmm0
0x538666: fld     dword ptr [esp+190h+var_120+8]
0x53866A: fstp    [esp+190h+var_170]
0x53866E: fldz
0x538670: fstp    dword ptr [esp+190h+var_120+8]
0x538674: jz      short loc_5386A2
0x538676: fld     dword ptr ds:0B37AF8h
0x53867C: fmul    qword ptr ds:0A3D360h
0x538682: fmul    [ebp+arg_0]
0x538685: fstp    [esp+190h+var_178]
0x538689: fld     [esp+190h+var_178]
0x53868D: call    __CIexp
0x538692: fstp    [esp+190h+var_178]
0x538696: fld     [esp+190h+var_178]
0x53869A: fmul    [esp+190h+var_170]
0x53869E: fstp    [esp+190h+var_170]
0x5386A2: movaps  xmm0, [esp+190h+var_120]
0x5386A7: mulps   xmm0, xmm0
0x5386AA: movaps  xmm1, xmm0
0x5386AD: shufps  xmm1, xmm0, 55h ; 'U'
0x5386B1: movaps  xmm2, xmm0
0x5386B4: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x5386B8: addss   xmm1, xmm0
0x5386BC: addss   xmm2, xmm1
0x5386C0: sqrtss  xmm2, xmm2
0x5386C4: movss   [esp+190h+var_148], xmm2
0x5386CA: fld     [esp+190h+var_148]
0x5386CE: fld     dword ptr ds:0B37AD8h
0x5386D4: fcompp
0x5386D6: fnstsw  ax
0x5386D8: test    ah, 5
0x5386DB: jp      short loc_538723
0x5386DD: fld     dword ptr ds:0B37AF0h
0x5386E3: fmul    qword ptr ds:0A3D360h
0x5386E9: fmul    [ebp+arg_0]
0x5386EC: fstp    [esp+190h+var_178]
0x5386F0: fld     [esp+190h+var_178]
0x5386F4: call    __CIexp
0x5386F9: fstp    [esp+190h+var_178]
0x5386FD: fld     [esp+190h+var_178]
0x538701: xorps   xmm0, xmm0
0x538704: fstp    [esp+190h+var_178]
0x538708: movss   xmm1, [esp+190h+var_178]
0x53870E: movss   xmm0, xmm1
0x538712: movaps  xmm1, xmm0
0x538715: shufps  xmm1, xmm0, 0
0x538719: mulps   xmm1, [esp+190h+var_120]
0x53871E: movaps  [esp+190h+var_120], xmm1
0x538723: fld     [esp+190h+var_170]
0x538727: mov     ecx, esi
0x538729: fstp    dword ptr [esp+190h+var_120+8]
0x53872D: call    sub_8A6410
0x538732: mov     ecx, [esi+50h]
0x538735: mov     edx, [ecx]
0x538737: mov     edx, [edx+54h]
0x53873A: lea     eax, [esp+190h+var_120]
0x53873E: push    eax
0x53873F: call    edx
0x538741: fld     dword ptr ds:0B37B00h
0x538747: fmul    qword ptr ds:0A3D360h
0x53874D: fmul    [ebp+arg_0]
0x538750: fstp    [esp+190h+var_178]
0x538754: fld     [esp+190h+var_178]
0x538758: call    __CIexp
0x53875D: fstp    [esp+190h+var_178]
0x538761: fld     [esp+190h+var_178]
0x538765: mov     eax, [esi+50h]
0x538768: fstp    [esp+190h+var_178]
0x53876C: xorps   xmm0, xmm0
0x53876F: movss   xmm1, [esp+190h+var_178]
0x538775: movss   xmm0, xmm1
0x538779: movaps  xmm1, xmm0
0x53877C: shufps  xmm1, xmm0, 0
0x538780: movaps  xmm0, xmmword ptr [eax+0E0h]
0x538787: mulps   xmm1, xmm0
0x53878A: mov     ecx, esi
0x53878C: movaps  [esp+190h+var_60], xmm1
0x538794: call    sub_8A6410
0x538799: mov     esi, [esi+50h]
0x53879C: mov     edx, [esi]
0x53879E: mov     edx, [edx+58h]
0x5387A1: lea     eax, [esp+190h+var_60]
0x5387A8: push    eax
0x5387A9: mov     ecx, esi
0x5387AB: call    edx
0x5387AD: mov     eax, [edi+18h]
0x5387B0: mov     ecx, eax
0x5387B2: shr     ecx, 3
0x5387B5: test    cl, 1
0x5387B8: jnz     short loc_53882D
0x5387BA: fld     [esp+190h+var_164]
0x5387BE: push    ecx
0x5387BF: fmul    qword ptr ds:0A372E0h
0x5387C5: or      eax, 8
0x5387C8: mov     ecx, ebx
0x5387CA: mov     [edi+18h], eax
0x5387CD: fstp    [esp+194h+var_178]
0x5387D1: fld     [esp+194h+var_178]
0x5387D5: fstp    [esp+194h+var_194]; float
0x5387D8: push    edi; int
0x5387D9: call    sub_5378B0
0x5387DE: mov     eax, [esp+190h+var_168]
0x5387E2: mov     ecx, [eax+4]
0x5387E5: mov     [esp+190h+var_168], ecx
0x5387E9: jmp     loc_537FC0
0x5387EE: mov     edx, [edi+18h]
0x5387F1: shr     edx, 3
0x5387F4: test    dl, 1
0x5387F7: jz      short loc_538827
0x5387F9: fmul    qword ptr ds:0A372E0h
0x5387FF: push    ecx
0x538800: mov     ecx, ebx
0x538802: fstp    [esp+194h+var_178]
0x538806: fld     [esp+194h+var_178]
0x53880A: fstp    [esp+194h+var_194]; float
0x53880D: push    edi; int
0x53880E: call    sub_5378B0
0x538813: mov     eax, [esp+190h+var_168]
0x538817: and     dword ptr [edi+18h], 0FFFFFFF7h
0x53881B: mov     ecx, [eax+4]
0x53881E: mov     [esp+190h+var_168], ecx
0x538822: jmp     loc_537FC0
0x538827: and     dword ptr [edi+18h], 0FFFFFFF7h
0x53882B: fstp    st
0x53882D: mov     eax, [esp+190h+var_168]
0x538831: mov     ecx, [eax+4]
0x538834: mov     [esp+190h+var_168], ecx
0x538838: jmp     loc_537FC0
0x53883D: mov     ecx, [esp+190h+var_4]
0x538844: pop     edi
0x538845: pop     esi
0x538846: pop     ebx
0x538847: xor     ecx, esp
0x538849: call    @__security_check_cookie@4; __security_check_cookie(x)
0x53884E: mov     esp, ebp
0x538850: pop     ebp
0x538851: retn    4
