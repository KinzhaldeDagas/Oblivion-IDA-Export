0x546E10: sub     esp, 8
0x546E13: push    ebx
0x546E14: push    esi
0x546E15: mov     esi, [esp+10h+arg_0]
0x546E19: push    edi
0x546E1A: xor     edi, edi
0x546E1C: cmp     byte ptr [esp+14h+arg_8], 0
0x546E21: mov     ecx, esi
0x546E23: jz      short loc_546E2C
0x546E25: call    sub_4A9E30
0x546E2A: jmp     short loc_546E31
0x546E2C: call    sub_4A9E70
0x546E31: push    0; Seed
0x546E33: fstp    [esp+18h+arg_8]
0x546E37: call    GetRandomLargeInteger?
0x546E3C: cdq
0x546E3D: mov     ecx, 5
0x546E42: idiv    ecx
0x546E44: mov     bl, byte ptr [esp+18h+arg_4]
0x546E48: add     esp, 4
0x546E4B: mov     ecx, esi
0x546E4D: add     edx, 1
0x546E50: test    bl, bl
0x546E52: mov     dword ptr [esp+14h+var_8], edx
0x546E56: fild    dword ptr [esp+14h+var_8]
0x546E5A: fld     [esp+14h+arg_8]
0x546E5E: fmul    dword ptr ds:0B36D88h
0x546E64: fmulp   st(1), st
0x546E66: fstp    [esp+14h+arg_8]
0x546E6A: jz      short loc_546E73
0x546E6C: call    sub_4A9EB0
0x546E71: jmp     short loc_546E78
0x546E73: call    sub_4A9EF0
0x546E78: push    0; Seed
0x546E7A: fstp    [esp+18h+arg_4]
0x546E7E: call    GetRandomLargeInteger?
0x546E83: cdq
0x546E84: mov     ecx, 5
0x546E89: idiv    ecx
0x546E8B: add     esp, 4
0x546E8E: add     edx, 1
0x546E91: test    bl, bl
0x546E93: mov     dword ptr [esp+14h+var_8], edx
0x546E97: fild    dword ptr [esp+14h+var_8]
0x546E9B: fld     [esp+14h+arg_4]
0x546E9F: fmul    dword ptr ds:0B36D88h
0x546EA5: fmulp   st(1), st
0x546EA7: fstp    [esp+14h+arg_4]
0x546EAB: jz      short loc_546ECC
0x546EAD: cmp     [esp+14h+arg_18], 0
0x546EB2: jz      short loc_546ECC
0x546EB4: fld     dword ptr ds:0B36D98h
0x546EBA: fld     st
0x546EBC: fmul    [esp+14h+arg_8]
0x546EC0: fstp    [esp+14h+arg_8]
0x546EC4: fmul    [esp+14h+arg_4]
0x546EC8: fstp    [esp+14h+arg_4]
0x546ECC: mov     bl, byte ptr [esp+14h+arg_1C]
0x546ED0: fldz
0x546ED2: test    bl, 2
0x546ED5: jz      short loc_546EDB
0x546ED7: fst     [esp+14h+arg_8]
0x546EDB: test    bl, 1
0x546EDE: jz      short loc_546EE6
0x546EE0: fstp    [esp+14h+arg_4]
0x546EE4: jmp     short loc_546EE8
0x546EE6: fstp    st
0x546EE8: cmp     byte ptr [esp+14h+arg_14], 0
0x546EED: jz      short loc_546EF7
0x546EEF: fld     dword ptr ds:0B36D80h
0x546EF5: jmp     short loc_546EF9
0x546EF7: fld1
0x546EF9: push    0; Seed
0x546EFB: fstp    [esp+18h+arg_14]
0x546EFF: call    GetRandomLargeInteger?
0x546F04: cdq
0x546F05: mov     ecx, 5
0x546F0A: idiv    ecx
0x546F0C: add     esp, 4
0x546F0F: add     edx, 1
0x546F12: mov     [esp+14h+arg_1C], edx
0x546F16: fild    [esp+14h+arg_1C]
0x546F1A: fld     [esp+14h+arg_14]
0x546F1E: fmul    dword ptr ds:0B36D88h
0x546F24: fmulp   st(1), st
0x546F26: fstp    [esp+14h+arg_14]
0x546F2A: fld     [esp+14h+arg_8]
0x546F2E: fld     [esp+14h+arg_4]
0x546F32: fcom    st(1)
0x546F34: fnstsw  ax
0x546F36: fld     [esp+14h+arg_14]
0x546F3A: test    ah, 41h
0x546F3D: jp      short loc_546F47
0x546F3F: fcom    st(2)
0x546F41: fnstsw  ax
0x546F43: test    cl, ah
0x546F45: jnp     short loc_546F76
0x546F47: fld     [esp+14h+arg_C]
0x546F4B: fld     [esp+14h+arg_10]
0x546F4F: fld     qword ptr ds:0A2FAA0h
0x546F55: fmul    st, st(1)
0x546F57: fcomp   st(2)
0x546F59: fnstsw  ax
0x546F5B: test    ah, 41h
0x546F5E: jnz     short loc_546F88
0x546F60: fstp    st(4)
0x546F62: pop     edi
0x546F63: fstp    st(2)
0x546F65: pop     esi
0x546F66: fstp    st(1)
0x546F68: mov     eax, 2
0x546F6D: fstp    st(1)
0x546F6F: pop     ebx
0x546F70: fstp    st
0x546F72: add     esp, 8
0x546F75: retn
0x546F76: fstp    st(2)
0x546F78: pop     edi
0x546F79: fstp    st
0x546F7B: pop     esi
0x546F7C: fstp    st
0x546F7E: mov     eax, 2
0x546F83: pop     ebx
0x546F84: add     esp, 8
0x546F87: retn
0x546F88: fxch    st(4)
0x546F8A: fcomp   st(3)
0x546F8C: fnstsw  ax
0x546F8E: test    ah, 5
0x546F91: jp      short loc_546FBB
0x546F93: fxch    st(2)
0x546F95: fcompp
0x546F97: fnstsw  ax
0x546F99: test    ah, 41h
0x546F9C: jnz     short loc_546FC3
0x546F9E: fxch    st(1)
0x546FA0: fmul    qword ptr ds:0A563D0h
0x546FA6: fcompp
0x546FA8: fnstsw  ax
0x546FAA: test    ah, 5
0x546FAD: jp      short loc_546FC7
0x546FAF: pop     edi
0x546FB0: pop     esi
0x546FB1: mov     eax, 1
0x546FB6: pop     ebx
0x546FB7: add     esp, 8
0x546FBA: retn
0x546FBB: fstp    st(2)
0x546FBD: fstp    st(1)
0x546FBF: fstp    st(1)
0x546FC1: jmp     short loc_546FC5
0x546FC3: fstp    st
0x546FC5: fstp    st
0x546FC7: push    0; Seed
0x546FC9: call    GetRandomLargeInteger?
0x546FCE: cdq
0x546FCF: mov     ecx, 64h ; 'd'
0x546FD4: idiv    ecx
0x546FD6: add     esp, 4
0x546FD9: mov     ecx, esi
0x546FDB: mov     [esp+14h+arg_8], edx
0x546FDF: fild    [esp+14h+arg_8]
0x546FE3: mov     edx, [esi]
0x546FE5: mov     eax, [edx+0E4h]
0x546FEB: fstp    [esp+14h+arg_8]
0x546FEF: fld     [esp+14h+arg_8]
0x546FF3: fstp    [esp+14h+var_8]
0x546FF7: call    eax
0x546FF9: movsx   ecx, al
0x546FFC: mov     [esp+14h+arg_8], ecx
0x547000: fild    [esp+14h+arg_8]
0x547004: fcomp   [esp+14h+var_8]
0x547008: fnstsw  ax
0x54700A: test    ah, 1
0x54700D: jnz     short loc_547058
0x54700F: push    0; Seed
0x547011: call    GetRandomLargeInteger?
0x547016: cdq
0x547017: mov     ecx, 64h ; 'd'
0x54701C: idiv    ecx
0x54701E: add     esp, 4
0x547021: mov     [esp+14h+arg_8], edx
0x547025: fild    [esp+14h+arg_8]
0x547029: fcomp   dword ptr ds:0A58590h
0x54702F: fnstsw  ax
0x547031: test    ah, 41h
0x547034: jp      short loc_547047
0x547036: test    bl, 4
0x547039: jnz     short loc_547058
0x54703B: pop     edi
0x54703C: pop     esi
0x54703D: mov     eax, 4
0x547042: pop     ebx
0x547043: add     esp, 8
0x547046: retn
0x547047: test    bl, 8
0x54704A: jnz     short loc_547058
0x54704C: pop     edi
0x54704D: pop     esi
0x54704E: mov     eax, 8
0x547053: pop     ebx
0x547054: add     esp, 8
0x547057: retn
0x547058: mov     ax, di
0x54705B: pop     edi
0x54705C: pop     esi
0x54705D: pop     ebx
0x54705E: add     esp, 8
0x547061: retn
