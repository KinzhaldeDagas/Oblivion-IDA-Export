0x9F1C00: push    0FFFFFFFFh
0x9F1C02: push    offset SEH_9F1C00
0x9F1C07: mov     eax, large fs:0
0x9F1C0D: push    eax
0x9F1C0E: push    ecx
0x9F1C0F: push    esi
0x9F1C10: mov     eax, ___security_cookie
0x9F1C15: xor     eax, esp
0x9F1C17: push    eax
0x9F1C18: lea     eax, [esp+18h+var_C]
0x9F1C1C: mov     large fs:0, eax
0x9F1C22: push    8; Size
0x9F1C24: call    FormHeapAlloc
0x9F1C29: add     esp, 4
0x9F1C2C: mov     [esp+18h+var_10], eax
0x9F1C30: test    eax, eax
0x9F1C32: mov     [esp+18h+var_4], 0
0x9F1C3A: jz      short loc_9F1C54
0x9F1C3C: fld     ds:flt_A468FC
0x9F1C42: push    ecx
0x9F1C43: fstp    [esp+1Ch+var_1C]; float
0x9F1C46: push    offset aFenchantpettyl
0x9F1C4B: mov     ecx, eax
0x9F1C4D: call    GameSetting_ConstrAndReg_float
0x9F1C52: jmp     short loc_9F1C56
0x9F1C54: xor     eax, eax
0x9F1C56: or      esi, 0FFFFFFFFh
0x9F1C59: push    8; Size
0x9F1C5B: mov     [esp+1Ch+var_4], esi
0x9F1C5F: mov     dword_B39534, eax
0x9F1C64: call    FormHeapAlloc
0x9F1C69: add     esp, 4
0x9F1C6C: mov     [esp+18h+var_10], eax
0x9F1C70: test    eax, eax
0x9F1C72: mov     [esp+18h+var_4], 1
0x9F1C7A: jz      short loc_9F1C94
0x9F1C7C: fld     ds:flt_A379CC
0x9F1C82: push    ecx
0x9F1C83: fstp    [esp+1Ch+var_1C]; float
0x9F1C86: push    offset aFenchantlesser
0x9F1C8B: mov     ecx, eax
0x9F1C8D: call    GameSetting_ConstrAndReg_float
0x9F1C92: jmp     short loc_9F1C96
0x9F1C94: xor     eax, eax
0x9F1C96: push    8; Size
0x9F1C98: mov     [esp+1Ch+var_4], esi
0x9F1C9C: mov     dword_B39538, eax
0x9F1CA1: call    FormHeapAlloc
0x9F1CA6: add     esp, 4
0x9F1CA9: mov     [esp+18h+var_10], eax
0x9F1CAD: test    eax, eax
0x9F1CAF: mov     [esp+18h+var_4], 2
0x9F1CB7: jz      short loc_9F1CD1
0x9F1CB9: fld     ds:flt_A56F84
0x9F1CBF: push    ecx
0x9F1CC0: fstp    [esp+1Ch+var_1C]; float
0x9F1CC3: push    offset aFenchantcommon
0x9F1CC8: mov     ecx, eax
0x9F1CCA: call    GameSetting_ConstrAndReg_float
0x9F1CCF: jmp     short loc_9F1CD3
0x9F1CD1: xor     eax, eax
0x9F1CD3: push    8; Size
0x9F1CD5: mov     [esp+1Ch+var_4], esi
0x9F1CD9: mov     dword_B3953C, eax
0x9F1CDE: call    FormHeapAlloc
0x9F1CE3: add     esp, 4
0x9F1CE6: mov     [esp+18h+var_10], eax
0x9F1CEA: test    eax, eax
0x9F1CEC: mov     [esp+18h+var_4], 3
0x9F1CF4: jz      short loc_9F1D0E
0x9F1CF6: fld     ds:flt_A5793C
0x9F1CFC: push    ecx
0x9F1CFD: fstp    [esp+1Ch+var_1C]; float
0x9F1D00: push    offset aFenchantgreate
0x9F1D05: mov     ecx, eax
0x9F1D07: call    GameSetting_ConstrAndReg_float
0x9F1D0C: jmp     short loc_9F1D10
0x9F1D0E: xor     eax, eax
0x9F1D10: push    8; Size
0x9F1D12: mov     [esp+1Ch+var_4], esi
0x9F1D16: mov     dword_B39540, eax
0x9F1D1B: call    FormHeapAlloc
0x9F1D20: add     esp, 4
0x9F1D23: mov     [esp+18h+var_10], eax
0x9F1D27: test    eax, eax
0x9F1D29: mov     [esp+18h+var_4], 4
0x9F1D31: jz      short loc_9F1D4B
0x9F1D33: fld     ds:flt_A44F70
0x9F1D39: push    ecx
0x9F1D3A: fstp    [esp+1Ch+var_1C]; float
0x9F1D3D: push    offset aFenchantgrandl
0x9F1D42: mov     ecx, eax
0x9F1D44: call    GameSetting_ConstrAndReg_float
0x9F1D49: jmp     short loc_9F1D4D
0x9F1D4B: xor     eax, eax
0x9F1D4D: mov     dword_B39544, eax
0x9F1D52: mov     ecx, [esp+18h+var_C]
0x9F1D56: mov     large fs:0, ecx
0x9F1D5D: pop     ecx
0x9F1D5E: pop     esi
0x9F1D5F: add     esp, 10h
0x9F1D62: retn
