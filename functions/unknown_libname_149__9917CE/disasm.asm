0x9917CE: push    eax
0x9917CF: push    ebx
0x9917D0: push    ecx
0x9917D1: mov     eax, [esp+0Ch+arg_6]
0x9917D5: xor     eax, 700h
0x9917DA: test    eax, 700h
0x9917DF: jnz     loc_991968
0x9917E5: shr     eax, 0Bh
0x9917E8: and     eax, 0Fh
0x9917EB: cmp     byte_B319FC[eax], 0
0x9917F2: jz      loc_991968
0x9917F8: mov     eax, [esp+0Ch+arg_6]
0x9917FC: and     eax, 7FFF0000h
0x991801: cmp     eax, 7FFF0000h
0x991806: jz      loc_991968
0x99180C: mov     eax, [esp+0Ch+arg_1E]
0x991810: and     eax, 7FFF0000h
0x991815: jz      loc_991968
0x99181B: cmp     eax, 7FFF0000h
0x991820: jz      loc_991968
0x991826: mov     eax, [esp+2Ch]
0x99182A: add     eax, eax
0x99182C: jnz     loc_991968
0x991832: mov     eax, [esp+14h]
0x991836: add     eax, eax
0x991838: jnz     loc_991968
0x99183E: mov     eax, [esp+0Ch+arg_6+2]
0x991842: and     eax, 7FFFh
0x991847: add     eax, 3Fh ; '?'
0x99184A: mov     ebx, [esp+0Ch+arg_1E+2]
0x99184E: and     ebx, 7FFFh
0x991854: sub     ebx, eax
0x991856: ja      short loc_9918B6
0x991858: mov     eax, [esp+0Ch+arg_6+2]
0x99185C: and     eax, 7FFFh
0x991861: add     eax, 0Ah
0x991864: mov     ebx, [esp+0Ch+arg_1E+2]
0x991868: and     ebx, 7FFFh
0x99186E: sub     ebx, eax
0x991870: js      loc_991968
0x991876: fld     tbyte ptr [esp+28h]
0x99187A: mov     eax, [esp+0Ch+arg_6+2]
0x99187E: mov     ebx, [esp+0Ch+arg_1E+2]
0x991882: and     ebx, 7FFFh
0x991888: mov     ecx, ebx
0x99188A: sub     ebx, eax
0x99188C: and     ebx, 7
0x99188F: or      ebx, 4
0x991892: sub     ecx, ebx
0x991894: mov     ebx, eax
0x991896: and     ebx, 8000h
0x99189C: or      ecx, ebx
0x99189E: mov     [esp+0Ch+arg_6+2], ecx
0x9918A2: fld     tbyte ptr [esp+10h]
0x9918A6: mov     [esp+0Ch+arg_6+2], eax
0x9918AA: fxch    st(1)
0x9918AC: fprem
0x9918AE: fstp    tbyte ptr [esp+28h]
0x9918B2: fstp    st
0x9918B4: jmp     short loc_991858
0x9918B6: test    ebx, 2
0x9918BC: jnz     short loc_9918C6
0x9918BE: fld     tbyte ptr [esp+10h]
0x9918C2: fstp    [esp+0Ch+arg_C]
0x9918C6: fnstcw  word ptr [esp+0Ch+arg_24]
0x9918CA: mov     eax, [esp+0Ch+arg_24]
0x9918CE: or      eax, 33Fh
0x9918D3: mov     [esp+0Ch+arg_28], eax
0x9918D7: fldcw   word ptr [esp+0Ch+arg_28]
0x9918DB: mov     eax, [esp+0Ch+arg_6+2]
0x9918DF: and     eax, 7FFFh
0x9918E4: mov     ebx, [esp+0Ch+arg_1E+2]
0x9918E8: and     ebx, 7FFFh
0x9918EE: sub     ebx, eax
0x9918F0: and     ebx, 3Fh
0x9918F3: or      ebx, 20h
0x9918F6: add     ebx, 1
0x9918F9: mov     ecx, ebx
0x9918FB: mov     eax, [esp+0Ch+arg_6+2]
0x9918FF: mov     ebx, [esp+0Ch+arg_1E+2]
0x991903: and     ebx, 7FFFh
0x991909: and     eax, 8000h
0x99190E: or      ebx, eax
0x991910: mov     [esp+0Ch+arg_6+2], ebx
0x991914: fld     tbyte ptr [esp+10h]
0x991918: fabs
0x99191A: fld     tbyte ptr [esp+28h]
0x99191E: fabs
0x991920: fcom    st(1)
0x991922: fnstsw  ax
0x991924: and     eax, 100h
0x991929: jnz     short loc_99192D
0x99192B: fsub    st, st(1)
0x99192D: fxch    st(1)
0x99192F: fmul    dbl_B31A2C
0x991935: fxch    st(1)
0x991937: sub     ecx, 1
0x99193A: jnz     short loc_991920
0x99193C: mov     ebx, [esp+0Ch+arg_1E+2]
0x991940: fstp    tbyte ptr [esp+28h]
0x991944: fstp    st
0x991946: fld     [esp+0Ch+arg_C]
0x99194A: fld     tbyte_B31A34
0x991950: fprem1
0x991952: fstp    st
0x991954: fld     tbyte ptr [esp+28h]
0x991958: fldcw   word ptr [esp+0Ch+arg_24]
0x99195C: and     ebx, 8000h
0x991962: jz      short loc_991972
0x991964: fchs
0x991966: jmp     short loc_991972
0x991968: fld     tbyte ptr [esp+10h]
0x99196C: fld     tbyte ptr [esp+28h]
0x991970: fprem1
0x991972: test    edx, 3
0x991978: jz      short loc_9919D0
0x99197A: fnstsw  word ptr [esp+0Ch+arg_2C]
0x99197E: test    edx, 1
0x991984: jz      short loc_9919A5
0x991986: fnstcw  word ptr [esp+0Ch+arg_24]
0x99198A: mov     eax, [esp+0Ch+arg_24]
0x99198E: or      eax, 300h
0x991993: mov     [esp+0Ch+arg_28], eax
0x991997: fldcw   word ptr [esp+0Ch+arg_28]
0x99199B: fmul    dbl_B31A1C
0x9919A1: fldcw   word ptr [esp+0Ch+arg_24]
0x9919A5: mov     eax, [esp+0Ch+arg_2C]
0x9919A9: fxch    st(1)
0x9919AB: fstp    st
0x9919AD: fld     [esp+0Ch+arg_C]
0x9919B1: fxch    st(1)
0x9919B3: and     eax, 4300h
0x9919B8: sub     esp, 1Ch
0x9919BB: fnstenv [esp+28h+var_28]
0x9919BE: and     [esp+28h+var_24], 0BCFFh
0x9919C6: or      [esp+28h+var_24], eax
0x9919CA: fldenv  [esp+28h+var_28]
0x9919CD: add     esp, 1Ch
0x9919D0: pop     ecx
0x9919D1: pop     ebx
0x9919D2: pop     eax
0x9919D3: retn
