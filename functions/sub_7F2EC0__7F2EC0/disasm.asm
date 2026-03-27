0x7F2EC0: sub     esp, 8
0x7F2EC3: push    ebx
0x7F2EC4: push    ebp
0x7F2EC5: push    esi
0x7F2EC6: push    edi
0x7F2EC7: mov     esi, ecx
0x7F2EC9: call    sub_7F3760
0x7F2ECE: fldz
0x7F2ED0: mov     edx, [esi+14Ch]
0x7F2ED6: fst     dword ptr [esi+7Ch]
0x7F2ED9: mov     ecx, [esi+134h]
0x7F2EDF: imul    ecx, edx
0x7F2EE2: xor     ebx, ebx
0x7F2EE4: cmp     eax, ecx
0x7F2EE6: mov     [esi+180h], bl
0x7F2EEC: mov     [esp+18h+var_4], edx
0x7F2EF0: jge     short loc_7F2F3B
0x7F2EF2: fstp    st
0x7F2EF4: sub     ecx, eax
0x7F2EF6: mov     [esp+18h+var_8], ecx
0x7F2EFA: fild    [esp+18h+var_8]
0x7F2EFE: sub     esp, 8
0x7F2F01: fidiv   [esp+20h+var_4]
0x7F2F05: fstp    [esp+20h+var_4]
0x7F2F09: fld     [esp+20h+var_4]
0x7F2F0D: fstp    [esp+20h+var_20]; double
0x7F2F10: call    _ceil
0x7F2F15: fstp    [esp+20h+var_4]
0x7F2F19: fld     [esp+20h+var_4]
0x7F2F1D: add     esp, 8
0x7F2F20: fstp    [esp+18h+var_4]
0x7F2F24: fild    dword ptr [esi+134h]
0x7F2F2A: fsub    [esp+18h+var_4]
0x7F2F2E: call    Double_To_SInt32
0x7F2F33: fldz
0x7F2F35: mov     [esi+134h], eax
0x7F2F3B: mov     eax, [esi+14Ch]
0x7F2F41: cmp     eax, 4
0x7F2F44: mov     ecx, 4
0x7F2F49: jg      short loc_7F2F4D
0x7F2F4B: mov     ecx, eax
0x7F2F4D: mov     edi, [esi+134h]
0x7F2F53: mov     [esi+80h], ecx
0x7F2F59: mov     ecx, edi
0x7F2F5B: imul    ecx, eax
0x7F2F5E: mov     [esp+18h+var_4], ecx
0x7F2F62: fild    [esp+18h+var_4]
0x7F2F66: call    Double_To_SInt32
0x7F2F6B: xor     ebp, ebp
0x7F2F6D: cmp     edi, ebx
0x7F2F6F: mov     [esi+8Ch], eax
0x7F2F75: jle     loc_7F306D
0x7F2F7B: xor     edi, edi
0x7F2F7D: cmp     [esi+183h], bl
0x7F2F83: jz      short loc_7F2F9E
0x7F2F85: mov     edx, [esi+6Ch]
0x7F2F88: fst     dword ptr [edi+edx]
0x7F2F8B: mov     eax, [esi+6Ch]
0x7F2F8E: fst     dword ptr [eax+edi+4]
0x7F2F92: mov     ecx, [esi+6Ch]
0x7F2F95: fst     dword ptr [ecx+edi+8]
0x7F2F99: jmp     loc_7F305B
0x7F2F9E: fstp    st
0x7F2FA0: call    _rand
0x7F2FA5: mov     [esp+18h+var_4], eax
0x7F2FA9: fild    [esp+18h+var_4]
0x7F2FAD: mov     edx, [esi+6Ch]
0x7F2FB0: fdiv    qword ptr ds:0A3D5A8h
0x7F2FB6: fstp    [esp+18h+var_4]
0x7F2FBA: fld     [esp+18h+var_4]
0x7F2FBE: fmul    dword ptr [esi+13Ch]
0x7F2FC4: fld     dword ptr [esi+13Ch]
0x7F2FCA: fmul    qword ptr ds:0A2FAA0h
0x7F2FD0: fsubp   st(1), st
0x7F2FD2: fstp    [esp+18h+var_4]
0x7F2FD6: fld     [esp+18h+var_4]
0x7F2FDA: fstp    dword ptr [edi+edx]
0x7F2FDD: call    _rand
0x7F2FE2: mov     [esp+18h+var_4], eax
0x7F2FE6: fild    [esp+18h+var_4]
0x7F2FEA: mov     eax, [esi+6Ch]
0x7F2FED: fdiv    qword ptr ds:0A3D5A8h
0x7F2FF3: fstp    [esp+18h+var_4]
0x7F2FF7: fld     [esp+18h+var_4]
0x7F2FFB: fmul    dword ptr [esi+13Ch]
0x7F3001: fld     dword ptr [esi+13Ch]
0x7F3007: fmul    qword ptr ds:0A2FAA0h
0x7F300D: fsubp   st(1), st
0x7F300F: fstp    [esp+18h+var_4]
0x7F3013: fld     [esp+18h+var_4]
0x7F3017: fstp    dword ptr [eax+edi+4]
0x7F301B: call    _rand
0x7F3020: mov     [esp+18h+var_4], eax
0x7F3024: fild    [esp+18h+var_4]
0x7F3028: mov     ecx, [esi+6Ch]
0x7F302B: fdiv    qword ptr ds:0A3D5A8h
0x7F3031: fstp    [esp+18h+var_4]
0x7F3035: fld     [esp+18h+var_4]
0x7F3039: fmul    dword ptr [esi+13Ch]
0x7F303F: fld     dword ptr [esi+13Ch]
0x7F3045: fmul    qword ptr ds:0A2FAA0h
0x7F304B: fsubp   st(1), st
0x7F304D: fstp    [esp+18h+var_4]
0x7F3051: fld     [esp+18h+var_4]
0x7F3055: fstp    dword ptr [ecx+edi+8]
0x7F3059: fldz
0x7F305B: add     ebp, 1
0x7F305E: add     edi, 10h
0x7F3061: cmp     ebp, [esi+134h]
0x7F3067: jl      loc_7F2F7D
0x7F306D: pop     edi
0x7F306E: fstp    st
0x7F3070: mov     [esi+88h], ebx
0x7F3076: mov     [esi+84h], ebx
0x7F307C: pop     esi
0x7F307D: pop     ebp
0x7F307E: pop     ebx
0x7F307F: add     esp, 8
0x7F3082: retn
