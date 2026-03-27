0x4C7A30: push    ebx
0x4C7A31: xor     ebx, ebx
0x4C7A33: cmp     [esp+4+arg_0], ebx
0x4C7A37: push    ebp
0x4C7A38: mov     ebp, ecx
0x4C7A3A: jz      loc_4C80DE
0x4C7A40: mov     ecx, [ebp+20h]; this
0x4C7A43: cmp     ecx, ebx
0x4C7A45: push    edi
0x4C7A46: jz      short loc_4C7A51
0x4C7A48: call    TESObjectCELL_GetWorldSpace
0x4C7A4D: mov     edi, eax
0x4C7A4F: jmp     short loc_4C7A53
0x4C7A51: xor     edi, edi
0x4C7A53: mov     eax, [ebp+24h]
0x4C7A56: cmp     eax, ebx
0x4C7A58: push    esi
0x4C7A59: jz      short loc_4C7A63
0x4C7A5B: mov     esi, [eax+9Ch]
0x4C7A61: jmp     short loc_4C7A75
0x4C7A63: mov     ecx, [ebp+20h]; this
0x4C7A66: cmp     ecx, ebx
0x4C7A68: jz      short loc_4C7A73
0x4C7A6A: call    TESObjectCELL_GetYCoordinate
0x4C7A6F: mov     esi, eax
0x4C7A71: jmp     short loc_4C7A75
0x4C7A73: xor     esi, esi
0x4C7A75: mov     eax, [ebp+24h]
0x4C7A78: cmp     eax, ebx
0x4C7A7A: jz      short loc_4C7A84
0x4C7A7C: mov     eax, [eax+98h]
0x4C7A82: jmp     short loc_4C7A94
0x4C7A84: mov     ecx, [ebp+20h]; this
0x4C7A87: cmp     ecx, ebx
0x4C7A89: jz      short loc_4C7A92
0x4C7A8B: call    TESObjectCELL_GetXCoordinate
0x4C7A90: jmp     short loc_4C7A94
0x4C7A92: xor     eax, eax
0x4C7A94: mov     ecx, ds:0B33A98h
0x4C7A9A: push    ebx
0x4C7A9B: push    edi
0x4C7A9C: add     esi, 1
0x4C7A9F: push    esi
0x4C7AA0: add     eax, 0FFFFFFFFh
0x4C7AA3: push    eax
0x4C7AA4: call    sub_447740
0x4C7AA9: mov     esi, eax
0x4C7AAB: cmp     esi, ebx
0x4C7AAD: jz      short loc_4C7B0C
0x4C7AAF: mov     ecx, esi; this
0x4C7AB1: call    sub_4CE3C0
0x4C7AB6: mov     eax, [eax+24h]
0x4C7AB9: cmp     eax, ebx
0x4C7ABB: jz      short loc_4C7AD1
0x4C7ABD: cmp     [eax+4], ebx
0x4C7AC0: jz      short loc_4C7AD1
0x4C7AC2: mov     ecx, esi; this
0x4C7AC4: call    sub_4CE3C0
0x4C7AC9: mov     ecx, [esp+10h+arg_0]
0x4C7ACD: mov     [ecx], eax
0x4C7ACF: jmp     short loc_4C7B12
0x4C7AD1: mov     ecx, esi; this
0x4C7AD3: call    sub_4CE3C0
0x4C7AD8: mov     eax, [eax+24h]
0x4C7ADB: cmp     eax, ebx
0x4C7ADD: jz      short loc_4C7AE4
0x4C7ADF: cmp     [eax+4], ebx
0x4C7AE2: jnz     short loc_4C7B0C
0x4C7AE4: cmp     [esp+10h+arg_4], bl
0x4C7AE8: jz      short loc_4C7B0C
0x4C7AEA: mov     edi, [esp+10h+arg_8]
0x4C7AEE: cmp     edi, ebx
0x4C7AF0: jz      short loc_4C7B0C
0x4C7AF2: mov     ecx, esi; this
0x4C7AF4: call    sub_4CE3C0
0x4C7AF9: mov     edx, [esp+10h+arg_0]
0x4C7AFD: push    ebx; char
0x4C7AFE: mov     ecx, eax; int
0x4C7B00: mov     [edx], eax
0x4C7B02: call    sub_4C79A0
0x4C7B07: mov     byte ptr [edi], 1
0x4C7B0A: jmp     short loc_4C7B12
0x4C7B0C: mov     eax, [esp+10h+arg_0]
0x4C7B10: mov     [eax], ebx
0x4C7B12: mov     ecx, [ebp+20h]; this
0x4C7B15: cmp     ecx, ebx
0x4C7B17: jz      short loc_4C7B22
0x4C7B19: call    TESObjectCELL_GetWorldSpace
0x4C7B1E: mov     edi, eax
0x4C7B20: jmp     short loc_4C7B24
0x4C7B22: xor     edi, edi
0x4C7B24: mov     eax, [ebp+24h]
0x4C7B27: cmp     eax, ebx
0x4C7B29: jz      short loc_4C7B33
0x4C7B2B: mov     esi, [eax+9Ch]
0x4C7B31: jmp     short loc_4C7B45
0x4C7B33: mov     ecx, [ebp+20h]; this
0x4C7B36: cmp     ecx, ebx
0x4C7B38: jz      short loc_4C7B43
0x4C7B3A: call    TESObjectCELL_GetYCoordinate
0x4C7B3F: mov     esi, eax
0x4C7B41: jmp     short loc_4C7B45
0x4C7B43: xor     esi, esi
0x4C7B45: mov     eax, [ebp+24h]
0x4C7B48: cmp     eax, ebx
0x4C7B4A: jz      short loc_4C7B54
0x4C7B4C: mov     eax, [eax+98h]
0x4C7B52: jmp     short loc_4C7B64
0x4C7B54: mov     ecx, [ebp+20h]; this
0x4C7B57: cmp     ecx, ebx
0x4C7B59: jz      short loc_4C7B62
0x4C7B5B: call    TESObjectCELL_GetXCoordinate
0x4C7B60: jmp     short loc_4C7B64
0x4C7B62: xor     eax, eax
0x4C7B64: mov     ecx, ds:0B33A98h
0x4C7B6A: push    ebx
0x4C7B6B: push    edi
0x4C7B6C: add     esi, 1
0x4C7B6F: push    esi
0x4C7B70: push    eax
0x4C7B71: call    sub_447740
0x4C7B76: mov     esi, eax
0x4C7B78: cmp     esi, ebx
0x4C7B7A: jz      short loc_4C7BDC
0x4C7B7C: mov     ecx, esi; this
0x4C7B7E: call    sub_4CE3C0
0x4C7B83: mov     eax, [eax+24h]
0x4C7B86: cmp     eax, ebx
0x4C7B88: jz      short loc_4C7B9F
0x4C7B8A: cmp     [eax+4], ebx
0x4C7B8D: jz      short loc_4C7B9F
0x4C7B8F: mov     ecx, esi; this
0x4C7B91: call    sub_4CE3C0
0x4C7B96: mov     ecx, [esp+10h+arg_0]
0x4C7B9A: mov     [ecx+4], eax
0x4C7B9D: jmp     short loc_4C7BE3
0x4C7B9F: mov     ecx, esi; this
0x4C7BA1: call    sub_4CE3C0
0x4C7BA6: mov     eax, [eax+24h]
0x4C7BA9: cmp     eax, ebx
0x4C7BAB: jz      short loc_4C7BB2
0x4C7BAD: cmp     [eax+4], ebx
0x4C7BB0: jnz     short loc_4C7BDC
0x4C7BB2: cmp     [esp+10h+arg_4], bl
0x4C7BB6: jz      short loc_4C7BDC
0x4C7BB8: mov     edi, [esp+10h+arg_8]
0x4C7BBC: cmp     edi, ebx
0x4C7BBE: jz      short loc_4C7BDC
0x4C7BC0: mov     ecx, esi; this
0x4C7BC2: call    sub_4CE3C0
0x4C7BC7: mov     edx, [esp+10h+arg_0]
0x4C7BCB: push    ebx; char
0x4C7BCC: mov     ecx, eax; int
0x4C7BCE: mov     [edx+4], eax
0x4C7BD1: call    sub_4C79A0
0x4C7BD6: mov     byte ptr [edi+1], 1
0x4C7BDA: jmp     short loc_4C7BE3
0x4C7BDC: mov     eax, [esp+10h+arg_0]
0x4C7BE0: mov     [eax+4], ebx
0x4C7BE3: mov     ecx, [ebp+20h]; this
0x4C7BE6: cmp     ecx, ebx
0x4C7BE8: jz      short loc_4C7BF3
0x4C7BEA: call    TESObjectCELL_GetWorldSpace
0x4C7BEF: mov     edi, eax
0x4C7BF1: jmp     short loc_4C7BF5
0x4C7BF3: xor     edi, edi
0x4C7BF5: mov     eax, [ebp+24h]
0x4C7BF8: cmp     eax, ebx
0x4C7BFA: jz      short loc_4C7C04
0x4C7BFC: mov     esi, [eax+9Ch]
0x4C7C02: jmp     short loc_4C7C16
0x4C7C04: mov     ecx, [ebp+20h]; this
0x4C7C07: cmp     ecx, ebx
0x4C7C09: jz      short loc_4C7C14
0x4C7C0B: call    TESObjectCELL_GetYCoordinate
0x4C7C10: mov     esi, eax
0x4C7C12: jmp     short loc_4C7C16
0x4C7C14: xor     esi, esi
0x4C7C16: mov     eax, [ebp+24h]
0x4C7C19: cmp     eax, ebx
0x4C7C1B: jz      short loc_4C7C25
0x4C7C1D: mov     eax, [eax+98h]
0x4C7C23: jmp     short loc_4C7C35
0x4C7C25: mov     ecx, [ebp+20h]; this
0x4C7C28: cmp     ecx, ebx
0x4C7C2A: jz      short loc_4C7C33
0x4C7C2C: call    TESObjectCELL_GetXCoordinate
0x4C7C31: jmp     short loc_4C7C35
0x4C7C33: xor     eax, eax
0x4C7C35: mov     ecx, ds:0B33A98h
0x4C7C3B: push    ebx
0x4C7C3C: push    edi
0x4C7C3D: add     esi, 1
0x4C7C40: push    esi
0x4C7C41: add     eax, 1
0x4C7C44: push    eax
0x4C7C45: call    sub_447740
0x4C7C4A: mov     esi, eax
0x4C7C4C: cmp     esi, ebx
0x4C7C4E: jz      short loc_4C7CB0
0x4C7C50: mov     ecx, esi; this
0x4C7C52: call    sub_4CE3C0
0x4C7C57: mov     eax, [eax+24h]
0x4C7C5A: cmp     eax, ebx
0x4C7C5C: jz      short loc_4C7C73
0x4C7C5E: cmp     [eax+4], ebx
0x4C7C61: jz      short loc_4C7C73
0x4C7C63: mov     ecx, esi; this
0x4C7C65: call    sub_4CE3C0
0x4C7C6A: mov     ecx, [esp+10h+arg_0]
0x4C7C6E: mov     [ecx+8], eax
0x4C7C71: jmp     short loc_4C7CB7
0x4C7C73: mov     ecx, esi; this
0x4C7C75: call    sub_4CE3C0
0x4C7C7A: mov     eax, [eax+24h]
0x4C7C7D: cmp     eax, ebx
0x4C7C7F: jz      short loc_4C7C86
0x4C7C81: cmp     [eax+4], ebx
0x4C7C84: jnz     short loc_4C7CB0
0x4C7C86: cmp     [esp+10h+arg_4], bl
0x4C7C8A: jz      short loc_4C7CB0
0x4C7C8C: mov     edi, [esp+10h+arg_8]
0x4C7C90: cmp     edi, ebx
0x4C7C92: jz      short loc_4C7CB0
0x4C7C94: mov     ecx, esi; this
0x4C7C96: call    sub_4CE3C0
0x4C7C9B: mov     edx, [esp+10h+arg_0]
0x4C7C9F: push    ebx; char
0x4C7CA0: mov     ecx, eax; int
0x4C7CA2: mov     [edx+8], eax
0x4C7CA5: call    sub_4C79A0
0x4C7CAA: mov     byte ptr [edi+2], 1
0x4C7CAE: jmp     short loc_4C7CB7
0x4C7CB0: mov     eax, [esp+10h+arg_0]
0x4C7CB4: mov     [eax+8], ebx
0x4C7CB7: mov     ecx, [ebp+20h]; this
0x4C7CBA: cmp     ecx, ebx
0x4C7CBC: jz      short loc_4C7CC7
0x4C7CBE: call    TESObjectCELL_GetWorldSpace
0x4C7CC3: mov     edi, eax
0x4C7CC5: jmp     short loc_4C7CC9
0x4C7CC7: xor     edi, edi
0x4C7CC9: mov     eax, [ebp+24h]
0x4C7CCC: cmp     eax, ebx
0x4C7CCE: jz      short loc_4C7CD8
0x4C7CD0: mov     esi, [eax+9Ch]
0x4C7CD6: jmp     short loc_4C7CEA
0x4C7CD8: mov     ecx, [ebp+20h]; this
0x4C7CDB: cmp     ecx, ebx
0x4C7CDD: jz      short loc_4C7CE8
0x4C7CDF: call    TESObjectCELL_GetYCoordinate
0x4C7CE4: mov     esi, eax
0x4C7CE6: jmp     short loc_4C7CEA
0x4C7CE8: xor     esi, esi
0x4C7CEA: mov     eax, [ebp+24h]
0x4C7CED: cmp     eax, ebx
0x4C7CEF: jz      short loc_4C7CF9
0x4C7CF1: mov     eax, [eax+98h]
0x4C7CF7: jmp     short loc_4C7D09
0x4C7CF9: mov     ecx, [ebp+20h]; this
0x4C7CFC: cmp     ecx, ebx
0x4C7CFE: jz      short loc_4C7D07
0x4C7D00: call    TESObjectCELL_GetXCoordinate
0x4C7D05: jmp     short loc_4C7D09
0x4C7D07: xor     eax, eax
0x4C7D09: mov     ecx, ds:0B33A98h
0x4C7D0F: push    ebx
0x4C7D10: push    edi
0x4C7D11: push    esi
0x4C7D12: add     eax, 0FFFFFFFFh
0x4C7D15: push    eax
0x4C7D16: call    sub_447740
0x4C7D1B: mov     esi, eax
0x4C7D1D: cmp     esi, ebx
0x4C7D1F: jz      short loc_4C7D81
0x4C7D21: mov     ecx, esi; this
0x4C7D23: call    sub_4CE3C0
0x4C7D28: mov     eax, [eax+24h]
0x4C7D2B: cmp     eax, ebx
0x4C7D2D: jz      short loc_4C7D44
0x4C7D2F: cmp     [eax+4], ebx
0x4C7D32: jz      short loc_4C7D44
0x4C7D34: mov     ecx, esi; this
0x4C7D36: call    sub_4CE3C0
0x4C7D3B: mov     ecx, [esp+10h+arg_0]
0x4C7D3F: mov     [ecx+0Ch], eax
0x4C7D42: jmp     short loc_4C7D88
0x4C7D44: mov     ecx, esi; this
0x4C7D46: call    sub_4CE3C0
0x4C7D4B: mov     eax, [eax+24h]
0x4C7D4E: cmp     eax, ebx
0x4C7D50: jz      short loc_4C7D57
0x4C7D52: cmp     [eax+4], ebx
0x4C7D55: jnz     short loc_4C7D81
0x4C7D57: cmp     [esp+10h+arg_4], bl
0x4C7D5B: jz      short loc_4C7D81
0x4C7D5D: mov     edi, [esp+10h+arg_8]
0x4C7D61: cmp     edi, ebx
0x4C7D63: jz      short loc_4C7D81
0x4C7D65: mov     ecx, esi; this
0x4C7D67: call    sub_4CE3C0
0x4C7D6C: mov     edx, [esp+10h+arg_0]
0x4C7D70: push    ebx; char
0x4C7D71: mov     ecx, eax; int
0x4C7D73: mov     [edx+0Ch], eax
0x4C7D76: call    sub_4C79A0
0x4C7D7B: mov     byte ptr [edi+3], 1
0x4C7D7F: jmp     short loc_4C7D88
0x4C7D81: mov     eax, [esp+10h+arg_0]
0x4C7D85: mov     [eax+0Ch], ebx
0x4C7D88: mov     ecx, [ebp+20h]; this
0x4C7D8B: cmp     ecx, ebx
0x4C7D8D: jz      short loc_4C7D98
0x4C7D8F: call    TESObjectCELL_GetWorldSpace
0x4C7D94: mov     edi, eax
0x4C7D96: jmp     short loc_4C7D9A
0x4C7D98: xor     edi, edi
0x4C7D9A: mov     eax, [ebp+24h]
0x4C7D9D: cmp     eax, ebx
0x4C7D9F: jz      short loc_4C7DA9
0x4C7DA1: mov     esi, [eax+9Ch]
0x4C7DA7: jmp     short loc_4C7DBB
0x4C7DA9: mov     ecx, [ebp+20h]; this
0x4C7DAC: cmp     ecx, ebx
0x4C7DAE: jz      short loc_4C7DB9
0x4C7DB0: call    TESObjectCELL_GetYCoordinate
0x4C7DB5: mov     esi, eax
0x4C7DB7: jmp     short loc_4C7DBB
0x4C7DB9: xor     esi, esi
0x4C7DBB: mov     eax, [ebp+24h]
0x4C7DBE: cmp     eax, ebx
0x4C7DC0: jz      short loc_4C7DCA
0x4C7DC2: mov     eax, [eax+98h]
0x4C7DC8: jmp     short loc_4C7DDA
0x4C7DCA: mov     ecx, [ebp+20h]; this
0x4C7DCD: cmp     ecx, ebx
0x4C7DCF: jz      short loc_4C7DD8
0x4C7DD1: call    TESObjectCELL_GetXCoordinate
0x4C7DD6: jmp     short loc_4C7DDA
0x4C7DD8: xor     eax, eax
0x4C7DDA: mov     ecx, ds:0B33A98h
0x4C7DE0: push    ebx
0x4C7DE1: push    edi
0x4C7DE2: push    esi
0x4C7DE3: add     eax, 1
0x4C7DE6: push    eax
0x4C7DE7: call    sub_447740
0x4C7DEC: mov     esi, eax
0x4C7DEE: cmp     esi, ebx
0x4C7DF0: jz      short loc_4C7E52
0x4C7DF2: mov     ecx, esi; this
0x4C7DF4: call    sub_4CE3C0
0x4C7DF9: mov     eax, [eax+24h]
0x4C7DFC: cmp     eax, ebx
0x4C7DFE: jz      short loc_4C7E15
0x4C7E00: cmp     [eax+4], ebx
0x4C7E03: jz      short loc_4C7E15
0x4C7E05: mov     ecx, esi; this
0x4C7E07: call    sub_4CE3C0
0x4C7E0C: mov     ecx, [esp+10h+arg_0]
0x4C7E10: mov     [ecx+10h], eax
0x4C7E13: jmp     short loc_4C7E59
0x4C7E15: mov     ecx, esi; this
0x4C7E17: call    sub_4CE3C0
0x4C7E1C: mov     eax, [eax+24h]
0x4C7E1F: cmp     eax, ebx
0x4C7E21: jz      short loc_4C7E28
0x4C7E23: cmp     [eax+4], ebx
0x4C7E26: jnz     short loc_4C7E52
0x4C7E28: cmp     [esp+10h+arg_4], bl
0x4C7E2C: jz      short loc_4C7E52
0x4C7E2E: mov     edi, [esp+10h+arg_8]
0x4C7E32: cmp     edi, ebx
0x4C7E34: jz      short loc_4C7E52
0x4C7E36: mov     ecx, esi; this
0x4C7E38: call    sub_4CE3C0
0x4C7E3D: mov     edx, [esp+10h+arg_0]
0x4C7E41: push    ebx; char
0x4C7E42: mov     ecx, eax; int
0x4C7E44: mov     [edx+10h], eax
0x4C7E47: call    sub_4C79A0
0x4C7E4C: mov     byte ptr [edi+4], 1
0x4C7E50: jmp     short loc_4C7E59
0x4C7E52: mov     eax, [esp+10h+arg_0]
0x4C7E56: mov     [eax+10h], ebx
0x4C7E59: mov     ecx, [ebp+20h]; this
0x4C7E5C: cmp     ecx, ebx
0x4C7E5E: jz      short loc_4C7E69
0x4C7E60: call    TESObjectCELL_GetWorldSpace
0x4C7E65: mov     edi, eax
0x4C7E67: jmp     short loc_4C7E6B
0x4C7E69: xor     edi, edi
0x4C7E6B: mov     eax, [ebp+24h]
0x4C7E6E: cmp     eax, ebx
0x4C7E70: jz      short loc_4C7E7A
0x4C7E72: mov     esi, [eax+9Ch]
0x4C7E78: jmp     short loc_4C7E8C
0x4C7E7A: mov     ecx, [ebp+20h]; this
0x4C7E7D: cmp     ecx, ebx
0x4C7E7F: jz      short loc_4C7E8A
0x4C7E81: call    TESObjectCELL_GetYCoordinate
0x4C7E86: mov     esi, eax
0x4C7E88: jmp     short loc_4C7E8C
0x4C7E8A: xor     esi, esi
0x4C7E8C: mov     eax, [ebp+24h]
0x4C7E8F: cmp     eax, ebx
0x4C7E91: jz      short loc_4C7E9B
0x4C7E93: mov     eax, [eax+98h]
0x4C7E99: jmp     short loc_4C7EAB
0x4C7E9B: mov     ecx, [ebp+20h]; this
0x4C7E9E: cmp     ecx, ebx
0x4C7EA0: jz      short loc_4C7EA9
0x4C7EA2: call    TESObjectCELL_GetXCoordinate
0x4C7EA7: jmp     short loc_4C7EAB
0x4C7EA9: xor     eax, eax
0x4C7EAB: mov     ecx, ds:0B33A98h
0x4C7EB1: push    ebx
0x4C7EB2: push    edi
0x4C7EB3: add     esi, 0FFFFFFFFh
0x4C7EB6: push    esi
0x4C7EB7: add     eax, 0FFFFFFFFh
0x4C7EBA: push    eax
0x4C7EBB: call    sub_447740
0x4C7EC0: mov     esi, eax
0x4C7EC2: cmp     esi, ebx
0x4C7EC4: jz      short loc_4C7F26
0x4C7EC6: mov     ecx, esi; this
0x4C7EC8: call    sub_4CE3C0
0x4C7ECD: mov     eax, [eax+24h]
0x4C7ED0: cmp     eax, ebx
0x4C7ED2: jz      short loc_4C7EE9
0x4C7ED4: cmp     [eax+4], ebx
0x4C7ED7: jz      short loc_4C7EE9
0x4C7ED9: mov     ecx, esi; this
0x4C7EDB: call    sub_4CE3C0
0x4C7EE0: mov     ecx, [esp+10h+arg_0]
0x4C7EE4: mov     [ecx+14h], eax
0x4C7EE7: jmp     short loc_4C7F2D
0x4C7EE9: mov     ecx, esi; this
0x4C7EEB: call    sub_4CE3C0
0x4C7EF0: mov     eax, [eax+24h]
0x4C7EF3: cmp     eax, ebx
0x4C7EF5: jz      short loc_4C7EFC
0x4C7EF7: cmp     [eax+4], ebx
0x4C7EFA: jnz     short loc_4C7F26
0x4C7EFC: cmp     [esp+10h+arg_4], bl
0x4C7F00: jz      short loc_4C7F26
0x4C7F02: mov     edi, [esp+10h+arg_8]
0x4C7F06: cmp     edi, ebx
0x4C7F08: jz      short loc_4C7F26
0x4C7F0A: mov     ecx, esi; this
0x4C7F0C: call    sub_4CE3C0
0x4C7F11: mov     edx, [esp+10h+arg_0]
0x4C7F15: push    ebx; char
0x4C7F16: mov     ecx, eax; int
0x4C7F18: mov     [edx+14h], eax
0x4C7F1B: call    sub_4C79A0
0x4C7F20: mov     byte ptr [edi+5], 1
0x4C7F24: jmp     short loc_4C7F2D
0x4C7F26: mov     eax, [esp+10h+arg_0]
0x4C7F2A: mov     [eax+14h], ebx
0x4C7F2D: mov     ecx, [ebp+20h]; this
0x4C7F30: cmp     ecx, ebx
0x4C7F32: jz      short loc_4C7F3D
0x4C7F34: call    TESObjectCELL_GetWorldSpace
0x4C7F39: mov     edi, eax
0x4C7F3B: jmp     short loc_4C7F3F
0x4C7F3D: xor     edi, edi
0x4C7F3F: mov     eax, [ebp+24h]
0x4C7F42: cmp     eax, ebx
0x4C7F44: jz      short loc_4C7F4E
0x4C7F46: mov     esi, [eax+9Ch]
0x4C7F4C: jmp     short loc_4C7F60
0x4C7F4E: mov     ecx, [ebp+20h]; this
0x4C7F51: cmp     ecx, ebx
0x4C7F53: jz      short loc_4C7F5E
0x4C7F55: call    TESObjectCELL_GetYCoordinate
0x4C7F5A: mov     esi, eax
0x4C7F5C: jmp     short loc_4C7F60
0x4C7F5E: xor     esi, esi
0x4C7F60: mov     eax, [ebp+24h]
0x4C7F63: cmp     eax, ebx
0x4C7F65: jz      short loc_4C7F6F
0x4C7F67: mov     eax, [eax+98h]
0x4C7F6D: jmp     short loc_4C7F7F
0x4C7F6F: mov     ecx, [ebp+20h]; this
0x4C7F72: cmp     ecx, ebx
0x4C7F74: jz      short loc_4C7F7D
0x4C7F76: call    TESObjectCELL_GetXCoordinate
0x4C7F7B: jmp     short loc_4C7F7F
0x4C7F7D: xor     eax, eax
0x4C7F7F: mov     ecx, ds:0B33A98h
0x4C7F85: push    ebx
0x4C7F86: push    edi
0x4C7F87: add     esi, 0FFFFFFFFh
0x4C7F8A: push    esi
0x4C7F8B: push    eax
0x4C7F8C: call    sub_447740
0x4C7F91: mov     esi, eax
0x4C7F93: cmp     esi, ebx
0x4C7F95: jz      short loc_4C7FF7
0x4C7F97: mov     ecx, esi; this
0x4C7F99: call    sub_4CE3C0
0x4C7F9E: mov     eax, [eax+24h]
0x4C7FA1: cmp     eax, ebx
0x4C7FA3: jz      short loc_4C7FBA
0x4C7FA5: cmp     [eax+4], ebx
0x4C7FA8: jz      short loc_4C7FBA
0x4C7FAA: mov     ecx, esi; this
0x4C7FAC: call    sub_4CE3C0
0x4C7FB1: mov     ecx, [esp+10h+arg_0]
0x4C7FB5: mov     [ecx+18h], eax
0x4C7FB8: jmp     short loc_4C7FFE
0x4C7FBA: mov     ecx, esi; this
0x4C7FBC: call    sub_4CE3C0
0x4C7FC1: mov     eax, [eax+24h]
0x4C7FC4: cmp     eax, ebx
0x4C7FC6: jz      short loc_4C7FCD
0x4C7FC8: cmp     [eax+4], ebx
0x4C7FCB: jnz     short loc_4C7FF7
0x4C7FCD: cmp     [esp+10h+arg_4], bl
0x4C7FD1: jz      short loc_4C7FF7
0x4C7FD3: mov     edi, [esp+10h+arg_8]
0x4C7FD7: cmp     edi, ebx
0x4C7FD9: jz      short loc_4C7FF7
0x4C7FDB: mov     ecx, esi; this
0x4C7FDD: call    sub_4CE3C0
0x4C7FE2: mov     edx, [esp+10h+arg_0]
0x4C7FE6: push    ebx; char
0x4C7FE7: mov     ecx, eax; int
0x4C7FE9: mov     [edx+18h], eax
0x4C7FEC: call    sub_4C79A0
0x4C7FF1: mov     byte ptr [edi+6], 1
0x4C7FF5: jmp     short loc_4C7FFE
0x4C7FF7: mov     eax, [esp+10h+arg_0]
0x4C7FFB: mov     [eax+18h], ebx
0x4C7FFE: mov     ecx, [ebp+20h]; this
0x4C8001: cmp     ecx, ebx
0x4C8003: jz      short loc_4C800E
0x4C8005: call    TESObjectCELL_GetWorldSpace
0x4C800A: mov     edi, eax
0x4C800C: jmp     short loc_4C8010
0x4C800E: xor     edi, edi
0x4C8010: mov     eax, [ebp+24h]
0x4C8013: cmp     eax, ebx
0x4C8015: jz      short loc_4C801F
0x4C8017: mov     esi, [eax+9Ch]
0x4C801D: jmp     short loc_4C8031
0x4C801F: mov     ecx, [ebp+20h]; this
0x4C8022: cmp     ecx, ebx
0x4C8024: jz      short loc_4C802F
0x4C8026: call    TESObjectCELL_GetYCoordinate
0x4C802B: mov     esi, eax
0x4C802D: jmp     short loc_4C8031
0x4C802F: xor     esi, esi
0x4C8031: mov     eax, [ebp+24h]
0x4C8034: cmp     eax, ebx
0x4C8036: jz      short loc_4C8040
0x4C8038: mov     eax, [eax+98h]
0x4C803E: jmp     short loc_4C8050
0x4C8040: mov     ecx, [ebp+20h]; this
0x4C8043: cmp     ecx, ebx
0x4C8045: jz      short loc_4C804E
0x4C8047: call    TESObjectCELL_GetXCoordinate
0x4C804C: jmp     short loc_4C8050
0x4C804E: xor     eax, eax
0x4C8050: mov     ecx, ds:0B33A98h
0x4C8056: push    ebx
0x4C8057: push    edi
0x4C8058: add     esi, 0FFFFFFFFh
0x4C805B: push    esi
0x4C805C: add     eax, 1
0x4C805F: push    eax
0x4C8060: call    sub_447740
0x4C8065: mov     esi, eax
0x4C8067: cmp     esi, ebx
0x4C8069: jz      short loc_4C80D5
0x4C806B: mov     ecx, esi; this
0x4C806D: call    sub_4CE3C0
0x4C8072: mov     eax, [eax+24h]
0x4C8075: cmp     eax, ebx
0x4C8077: jz      short loc_4C8093
0x4C8079: cmp     [eax+4], ebx
0x4C807C: jz      short loc_4C8093
0x4C807E: mov     ecx, esi; this
0x4C8080: call    sub_4CE3C0
0x4C8085: mov     ecx, [esp+10h+arg_0]
0x4C8089: pop     esi
0x4C808A: pop     edi
0x4C808B: pop     ebp
0x4C808C: mov     [ecx+1Ch], eax
0x4C808F: pop     ebx
0x4C8090: retn    0Ch
0x4C8093: mov     ecx, esi; this
0x4C8095: call    sub_4CE3C0
0x4C809A: mov     eax, [eax+24h]
0x4C809D: cmp     eax, ebx
0x4C809F: jz      short loc_4C80A6
0x4C80A1: cmp     [eax+4], ebx
0x4C80A4: jnz     short loc_4C80D5
0x4C80A6: cmp     [esp+10h+arg_4], bl
0x4C80AA: jz      short loc_4C80D5
0x4C80AC: mov     edi, [esp+10h+arg_8]
0x4C80B0: cmp     edi, ebx
0x4C80B2: jz      short loc_4C80D5
0x4C80B4: mov     ecx, esi; this
0x4C80B6: call    sub_4CE3C0
0x4C80BB: mov     edx, [esp+10h+arg_0]
0x4C80BF: push    ebx; char
0x4C80C0: mov     ecx, eax; int
0x4C80C2: mov     [edx+1Ch], eax
0x4C80C5: call    sub_4C79A0
0x4C80CA: pop     esi
0x4C80CB: mov     byte ptr [edi+7], 1
0x4C80CF: pop     edi
0x4C80D0: pop     ebp
0x4C80D1: pop     ebx
0x4C80D2: retn    0Ch
0x4C80D5: mov     eax, [esp+10h+arg_0]
0x4C80D9: pop     esi
0x4C80DA: mov     [eax+1Ch], ebx
0x4C80DD: pop     edi
0x4C80DE: pop     ebp
0x4C80DF: pop     ebx
0x4C80E0: retn    0Ch
