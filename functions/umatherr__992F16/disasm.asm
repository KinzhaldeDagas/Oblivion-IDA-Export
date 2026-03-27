0x992F16: push    ebp
0x992F17: mov     ebp, esp
0x992F19: sub     esp, 20h
0x992F1C: xor     eax, eax
0x992F1E: mov     ecx, dword_B31B68[eax*8]
0x992F25: cmp     ecx, [ebp+arg_4]
0x992F28: jz      short loc_992F8E
0x992F2A: inc     eax
0x992F2B: cmp     eax, 1Dh
0x992F2E: jl      short loc_992F1E
0x992F30: xor     eax, eax
0x992F32: test    eax, eax
0x992F34: mov     [ebp+var_1C], eax
0x992F37: jz      short loc_992F97
0x992F39: mov     eax, [ebp+arg_8]
0x992F3C: mov     [ebp+var_18], eax
0x992F3F: mov     eax, [ebp+arg_C]
0x992F42: mov     [ebp+var_14], eax
0x992F45: mov     eax, [ebp+arg_10]
0x992F48: mov     [ebp+var_10], eax
0x992F4B: mov     eax, [ebp+arg_14]
0x992F4E: push    esi
0x992F4F: mov     esi, [ebp+arg_0]
0x992F52: mov     [ebp+var_C], eax
0x992F55: mov     eax, dword ptr [ebp+arg_18]
0x992F58: mov     dword ptr [ebp+var_8], eax
0x992F5B: mov     eax, dword ptr [ebp+arg_18+4]
0x992F5E: push    0FFFFh
0x992F63: push    [ebp+arg_20]
0x992F66: mov     [ebp+var_20], esi
0x992F69: mov     dword ptr [ebp+var_8+4], eax
0x992F6C: call    __ctrlfp
0x992F71: lea     eax, [ebp+var_20]
0x992F74: push    eax
0x992F75: call    sub_98A318
0x992F7A: add     esp, 0Ch
0x992F7D: test    eax, eax
0x992F7F: jnz     short loc_992F88
0x992F81: push    esi
0x992F82: call    unknown_libname_166
0x992F87: pop     ecx
0x992F88: fld     [ebp+var_8]
0x992F8B: pop     esi
0x992F8C: leave
0x992F8D: retn
0x992F8E: mov     eax, off_B31B6C[eax*8]
0x992F95: jmp     short loc_992F32
0x992F97: push    0FFFFh
0x992F9C: push    [ebp+arg_20]
0x992F9F: call    __ctrlfp
0x992FA4: push    [ebp+arg_0]
0x992FA7: call    unknown_libname_166
0x992FAC: fld     [ebp+arg_18]
0x992FAF: add     esp, 0Ch
0x992FB2: leave
0x992FB3: retn
