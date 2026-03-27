0x94FEF0: push    ebp
0x94FEF1: mov     ebp, esp
0x94FEF3: and     esp, 0FFFFFFF0h
0x94FEF6: sub     esp, 74h
0x94FEF9: fld     dword ptr ds:0A2FAA8h
0x94FEFF: mov     eax, [ebp+arg_10]
0x94FF02: fild    [ebp+arg_4]
0x94FF05: mov     edx, [eax+14h]
0x94FF08: push    ebx
0x94FF09: mov     ebx, [ebp+arg_8]
0x94FF0C: fdivr   dword ptr ds:0A2F948h
0x94FF12: push    esi
0x94FF13: mov     esi, [eax+18h]
0x94FF16: push    edi
0x94FF17: mov     edi, [ebp+arg_14]
0x94FF1A: mov     eax, [edi+4]
0x94FF1D: mov     ecx, [edi]
0x94FF1F: mov     [eax+8], ebx
0x94FF22: mov     dword ptr [eax], 11801h
0x94FF28: mov     [eax+0Ch], edx
0x94FF2B: mov     [eax+10h], esi
0x94FF2E: mov     dword ptr [eax+14h], 14h
0x94FF35: mov     [eax+4], ecx
0x94FF38: mov     ecx, [edi]
0x94FF3A: lea     ebx, [eax+18h]
0x94FF3D: mov     eax, [ebp+arg_4]
0x94FF40: xorps   xmm4, xmm4
0x94FF43: dec     eax
0x94FF44: movaps  xmm7, xmm4
0x94FF47: movaps  xmm3, xmm4
0x94FF4A: mov     [esp+80h+var_58], 0
0x94FF52: mov     [esp+80h+var_44], eax
0x94FF56: fstp    [esp+80h+var_68]
0x94FF5A: js      loc_9502C2
0x94FF60: mov     edi, [ebp+arg_0]
0x94FF63: add     edi, 10h
0x94FF66: mov     [esp+80h+var_6C], edi
0x94FF6A: mov     edi, [ebp+arg_8]
0x94FF6D: add     edi, 10h
0x94FF70: inc     eax
0x94FF71: mov     [esp+80h+var_54], edi
0x94FF75: mov     [esp+80h+var_50], eax
0x94FF79: lea     esp, [esp+0]
0x94FF80: mov     eax, [esp+80h+var_6C]
0x94FF84: movaps  xmm0, xmmword ptr [eax]
0x94FF87: movaps  xmmword ptr [ecx], xmm0
0x94FF8A: cmp     byte ptr [edx+0Ch], 0
0x94FF8E: movaps  xmm1, xmmword ptr [eax-10h]
0x94FF92: movaps  xmm2, xmmword ptr [edx+40h]
0x94FF96: movaps  xmm0, xmm1
0x94FF99: subps   xmm0, xmm2
0x94FF9C: movaps  xmm2, xmmword ptr [esi+40h]
0x94FFA0: subps   xmm1, xmm2
0x94FFA3: movaps  xmm2, xmmword ptr [eax]
0x94FFA6: movaps  xmm6, xmm0
0x94FFA9: movaps  xmm5, xmm2
0x94FFAC: shufps  xmm5, xmm2, 0C9h ; 'É'
0x94FFB0: shufps  xmm6, xmm0, 0D2h ; 'Ò'
0x94FFB4: mulps   xmm6, xmm5
0x94FFB7: movaps  xmm5, xmm2
0x94FFBA: shufps  xmm5, xmm2, 0D2h ; 'Ò'
0x94FFBE: movaps  xmm2, xmm0
0x94FFC1: shufps  xmm2, xmm0, 0C9h ; 'É'
0x94FFC5: movaps  xmm0, xmm2
0x94FFC8: mulps   xmm0, xmm5
0x94FFCB: subps   xmm0, xmm6
0x94FFCE: jnz     short loc_950000
0x94FFD0: movaps  xmm5, xmmword ptr [edx+70h]
0x94FFD4: movaps  xmm6, xmmword ptr [edx+60h]
0x94FFD8: movaps  xmm2, xmm0
0x94FFDB: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x94FFDF: mulps   xmm5, xmm2
0x94FFE2: movaps  xmm2, xmm0
0x94FFE5: shufps  xmm2, xmm0, 55h ; 'U'
0x94FFE9: mulps   xmm6, xmm2
0x94FFEC: movaps  xmm2, xmm0
0x94FFEF: shufps  xmm2, xmm0, 0
0x94FFF3: movaps  xmm0, xmmword ptr [edx+50h]
0x94FFF7: mulps   xmm0, xmm2
0x94FFFA: addps   xmm0, xmm6
0x94FFFD: addps   xmm0, xmm5
0x950000: movaps  xmmword ptr [ecx+10h], xmm0
0x950004: movaps  xmm0, xmmword ptr [eax]
0x950007: mov     al, [esi+0Ch]
0x95000A: test    al, al
0x95000C: movaps  xmm5, xmm0
0x95000F: movaps  xmm2, xmm1
0x950012: shufps  xmm2, xmm1, 0C9h ; 'É'
0x950016: shufps  xmm5, xmm0, 0D2h ; 'Ò'
0x95001A: mulps   xmm5, xmm2
0x95001D: movaps  xmm2, xmm1
0x950020: shufps  xmm2, xmm1, 0D2h ; 'Ò'
0x950024: movaps  xmm1, xmm0
0x950027: shufps  xmm1, xmm0, 0C9h ; 'É'
0x95002B: movaps  xmm0, xmm1
0x95002E: mulps   xmm0, xmm2
0x950031: subps   xmm0, xmm5
0x950034: jnz     short loc_950066
0x950036: movaps  xmm2, xmmword ptr [esi+70h]
0x95003A: movaps  xmm5, xmmword ptr [esi+60h]
0x95003E: movaps  xmm1, xmm0
0x950041: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x950045: mulps   xmm2, xmm1
0x950048: movaps  xmm1, xmm0
0x95004B: shufps  xmm1, xmm0, 55h ; 'U'
0x95004F: mulps   xmm5, xmm1
0x950052: movaps  xmm1, xmm0
0x950055: shufps  xmm1, xmm0, 0
0x950059: movaps  xmm0, xmmword ptr [esi+50h]
0x95005D: mulps   xmm0, xmm1
0x950060: addps   xmm0, xmm5
0x950063: addps   xmm0, xmm2
0x950066: movaps  xmm1, xmmword ptr [ecx+10h]
0x95006A: movaps  xmmword ptr [ecx+20h], xmm0
0x95006E: fld     dword ptr [esi+3Ch]
0x950071: fadd    dword ptr [edx+3Ch]
0x950074: movaps  xmm0, xmmword ptr [ecx+20h]
0x950078: movaps  xmm2, xmmword ptr [esi+30h]
0x95007C: movaps  xmm5, xmm0
0x95007F: fadd    dword ptr ds:0AA2F14h
0x950085: mulps   xmm5, xmm0
0x950088: movaps  xmm0, xmmword ptr [edx+30h]
0x95008C: mulps   xmm5, xmm2
0x95008F: movaps  xmm2, xmm1
0x950092: mulps   xmm2, xmm1
0x950095: movaps  xmm1, xmm2
0x950098: mulps   xmm1, xmm0
0x95009B: movaps  xmm0, xmm1
0x95009E: addps   xmm0, xmm5
0x9500A1: movaps  xmm1, xmm0
0x9500A4: shufps  xmm1, xmm0, 55h ; 'U'
0x9500A8: movaps  xmm2, xmm0
0x9500AB: lea     eax, [esp+80h+var_4C]
0x9500AF: addss   xmm1, xmm0
0x9500B3: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x9500B7: addss   xmm2, xmm1
0x9500BB: movss   dword ptr [eax], xmm2
0x9500BF: fadd    [esp+80h+var_4C]
0x9500C3: fst     dword ptr [ecx+2Ch]
0x9500C6: fld     dword ptr ds:0A2F948h
0x9500CC: fdiv    st, st(1)
0x9500CE: fstp    dword ptr [ecx+1Ch]
0x9500D1: movzx   eax, word ptr [edi-4]
0x9500D5: mov     edi, [esp+80h+var_58]
0x9500D9: fstp    st
0x9500DB: add     edi, eax
0x9500DD: mov     eax, [esp+80h+var_6C]
0x9500E1: mov     [esp+80h+var_58], edi
0x9500E5: mov     edi, [esp+80h+var_54]
0x9500E9: fadd    dword ptr [edi-10h]
0x9500EC: fld     dword ptr [edi]
0x9500EE: fld     dword ptr [eax+0Ch]
0x9500F1: mov     eax, [ebp+arg_10]
0x9500F4: fsub    st, st(1)
0x9500F6: fstp    [esp+80h+var_54]
0x9500FA: fld     dword ptr [edi-0Ch]
0x9500FD: fchs
0x9500FF: fsub    [esp+80h+var_54]
0x950103: fstp    [esp+80h+var_5C]
0x950107: fld     dword ptr [eax+8]
0x95010A: fld     st(1)
0x95010C: fmul    dword ptr ds:0AA2F1Ch
0x950112: fst     [esp+80h+var_60]
0x950116: fcomp   st(1)
0x950118: fnstsw  ax
0x95011A: test    ah, 5
0x95011D: jp      short loc_95012B
0x95011F: mov     eax, [esp+80h+var_60]
0x950123: fstp    st
0x950125: mov     [esp+80h+var_64], eax
0x950129: jmp     short loc_95012F
0x95012B: fstp    [esp+80h+var_64]
0x95012F: fld     [esp+80h+var_64]
0x950133: fadd    st, st(1)
0x950135: fstp    [esp+80h+var_60]
0x950139: fstp    st
0x95013B: fld     [esp+80h+var_54]
0x95013F: fsub    [esp+80h+var_64]
0x950143: fld     [esp+80h+var_64]
0x950147: fadd    st, st
0x950149: fadd    dword ptr ds:0A37080h
0x95014F: fcomp   [esp+80h+var_5C]
0x950153: fnstsw  ax
0x950155: test    ah, 5
0x950158: jp      short loc_95016A
0x95015A: fld     [esp+80h+var_60]
0x95015E: fsub    [esp+80h+var_5C]
0x950162: fstp    [esp+80h+var_60]
0x950166: fadd    [esp+80h+var_5C]
0x95016A: fld     st
0x95016C: fabs
0x95016E: fcomp   dword ptr ds:0A9E034h
0x950174: fnstsw  ax
0x950176: test    ah, 5
0x950179: jp      short loc_950183
0x95017B: fstp    st
0x95017D: fld     dword ptr ds:0A2FAA8h
0x950183: fld     [esp+80h+var_60]
0x950187: fcomp   dword ptr ds:0A2FAA8h
0x95018D: fnstsw  ax
0x95018F: test    ah, 5
0x950192: jp      short loc_95019A
0x950194: fld     [esp+80h+var_60]
0x950198: jmp     short loc_9501A0
0x95019A: fld     dword ptr ds:0A2FAA8h
0x9501A0: mov     eax, [ebp+arg_10]
0x9501A3: fstp    dword ptr [edi]
0x9501A5: fchs
0x9501A7: fmul    dword ptr [eax+4]
0x9501AA: mov     eax, [esp+80h+var_6C]
0x9501AE: fstp    dword ptr [ecx+0Ch]
0x9501B1: movaps  xmm0, xmmword ptr [eax-10h]
0x9501B5: addps   xmm7, xmm0
0x9501B8: movaps  xmm0, xmmword ptr [eax]
0x9501BB: test    byte ptr [edi-1], 2
0x9501BF: addps   xmm3, xmm0
0x9501C2: jnz     short loc_9501D5
0x9501C4: mov     dword ptr [ebx], 30402h
0x9501CA: add     ebx, 4
0x9501CD: add     ecx, 30h ; '0'
0x9501D0: jmp     loc_9502A4
0x9501D5: movaps  xmm1, xmmword ptr [ecx-30h]
0x9501D9: fld     dword ptr [ecx-4]
0x9501DC: movaps  xmm0, xmmword ptr [ecx]
0x9501DF: fld     dword ptr [ecx+2Ch]
0x9501E2: movaps  xmm2, xmmword ptr [edx+30h]
0x9501E6: movaps  xmm6, xmmword ptr [ecx+10h]
0x9501EA: sub     ecx, 30h ; '0'
0x9501ED: mulps   xmm0, xmm1
0x9501F0: movaps  xmm1, xmmword ptr [esi+30h]
0x9501F4: movaps  xmm5, xmm1
0x9501F7: shufps  xmm5, xmm1, 0FFh
0x9501FB: mulps   xmm5, xmm0
0x9501FE: movaps  xmm1, xmm2
0x950201: shufps  xmm1, xmm2, 0FFh
0x950205: movaps  xmm2, xmmword ptr [ecx+20h]
0x950209: mulps   xmm1, xmm0
0x95020C: movaps  xmm0, xmmword ptr [esi+30h]
0x950210: addps   xmm1, xmm5
0x950213: movaps  xmm5, xmmword ptr [ecx+50h]
0x950217: mulps   xmm5, xmm2
0x95021A: movaps  xmm2, xmmword ptr [ecx+10h]
0x95021E: mulps   xmm5, xmm0
0x950221: movaps  xmm0, xmmword ptr [edx+30h]
0x950225: mulps   xmm6, xmm2
0x950228: mulps   xmm6, xmm0
0x95022B: movaps  xmm0, xmm6
0x95022E: addps   xmm0, xmm5
0x950231: addps   xmm0, xmm1
0x950234: movaps  xmm1, xmm0
0x950237: shufps  xmm1, xmm0, 55h ; 'U'
0x95023B: movaps  xmm2, xmm0
0x95023E: addss   xmm1, xmm0
0x950242: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x950246: lea     eax, [esp+80h+var_48]
0x95024A: addss   xmm2, xmm1
0x95024E: movss   dword ptr [eax], xmm2
0x950252: fld     [esp+80h+var_48]
0x950256: fmul    dword ptr ds:0A65520h
0x95025C: add     ebx, 4
0x95025F: add     ecx, 60h ; '`'
0x950262: fstp    [esp+80h+var_60]
0x950266: fld     st
0x950268: fmul    st, st(2)
0x95026A: fld     [esp+80h+var_60]
0x95026E: fmul    [esp+80h+var_60]
0x950272: fsubp   st(1), st
0x950274: fdivr   dword ptr ds:0A2F948h
0x95027A: fst     [esp+80h+var_5C]
0x95027E: fmul    st, st(1)
0x950280: fstp    dword ptr [ecx-34h]
0x950283: fstp    st
0x950285: fld     [esp+80h+var_5C]
0x950289: fmul    st, st(1)
0x95028B: fstp    dword ptr [ecx-4]
0x95028E: mov     dword ptr [ebx-8], 50803h
0x950295: fstp    st
0x950297: fld     [esp+80h+var_5C]
0x95029B: fmul    [esp+80h+var_60]
0x95029F: fchs
0x9502A1: fstp    dword ptr [ebx-4]
0x9502A4: add     [esp+80h+var_6C], 20h ; ' '
0x9502A9: mov     eax, [esp+80h+var_50]
0x9502AD: add     edi, 14h
0x9502B0: dec     eax
0x9502B1: mov     [esp+80h+var_54], edi
0x9502B5: mov     [esp+80h+var_50], eax
0x9502B9: jnz     loc_94FF80
0x9502BF: mov     edi, [ebp+arg_14]
0x9502C2: fild    [esp+80h+var_58]
0x9502C6: fmul    dword ptr ds:0A9A028h
0x9502CC: fmul    [esp+80h+var_68]
0x9502D0: fmulp   st(1), st
0x9502D2: fcom    dword ptr ds:0A2FAA8h
0x9502D8: fnstsw  ax
0x9502DA: test    ah, 41h
0x9502DD: jnz     loc_950AFD
0x9502E3: fld     [esp+80h+var_68]
0x9502E7: movaps  xmm0, xmm3
0x9502EA: fmul    [esp+80h+var_68]
0x9502EE: mulps   xmm0, xmm3
0x9502F1: movaps  xmm1, xmm0
0x9502F4: shufps  xmm1, xmm0, 55h ; 'U'
0x9502F8: movaps  xmm2, xmm0
0x9502FB: lea     eax, [esp+80h+var_50]
0x9502FF: addss   xmm1, xmm0
0x950303: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x950307: addss   xmm2, xmm1
0x95030B: movss   dword ptr [eax], xmm2
0x95030F: fmul    [esp+80h+var_50]
0x950313: fcomp   dword ptr ds:0AA1C60h
0x950319: fnstsw  ax
0x95031B: test    ah, 41h
0x95031E: jnz     short loc_950331
0x950320: mov     eax, [ebp+arg_0]
0x950323: movaps  xmm1, xmmword ptr [eax+10h]
0x950327: movaps  [esp+80h+var_40], xmm1
0x95032C: jmp     loc_95040B
0x950331: fld     [esp+80h+var_50]
0x950335: fcomp   dword ptr ds:0A2FAACh
0x95033B: fnstsw  ax
0x95033D: test    ah, 41h
0x950340: jnz     short loc_9503B0
0x950342: movaps  xmm1, xmm0
0x950345: shufps  xmm1, xmm0, 55h ; 'U'
0x950349: addss   xmm1, xmm0
0x95034D: movaps  xmm2, xmm0
0x950350: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x950354: movaps  xmm0, xmm2
0x950357: addss   xmm0, xmm1
0x95035B: movaps  [esp+80h+var_30], xmm0
0x950360: rsqrtss xmm1, xmm0
0x950364: movss   dword ptr [esp+80h+var_30], xmm1
0x95036A: movaps  xmm1, [esp+80h+var_30]
0x95036F: mulss   xmm0, xmm1
0x950373: mulss   xmm0, xmm1
0x950377: mov     [esp+80h+var_48], 40400000h
0x95037F: movss   xmm2, [esp+80h+var_48]
0x950385: subss   xmm2, xmm0
0x950389: mov     [esp+80h+var_48], 3F000000h
0x950391: movss   xmm0, [esp+80h+var_48]
0x950397: mulss   xmm0, xmm1
0x95039B: mulss   xmm0, xmm2
0x95039F: movaps  xmm1, xmm0
0x9503A2: shufps  xmm1, xmm0, 0
0x9503A6: mulps   xmm1, xmm3
0x9503A9: movaps  [esp+80h+var_40], xmm1
0x9503AE: jmp     short loc_95040B
0x9503B0: mov     eax, [ebp+arg_0]
0x9503B3: movaps  xmm1, xmmword ptr [eax+10h]
0x9503B7: movaps  xmm0, xmm1
0x9503BA: mulps   xmm0, xmm1
0x9503BD: movaps  xmm2, xmm0
0x9503C0: shufps  xmm2, xmm0, 55h ; 'U'
0x9503C4: movaps  xmm3, xmm0
0x9503C7: lea     eax, [esp+80h+var_48]
0x9503CB: addss   xmm2, xmm0
0x9503CF: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x9503D3: addss   xmm3, xmm2
0x9503D7: movss   dword ptr [eax], xmm3
0x9503DB: fld     [esp+80h+var_48]
0x9503DF: fcomp   dword ptr ds:0A37450h
0x9503E5: movaps  [esp+80h+var_40], xmm1
0x9503EA: fnstsw  ax
0x9503EC: test    ah, 5
0x9503EF: jp      short loc_95040B
0x9503F1: movaps  [esp+80h+var_40], xmm4
0x9503F6: fstp    st
0x9503F8: fld     dword ptr ds:0A2FAA8h
0x9503FE: mov     dword ptr [esp+80h+var_40+4], 3F800000h
0x950406: movaps  xmm1, [esp+80h+var_40]
0x95040B: mov     edi, [ebp+arg_C]
0x95040E: movaps  xmm3, xmm1
0x950411: movaps  xmm6, xmm1
0x950414: shufps  xmm3, xmm1, 0C9h ; 'É'
0x950418: shufps  xmm6, xmm1, 0D2h ; 'Ò'
0x95041C: lea     esp, [esp+0]
0x950420: movzx   eax, word ptr [edi+2]
0x950424: shl     eax, 4
0x950427: add     eax, offset xmmword_B2F090
0x95042C: movaps  xmm0, xmmword ptr [eax]
0x95042F: movaps  xmm2, xmm0
0x950432: shufps  xmm2, xmm0, 0D2h ; 'Ò'
0x950436: mulps   xmm2, xmm3
0x950439: movaps  xmm4, xmm2
0x95043C: movaps  xmm2, xmm0
0x95043F: shufps  xmm2, xmm0, 0C9h ; 'É'
0x950443: mulps   xmm2, xmm6
0x950446: subps   xmm2, xmm4
0x950449: movaps  xmm0, xmm2
0x95044C: mulps   xmm0, xmm2
0x95044F: movaps  xmm4, xmm0
0x950452: shufps  xmm4, xmm0, 55h ; 'U'
0x950456: movaps  xmm5, xmm0
0x950459: lea     eax, [esp+80h+var_48]
0x95045D: addss   xmm4, xmm0
0x950461: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x950465: addss   xmm5, xmm4
0x950469: movss   dword ptr [eax], xmm5
0x95046D: fld     [esp+80h+var_48]
0x950471: fcomp   dword ptr ds:0A2FAACh
0x950477: fnstsw  ax
0x950479: test    ah, 41h
0x95047C: jz      short loc_9504E9
0x95047E: movaps  xmm0, xmmword ptr ds:0A372D0h
0x950485: movaps  xmm2, xmm1
0x950488: andps   xmm2, xmm0
0x95048B: movaps  [esp+80h+var_30], xmm2
0x950490: fld     dword ptr [esp+80h+var_30]
0x950494: fcomp   dword ptr [esp+80h+var_30+4]
0x950498: fnstsw  ax
0x95049A: test    ah, 5
0x95049D: jp      short loc_9504BF
0x95049F: fld     dword ptr [esp+80h+var_30]
0x9504A3: fcomp   dword ptr [esp+80h+var_30+8]
0x9504A7: fnstsw  ax
0x9504A9: test    ah, 5
0x9504AC: jp      short loc_9504D3
0x9504AE: xor     eax, eax
0x9504B0: mov     [edi+2], ax
0x9504B4: mov     [edi+8], eax
0x9504B7: mov     [edi+10h], eax
0x9504BA: jmp     loc_950420
0x9504BF: fld     dword ptr [esp+80h+var_30+4]
0x9504C3: fcomp   dword ptr [esp+80h+var_30+8]
0x9504C7: fnstsw  ax
0x9504C9: test    ah, 5
0x9504CC: mov     eax, 1
0x9504D1: jnp     short loc_9504D8
0x9504D3: mov     eax, 2
0x9504D8: mov     [edi+2], ax
0x9504DC: xor     eax, eax
0x9504DE: mov     [edi+8], eax
0x9504E1: mov     [edi+10h], eax
0x9504E4: jmp     loc_950420
0x9504E9: mov     eax, [esp+80h+var_68]
0x9504ED: movaps  xmm0, xmm2
0x9504F0: mulps   xmm0, xmm2
0x9504F3: movaps  xmm1, xmm0
0x9504F6: shufps  xmm1, xmm0, 55h ; 'U'
0x9504FA: addss   xmm1, xmm0
0x9504FE: movaps  xmm4, xmm0
0x950501: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x950505: movaps  xmm0, xmm4
0x950508: addss   xmm0, xmm1
0x95050C: movaps  [esp+80h+var_30], xmm0
0x950511: rsqrtss xmm1, xmm0
0x950515: movss   dword ptr [esp+80h+var_30], xmm1
0x95051B: movaps  xmm1, [esp+80h+var_30]
0x950520: mulss   xmm0, xmm1
0x950524: mulss   xmm0, xmm1
0x950528: mov     [esp+80h+var_48], 40400000h
0x950530: movss   xmm4, [esp+80h+var_48]
0x950536: subss   xmm4, xmm0
0x95053A: mov     [esp+80h+var_48], 3F000000h
0x950542: movss   xmm0, [esp+80h+var_48]
0x950548: mulss   xmm0, xmm1
0x95054C: mulss   xmm0, xmm4
0x950550: movaps  xmm1, xmm0
0x950553: shufps  xmm1, xmm0, 0
0x950557: mulps   xmm1, xmm2
0x95055A: movaps  xmm5, xmm1
0x95055D: shufps  xmm5, xmm1, 0D2h ; 'Ò'
0x950561: mulps   xmm3, xmm5
0x950564: movaps  xmm0, xmm3
0x950567: mov     [esp+80h+var_48], eax
0x95056B: movss   xmm2, [esp+80h+var_48]
0x950571: movaps  xmm3, xmm2
0x950574: movaps  xmm4, xmm1
0x950577: shufps  xmm3, xmm2, 0
0x95057B: mulps   xmm3, xmm7
0x95057E: shufps  xmm4, xmm1, 0C9h ; 'É'
0x950582: mulps   xmm6, xmm4
0x950585: subps   xmm0, xmm6
0x950588: movaps  xmmword ptr [ecx], xmm0
0x95058B: movaps  xmm6, xmmword ptr [edx+40h]
0x95058F: movaps  xmm7, xmmword ptr [esi+40h]
0x950593: mov     al, [edx+0Ch]
0x950596: test    al, al
0x950598: movaps  xmm2, xmm3
0x95059B: subps   xmm2, xmm6
0x95059E: movaps  xmm6, xmm3
0x9505A1: subps   xmm6, xmm7
0x9505A4: movaps  xmm7, xmm0
0x9505A7: shufps  xmm7, xmm0, 0D2h ; 'Ò'
0x9505AB: movaps  [esp+80h+var_20], xmm6
0x9505B0: movaps  xmm6, xmm0
0x9505B3: shufps  xmm6, xmm0, 0C9h ; 'É'
0x9505B7: movaps  xmm0, xmm2
0x9505BA: shufps  xmm0, xmm2, 0D2h ; 'Ò'
0x9505BE: mulps   xmm0, xmm6
0x9505C1: movaps  [esp+80h+var_30], xmm7
0x9505C6: movaps  xmm7, xmm0
0x9505C9: movaps  xmm0, xmm2
0x9505CC: shufps  xmm0, xmm2, 0C9h ; 'É'
0x9505D0: movaps  xmm2, [esp+80h+var_30]
0x9505D5: mulps   xmm0, xmm2
0x9505D8: movaps  [esp+80h+var_10], xmm6
0x9505DD: subps   xmm0, xmm7
0x9505E0: jnz     short loc_95061C
0x9505E2: movaps  xmm6, xmmword ptr [edx+70h]
0x9505E6: movaps  xmm7, xmmword ptr [edx+60h]
0x9505EA: movaps  xmm2, xmm0
0x9505ED: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x9505F1: mulps   xmm6, xmm2
0x9505F4: movaps  xmm2, xmm0
0x9505F7: shufps  xmm2, xmm0, 55h ; 'U'
0x9505FB: mulps   xmm7, xmm2
0x9505FE: movaps  xmm2, xmm0
0x950601: shufps  xmm2, xmm0, 0
0x950605: movaps  xmm0, xmmword ptr [edx+50h]
0x950609: mulps   xmm0, xmm2
0x95060C: movaps  xmm2, [esp+80h+var_30]
0x950611: addps   xmm0, xmm7
0x950614: addps   xmm0, xmm6
0x950617: movaps  xmm6, [esp+80h+var_10]
0x95061C: movaps  xmmword ptr [ecx+10h], xmm0
0x950620: movaps  xmm0, [esp+80h+var_20]
0x950625: mov     al, [esi+0Ch]
0x950628: test    al, al
0x95062A: movaps  xmm7, xmm0
0x95062D: shufps  xmm7, xmm0, 0C9h ; 'É'
0x950631: mulps   xmm2, xmm7
0x950634: movaps  xmm7, xmm0
0x950637: shufps  xmm7, xmm0, 0D2h ; 'Ò'
0x95063B: mulps   xmm6, xmm7
0x95063E: subps   xmm6, xmm2
0x950641: jnz     short loc_950673
0x950643: movaps  xmm2, xmmword ptr [esi+70h]
0x950647: movaps  xmm7, xmmword ptr [esi+60h]
0x95064B: movaps  xmm0, xmm6
0x95064E: shufps  xmm0, xmm6, 0AAh ; 'ª'
0x950652: mulps   xmm2, xmm0
0x950655: movaps  xmm0, xmm6
0x950658: shufps  xmm0, xmm6, 55h ; 'U'
0x95065C: mulps   xmm7, xmm0
0x95065F: movaps  xmm0, xmm6
0x950662: shufps  xmm0, xmm6, 0
0x950666: movaps  xmm6, xmmword ptr [esi+50h]
0x95066A: mulps   xmm6, xmm0
0x95066D: addps   xmm6, xmm7
0x950670: addps   xmm6, xmm2
0x950673: movaps  xmm2, xmmword ptr [ecx+10h]
0x950677: movaps  xmmword ptr [ecx+20h], xmm6
0x95067B: fld     dword ptr [esi+3Ch]
0x95067E: movaps  xmm0, xmmword ptr [ecx+20h]
0x950682: fadd    dword ptr [edx+3Ch]
0x950685: movaps  xmm6, xmmword ptr [esi+30h]
0x950689: movaps  xmm7, xmm0
0x95068C: fadd    dword ptr ds:0AA2F14h
0x950692: mulps   xmm7, xmm0
0x950695: movaps  xmm0, xmmword ptr [edx+30h]
0x950699: mulps   xmm7, xmm6
0x95069C: movaps  xmm6, xmm2
0x95069F: mulps   xmm6, xmm2
0x9506A2: movaps  xmm2, xmm6
0x9506A5: mulps   xmm2, xmm0
0x9506A8: movaps  xmm0, xmm2
0x9506AB: addps   xmm0, xmm7
0x9506AE: movaps  xmm2, xmm0
0x9506B1: shufps  xmm2, xmm0, 55h ; 'U'
0x9506B5: addss   xmm2, xmm0
0x9506B9: movaps  xmm6, xmm0
0x9506BC: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x9506C0: addss   xmm6, xmm2
0x9506C4: lea     eax, [esp+80h+var_48]
0x9506C8: movss   dword ptr [eax], xmm6
0x9506CC: fadd    [esp+80h+var_48]
0x9506D0: mov     eax, [ebp+arg_10]
0x9506D3: add     ecx, 30h ; '0'
0x9506D6: fst     dword ptr [ecx-4]
0x9506D9: movaps  xmm0, xmm3
0x9506DC: fld     dword ptr ds:0A2F948h
0x9506E2: fdiv    st, st(1)
0x9506E4: fstp    dword ptr [ecx-14h]
0x9506E7: fstp    st
0x9506E9: fld     dword ptr [edi+8]
0x9506EC: fmul    dword ptr [eax+4]
0x9506EF: fstp    dword ptr [ecx-24h]
0x9506F2: movaps  xmmword ptr [ecx], xmm1
0x9506F5: movaps  xmm1, xmmword ptr [edx+40h]
0x9506F9: movaps  xmm2, xmmword ptr [esi+40h]
0x9506FD: mov     al, [edx+0Ch]
0x950700: test    al, al
0x950702: subps   xmm0, xmm1
0x950705: movaps  xmm6, xmm0
0x950708: movaps  xmm1, xmm3
0x95070B: subps   xmm1, xmm2
0x95070E: movaps  xmm2, xmm0
0x950711: shufps  xmm2, xmm0, 0D2h ; 'Ò'
0x950715: shufps  xmm6, xmm0, 0C9h ; 'É'
0x950719: movaps  xmm0, xmm6
0x95071C: mulps   xmm2, xmm4
0x95071F: mulps   xmm0, xmm5
0x950722: subps   xmm0, xmm2
0x950725: jnz     short loc_950757
0x950727: movaps  xmm6, xmmword ptr [edx+70h]
0x95072B: movaps  xmm7, xmmword ptr [edx+60h]
0x95072F: movaps  xmm2, xmm0
0x950732: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x950736: mulps   xmm6, xmm2
0x950739: movaps  xmm2, xmm0
0x95073C: shufps  xmm2, xmm0, 55h ; 'U'
0x950740: mulps   xmm7, xmm2
0x950743: movaps  xmm2, xmm0
0x950746: shufps  xmm2, xmm0, 0
0x95074A: movaps  xmm0, xmmword ptr [edx+50h]
0x95074E: mulps   xmm0, xmm2
0x950751: addps   xmm0, xmm7
0x950754: addps   xmm0, xmm6
0x950757: movaps  xmmword ptr [ecx+10h], xmm0
0x95075B: mov     al, [esi+0Ch]
0x95075E: test    al, al
0x950760: movaps  xmm0, xmm1
0x950763: shufps  xmm0, xmm1, 0C9h ; 'É'
0x950767: mulps   xmm5, xmm0
0x95076A: movaps  xmm0, xmm1
0x95076D: shufps  xmm0, xmm1, 0D2h ; 'Ò'
0x950771: mulps   xmm4, xmm0
0x950774: subps   xmm4, xmm5
0x950777: jnz     short loc_9507A9
0x950779: movaps  xmm1, xmmword ptr [esi+70h]
0x95077D: movaps  xmm2, xmmword ptr [esi+60h]
0x950781: movaps  xmm0, xmm4
0x950784: shufps  xmm0, xmm4, 0AAh ; 'ª'
0x950788: mulps   xmm1, xmm0
0x95078B: movaps  xmm0, xmm4
0x95078E: shufps  xmm0, xmm4, 55h ; 'U'
0x950792: mulps   xmm2, xmm0
0x950795: movaps  xmm0, xmm4
0x950798: shufps  xmm0, xmm4, 0
0x95079C: movaps  xmm4, xmmword ptr [esi+50h]
0x9507A0: mulps   xmm4, xmm0
0x9507A3: addps   xmm4, xmm2
0x9507A6: addps   xmm4, xmm1
0x9507A9: movaps  xmm1, xmmword ptr [ecx+10h]
0x9507AD: movaps  xmmword ptr [ecx+20h], xmm4
0x9507B1: fld     dword ptr [esi+3Ch]
0x9507B4: fadd    dword ptr [edx+3Ch]
0x9507B7: movaps  xmm0, xmmword ptr [ecx+20h]
0x9507BB: movaps  xmm2, xmmword ptr [esi+30h]
0x9507BF: movaps  xmm4, xmm0
0x9507C2: fadd    dword ptr ds:0AA2F14h
0x9507C8: mulps   xmm4, xmm0
0x9507CB: movaps  xmm0, xmmword ptr [edx+30h]
0x9507CF: mulps   xmm4, xmm2
0x9507D2: movaps  xmm2, xmm1
0x9507D5: mulps   xmm2, xmm1
0x9507D8: movaps  xmm1, xmm2
0x9507DB: mulps   xmm1, xmm0
0x9507DE: movaps  xmm0, xmm1
0x9507E1: addps   xmm0, xmm4
0x9507E4: movaps  xmm1, xmm0
0x9507E7: shufps  xmm1, xmm0, 55h ; 'U'
0x9507EB: addss   xmm1, xmm0
0x9507EF: movaps  xmm2, xmm0
0x9507F2: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x9507F6: addss   xmm2, xmm1
0x9507FA: lea     eax, [esp+80h+var_48]
0x9507FE: movss   dword ptr [eax], xmm2
0x950802: fadd    [esp+80h+var_48]
0x950806: mov     eax, [ebp+arg_10]
0x950809: add     ecx, 30h ; '0'
0x95080C: fst     dword ptr [ecx-4]
0x95080F: fld     dword ptr ds:0A2F948h
0x950815: fdiv    st, st(1)
0x950817: fstp    dword ptr [ecx-14h]
0x95081A: fstp    st
0x95081C: fld     dword ptr [edi+10h]
0x95081F: fmul    dword ptr [eax+4]
0x950822: lea     eax, [esp+80h+var_58]
0x950826: fstp    dword ptr [ecx-24h]
0x950829: movaps  xmm1, xmmword ptr [ecx-60h]
0x95082D: movaps  xmm0, xmmword ptr [ecx-30h]
0x950831: fld     dword ptr [ecx-34h]
0x950834: movaps  xmm2, xmmword ptr [edx+30h]
0x950838: fld     dword ptr [ecx-4]
0x95083B: movaps  xmm5, xmmword ptr [ecx-20h]
0x95083F: fld     st(1)
0x950841: mulps   xmm0, xmm1
0x950844: fmul    st, st(1)
0x950846: movaps  xmm1, xmmword ptr [esi+30h]
0x95084A: movaps  xmm4, xmm1
0x95084D: shufps  xmm4, xmm1, 0FFh
0x950851: mulps   xmm4, xmm0
0x950854: movaps  xmm1, xmm2
0x950857: shufps  xmm1, xmm2, 0FFh
0x95085B: movaps  xmm2, xmmword ptr [ecx-40h]
0x95085F: mulps   xmm1, xmm0
0x950862: movaps  xmm0, xmmword ptr [esi+30h]
0x950866: addps   xmm1, xmm4
0x950869: movaps  xmm4, xmmword ptr [ecx-10h]
0x95086D: mulps   xmm4, xmm2
0x950870: movaps  xmm2, xmmword ptr [ecx-50h]
0x950874: mulps   xmm4, xmm0
0x950877: movaps  xmm0, xmmword ptr [edx+30h]
0x95087B: mulps   xmm5, xmm2
0x95087E: mulps   xmm5, xmm0
0x950881: movaps  xmm0, xmm5
0x950884: addps   xmm0, xmm4
0x950887: addps   xmm0, xmm1
0x95088A: movaps  xmm1, xmm0
0x95088D: shufps  xmm1, xmm0, 55h ; 'U'
0x950891: movaps  xmm2, xmm0
0x950894: addss   xmm1, xmm0
0x950898: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x95089C: addss   xmm2, xmm1
0x9508A0: movss   dword ptr [eax], xmm2
0x9508A4: fld     [esp+80h+var_58]
0x9508A8: fmul    [esp+80h+var_58]
0x9508AC: fsubp   st(1), st
0x9508AE: fdivr   dword ptr ds:0A2F948h
0x9508B4: fst     [esp+80h+var_5C]
0x9508B8: fmul    st, st(1)
0x9508BA: cmp     [ebp+arg_4], 1
0x9508BE: fstp    dword ptr [ecx-34h]
0x9508C1: mov     eax, [ebp+arg_10]
0x9508C4: fstp    st
0x9508C6: fld     [esp+80h+var_5C]
0x9508CA: fmul    st, st(1)
0x9508CC: fstp    dword ptr [ecx-4]
0x9508CF: fstp    st
0x9508D1: fmul    dword ptr [eax+10h]
0x9508D4: lea     eax, [edi+4]
0x9508D7: fld     [esp+80h+var_58]
0x9508DB: mov     [ebx+4], eax
0x9508DE: fmul    [esp+80h+var_5C]
0x9508E2: lea     eax, [ebx+14h]
0x9508E5: mov     dword ptr [ebx], 51407h
0x9508EB: mov     dword ptr [ebx+10h], 8
0x9508F2: fchs
0x9508F4: mov     [esp+80h+var_54], eax
0x9508F8: fstp    dword ptr [ebx+8]
0x9508FB: fstp    dword ptr [ebx+0Ch]
0x9508FE: jle     loc_950AEE
0x950904: test    byte ptr [edi], 4
0x950907: jz      loc_9509BD
0x95090D: lea     ecx, [ecx+0]
0x950910: mov     eax, [ebp+arg_0]
0x950913: mov     [esp+80h+var_58], eax
0x950917: mov     eax, [esp+80h+var_44]
0x95091B: test    eax, eax
0x95091D: mov     dword ptr [edi+1Ch], 0
0x950924: jl      short loc_950992
0x950926: inc     eax
0x950927: mov     [esp+80h+var_50], eax
0x95092B: jmp     short loc_950930
0x95092D: align 10h
0x950930: mov     eax, [esp+80h+var_58]
0x950934: movaps  xmm0, xmmword ptr [eax]
0x950937: subps   xmm0, xmm3
0x95093A: mulps   xmm0, xmm0
0x95093D: movaps  xmm1, xmm0
0x950940: shufps  xmm1, xmm0, 55h ; 'U'
0x950944: movaps  xmm2, xmm0
0x950947: addss   xmm1, xmm0
0x95094B: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x95094F: movaps  xmm0, xmm2
0x950952: addss   xmm0, xmm1
0x950956: movaps  [esp+80h+var_20], xmm0
0x95095B: sqrtss  xmm0, xmm0
0x95095F: movss   dword ptr [esp+80h+var_20], xmm0
0x950965: movaps  xmm0, [esp+80h+var_20]
0x95096A: lea     eax, [esp+80h+var_48]
0x95096E: movss   dword ptr [eax], xmm0
0x950972: fld     [esp+80h+var_48]
0x950976: mov     eax, [esp+80h+var_58]
0x95097A: fadd    dword ptr [edi+1Ch]
0x95097D: add     eax, 20h ; ' '
0x950980: mov     [esp+80h+var_58], eax
0x950984: mov     eax, [esp+80h+var_50]
0x950988: fstp    dword ptr [edi+1Ch]
0x95098B: dec     eax
0x95098C: mov     [esp+80h+var_50], eax
0x950990: jnz     short loc_950930
0x950992: fld     [esp+80h+var_68]
0x950996: fmul    dword ptr [edi+1Ch]
0x950999: fst     dword ptr [edi+1Ch]
0x95099C: fcomp   dword ptr ds:0A372CCh
0x9509A2: fnstsw  ax
0x9509A4: test    ah, 5
0x9509A7: jnp     loc_950ADB
0x9509AD: and     byte ptr [edi], 0FBh
0x9509B0: test    byte ptr [edi], 4
0x9509B3: jnz     loc_950910
0x9509B9: mov     eax, [esp+80h+var_54]
0x9509BD: cmp     byte ptr [edx+0Ch], 0
0x9509C1: movaps  xmm0, [esp+80h+var_40]
0x9509C6: jz      short loc_9509CD
0x9509C8: movaps  xmmword ptr [ecx], xmm0
0x9509CB: jmp     short loc_950A00
0x9509CD: movaps  xmm2, xmmword ptr [edx+70h]
0x9509D1: movaps  xmm3, xmmword ptr [edx+60h]
0x9509D5: movaps  xmm4, xmmword ptr [edx+50h]
0x9509D9: movaps  xmm1, xmm0
0x9509DC: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x9509E0: mulps   xmm2, xmm1
0x9509E3: movaps  xmm1, xmm0
0x9509E6: shufps  xmm1, xmm0, 55h ; 'U'
0x9509EA: mulps   xmm3, xmm1
0x9509ED: movaps  xmm1, xmm0
0x9509F0: shufps  xmm1, xmm0, 0
0x9509F4: mulps   xmm4, xmm1
0x9509F7: addps   xmm4, xmm3
0x9509FA: addps   xmm4, xmm2
0x9509FD: movaps  xmmword ptr [ecx], xmm4
0x950A00: cmp     byte ptr [esi+0Ch], 0
0x950A04: movaps  xmm1, xmmword ptr ds:0A965C0h
0x950A0B: xorps   xmm0, xmm1
0x950A0E: jnz     short loc_950A40
0x950A10: movaps  xmm2, xmmword ptr [esi+70h]
0x950A14: movaps  xmm3, xmmword ptr [esi+60h]
0x950A18: movaps  xmm1, xmm0
0x950A1B: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x950A1F: mulps   xmm2, xmm1
0x950A22: movaps  xmm1, xmm0
0x950A25: shufps  xmm1, xmm0, 55h ; 'U'
0x950A29: mulps   xmm3, xmm1
0x950A2C: movaps  xmm1, xmm0
0x950A2F: shufps  xmm1, xmm0, 0
0x950A33: movaps  xmm0, xmmword ptr [esi+50h]
0x950A37: mulps   xmm0, xmm1
0x950A3A: addps   xmm0, xmm3
0x950A3D: addps   xmm0, xmm2
0x950A40: movaps  xmm1, xmmword ptr [ecx]
0x950A43: movaps  xmmword ptr [ecx+10h], xmm0
0x950A47: movaps  xmm0, xmmword ptr [ecx+10h]
0x950A4B: movaps  xmm2, xmmword ptr [esi+30h]
0x950A4F: movaps  xmm3, xmm0
0x950A52: mulps   xmm3, xmm0
0x950A55: movaps  xmm0, xmmword ptr [edx+30h]
0x950A59: mulps   xmm3, xmm2
0x950A5C: movaps  xmm2, xmm1
0x950A5F: mulps   xmm2, xmm1
0x950A62: movaps  xmm1, xmm2
0x950A65: mulps   xmm1, xmm0
0x950A68: movaps  xmm0, xmm1
0x950A6B: addps   xmm0, xmm3
0x950A6E: movaps  xmm1, xmm0
0x950A71: shufps  xmm1, xmm0, 55h ; 'U'
0x950A75: movaps  xmm2, xmm0
0x950A78: addss   xmm1, xmm0
0x950A7C: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x950A80: lea     edx, [esp+80h+var_44]
0x950A84: addss   xmm2, xmm1
0x950A88: movss   dword ptr [edx], xmm2
0x950A8C: fld     [esp+80h+var_44]
0x950A90: fadd    dword ptr ds:0AA2F14h
0x950A96: add     ebx, 18h
0x950A99: add     ecx, 20h ; ' '
0x950A9C: fdivr   dword ptr ds:0A2F948h
0x950AA2: fstp    dword ptr [ecx-14h]
0x950AA5: fld     dword ptr ds:0A2F948h
0x950AAB: fdiv    dword ptr [edi+1Ch]
0x950AAE: fld     dword ptr [edi+1Ch]
0x950AB1: fstp    dword ptr [eax]
0x950AB3: mov     dword ptr [ebx-18h], 61808h
0x950ABA: fld     dword ptr [edi+18h]
0x950ABD: mov     eax, [ebp+arg_10]
0x950AC0: fmul    dword ptr [eax+4]
0x950AC3: mov     eax, [ebp+arg_14]
0x950AC6: fstp    dword ptr [ecx-4]
0x950AC9: fmul    dword ptr [ecx-14h]
0x950ACC: fstp    dword ptr [ecx-14h]
0x950ACF: mov     [eax], ecx
0x950AD1: mov     [eax+4], ebx
0x950AD4: pop     edi
0x950AD5: pop     esi
0x950AD6: pop     ebx
0x950AD7: mov     esp, ebp
0x950AD9: pop     ebp
0x950ADA: retn
0x950ADB: mov     eax, [ebp+arg_14]
0x950ADE: mov     [eax], ecx
0x950AE0: mov     ecx, [esp+80h+var_54]
0x950AE4: mov     [eax+4], ecx
0x950AE7: pop     edi
0x950AE8: pop     esi
0x950AE9: pop     ebx
0x950AEA: mov     esp, ebp
0x950AEC: pop     ebp
0x950AED: retn
0x950AEE: mov     edx, [ebp+arg_14]
0x950AF1: mov     [edx], ecx
0x950AF3: mov     [edx+4], eax
0x950AF6: pop     edi
0x950AF7: pop     esi
0x950AF8: pop     ebx
0x950AF9: mov     esp, ebp
0x950AFB: pop     ebp
0x950AFC: retn
0x950AFD: mov     [edi+4], ebx
0x950B00: fstp    st
0x950B02: mov     [edi], ecx
0x950B04: pop     edi
0x950B05: pop     esi
0x950B06: pop     ebx
0x950B07: mov     esp, ebp
0x950B09: pop     ebp
0x950B0A: retn
