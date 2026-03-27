0x99DE57: push    14h
0x99DE59: push    offset stru_B00150
0x99DE5E: call    __SEH_prolog4
0x99DE63: xor     esi, esi
0x99DE65: mov     [ebp+var_1C], esi
0x99DE68: xor     eax, eax
0x99DE6A: mov     edi, [ebp+arg_10]
0x99DE6D: cmp     edi, esi
0x99DE6F: setnz   al
0x99DE72: cmp     eax, esi
0x99DE74: jnz     short loc_99DE91
0x99DE76: call    __errno
0x99DE7B: push    16h
0x99DE7D: pop     edi
0x99DE7E: mov     [eax], edi
0x99DE80: push    esi
0x99DE81: push    esi
0x99DE82: push    esi
0x99DE83: push    esi
0x99DE84: push    esi
0x99DE85: call    __invalid_parameter
0x99DE8A: add     esp, 14h
0x99DE8D: mov     eax, edi
0x99DE8F: jmp     short loc_99DEEA
0x99DE91: or      dword ptr [edi], 0FFFFFFFFh
0x99DE94: xor     eax, eax
0x99DE96: cmp     [ebp+lpFileName], esi
0x99DE99: setnz   al
0x99DE9C: cmp     eax, esi
0x99DE9E: jz      short loc_99DE76
0x99DEA0: cmp     [ebp+arg_14], esi
0x99DEA3: jz      short loc_99DEB4
0x99DEA5: mov     eax, [ebp+arg_C]
0x99DEA8: and     eax, 0FFFFFE7Fh
0x99DEAD: neg     eax
0x99DEAF: sbb     eax, eax
0x99DEB1: inc     eax
0x99DEB2: jz      short loc_99DE76
0x99DEB4: mov     [ebp+ms_exc.registration.TryLevel], esi
0x99DEB7: push    [ebp+arg_C]; int
0x99DEBA: push    [ebp+arg_8]; int
0x99DEBD: push    [ebp+arg_4]; int
0x99DEC0: push    [ebp+lpFileName]; lpFileName
0x99DEC3: lea     eax, [ebp+var_1C]
0x99DEC6: push    eax; int
0x99DEC7: mov     eax, edi
0x99DEC9: call    __tsopen_nolock
0x99DECE: add     esp, 14h
0x99DED1: mov     [ebp+var_20], eax
0x99DED4: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x99DEDB: call    loc_99DEF5
0x99DEE0: mov     eax, [ebp+var_20]
0x99DEE3: cmp     eax, esi
0x99DEE5: jz      short loc_99DEEA
0x99DEE7: or      dword ptr [edi], 0FFFFFFFFh
0x99DEEA: call    __SEH_epilog4
0x99DEEF: retn
0x99DEF0: xor     esi, esi
0x99DEF2: mov     edi, [ebp+arg_10]
0x99DEF5: cmp     [ebp+var_1C], esi
0x99DEF8: jz      short loc_99DF22
0x99DEFA: cmp     [ebp+var_20], esi
0x99DEFD: jz      short loc_99DF1A
0x99DEFF: mov     eax, [edi]
0x99DF01: mov     ecx, eax
0x99DF03: sar     ecx, 5
0x99DF06: and     eax, 1Fh
0x99DF09: imul    eax, 28h ; '('
0x99DF0C: mov     ecx, dword_BAAAC0[ecx*4]
0x99DF13: lea     eax, [ecx+eax+4]
0x99DF17: and     byte ptr [eax], 0FEh
0x99DF1A: push    dword ptr [edi]
0x99DF1C: call    __unlock_fhandle
0x99DF21: pop     ecx
0x99DF22: retn
