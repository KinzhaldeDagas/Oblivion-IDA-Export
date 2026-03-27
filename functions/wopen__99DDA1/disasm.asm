0x99DDA1: push    14h
0x99DDA3: push    offset stru_B00130
0x99DDA8: call    __SEH_prolog4
0x99DDAD: or      [ebp+var_1C], 0FFFFFFFFh
0x99DDB1: xor     esi, esi
0x99DDB3: mov     [ebp+var_20], esi
0x99DDB6: xor     eax, eax
0x99DDB8: cmp     [ebp+lpFileName], esi
0x99DDBB: setnz   al
0x99DDBE: cmp     eax, esi
0x99DDC0: jnz     short loc_99DDDF
0x99DDC2: call    __errno
0x99DDC7: mov     dword ptr [eax], 16h
0x99DDCD: push    esi
0x99DDCE: push    esi
0x99DDCF: push    esi
0x99DDD0: push    esi
0x99DDD1: push    esi
0x99DDD2: call    __invalid_parameter
0x99DDD7: add     esp, 14h
0x99DDDA: or      eax, 0FFFFFFFFh
0x99DDDD: jmp     short loc_99DE51
0x99DDDF: mov     [ebp+ms_exc.registration.TryLevel], esi
0x99DDE2: push    [ebp+arg_8]; int
0x99DDE5: push    40h ; '@'; int
0x99DDE7: push    [ebp+arg_4]; int
0x99DDEA: push    [ebp+lpFileName]; lpFileName
0x99DDED: lea     eax, [ebp+var_20]
0x99DDF0: push    eax; int
0x99DDF1: lea     eax, [ebp+var_1C]
0x99DDF4: call    __tsopen_nolock
0x99DDF9: add     esp, 14h
0x99DDFC: mov     [ebp+var_24], eax
0x99DDFF: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x99DE06: call    loc_99DE1D
0x99DE0B: mov     edi, [ebp+var_24]
0x99DE0E: cmp     edi, esi
0x99DE10: jz      short loc_99DE4E
0x99DE12: call    __errno
0x99DE17: mov     [eax], edi
0x99DE19: jmp     short loc_99DDDA
0x99DE1B: xor     esi, esi
0x99DE1D: cmp     [ebp+var_20], esi
0x99DE20: jz      short loc_99DE4D
0x99DE22: cmp     [ebp+var_24], esi
0x99DE25: jz      short loc_99DE44
0x99DE27: mov     eax, [ebp+var_1C]
0x99DE2A: sar     eax, 5
0x99DE2D: mov     ecx, [ebp+var_1C]
0x99DE30: and     ecx, 1Fh
0x99DE33: imul    ecx, 28h ; '('
0x99DE36: mov     eax, dword_BAAAC0[eax*4]
0x99DE3D: lea     eax, [eax+ecx+4]
0x99DE41: and     byte ptr [eax], 0FEh
0x99DE44: push    [ebp+var_1C]
0x99DE47: call    __unlock_fhandle
0x99DE4C: pop     ecx
0x99DE4D: retn
0x99DE4E: mov     eax, [ebp+var_1C]
0x99DE51: call    __SEH_epilog4
0x99DE56: retn
