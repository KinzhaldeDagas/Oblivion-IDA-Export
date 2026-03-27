0x4029E0: sub     esp, 0Ch
0x4029E3: push    esi
0x4029E4: mov     esi, ecx
0x4029E6: mov     eax, [esi+14h]
0x4029E9: fld     dword ptr [eax+24h]
0x4029EC: mov     ecx, [esi+0Ch]
0x4029EF: fmul    [esp+10h+arg_0]
0x4029F3: fdiv    ds:dbl_A2F938
0x4029F9: fadd    dword ptr [ecx+24h]
0x4029FC: fstp    [esp+10h+var_8]
0x402A00: fld     ds:flt_A2F930
0x402A06: fld     [esp+10h+var_8]
0x402A0A: fcom    st(1)
0x402A0C: fnstsw  ax
0x402A0E: fstp    st(1)
0x402A10: test    ah, 41h
0x402A13: jnz     loc_402B27
0x402A19: mov     edx, [esi+8]
0x402A1C: fstp    st
0x402A1E: fld     dword ptr [edx+24h]
0x402A21: mov     eax, [esi+4]
0x402A24: mov     ecx, [esi]
0x402A26: fstp    [esp+10h+var_C]
0x402A2A: fld     dword ptr [eax+24h]
0x402A2D: push    ebx
0x402A2E: fstp    [esp+14h+arg_0]
0x402A32: fld     dword ptr [ecx+24h]
0x402A35: fstp    [esp+14h+var_4]
0x402A39: fld     [esp+14h+arg_0]
0x402A3D: call    Double_To_SInt32
0x402A42: movsx   edx, al
0x402A45: push    edx
0x402A46: call    sub_47D2B0
0x402A4B: add     esp, 4
0x402A4E: fld1
0x402A50: movzx   ebx, ax
0x402A53: fld     [esp+14h+var_8]
0x402A57: fsub    ds:dbl_A2F920
0x402A5D: mov     ecx, TESDataHandler_g_PlayerRef
0x402A63: test    ecx, ecx
0x402A65: fstp    [esp+14h+var_8]
0x402A69: fld     [esp+14h+var_C]
0x402A6D: fadd    st, st(1)
0x402A6F: fstp    [esp+14h+var_C]
0x402A73: jz      short loc_402A8E
0x402A75: fstp    st
0x402A77: call    sub_5E04C0
0x402A7C: test    al, al
0x402A7E: fld1
0x402A80: jz      short loc_402A8E
0x402A82: mov     eax, TESDataHandler_g_PlayerRef
0x402A87: add     dword ptr [eax+6B0h], 1
0x402A8E: mov     eax, [esi+10h]
0x402A91: fld     dword ptr [eax+24h]
0x402A94: fadd    st, st(1)
0x402A96: fstp    dword ptr [eax+24h]
0x402A99: fld     ds:flt_A2F930
0x402A9F: fld     [esp+14h+var_8]
0x402AA3: fcom    st(1)
0x402AA5: fnstsw  ax
0x402AA7: fstp    st(1)
0x402AA9: test    ah, 41h
0x402AAC: jz      short loc_402A57
0x402AAE: movzx   eax, bx
0x402AB1: mov     [esp+14h+var_8], eax
0x402AB5: pop     ebx
0x402AB6: fild    [esp+10h+var_8]
0x402ABA: fld     [esp+10h+var_C]
0x402ABE: fcom    st(1)
0x402AC0: fnstsw  ax
0x402AC2: test    ah, 41h
0x402AC5: jnz     short loc_402B38
0x402AC7: fsubrp  st(1), st
0x402AC9: fstp    [esp+10h+var_C]
0x402ACD: fld     [esp+10h+arg_0]
0x402AD1: fadd    st, st(2)
0x402AD3: fstp    [esp+10h+arg_0]
0x402AD7: fld     ds:flt_A2F918
0x402ADD: fld     [esp+10h+arg_0]
0x402AE1: fcom    st(1)
0x402AE3: fnstsw  ax
0x402AE5: fstp    st(1)
0x402AE7: test    ah, 1
0x402AEA: jnz     short loc_402B34
0x402AEC: fsub    ds:dbl_A2F910
0x402AF2: mov     ecx, [esi]
0x402AF4: fstp    [esp+10h+arg_0]
0x402AF8: fld     [esp+10h+var_4]
0x402AFC: faddp   st(2), st
0x402AFE: fxch    st(1)
0x402B00: fstp    [esp+10h+var_4]
0x402B04: fld     [esp+10h+var_4]
0x402B08: fstp    dword ptr [ecx+24h]
0x402B0B: fld     [esp+10h+arg_0]
0x402B0F: fxch    st(1)
0x402B11: mov     edx, [esi+4]
0x402B14: fxch    st(1)
0x402B16: fstp    dword ptr [edx+24h]
0x402B19: fld     [esp+10h+var_C]
0x402B1D: fxch    st(1)
0x402B1F: mov     eax, [esi+8]
0x402B22: fxch    st(1)
0x402B24: fstp    dword ptr [eax+24h]
0x402B27: mov     ecx, [esi+0Ch]
0x402B2A: fstp    dword ptr [ecx+24h]
0x402B2D: pop     esi
0x402B2E: add     esp, 0Ch
0x402B31: retn    4
0x402B34: fstp    st(2)
0x402B36: jmp     short loc_402B11
0x402B38: fstp    st(3)
0x402B3A: fstp    st
0x402B3C: jmp     short loc_402B1F
