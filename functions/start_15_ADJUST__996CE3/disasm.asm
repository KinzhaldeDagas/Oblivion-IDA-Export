0x996CE3: sub     esp, 12h
0x996CE6: fstcw   [esp+12h+var_2]
0x996CEB: mov     dx, [esp+12h+var_2]
0x996CF0: or      dx, 300h
0x996CF5: mov     word ptr [esp+12h+var_12], dx
0x996CF9: fldcw   word ptr [esp+12h+var_12]
0x996CFC: mov     edx, eax
0x996CFE: sar     eax, 1
0x996D00: sub     edx, eax
0x996D02: movdqa  xmm6, ds:xmmword_AAE370
0x996D0A: pandn   xmm6, xmm2
0x996D0E: add     eax, 3FFh
0x996D13: movd    xmm3, eax
0x996D17: psllq   xmm3, 34h ; '4'
0x996D1C: orpd    xmm6, xmm3
0x996D20: add     edx, 3FFh
0x996D26: movd    xmm4, edx
0x996D2A: psllq   xmm4, 34h ; '4'
0x996D2F: movlpd  [esp+12h+var_12], xmm0
0x996D34: fld     [esp+12h+var_12]
0x996D37: movlpd  [esp+12h+var_A], xmm6
0x996D3D: fld     [esp+12h+var_A]
0x996D41: fmul    st(1), st
0x996D43: faddp   st(1), st
0x996D45: movlpd  [esp+12h+var_12], xmm4
0x996D4A: fld     [esp+12h+var_12]
0x996D4D: fmulp   st(1), st
0x996D4F: fstp    [esp+12h+var_12]
0x996D52: movlpd  xmm0, [esp+12h+var_12]
0x996D57: fldcw   [esp+12h+var_2]
0x996D5B: add     esp, 12h
0x996D5E: pextrw  ecx, xmm0, 3
0x996D63: and     ecx, 7FF0h
0x996D69: cmp     ecx, 7FF0h
0x996D6F: jnb     short start_15___OVERFLOW
0x996D71: cmp     ecx, 0
0x996D74: jz      short start_15___UNDERFLOW
0x996D76: jmp     short start_15___RETURN_1
