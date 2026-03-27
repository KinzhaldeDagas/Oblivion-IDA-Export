0x984A1E: push    0Ch
0x984A20: push    offset stru_AFFA58
0x984A25: call    __SEH_prolog4
0x984A2A: xor     eax, eax
0x984A2C: xor     esi, esi
0x984A2E: cmp     [ebp+File], esi
0x984A31: setnz   al
0x984A34: cmp     eax, esi
0x984A36: jnz     short loc_984A55
0x984A38: call    __errno
0x984A3D: mov     dword ptr [eax], 16h
0x984A43: push    esi
0x984A44: push    esi
0x984A45: push    esi
0x984A46: push    esi
0x984A47: push    esi
0x984A48: call    __invalid_parameter
0x984A4D: add     esp, 14h
0x984A50: or      eax, 0FFFFFFFFh
0x984A53: jmp     short loc_984A7C
0x984A55: push    [ebp+File]
0x984A58: call    __lock_file
0x984A5D: pop     ecx
0x984A5E: mov     [ebp+ms_exc.registration.TryLevel], esi
0x984A61: push    [ebp+File]; File
0x984A64: call    __ftell_nolock
0x984A69: pop     ecx
0x984A6A: mov     [ebp+var_1C], eax
0x984A6D: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x984A74: call    _ftell___$LN8_2
