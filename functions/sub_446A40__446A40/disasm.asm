0x446A40: push    edi
0x446A41: mov     edi, [esp+4+arg_0]
0x446A45: test    edi, edi
0x446A47: jz      loc_446AEA
0x446A4D: push    esi
0x446A4E: mov     ecx, edi; this
0x446A50: call    TESObjectREFR_GetParentCell
0x446A55: mov     esi, eax
0x446A57: test    esi, esi
0x446A59: jz      short loc_446A68
0x446A5B: mov     ecx, esi; this
0x446A5D: call    TESObjectCELL_IsInterior
0x446A62: test    al, al
0x446A64: jnz     short loc_446A68
0x446A66: xor     esi, esi
0x446A68: push    ebx
0x446A69: mov     ecx, edi; this
0x446A6B: call    TESObjectREFR_GetWorldSpace
0x446A70: test    esi, esi
0x446A72: mov     ebx, eax
0x446A74: jz      short loc_446AB1
0x446A76: mov     eax, [esp+0Ch+arg_14]
0x446A7A: fld     [esp+0Ch+arg_C]
0x446A7E: mov     ecx, [esp+0Ch+arg_10]
0x446A82: mov     edx, [esp+0Ch+arg_8]
0x446A86: push    eax; int
0x446A87: mov     eax, [edi]
0x446A89: push    ecx; int
0x446A8A: push    ecx
0x446A8B: fstp    [esp+18h+var_18]; float
0x446A8E: push    edx; int
0x446A8F: fld     [esp+1Ch+arg_4]
0x446A93: mov     edx, [eax+174h]
0x446A99: push    ecx
0x446A9A: mov     ecx, edi
0x446A9C: fstp    [esp+20h+var_20]; float
0x446A9F: call    edx
0x446AA1: push    eax; int
0x446AA2: push    esi; int
0x446AA3: call    sub_4D5E30
0x446AA8: add     esp, 1Ch
0x446AAB: pop     ebx
0x446AAC: pop     esi
0x446AAD: pop     edi
0x446AAE: retn    18h
0x446AB1: test    ebx, ebx
0x446AB3: jz      short loc_446AE8
0x446AB5: mov     eax, [esp+0Ch+arg_14]
0x446AB9: fld     [esp+0Ch+arg_C]
0x446ABD: mov     ecx, [esp+0Ch+arg_10]
0x446AC1: mov     edx, [esp+0Ch+arg_8]
0x446AC5: push    eax; int
0x446AC6: mov     eax, [edi]
0x446AC8: push    ecx; int
0x446AC9: push    ecx
0x446ACA: fstp    [esp+18h+var_18]; float
0x446ACD: push    edx; int
0x446ACE: fld     [esp+1Ch+arg_4]
0x446AD2: mov     edx, [eax+174h]
0x446AD8: push    ecx
0x446AD9: mov     ecx, edi
0x446ADB: fstp    [esp+20h+var_20]; float
0x446ADE: call    edx
0x446AE0: push    eax; int
0x446AE1: mov     ecx, ebx
0x446AE3: call    sub_4F0750
0x446AE8: pop     ebx
0x446AE9: pop     esi
0x446AEA: pop     edi
0x446AEB: retn    18h
