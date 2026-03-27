0x7948C0: sub     esp, 24h
0x7948C3: push    edi
0x7948C4: mov     edi, ecx
0x7948C6: mov     eax, [edi+6Ch]
0x7948C9: test    eax, eax
0x7948CB: jnz     short loc_7948D1
0x7948CD: xor     ecx, ecx
0x7948CF: jmp     short loc_7948D9
0x7948D1: mov     ecx, [edi+70h]
0x7948D4: sub     ecx, eax
0x7948D6: sar     ecx, 2
0x7948D9: mov     eax, 0AAAAAAABh
0x7948DE: mul     ecx
0x7948E0: shr     edx, 1
0x7948E2: movzx   eax, dx
0x7948E5: movzx   eax, ax
0x7948E8: test    eax, eax
0x7948EA: jle     loc_794A87
0x7948F0: push    ebx
0x7948F1: push    ebp
0x7948F2: push    esi
0x7948F3: mov     esi, [esp+34h+arg_0]
0x7948F7: xor     ebx, ebx
0x7948F9: mov     ebp, eax
0x7948FB: jmp     short loc_794900
0x7948FD: align 10h
0x794900: mov     eax, [edi+6Ch]
0x794903: test    eax, eax
0x794905: jz      short loc_794911
0x794907: mov     ecx, [edi+70h]
0x79490A: sub     ecx, eax
0x79490C: sar     ecx, 2
0x79490F: jnz     short loc_794916
0x794911: call    __invalid_parameter_noinfo
0x794916: mov     eax, [edi+6Ch]
0x794919: fld     dword ptr [eax+ebx]
0x79491C: add     eax, ebx
0x79491E: fstp    [esp+34h+var_24]
0x794922: fld     dword ptr [eax+4]
0x794925: fstp    [esp+34h+var_20]
0x794929: fld     dword ptr [eax+8]
0x79492C: fstp    [esp+34h+var_1C]
0x794930: fld     dword ptr [esi+10h]
0x794933: fld     [esp+34h+var_20]
0x794937: fld     st
0x794939: fmulp   st(2), st
0x79493B: fld     dword ptr [esi]
0x79493D: fld     [esp+34h+var_24]
0x794941: fld     st
0x794943: fmulp   st(2), st
0x794945: fxch    st(3)
0x794947: faddp   st(1), st
0x794949: fld     dword ptr [esi+20h]
0x79494C: fld     [esp+34h+var_1C]
0x794950: fld     st
0x794952: fmulp   st(2), st
0x794954: fxch    st(2)
0x794956: faddp   st(1), st
0x794958: fadd    dword ptr [esi+30h]
0x79495B: fstp    [esp+34h+var_18]
0x79495F: mov     edx, [esp+34h+var_18]
0x794963: fld     dword ptr [esi+4]
0x794966: fmul    st, st(3)
0x794968: fld     dword ptr [esi+14h]
0x79496B: fmul    st, st(3)
0x79496D: faddp   st(1), st
0x79496F: fld     dword ptr [esi+24h]
0x794972: fmul    st, st(2)
0x794974: faddp   st(1), st
0x794976: fadd    dword ptr [esi+34h]
0x794979: fstp    [esp+34h+var_14]
0x79497D: mov     ecx, [esp+34h+var_14]
0x794981: fld     dword ptr [esi+8]
0x794984: fmulp   st(3), st
0x794986: fld     dword ptr [esi+18h]
0x794989: fmulp   st(2), st
0x79498B: fxch    st(2)
0x79498D: faddp   st(1), st
0x79498F: fld     dword ptr [esi+28h]
0x794992: fmulp   st(2), st
0x794994: faddp   st(1), st
0x794996: fadd    dword ptr [esi+38h]
0x794999: mov     [eax], edx
0x79499B: mov     [eax+4], ecx
0x79499E: fstp    [esp+34h+var_10]
0x7949A2: mov     edx, [esp+34h+var_10]
0x7949A6: mov     [eax+8], edx
0x7949A9: cmp     byte ptr [edi+8], 0
0x7949AD: jz      loc_794A78
0x7949B3: mov     eax, [edi+7Ch]
0x7949B6: test    eax, eax
0x7949B8: jz      loc_794A78
0x7949BE: mov     ecx, [edi+80h]
0x7949C4: sub     ecx, eax
0x7949C6: sar     ecx, 2
0x7949C9: jz      loc_794A78
0x7949CF: test    eax, eax
0x7949D1: jz      short loc_7949E0
0x7949D3: mov     edx, [edi+80h]
0x7949D9: sub     edx, eax
0x7949DB: sar     edx, 2
0x7949DE: jnz     short loc_7949E5
0x7949E0: call    __invalid_parameter_noinfo
0x7949E5: mov     eax, [edi+7Ch]
0x7949E8: fld     dword ptr [eax+ebx]
0x7949EB: add     eax, ebx
0x7949ED: fstp    [esp+34h+var_24]
0x7949F1: fld     dword ptr [eax+4]
0x7949F4: fstp    [esp+34h+var_20]
0x7949F8: fld     dword ptr [eax+8]
0x7949FB: fstp    [esp+34h+var_1C]
0x7949FF: fld     dword ptr [esi+10h]
0x794A02: fld     [esp+34h+var_20]
0x794A06: fld     st
0x794A08: fmulp   st(2), st
0x794A0A: fld     dword ptr [esi]
0x794A0C: fld     [esp+34h+var_24]
0x794A10: fld     st
0x794A12: fmulp   st(2), st
0x794A14: fxch    st(3)
0x794A16: faddp   st(1), st
0x794A18: fld     dword ptr [esi+20h]
0x794A1B: fld     [esp+34h+var_1C]
0x794A1F: fld     st
0x794A21: fmulp   st(2), st
0x794A23: fxch    st(2)
0x794A25: faddp   st(1), st
0x794A27: fadd    dword ptr [esi+30h]
0x794A2A: fstp    [esp+34h+var_C]
0x794A2E: mov     ecx, [esp+34h+var_C]
0x794A32: fld     dword ptr [esi+4]
0x794A35: fmul    st, st(3)
0x794A37: fld     dword ptr [esi+14h]
0x794A3A: fmul    st, st(3)
0x794A3C: faddp   st(1), st
0x794A3E: fld     dword ptr [esi+24h]
0x794A41: fmul    st, st(2)
0x794A43: faddp   st(1), st
0x794A45: fadd    dword ptr [esi+34h]
0x794A48: fstp    [esp+34h+var_8]
0x794A4C: mov     edx, [esp+34h+var_8]
0x794A50: fld     dword ptr [esi+8]
0x794A53: fmulp   st(3), st
0x794A55: fld     dword ptr [esi+18h]
0x794A58: fmulp   st(2), st
0x794A5A: fxch    st(2)
0x794A5C: faddp   st(1), st
0x794A5E: fld     dword ptr [esi+28h]
0x794A61: fmulp   st(2), st
0x794A63: faddp   st(1), st
0x794A65: fadd    dword ptr [esi+38h]
0x794A68: mov     [eax], ecx
0x794A6A: mov     [eax+4], edx
0x794A6D: fstp    [esp+34h+var_4]
0x794A71: mov     ecx, [esp+34h+var_4]
0x794A75: mov     [eax+8], ecx
0x794A78: add     ebx, 0Ch
0x794A7B: sub     ebp, 1
0x794A7E: jnz     loc_794900
0x794A84: pop     esi
0x794A85: pop     ebp
0x794A86: pop     ebx
0x794A87: pop     edi
0x794A88: add     esp, 24h
0x794A8B: retn    4
