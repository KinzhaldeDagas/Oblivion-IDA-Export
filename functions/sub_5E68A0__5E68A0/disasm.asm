0x5E68A0: sub     esp, 0Ch
0x5E68A3: push    esi
0x5E68A4: mov     esi, ecx
0x5E68A6: mov     ecx, [esi+58h]
0x5E68A9: test    ecx, ecx
0x5E68AB: jz      short loc_5E68BD
0x5E68AD: mov     eax, [ecx]
0x5E68AF: mov     edx, [eax+8]
0x5E68B2: call    edx
0x5E68B4: test    eax, eax
0x5E68B6: jnz     short loc_5E68BD
0x5E68B8: cmp     [esi+58h], eax
0x5E68BB: jnz     short loc_5E68C6
0x5E68BD: fldz
0x5E68BF: pop     esi
0x5E68C0: add     esp, 0Ch
0x5E68C3: retn    4
0x5E68C6: mov     eax, [esi]
0x5E68C8: mov     edx, [eax+174h]
0x5E68CE: push    ebx
0x5E68CF: push    edi
0x5E68D0: mov     ecx, esi
0x5E68D2: call    edx
0x5E68D4: mov     edi, [esp+14h+arg_4]
0x5E68D8: mov     ebx, eax
0x5E68DA: mov     eax, [edi]
0x5E68DC: mov     edx, [eax+174h]
0x5E68E2: mov     ecx, edi
0x5E68E4: call    edx
0x5E68E6: fld     dword ptr [eax]
0x5E68E8: fsub    dword ptr [ebx]
0x5E68EA: fstp    [esp+14h+var_8]
0x5E68EE: fld     dword ptr [eax+4]
0x5E68F1: fsub    dword ptr [ebx+4]
0x5E68F4: fstp    [esp+14h+var_4]
0x5E68F8: fld     dword ptr [eax+8]
0x5E68FB: fsub    dword ptr [ebx+8]
0x5E68FE: fstp    dword ptr [esp+14h]
0x5E6902: fld     [esp+14h+var_4]
0x5E6906: fld     [esp+14h+var_8]
0x5E690A: fld     dword ptr [esp+14h]
0x5E690E: fld     st(1)
0x5E6910: fmulp   st(2), st
0x5E6912: fld     st(2)
0x5E6914: fmulp   st(3), st
0x5E6916: fxch    st(1)
0x5E6918: faddp   st(2), st
0x5E691A: fmul    st, st
0x5E691C: faddp   st(1), st
0x5E691E: fstp    [esp+14h+arg_4]
0x5E6922: fld     [esp+14h+arg_4]
0x5E6926: call    __CIsqrt
0x5E692B: fstp    [esp+14h+arg_4]
0x5E692F: cmp     edi, ds:0B333C4h
0x5E6935: fld     [esp+14h+arg_4]
0x5E6939: fstp    [esp+14h+arg_4]
0x5E693D: jz      short loc_5E6964
0x5E693F: fld     [esp+14h+arg_4]
0x5E6943: fld     dword ptr ds:0B36AC8h
0x5E6949: fcom    st(1)
0x5E694B: fnstsw  ax
0x5E694D: test    ah, 41h
0x5E6950: jnz     short loc_5E6956
0x5E6952: fdivp   st(1), st
0x5E6954: jmp     short loc_5E6974
0x5E6956: fld     qword ptr ds:0A2FC70h
0x5E695C: fld     st
0x5E695E: fsubrp  st(3), st
0x5E6960: fsubrp  st(1), st
0x5E6962: jmp     short loc_5E6972
0x5E6964: fld     [esp+14h+arg_4]
0x5E6968: fld     qword ptr ds:0A2FC70h
0x5E696E: fld     st
0x5E6970: fsubrp  st(2), st
0x5E6972: fdivp   st(1), st
0x5E6974: mov     ecx, [esi+58h]
0x5E6977: fstp    [esp+14h+arg_4]
0x5E697B: mov     eax, [ecx]
0x5E697D: mov     edx, [eax+4CCh]
0x5E6983: call    edx
0x5E6985: cmp     edi, eax
0x5E6987: jnz     short loc_5E699D
0x5E6989: fld     dword ptr [esi+0DCh]
0x5E698F: fadd    qword ptr ds:0A2F928h
0x5E6995: fmul    [esp+14h+arg_4]
0x5E6999: fstp    [esp+14h+arg_4]
0x5E699D: cmp     edi, ds:0B333C4h
0x5E69A3: jnz     short loc_5E69AF
0x5E69A5: fld     [esp+14h+arg_4]
0x5E69A9: fadd    st, st
0x5E69AB: fstp    [esp+14h+arg_4]
0x5E69AF: mov     eax, [edi]
0x5E69B1: mov     edx, [eax+198h]
0x5E69B7: push    0
0x5E69B9: mov     ecx, edi
0x5E69BB: call    edx
0x5E69BD: test    al, al
0x5E69BF: pop     edi
0x5E69C0: pop     ebx
0x5E69C1: jz      short loc_5E69D1
0x5E69C3: fld     [esp+10h+arg_0]
0x5E69C7: fmul    qword ptr ds:0A2FAA0h
0x5E69CD: fstp    [esp+10h+arg_0]
0x5E69D1: fld     [esp+10h+arg_0]
0x5E69D5: pop     esi
0x5E69D6: add     esp, 0Ch
0x5E69D9: retn    4
