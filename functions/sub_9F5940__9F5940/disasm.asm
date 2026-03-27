0x9F5940: push    0FFFFFFFFh
0x9F5942: push    offset SEH_9F5940
0x9F5947: mov     eax, large fs:0
0x9F594D: push    eax
0x9F594E: push    ecx
0x9F594F: push    esi
0x9F5950: mov     eax, ___security_cookie
0x9F5955: xor     eax, esp
0x9F5957: push    eax
0x9F5958: lea     eax, [esp+18h+var_C]
0x9F595C: mov     large fs:0, eax
0x9F5962: push    8; Size
0x9F5964: call    FormHeapAlloc
0x9F5969: add     esp, 4
0x9F596C: mov     [esp+18h+var_10], eax
0x9F5970: test    eax, eax
0x9F5972: mov     [esp+18h+var_4], 0
0x9F597A: jz      short loc_9F598F
0x9F597C: push    offset aTiltTheDPadUpO
0x9F5981: push    offset aSxboxdpady
0x9F5986: mov     ecx, eax
0x9F5988: call    GameSetting_ConstrAndReg
0x9F598D: jmp     short loc_9F5991
0x9F598F: xor     eax, eax
0x9F5991: or      esi, 0FFFFFFFFh
0x9F5994: push    8; Size
0x9F5996: mov     [esp+1Ch+var_4], esi
0x9F599A: mov     dword_B39950, eax
0x9F599F: call    FormHeapAlloc
0x9F59A4: add     esp, 4
0x9F59A7: mov     [esp+18h+var_10], eax
0x9F59AB: test    eax, eax
0x9F59AD: mov     [esp+18h+var_4], 1
0x9F59B5: jz      short loc_9F59CA
0x9F59B7: push    offset aTiltTheDPadUp
0x9F59BC: push    offset aSxboxdpadup
0x9F59C1: mov     ecx, eax
0x9F59C3: call    GameSetting_ConstrAndReg
0x9F59C8: jmp     short loc_9F59CC
0x9F59CA: xor     eax, eax
0x9F59CC: push    8; Size
0x9F59CE: mov     [esp+1Ch+var_4], esi
0x9F59D2: mov     dword_B39954, eax
0x9F59D7: call    FormHeapAlloc
0x9F59DC: add     esp, 4
0x9F59DF: mov     [esp+18h+var_10], eax
0x9F59E3: test    eax, eax
0x9F59E5: mov     [esp+18h+var_4], 2
0x9F59ED: jz      short loc_9F5A02
0x9F59EF: push    offset aTiltTheDPadDow
0x9F59F4: push    offset aSxboxdpaddown
0x9F59F9: mov     ecx, eax
0x9F59FB: call    GameSetting_ConstrAndReg
0x9F5A00: jmp     short loc_9F5A04
0x9F5A02: xor     eax, eax
0x9F5A04: push    8; Size
0x9F5A06: mov     [esp+1Ch+var_4], esi
0x9F5A0A: mov     dword_B39958, eax
0x9F5A0F: call    FormHeapAlloc
0x9F5A14: add     esp, 4
0x9F5A17: mov     [esp+18h+var_10], eax
0x9F5A1B: test    eax, eax
0x9F5A1D: mov     [esp+18h+var_4], 3
0x9F5A25: jz      short loc_9F5A3A
0x9F5A27: push    offset aTiltTheDPadLef
0x9F5A2C: push    offset aSxboxdpadx
0x9F5A31: mov     ecx, eax
0x9F5A33: call    GameSetting_ConstrAndReg
0x9F5A38: jmp     short loc_9F5A3C
0x9F5A3A: xor     eax, eax
0x9F5A3C: push    8; Size
0x9F5A3E: mov     [esp+1Ch+var_4], esi
0x9F5A42: mov     dword_B3995C, eax
0x9F5A47: call    FormHeapAlloc
0x9F5A4C: add     esp, 4
0x9F5A4F: mov     [esp+18h+var_10], eax
0x9F5A53: test    eax, eax
0x9F5A55: mov     [esp+18h+var_4], 4
0x9F5A5D: jz      short loc_9F5A72
0x9F5A5F: push    offset aTiltTheDPadRig
0x9F5A64: push    offset aSxboxdpadright
0x9F5A69: mov     ecx, eax
0x9F5A6B: call    GameSetting_ConstrAndReg
0x9F5A70: jmp     short loc_9F5A74
0x9F5A72: xor     eax, eax
0x9F5A74: push    8; Size
0x9F5A76: mov     [esp+1Ch+var_4], esi
0x9F5A7A: mov     dword_B39960, eax
0x9F5A7F: call    FormHeapAlloc
0x9F5A84: add     esp, 4
0x9F5A87: mov     [esp+18h+var_10], eax
0x9F5A8B: test    eax, eax
0x9F5A8D: mov     [esp+18h+var_4], 5
0x9F5A95: jz      short loc_9F5AAA
0x9F5A97: push    offset aTiltTheDPadL_0
0x9F5A9C: push    offset aSxboxdpadleft
0x9F5AA1: mov     ecx, eax
0x9F5AA3: call    GameSetting_ConstrAndReg
0x9F5AA8: jmp     short loc_9F5AAC
0x9F5AAA: xor     eax, eax
0x9F5AAC: push    8; Size
0x9F5AAE: mov     [esp+1Ch+var_4], esi
0x9F5AB2: mov     dword_B39964, eax
0x9F5AB7: call    FormHeapAlloc
0x9F5ABC: add     esp, 4
0x9F5ABF: mov     [esp+18h+var_10], eax
0x9F5AC3: test    eax, eax
0x9F5AC5: mov     [esp+18h+var_4], 6
0x9F5ACD: jz      short loc_9F5AE2
0x9F5ACF: push    offset aPressTheStartB
0x9F5AD4: push    offset aSxboxstart
0x9F5AD9: mov     ecx, eax
0x9F5ADB: call    GameSetting_ConstrAndReg
0x9F5AE0: jmp     short loc_9F5AE4
0x9F5AE2: xor     eax, eax
0x9F5AE4: push    8; Size
0x9F5AE6: mov     [esp+1Ch+var_4], esi
0x9F5AEA: mov     dword_B39968, eax
0x9F5AEF: call    FormHeapAlloc
0x9F5AF4: add     esp, 4
0x9F5AF7: mov     [esp+18h+var_10], eax
0x9F5AFB: test    eax, eax
0x9F5AFD: mov     [esp+18h+var_4], 7
0x9F5B05: jz      short loc_9F5B1A
0x9F5B07: push    offset aPressTheBackBu
0x9F5B0C: push    offset aSxboxback
0x9F5B11: mov     ecx, eax
0x9F5B13: call    GameSetting_ConstrAndReg
0x9F5B18: jmp     short loc_9F5B1C
0x9F5B1A: xor     eax, eax
0x9F5B1C: push    8; Size
0x9F5B1E: mov     [esp+1Ch+var_4], esi
0x9F5B22: mov     dword_B3996C, eax
0x9F5B27: call    FormHeapAlloc
0x9F5B2C: add     esp, 4
0x9F5B2F: mov     [esp+18h+var_10], eax
0x9F5B33: test    eax, eax
0x9F5B35: mov     [esp+18h+var_4], 8
0x9F5B3D: jz      short loc_9F5B52
0x9F5B3F: push    offset aClickTheLeftSt
0x9F5B44: push    offset aSxboxlthumb
0x9F5B49: mov     ecx, eax
0x9F5B4B: call    GameSetting_ConstrAndReg
0x9F5B50: jmp     short loc_9F5B54
0x9F5B52: xor     eax, eax
0x9F5B54: push    8; Size
0x9F5B56: mov     [esp+1Ch+var_4], esi
0x9F5B5A: mov     dword_B39970, eax
0x9F5B5F: call    FormHeapAlloc
0x9F5B64: add     esp, 4
0x9F5B67: mov     [esp+18h+var_10], eax
0x9F5B6B: test    eax, eax
0x9F5B6D: mov     [esp+18h+var_4], 9
0x9F5B75: jz      short loc_9F5B8A
0x9F5B77: push    offset aClickTheRightS
0x9F5B7C: push    offset aSxboxrthumb
0x9F5B81: mov     ecx, eax
0x9F5B83: call    GameSetting_ConstrAndReg
0x9F5B88: jmp     short loc_9F5B8C
0x9F5B8A: xor     eax, eax
0x9F5B8C: push    8; Size
0x9F5B8E: mov     [esp+1Ch+var_4], esi
0x9F5B92: mov     dword_B39974, eax
0x9F5B97: call    FormHeapAlloc
0x9F5B9C: add     esp, 4
0x9F5B9F: mov     [esp+18h+var_10], eax
0x9F5BA3: test    eax, eax
0x9F5BA5: mov     [esp+18h+var_4], 0Ah
0x9F5BAD: jz      short loc_9F5BC2
0x9F5BAF: push    offset aPressTheAButto
0x9F5BB4: push    offset aSxboxa
0x9F5BB9: mov     ecx, eax
0x9F5BBB: call    GameSetting_ConstrAndReg
0x9F5BC0: jmp     short loc_9F5BC4
0x9F5BC2: xor     eax, eax
0x9F5BC4: push    8; Size
0x9F5BC6: mov     [esp+1Ch+var_4], esi
0x9F5BCA: mov     dword_B39978, eax
0x9F5BCF: call    FormHeapAlloc
0x9F5BD4: add     esp, 4
0x9F5BD7: mov     [esp+18h+var_10], eax
0x9F5BDB: test    eax, eax
0x9F5BDD: mov     [esp+18h+var_4], 0Bh
0x9F5BE5: jz      short loc_9F5BFA
0x9F5BE7: push    offset aPressTheBButto
0x9F5BEC: push    offset aSxboxb
0x9F5BF1: mov     ecx, eax
0x9F5BF3: call    GameSetting_ConstrAndReg
0x9F5BF8: jmp     short loc_9F5BFC
0x9F5BFA: xor     eax, eax
0x9F5BFC: push    8; Size
0x9F5BFE: mov     [esp+1Ch+var_4], esi
0x9F5C02: mov     dword_B3997C, eax
0x9F5C07: call    FormHeapAlloc
0x9F5C0C: add     esp, 4
0x9F5C0F: mov     [esp+18h+var_10], eax
0x9F5C13: test    eax, eax
0x9F5C15: mov     [esp+18h+var_4], 0Ch
0x9F5C1D: jz      short loc_9F5C32
0x9F5C1F: push    offset aPressTheXButto
0x9F5C24: push    offset aSxboxx
0x9F5C29: mov     ecx, eax
0x9F5C2B: call    GameSetting_ConstrAndReg
0x9F5C30: jmp     short loc_9F5C34
0x9F5C32: xor     eax, eax
0x9F5C34: push    8; Size
0x9F5C36: mov     [esp+1Ch+var_4], esi
0x9F5C3A: mov     dword_B39980, eax
0x9F5C3F: call    FormHeapAlloc
0x9F5C44: add     esp, 4
0x9F5C47: mov     [esp+18h+var_10], eax
0x9F5C4B: test    eax, eax
0x9F5C4D: mov     [esp+18h+var_4], 0Dh
0x9F5C55: jz      short loc_9F5C6A
0x9F5C57: push    offset aPressTheYButto
0x9F5C5C: push    offset aSxboxy
0x9F5C61: mov     ecx, eax
0x9F5C63: call    GameSetting_ConstrAndReg
0x9F5C68: jmp     short loc_9F5C6C
0x9F5C6A: xor     eax, eax
0x9F5C6C: push    8; Size
0x9F5C6E: mov     [esp+1Ch+var_4], esi
0x9F5C72: mov     dword_B39984, eax
0x9F5C77: call    FormHeapAlloc
0x9F5C7C: add     esp, 4
0x9F5C7F: mov     [esp+18h+var_10], eax
0x9F5C83: test    eax, eax
0x9F5C85: mov     [esp+18h+var_4], 0Eh
0x9F5C8D: jz      short loc_9F5CA2
0x9F5C8F: push    offset aPressTheRightB
0x9F5C94: push    offset aSxboxrbumper
0x9F5C99: mov     ecx, eax
0x9F5C9B: call    GameSetting_ConstrAndReg
0x9F5CA0: jmp     short loc_9F5CA4
0x9F5CA2: xor     eax, eax
0x9F5CA4: push    8; Size
0x9F5CA6: mov     [esp+1Ch+var_4], esi
0x9F5CAA: mov     dword_B39988, eax
0x9F5CAF: call    FormHeapAlloc
0x9F5CB4: add     esp, 4
0x9F5CB7: mov     [esp+18h+var_10], eax
0x9F5CBB: test    eax, eax
0x9F5CBD: mov     [esp+18h+var_4], 0Fh
0x9F5CC5: jz      short loc_9F5CDA
0x9F5CC7: push    offset aPressTheLeftBu
0x9F5CCC: push    offset aSxboxlbumper
0x9F5CD1: mov     ecx, eax
0x9F5CD3: call    GameSetting_ConstrAndReg
0x9F5CD8: jmp     short loc_9F5CDC
0x9F5CDA: xor     eax, eax
0x9F5CDC: push    8; Size
0x9F5CDE: mov     [esp+1Ch+var_4], esi
0x9F5CE2: mov     dword_B3998C, eax
0x9F5CE7: call    FormHeapAlloc
0x9F5CEC: add     esp, 4
0x9F5CEF: mov     [esp+18h+var_10], eax
0x9F5CF3: test    eax, eax
0x9F5CF5: mov     [esp+18h+var_4], 10h
0x9F5CFD: jz      short loc_9F5D12
0x9F5CFF: push    offset aPullTheLeftTri
0x9F5D04: push    offset aSxboxltrigger
0x9F5D09: mov     ecx, eax
0x9F5D0B: call    GameSetting_ConstrAndReg
0x9F5D10: jmp     short loc_9F5D14
0x9F5D12: xor     eax, eax
0x9F5D14: push    8; Size
0x9F5D16: mov     [esp+1Ch+var_4], esi
0x9F5D1A: mov     dword_B39990, eax
0x9F5D1F: call    FormHeapAlloc
0x9F5D24: add     esp, 4
0x9F5D27: mov     [esp+18h+var_10], eax
0x9F5D2B: test    eax, eax
0x9F5D2D: mov     [esp+18h+var_4], 11h
0x9F5D35: jz      short loc_9F5D4A
0x9F5D37: push    offset aPullTheRightTr
0x9F5D3C: push    offset aSxboxrtrigger
0x9F5D41: mov     ecx, eax
0x9F5D43: call    GameSetting_ConstrAndReg
0x9F5D48: jmp     short loc_9F5D4C
0x9F5D4A: xor     eax, eax
0x9F5D4C: push    8; Size
0x9F5D4E: mov     [esp+1Ch+var_4], esi
0x9F5D52: mov     dword_B39994, eax
0x9F5D57: call    FormHeapAlloc
0x9F5D5C: add     esp, 4
0x9F5D5F: mov     [esp+18h+var_10], eax
0x9F5D63: test    eax, eax
0x9F5D65: mov     [esp+18h+var_4], 12h
0x9F5D6D: jz      short loc_9F5D82
0x9F5D6F: push    offset aMoveTheLeftSti
0x9F5D74: push    offset aSxboxlthumby
0x9F5D79: mov     ecx, eax
0x9F5D7B: call    GameSetting_ConstrAndReg
0x9F5D80: jmp     short loc_9F5D84
0x9F5D82: xor     eax, eax
0x9F5D84: push    8; Size
0x9F5D86: mov     [esp+1Ch+var_4], esi
0x9F5D8A: mov     dword_B39998, eax
0x9F5D8F: call    FormHeapAlloc
0x9F5D94: add     esp, 4
0x9F5D97: mov     [esp+18h+var_10], eax
0x9F5D9B: test    eax, eax
0x9F5D9D: mov     [esp+18h+var_4], 13h
0x9F5DA5: jz      short loc_9F5DBA
0x9F5DA7: push    offset aMoveTheLeftS_0
0x9F5DAC: push    offset aSxboxlthumbup
0x9F5DB1: mov     ecx, eax
0x9F5DB3: call    GameSetting_ConstrAndReg
0x9F5DB8: jmp     short loc_9F5DBC
0x9F5DBA: xor     eax, eax
0x9F5DBC: push    8; Size
0x9F5DBE: mov     [esp+1Ch+var_4], esi
0x9F5DC2: mov     dword_B3999C, eax
0x9F5DC7: call    FormHeapAlloc
0x9F5DCC: add     esp, 4
0x9F5DCF: mov     [esp+18h+var_10], eax
0x9F5DD3: test    eax, eax
0x9F5DD5: mov     [esp+18h+var_4], 14h
0x9F5DDD: jz      short loc_9F5DF2
0x9F5DDF: push    offset aMoveTheLeftS_1
0x9F5DE4: push    offset aSxboxlthumbdow
0x9F5DE9: mov     ecx, eax
0x9F5DEB: call    GameSetting_ConstrAndReg
0x9F5DF0: jmp     short loc_9F5DF4
0x9F5DF2: xor     eax, eax
0x9F5DF4: push    8; Size
0x9F5DF6: mov     [esp+1Ch+var_4], esi
0x9F5DFA: mov     dword_B399A0, eax
0x9F5DFF: call    FormHeapAlloc
0x9F5E04: add     esp, 4
0x9F5E07: mov     [esp+18h+var_10], eax
0x9F5E0B: test    eax, eax
0x9F5E0D: mov     [esp+18h+var_4], 15h
0x9F5E15: jz      short loc_9F5E2A
0x9F5E17: push    offset aMoveTheLeftS_2
0x9F5E1C: push    offset aSxboxlthumbx
0x9F5E21: mov     ecx, eax
0x9F5E23: call    GameSetting_ConstrAndReg
0x9F5E28: jmp     short loc_9F5E2C
0x9F5E2A: xor     eax, eax
0x9F5E2C: push    8; Size
0x9F5E2E: mov     [esp+1Ch+var_4], esi
0x9F5E32: mov     dword_B399A4, eax
0x9F5E37: call    FormHeapAlloc
0x9F5E3C: add     esp, 4
0x9F5E3F: mov     [esp+18h+var_10], eax
0x9F5E43: test    eax, eax
0x9F5E45: mov     [esp+18h+var_4], 16h
0x9F5E4D: jz      short loc_9F5E62
0x9F5E4F: push    offset aMoveTheLeftS_3
0x9F5E54: push    offset aSxboxlthumblef
0x9F5E59: mov     ecx, eax
0x9F5E5B: call    GameSetting_ConstrAndReg
0x9F5E60: jmp     short loc_9F5E64
0x9F5E62: xor     eax, eax
0x9F5E64: push    8; Size
0x9F5E66: mov     [esp+1Ch+var_4], esi
0x9F5E6A: mov     dword_B399A8, eax
0x9F5E6F: call    FormHeapAlloc
0x9F5E74: add     esp, 4
0x9F5E77: mov     [esp+18h+var_10], eax
0x9F5E7B: test    eax, eax
0x9F5E7D: mov     [esp+18h+var_4], 17h
0x9F5E85: jz      short loc_9F5E9A
0x9F5E87: push    offset aMoveTheLeftS_4
0x9F5E8C: push    offset aSxboxlthumbrig
0x9F5E91: mov     ecx, eax
0x9F5E93: call    GameSetting_ConstrAndReg
0x9F5E98: jmp     short loc_9F5E9C
0x9F5E9A: xor     eax, eax
0x9F5E9C: push    8; Size
0x9F5E9E: mov     [esp+1Ch+var_4], esi
0x9F5EA2: mov     dword_B399AC, eax
0x9F5EA7: call    FormHeapAlloc
0x9F5EAC: add     esp, 4
0x9F5EAF: mov     [esp+18h+var_10], eax
0x9F5EB3: test    eax, eax
0x9F5EB5: mov     [esp+18h+var_4], 18h
0x9F5EBD: jz      short loc_9F5ED2
0x9F5EBF: push    offset aMoveTheRightSt
0x9F5EC4: push    offset aSxboxrthumby
0x9F5EC9: mov     ecx, eax
0x9F5ECB: call    GameSetting_ConstrAndReg
0x9F5ED0: jmp     short loc_9F5ED4
0x9F5ED2: xor     eax, eax
0x9F5ED4: push    8; Size
0x9F5ED6: mov     [esp+1Ch+var_4], esi
0x9F5EDA: mov     dword_B399B0, eax
0x9F5EDF: call    FormHeapAlloc
0x9F5EE4: add     esp, 4
0x9F5EE7: mov     [esp+18h+var_10], eax
0x9F5EEB: test    eax, eax
0x9F5EED: mov     [esp+18h+var_4], 19h
0x9F5EF5: jz      short loc_9F5F0A
0x9F5EF7: push    offset aMoveTheRight_0
0x9F5EFC: push    offset aSxboxrthumbup
0x9F5F01: mov     ecx, eax
0x9F5F03: call    GameSetting_ConstrAndReg
0x9F5F08: jmp     short loc_9F5F0C
0x9F5F0A: xor     eax, eax
0x9F5F0C: push    8; Size
0x9F5F0E: mov     [esp+1Ch+var_4], esi
0x9F5F12: mov     dword_B399B4, eax
0x9F5F17: call    FormHeapAlloc
0x9F5F1C: add     esp, 4
0x9F5F1F: mov     [esp+18h+var_10], eax
0x9F5F23: test    eax, eax
0x9F5F25: mov     [esp+18h+var_4], 1Ah
0x9F5F2D: jz      short loc_9F5F42
0x9F5F2F: push    offset aMoveTheRight_1
0x9F5F34: push    offset aSxboxrthumbdow
0x9F5F39: mov     ecx, eax
0x9F5F3B: call    GameSetting_ConstrAndReg
0x9F5F40: jmp     short loc_9F5F44
0x9F5F42: xor     eax, eax
0x9F5F44: push    8; Size
0x9F5F46: mov     [esp+1Ch+var_4], esi
0x9F5F4A: mov     dword_B399B8, eax
0x9F5F4F: call    FormHeapAlloc
0x9F5F54: add     esp, 4
0x9F5F57: mov     [esp+18h+var_10], eax
0x9F5F5B: test    eax, eax
0x9F5F5D: mov     [esp+18h+var_4], 1Bh
0x9F5F65: jz      short loc_9F5F7A
0x9F5F67: push    offset aMoveTheRight_2
0x9F5F6C: push    offset aSxboxrthumbx
0x9F5F71: mov     ecx, eax
0x9F5F73: call    GameSetting_ConstrAndReg
0x9F5F78: jmp     short loc_9F5F7C
0x9F5F7A: xor     eax, eax
0x9F5F7C: push    8; Size
0x9F5F7E: mov     [esp+1Ch+var_4], esi
0x9F5F82: mov     dword_B399BC, eax
0x9F5F87: call    FormHeapAlloc
0x9F5F8C: add     esp, 4
0x9F5F8F: mov     [esp+18h+var_10], eax
0x9F5F93: test    eax, eax
0x9F5F95: mov     [esp+18h+var_4], 1Ch
0x9F5F9D: jz      short loc_9F5FB2
0x9F5F9F: push    offset aMoveTheRight_3
0x9F5FA4: push    offset aSxboxrthumblef
0x9F5FA9: mov     ecx, eax
0x9F5FAB: call    GameSetting_ConstrAndReg
0x9F5FB0: jmp     short loc_9F5FB4
0x9F5FB2: xor     eax, eax
0x9F5FB4: push    8; Size
0x9F5FB6: mov     [esp+1Ch+var_4], esi
0x9F5FBA: mov     dword_B399C0, eax
0x9F5FBF: call    FormHeapAlloc
0x9F5FC4: add     esp, 4
0x9F5FC7: mov     [esp+18h+var_10], eax
0x9F5FCB: test    eax, eax
0x9F5FCD: mov     [esp+18h+var_4], 1Dh
0x9F5FD5: jz      short loc_9F5FEA
0x9F5FD7: push    offset aMoveTheRight_4
0x9F5FDC: push    offset aSxboxrthumbrig
0x9F5FE1: mov     ecx, eax
0x9F5FE3: call    GameSetting_ConstrAndReg
0x9F5FE8: jmp     short loc_9F5FEC
0x9F5FEA: xor     eax, eax
0x9F5FEC: push    8; Size
0x9F5FEE: mov     [esp+1Ch+var_4], esi
0x9F5FF2: mov     dword_B399C4, eax
0x9F5FF7: call    FormHeapAlloc
0x9F5FFC: add     esp, 4
0x9F5FFF: mov     [esp+18h+var_10], eax
0x9F6003: test    eax, eax
0x9F6005: mov     [esp+18h+var_4], 1Eh
0x9F600D: jz      short loc_9F6022
0x9F600F: push    offset aAssignAButtonI
0x9F6014: push    offset aSxboxnone
0x9F6019: mov     ecx, eax
0x9F601B: call    GameSetting_ConstrAndReg
0x9F6020: jmp     short loc_9F6024
0x9F6022: xor     eax, eax
0x9F6024: mov     dword_B399C8, eax
0x9F6029: mov     ecx, [esp+18h+var_C]
0x9F602D: mov     large fs:0, ecx
0x9F6034: pop     ecx
0x9F6035: pop     esi
0x9F6036: add     esp, 10h
0x9F6039: retn
