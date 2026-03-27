0x937EF0: push    ebp
0x937EF1: mov     ebp, esp
0x937EF3: and     esp, 0FFFFFFF0h
0x937EF6: sub     esp, 18h
0x937EF9: mov     eax, [ebp+arg_4]
0x937EFC: mov     edx, [ebp+arg_0]
0x937EFF: push    esi
0x937F00: lea     esi, [eax+4]
0x937F03: mov     [edx+38h], esi
0x937F06: fld     dword ptr [ecx+eax*4+0D0h]
0x937F0D: fcomp   dword ptr ds:0A2FAA8h
0x937F13: lea     esi, [eax+2]
0x937F16: shl     esi, 4
0x937F19: add     esi, ecx
0x937F1B: push    edi
0x937F1C: mov     edi, [esi]
0x937F1E: fnstsw  ax
0x937F20: mov     dword ptr [esp+20h+var_10], edi
0x937F24: test    ah, 5
0x937F27: mov     edi, [esi+4]
0x937F2A: mov     dword ptr [esp+20h+var_10+4], edi
0x937F2E: mov     edi, [esi+8]
0x937F31: mov     esi, [esi+0Ch]
0x937F34: mov     dword ptr [esp+20h+var_10+8], edi
0x937F38: mov     dword ptr [esp+20h+var_10+0Ch], esi
0x937F3C: jp      short loc_937F58
0x937F3E: mov     dword ptr [edx+30h], 0BF800000h
0x937F45: movaps  xmm0, xmmword ptr ds:0A965C0h
0x937F4C: movaps  xmm1, xmmword ptr [ecx+60h]
0x937F50: xorps   xmm1, xmm0
0x937F53: movaps  xmmword ptr [edx], xmm1
0x937F56: jmp     short loc_937F66
0x937F58: mov     dword ptr [edx+30h], 3F800000h
0x937F5F: movaps  xmm0, xmmword ptr [ecx+60h]
0x937F63: movaps  xmmword ptr [edx], xmm0
0x937F66: fld     dword ptr [edx+30h]
0x937F69: movaps  xmm4, xmmword ptr ds:0A965C0h
0x937F70: mov     [esp+20h+var_14], 0
0x937F78: fchs
0x937F7A: movss   xmm0, [esp+20h+var_14]
0x937F80: movaps  xmm1, xmm0
0x937F83: shufps  xmm1, xmm0, 0
0x937F87: movaps  xmm0, xmm1
0x937F8A: movaps  xmm1, xmmword ptr [ecx+0C0h]
0x937F91: cmpltps xmm0, xmm1
0x937F95: mov     [esp+20h+var_14], 0B727C5ACh
0x937F9D: movss   xmm2, [esp+20h+var_14]
0x937FA3: fstp    [esp+20h+var_14]
0x937FA7: movss   xmm3, [esp+20h+var_14]
0x937FAD: movaps  xmm5, xmm0
0x937FB0: mov     [esp+20h+var_14], 3727C5ACh
0x937FB8: movss   xmm1, [esp+20h+var_14]
0x937FBE: shufps  xmm1, xmm1, 0
0x937FC2: andnps  xmm5, xmm1
0x937FC5: movaps  xmm1, xmm2
0x937FC8: shufps  xmm1, xmm2, 0
0x937FCC: andps   xmm0, xmm1
0x937FCF: orps    xmm0, xmm5
0x937FD2: movaps  xmm1, xmm3
0x937FD5: shufps  xmm1, xmm3, 0
0x937FD9: mulps   xmm1, xmm0
0x937FDC: movaps  xmm0, [esp+20h+var_10]
0x937FE1: addps   xmm0, xmm1
0x937FE4: andps   xmm0, xmm4
0x937FE7: movaps  xmm1, xmm0
0x937FEA: movaps  xmm0, xmmword ptr [edx]
0x937FED: xorps   xmm0, xmm1
0x937FF0: movaps  xmmword ptr [edx], xmm0
0x937FF3: movaps  xmm3, xmmword ptr [ecx+40h]
0x937FF7: movaps  xmm1, xmmword ptr [ecx+50h]
0x937FFB: movaps  xmm2, xmmword ptr [ecx+20h]
0x937FFF: movaps  xmm5, xmmword ptr [ecx+30h]
0x938003: subps   xmm0, xmm1
0x938006: movaps  xmm4, xmm3
0x938009: shufps  xmm4, xmm3, 44h ; 'D'
0x93800D: movaps  xmm7, xmm3
0x938010: movaps  xmm1, xmm2
0x938013: shufps  xmm1, xmm5, 44h ; 'D'
0x938017: shufps  xmm7, xmm3, 0EEh ; 'î'
0x93801B: shufps  xmm2, xmm5, 0EEh ; 'î'
0x93801F: movaps  xmm5, xmm1
0x938022: movaps  xmm3, xmm0
0x938025: shufps  xmm3, xmm0, 55h ; 'U'
0x938029: shufps  xmm5, xmm4, 0DDh ; 'Ý'
0x93802D: mulps   xmm5, xmm3
0x938030: shufps  xmm1, xmm4, 88h ; 'ˆ'
0x938034: movaps  xmm3, xmm0
0x938037: movaps  xmm6, xmm0
0x93803A: shufps  xmm3, xmm0, 0
0x93803E: mulps   xmm1, xmm3
0x938041: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x938045: shufps  xmm2, xmm7, 88h ; 'ˆ'
0x938049: mulps   xmm2, xmm6
0x93804C: addps   xmm1, xmm5
0x93804F: pop     edi
0x938050: addps   xmm1, xmm2
0x938053: movaps  xmmword ptr [edx+10h], xmm1
0x938057: pop     esi
0x938058: mov     esp, ebp
0x93805A: pop     ebp
0x93805B: retn    8
