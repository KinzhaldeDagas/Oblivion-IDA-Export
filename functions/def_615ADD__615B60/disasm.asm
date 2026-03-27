0x615B60: fldz; jumptable 00615ADD default case
0x615B62: mov     eax, [esp+arg_38]
0x615B66: fcomp   dword ptr [ebp+20h]
0x615B69: mov     ecx, [esp+arg_3C]
0x615B6D: mov     edx, [esp+arg_40]
0x615B71: mov     [esp+arg_44], eax
0x615B75: xor     esi, esi
0x615B77: mov     [esp+arg_48], ecx
0x615B7B: fnstsw  ax
0x615B7D: mov     [esp+arg_4C], edx
0x615B81: test    ah, 44h
0x615B84: jp      loc_615C89
0x615B8A: test    ebx, ebx
0x615B8C: jle     loc_615DF5
0x615B92: fld     [esp+arg_44]
0x615B96: fsub    dword ptr [ebp+0Ch]
0x615B99: fstp    dword ptr [esp+arg_24]
0x615B9D: fld     [esp+arg_48]
0x615BA1: fsub    dword ptr [ebp+10h]
0x615BA4: fstp    dword ptr [esp+arg_24+4]
0x615BA8: fld     [esp+arg_4C]
0x615BAC: fsub    dword ptr [ebp+14h]
0x615BAF: fstp    [esp+arg_2C]
0x615BB3: fld     dword ptr [esp+arg_24+4]
0x615BB7: fld     dword ptr [esp+arg_24]
0x615BBB: fld     [esp+arg_2C]
0x615BBF: fld     st(2)
0x615BC1: fmulp   st(3), st
0x615BC3: fld     st(1)
0x615BC5: fmulp   st(2), st
0x615BC7: fxch    st(2)
0x615BC9: faddp   st(1), st
0x615BCB: fld     st(1)
0x615BCD: fmulp   st(2), st
0x615BCF: faddp   st(1), st
0x615BD1: fstp    [esp+arg_C]
0x615BD5: fld     [esp+arg_C]
0x615BD9: call    __CIsqrt
0x615BDE: fstp    [esp+arg_C]
0x615BE2: fld     [esp+arg_C]
0x615BE6: fstp    [esp+arg_C]
0x615BEA: fld1
0x615BEC: fld     [esp+arg_C]
0x615BF0: fcom    st(1)
0x615BF2: fnstsw  ax
0x615BF4: fstp    st(1)
0x615BF6: test    ah, 5
0x615BF9: jnp     loc_615DF3
0x615BFF: fld     dword ptr ds:0A6E730h
0x615C05: fcomp   st(1)
0x615C07: fnstsw  ax
0x615C09: test    ah, 5
0x615C0C: jnp     loc_615DF3
0x615C12: fdiv    dword ptr [ebp+1Ch]
0x615C15: add     esi, 1
0x615C18: cmp     esi, ebx
0x615C1A: fstp    [esp+arg_C]
0x615C1E: fld     [esp+arg_50]
0x615C22: fld     [esp+arg_C]
0x615C26: fld     st
0x615C28: fmulp   st(2), st
0x615C2A: fxch    st(1)
0x615C2C: fstp    dword ptr [esp+arg_14]
0x615C30: fld     [esp+arg_54]
0x615C34: fmul    st, st(1)
0x615C36: fstp    dword ptr [esp+arg_14+4]
0x615C3A: fmul    [esp+arg_58]
0x615C3E: fstp    [esp+arg_1C]
0x615C42: fld     dword ptr [esp+arg_14]
0x615C46: fadd    [esp+arg_38]
0x615C4A: fstp    [esp+arg_68]
0x615C4E: mov     eax, [esp+arg_68]
0x615C52: fld     [esp+arg_3C]
0x615C56: mov     [esp+arg_44], eax
0x615C5A: fadd    dword ptr [esp+arg_14+4]
0x615C5E: fstp    [esp+arg_6C]
0x615C62: mov     ecx, [esp+arg_6C]
0x615C66: fld     [esp+arg_1C]
0x615C6A: mov     [esp+arg_48], ecx
0x615C6E: fadd    [esp+arg_40]
0x615C72: fstp    [esp+arg_70]
0x615C76: mov     edx, [esp+arg_70]
0x615C7A: mov     [esp+arg_4C], edx
0x615C7E: jl      loc_615B92
0x615C84: jmp     loc_615DF5
0x615C89: test    ebx, ebx
0x615C8B: jle     loc_615DF5
0x615C91: fldz
0x615C93: fmul    st, st
0x615C95: fstp    [esp+arg_14]
0x615C99: fld     [esp+arg_44]
0x615C9D: fsub    dword ptr [ebp+0Ch]
0x615CA0: fstp    [esp+arg_68]
0x615CA4: fld     [esp+arg_48]
0x615CA8: fsub    dword ptr [ebp+10h]
0x615CAB: fstp    [esp+arg_6C]
0x615CAF: fld     [esp+arg_4C]
0x615CB3: fsub    dword ptr [ebp+14h]
0x615CB6: fstp    [esp+arg_70]
0x615CBA: fld     [esp+arg_6C]
0x615CBE: fld     [esp+arg_68]
0x615CC2: fmul    st, st
0x615CC4: fld     st(1)
0x615CC6: fmulp   st(2), st
0x615CC8: faddp   st(1), st
0x615CCA: fadd    [esp+arg_14]
0x615CCE: fstp    [esp+arg_C]
0x615CD2: fld     [esp+arg_C]
0x615CD6: call    __CIsqrt
0x615CDB: fstp    [esp+arg_C]
0x615CDF: fld     [esp+arg_C]
0x615CE3: fstp    [esp+arg_C]
0x615CE7: fld     dword ptr ds:0A6E730h
0x615CED: fld     [esp+arg_70]
0x615CF1: fcom    st(1)
0x615CF3: fnstsw  ax
0x615CF5: test    ah, 41h
0x615CF8: jz      loc_615DF1
0x615CFE: fld1
0x615D00: fld     [esp+arg_C]
0x615D04: fcom    st(1)
0x615D06: fnstsw  ax
0x615D08: fstp    st(1)
0x615D0A: test    ah, 5
0x615D0D: jnp     loc_615DEF
0x615D13: fcom    st(2)
0x615D15: fnstsw  ax
0x615D17: fstp    st(2)
0x615D19: test    ah, 41h
0x615D1C: jz      loc_615DF1
0x615D22: fld     dword ptr [ebp+20h]
0x615D25: sub     esp, 10h
0x615D28: fstp    [esp+10h+var_4]; float
0x615D2C: fld     dword ptr [ebp+1Ch]
0x615D2F: fstp    [esp+10h+var_8]; float
0x615D33: fstp    [esp+10h+var_C]; float
0x615D37: fstp    [esp+10h+var_10]; float
0x615D3A: call    sub_6132D0
0x615D3F: fstp    [esp+10h+arg_8]
0x615D43: add     esp, 10h
0x615D46: fld     [esp+arg_C]
0x615D4A: fstp    [esp+arg_24]
0x615D4E: fld     [esp+arg_8]
0x615D52: call    __CIcos
0x615D57: fstp    [esp+arg_C]
0x615D5B: fld     [esp+arg_C]
0x615D5F: add     esi, 1
0x615D62: cmp     esi, ebx
0x615D64: fmul    dword ptr [ebp+1Ch]
0x615D67: fdivr   [esp+arg_24]
0x615D6B: fstp    [esp+arg_C]
0x615D6F: fld     [esp+arg_50]
0x615D73: fld     [esp+arg_C]
0x615D77: fld     st
0x615D79: fmulp   st(2), st
0x615D7B: fxch    st(1)
0x615D7D: fstp    [esp+arg_74]
0x615D81: fld     [esp+arg_54]
0x615D85: fmul    st, st(1)
0x615D87: fstp    [esp+arg_78]
0x615D8B: fmul    [esp+arg_58]
0x615D8F: fstp    [esp+arg_7C]
0x615D96: fld     [esp+arg_74]
0x615D9A: fadd    [esp+arg_38]
0x615D9E: fstp    [esp+arg_80]
0x615DA5: mov     eax, [esp+arg_80]
0x615DAC: fld     [esp+arg_78]
0x615DB0: mov     [esp+arg_44], eax
0x615DB4: fadd    [esp+arg_3C]
0x615DB8: fstp    [esp+arg_84]
0x615DBF: mov     ecx, [esp+arg_84]
0x615DC6: fld     [esp+arg_7C]
0x615DCD: mov     [esp+arg_48], ecx
0x615DD1: fadd    [esp+arg_40]
0x615DD5: fstp    [esp+arg_88]
0x615DDC: mov     edx, [esp+arg_88]
0x615DE3: mov     [esp+arg_4C], edx
0x615DE7: jl      loc_615C99
0x615DED: jmp     short loc_615DF5
0x615DEF: fstp    st(1)
0x615DF1: fstp    st
0x615DF3: fstp    st
0x615DF5: fld     [esp+arg_44]
0x615DF9: fsub    dword ptr [ebp+0Ch]
0x615DFC: fstp    [esp+arg_5C]
0x615E00: fld     [esp+arg_48]
0x615E04: fsub    dword ptr [ebp+10h]
0x615E07: fstp    [esp+arg_60]
0x615E0B: fld     [esp+arg_4C]
0x615E0F: fsub    dword ptr [ebp+14h]
0x615E12: fstp    [esp+arg_64]
0x615E16: fldz
0x615E18: fcomp   dword ptr [ebp+20h]
0x615E1B: fnstsw  ax
0x615E1D: test    ah, 44h
0x615E20: jp      loc_615EAA
0x615E26: fld     [esp+arg_60]
0x615E2A: fld     [esp+arg_5C]
0x615E2E: fld     [esp+arg_64]
0x615E32: fld     st
0x615E34: fxch    st(1)
0x615E36: fstp    [esp+arg_24]
0x615E3A: fld     st(1)
0x615E3C: fmulp   st(2), st
0x615E3E: fld     st(2)
0x615E40: fmulp   st(3), st
0x615E42: fxch    st(1)
0x615E44: faddp   st(2), st
0x615E46: fmul    st, st
0x615E48: faddp   st(1), st
0x615E4A: fstp    [esp+arg_C]
0x615E4E: fld     [esp+arg_C]
0x615E52: call    __CIsqrt
0x615E57: fstp    [esp+arg_C]
0x615E5B: fld     [esp+arg_C]
0x615E5F: fdivr   [esp+arg_24]
0x615E63: fstp    [esp+arg_C]
0x615E67: fld     [esp+arg_C]
0x615E6B: fcom    qword ptr ds:0A3D360h
0x615E71: fnstsw  ax
0x615E73: test    ah, 41h
0x615E76: jnz     short loc_615E9C
0x615E78: fld1
0x615E7A: fcomp   st(1)
0x615E7C: fnstsw  ax
0x615E7E: test    ah, 41h
0x615E81: jnz     short loc_615E92
0x615E83: call    __CIasin
0x615E88: fstp    [esp+arg_C]
0x615E8C: fld     [esp+arg_C]
0x615E90: jmp     short loc_615EA6
0x615E92: fstp    st
0x615E94: fld     dword ptr ds:0B3F99Ch
0x615E9A: jmp     short loc_615EA6
0x615E9C: fstp    st
0x615E9E: fld     dword ptr ds:0B3F99Ch
0x615EA4: fchs
0x615EA6: fstp    [esp+arg_8]
0x615EAA: lea     ecx, [esp+arg_5C]
0x615EAE: call    sub_43F350
0x615EB3: fstp    st
0x615EB5: fld     [esp+arg_8]
0x615EB9: fchs
0x615EBB: fstp    [esp+arg_C]
0x615EBF: fld     [esp+arg_C]
0x615EC3: fcom    qword ptr ds:0A491E0h
0x615EC9: fnstsw  ax
0x615ECB: fld     qword ptr ds:0A3D5B0h
0x615ED1: test    ah, 41h
0x615ED4: jp      short loc_615EDE
0x615ED6: faddp   st(1), st
0x615ED8: fstp    [esp+arg_C]
0x615EDC: jmp     short loc_615EF9
0x615EDE: fxch    st(1)
0x615EE0: fcom    qword ptr ds:0A3D5B8h
0x615EE6: fnstsw  ax
0x615EE8: test    ah, 41h
0x615EEB: jnz     short loc_615EF5
0x615EED: fsubrp  st(1), st
0x615EEF: fstp    [esp+arg_C]
0x615EF3: jmp     short loc_615EF9
0x615EF5: fstp    st
0x615EF7: fstp    st
0x615EF9: lea     eax, [esp+arg_5C]
0x615EFD: push    eax
0x615EFE: call    sub_683CB0
0x615F03: fstp    [esp+4+arg_8]
0x615F07: fld     [esp+4+arg_8]
0x615F0B: add     esp, 4
0x615F0E: fcom    qword ptr ds:0A491E0h
0x615F14: fnstsw  ax
0x615F16: test    ah, 41h
0x615F19: jp      short loc_615F23
0x615F1B: fadd    qword ptr ds:0A3D5B0h
0x615F21: jmp     short loc_615F36
0x615F23: fcom    qword ptr ds:0A3D5B8h
0x615F29: fnstsw  ax
0x615F2B: test    ah, 41h
0x615F2E: jnz     short loc_615F3E
0x615F30: fsub    qword ptr ds:0A3D5B0h
0x615F36: fstp    [esp+arg_8]
0x615F3A: fld     [esp+arg_8]
0x615F3E: mov     eax, [ebp+8]
0x615F41: fld     [esp+arg_C]
0x615F45: fstp    dword ptr [eax]
0x615F47: pop     edi
0x615F48: fldz
0x615F4A: pop     esi
0x615F4B: fstp    dword ptr [eax+4]
0x615F4E: pop     ebx
0x615F4F: fstp    dword ptr [eax+8]
0x615F52: mov     esp, ebp
0x615F54: pop     ebp
0x615F55: retn
