0x848E50: mov     ecx, [esp+arg_0]
0x848E54: sub     esp, 24h
0x848E57: test    ecx, ecx
0x848E59: jz      loc_848F93
0x848E5F: fld     dword ptr [ecx+2Ch]
0x848E62: fstp    [esp+24h+var_24]
0x848E65: fld     dword ptr [ecx+30h]
0x848E68: fstp    [esp+24h+arg_0]
0x848E6C: fldz
0x848E6E: fld     st
0x848E70: fld     [esp+24h+arg_0]
0x848E74: fucom   st(1)
0x848E76: fnstsw  ax
0x848E78: fstp    st(1)
0x848E7A: test    ah, 44h
0x848E7D: fld     [esp+24h+var_24]
0x848E80: jp      short loc_848F01
0x848E82: fld     st(2)
0x848E84: fucomp  st(1)
0x848E86: fnstsw  ax
0x848E88: test    ah, 44h
0x848E8B: jp      short loc_848F01
0x848E8D: fstp    st(1)
0x848E8F: fstp    st
0x848E91: fld     dword ptr ds:0A93350h
0x848E97: fstp    [esp+24h+var_20]
0x848E9B: mov     eax, [esp+24h+var_20]
0x848E9F: mov     ds:0B46638h, eax
0x848EA4: fst     [esp+24h+var_1C]
0x848EA8: mov     ecx, [esp+24h+var_1C]
0x848EAC: fst     [esp+24h+var_18]
0x848EB0: mov     edx, [esp+24h+var_18]
0x848EB4: mov     ds:0B4663Ch, ecx
0x848EBA: fstp    [esp+24h+var_14]
0x848EBE: mov     eax, [esp+24h+var_14]
0x848EC2: mov     ecx, ds:0B25AD0h
0x848EC8: mov     ds:0B46640h, edx
0x848ECE: mov     edx, ds:0B25AD4h
0x848ED4: mov     ds:0B46644h, eax
0x848ED9: mov     eax, ds:0B25AD8h
0x848EDE: mov     ds:0B46648h, ecx
0x848EE4: mov     ecx, ds:0B25ADCh
0x848EEA: mov     ds:0B4664Ch, edx
0x848EF0: mov     ds:0B46650h, eax
0x848EF5: mov     ds:0B46654h, ecx
0x848EFB: add     esp, 24h
0x848EFE: retn    4
0x848F01: mov     edx, [ecx+20h]
0x848F04: fxch    st(1)
0x848F06: mov     eax, [ecx+24h]
0x848F09: fst     [esp+24h+var_10]
0x848F0D: mov     ecx, [ecx+28h]
0x848F10: fsubrp  st(1), st
0x848F12: mov     [esp+24h+var_20], edx
0x848F16: mov     edx, [esp+24h+var_10]
0x848F1A: fstp    [esp+24h+var_C]
0x848F1E: mov     [esp+24h+var_1C], eax
0x848F22: mov     eax, [esp+24h+var_C]
0x848F26: fst     [esp+24h+var_8]
0x848F2A: mov     [esp+24h+var_18], ecx
0x848F2E: mov     ecx, [esp+24h+var_8]
0x848F32: fst     [esp+24h+var_4]
0x848F36: fld     [esp+24h+var_20]
0x848F3A: mov     ds:0B46638h, edx
0x848F40: mov     edx, [esp+24h+var_4]
0x848F44: fstp    [esp+24h+var_10]
0x848F48: fld     [esp+24h+var_1C]
0x848F4C: mov     ds:0B4663Ch, eax
0x848F51: mov     eax, [esp+24h+var_10]
0x848F55: fstp    [esp+24h+var_C]
0x848F59: fld     [esp+24h+var_18]
0x848F5D: mov     ds:0B46640h, ecx
0x848F63: mov     ecx, [esp+24h+var_C]
0x848F67: fstp    [esp+24h+var_8]
0x848F6B: mov     ds:0B46644h, edx
0x848F71: mov     edx, [esp+24h+var_8]
0x848F75: fstp    [esp+24h+var_4]
0x848F79: mov     ds:0B46648h, eax
0x848F7E: mov     eax, [esp+24h+var_4]
0x848F82: mov     ds:0B4664Ch, ecx
0x848F88: mov     ds:0B46650h, edx
0x848F8E: mov     ds:0B46654h, eax
0x848F93: add     esp, 24h
0x848F96: retn    4
