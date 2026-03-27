0x99DF41: push    ebp
0x99DF42: mov     ebp, esp
0x99DF44: sub     esp, 28h
0x99DF47: mov     eax, ___security_cookie
0x99DF4C: xor     eax, ebp
0x99DF4E: mov     [ebp+var_4], eax
0x99DF51: push    ebx
0x99DF52: push    esi
0x99DF53: mov     esi, [ebp+arg_0]
0x99DF56: push    edi
0x99DF57: push    [ebp+arg_8]; struct localeinfo_struct *
0x99DF5A: mov     edi, [ebp+arg_4]
0x99DF5D: lea     ecx, [ebp+var_24]; this
0x99DF60: call    ??0_LocaleUpdate@@QAE@PAUlocaleinfo_struct@@@Z; _LocaleUpdate::_LocaleUpdate(localeinfo_struct *)
0x99DF65: lea     eax, [ebp+var_24]
0x99DF68: push    eax
0x99DF69: xor     ebx, ebx
0x99DF6B: push    ebx
0x99DF6C: push    ebx
0x99DF6D: push    ebx
0x99DF6E: push    ebx
0x99DF6F: push    edi
0x99DF70: lea     eax, [ebp+var_28]
0x99DF73: push    eax
0x99DF74: lea     eax, [ebp+var_10]
0x99DF77: push    eax
0x99DF78: call    ___strgtold12_l
0x99DF7D: mov     [ebp+var_14], eax
0x99DF80: lea     eax, [ebp+var_10]
0x99DF83: push    esi
0x99DF84: push    eax
0x99DF85: call    sub_99F12B
0x99DF8A: add     esp, 28h
0x99DF8D: test    byte ptr [ebp+var_14], 3
0x99DF91: jnz     short loc_99DFBE
0x99DF93: cmp     eax, 1
0x99DF96: jnz     short loc_99DFA9
0x99DF98: cmp     [ebp+var_18], bl
0x99DF9B: jz      short loc_99DFA4
0x99DF9D: mov     eax, [ebp+var_1C]
0x99DFA0: and     dword ptr [eax+70h], 0FFFFFFFDh
0x99DFA4: push    3
0x99DFA6: pop     eax
0x99DFA7: jmp     short loc_99DFD8
0x99DFA9: cmp     eax, 2
0x99DFAC: jnz     short loc_99DFCA
0x99DFAE: cmp     [ebp+var_18], bl
0x99DFB1: jz      short loc_99DFBA
0x99DFB3: mov     eax, [ebp+var_1C]
0x99DFB6: and     dword ptr [eax+70h], 0FFFFFFFDh
0x99DFBA: push    4
0x99DFBC: jmp     short loc_99DFA6
0x99DFBE: test    byte ptr [ebp+var_14], 1
0x99DFC2: jnz     short loc_99DFAE
0x99DFC4: test    byte ptr [ebp+var_14], 2
0x99DFC8: jnz     short loc_99DF98
0x99DFCA: cmp     [ebp+var_18], bl
0x99DFCD: jz      short loc_99DFD6
0x99DFCF: mov     eax, [ebp+var_1C]
0x99DFD2: and     dword ptr [eax+70h], 0FFFFFFFDh
0x99DFD6: xor     eax, eax
0x99DFD8: mov     ecx, [ebp+var_4]
0x99DFDB: pop     edi
0x99DFDC: pop     esi
0x99DFDD: xor     ecx, ebp
0x99DFDF: pop     ebx
0x99DFE0: call    @__security_check_cookie@4; __security_check_cookie(x)
0x99DFE5: leave
0x99DFE6: retn
