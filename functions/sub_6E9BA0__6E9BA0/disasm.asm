0x6E9BA0: push    0FFFFFFFFh
0x6E9BA2: push    offset SEH_6E9BA0
0x6E9BA7: mov     eax, large fs:0
0x6E9BAD: push    eax
0x6E9BAE: sub     esp, 24h
0x6E9BB1: push    ebx
0x6E9BB2: push    ebp
0x6E9BB3: push    esi
0x6E9BB4: push    edi
0x6E9BB5: mov     eax, ds:0B30AACh
0x6E9BBA: xor     eax, esp
0x6E9BBC: push    eax
0x6E9BBD: lea     eax, [esp+44h+var_C]
0x6E9BC1: mov     large fs:0, eax
0x6E9BC7: mov     esi, ecx
0x6E9BC9: mov     [esp+44h+var_28], esi
0x6E9BCD: mov     ebp, [esp+44h+arg_0]
0x6E9BD1: push    ebp
0x6E9BD2: call    sub_715F40
0x6E9BD7: mov     eax, [ebp+21Ch]
0x6E9BDD: push    1
0x6E9BDF: lea     ecx, [esp+48h+arg_0]
0x6E9BE3: push    ecx
0x6E9BE4: mov     edi, 4
0x6E9BE9: push    edi
0x6E9BEA: lea     edx, [esi+3Ch]
0x6E9BED: push    edx
0x6E9BEE: push    eax
0x6E9BEF: mov     eax, [eax+4]
0x6E9BF2: mov     [esp+58h+arg_0], edi
0x6E9BF6: call    eax
0x6E9BF8: mov     eax, [ebp+21Ch]
0x6E9BFE: push    1
0x6E9C00: lea     ecx, [esp+5Ch+arg_0]
0x6E9C04: push    ecx
0x6E9C05: push    edi
0x6E9C06: lea     edx, [esi+40h]
0x6E9C09: push    edx
0x6E9C0A: push    eax
0x6E9C0B: mov     eax, [eax+4]
0x6E9C0E: mov     [esp+6Ch+arg_0], edi
0x6E9C12: call    eax
0x6E9C14: mov     eax, [ebp+21Ch]
0x6E9C1A: push    1
0x6E9C1C: lea     ecx, [esp+70h+arg_0]
0x6E9C20: push    ecx
0x6E9C21: push    edi
0x6E9C22: lea     edx, [esp+78h+var_20]
0x6E9C26: push    edx
0x6E9C27: xor     ebx, ebx
0x6E9C29: mov     [esp+7Ch+var_20], ebx
0x6E9C2D: push    eax
0x6E9C2E: mov     eax, [eax+4]
0x6E9C31: mov     [esp+80h+arg_0], edi
0x6E9C38: call    eax
0x6E9C3A: add     esp, 3Ch
0x6E9C3D: cmp     [esp+44h+var_20], ebx
0x6E9C41: mov     [esp+44h+arg_0], ebx
0x6E9C45: jbe     loc_6E9D5F
0x6E9C4B: lea     edi, [esi+44h]
0x6E9C4E: jmp     short loc_6E9C54
0x6E9C50: mov     ebx, [esp+44h+arg_0]
0x6E9C54: push    0Ch; Size
0x6E9C56: call    FormHeapAlloc
0x6E9C5B: add     esp, 4
0x6E9C5E: xor     esi, esi
0x6E9C60: cmp     eax, esi
0x6E9C62: jz      short loc_6E9C6E
0x6E9C64: mov     [eax], esi
0x6E9C66: mov     [eax+4], esi
0x6E9C69: mov     [eax+8], esi
0x6E9C6C: mov     esi, eax
0x6E9C6E: movzx   ecx, word ptr [edi+8]
0x6E9C72: cmp     ebx, ecx
0x6E9C74: mov     [esp+44h+var_4], 0FFFFFFFFh
0x6E9C7C: jb      short loc_6E9C8C
0x6E9C7E: movzx   edx, word ptr [edi+0Eh]
0x6E9C82: add     edx, ebx
0x6E9C84: push    edx
0x6E9C85: mov     ecx, edi
0x6E9C87: call    NiTArray_SetSize
0x6E9C8C: movzx   eax, word ptr [edi+0Ah]
0x6E9C90: cmp     ebx, eax
0x6E9C92: jb      short loc_6E9CA6
0x6E9C94: test    esi, esi
0x6E9C96: lea     ecx, [ebx+1]
0x6E9C99: mov     [edi+0Ah], cx
0x6E9C9D: jz      short loc_6E9CC9
0x6E9C9F: add     word ptr [edi+0Ch], 1
0x6E9CA4: jmp     short loc_6E9CC9
0x6E9CA6: test    esi, esi
0x6E9CA8: jz      short loc_6E9CBA
0x6E9CAA: mov     edx, [edi+4]
0x6E9CAD: cmp     dword ptr [edx+ebx*4], 0
0x6E9CB1: jnz     short loc_6E9CC9
0x6E9CB3: add     word ptr [edi+0Ch], 1
0x6E9CB8: jmp     short loc_6E9CC9
0x6E9CBA: mov     eax, [edi+4]
0x6E9CBD: cmp     dword ptr [eax+ebx*4], 0
0x6E9CC1: jz      short loc_6E9CC9
0x6E9CC3: add     word ptr [edi+0Ch], 0FFFFh
0x6E9CC9: mov     ecx, [edi+4]
0x6E9CCC: push    1
0x6E9CCE: mov     [ecx+ebx*4], esi
0x6E9CD1: mov     eax, [ebp+21Ch]
0x6E9CD7: lea     edx, [esp+48h+var_14]
0x6E9CDB: push    edx
0x6E9CDC: push    4
0x6E9CDE: lea     ecx, [esp+50h+var_24]
0x6E9CE2: push    ecx
0x6E9CE3: mov     [esp+54h+var_24], 0
0x6E9CEB: mov     edx, [eax+4]
0x6E9CEE: push    eax
0x6E9CEF: mov     [esp+58h+var_14], 4
0x6E9CF7: call    edx
0x6E9CF9: xor     ebx, ebx
0x6E9CFB: add     esp, 14h
0x6E9CFE: cmp     [esp+44h+var_24], ebx
0x6E9D02: jbe     short loc_6E9D41
0x6E9D04: mov     eax, [esi+4]
0x6E9D07: cmp     [esi+8], eax
0x6E9D0A: jnz     short loc_6E9D21
0x6E9D0C: test    eax, eax
0x6E9D0E: jbe     short loc_6E9D14
0x6E9D10: add     eax, eax
0x6E9D12: jmp     short loc_6E9D19
0x6E9D14: mov     eax, 1
0x6E9D19: push    eax
0x6E9D1A: mov     ecx, esi
0x6E9D1C: call    sub_6E8CA0
0x6E9D21: mov     eax, [esi+8]
0x6E9D24: mov     ecx, [esi]
0x6E9D26: mov     edx, [esp+44h+var_28]
0x6E9D2A: mov     [ecx+eax*4], edx
0x6E9D2D: add     dword ptr [esi+8], 1
0x6E9D31: mov     ecx, ebp
0x6E9D33: call    sub_712A20
0x6E9D38: add     ebx, 1
0x6E9D3B: cmp     ebx, [esp+44h+var_24]
0x6E9D3F: jb      short loc_6E9D04
0x6E9D41: mov     eax, [esp+44h+arg_0]
0x6E9D45: add     eax, 1
0x6E9D48: cmp     eax, [esp+44h+var_20]
0x6E9D4C: mov     [esp+44h+arg_0], eax
0x6E9D50: jb      loc_6E9C50
0x6E9D56: mov     esi, [esp+44h+var_28]
0x6E9D5A: mov     edi, 4
0x6E9D5F: mov     eax, [ebp+21Ch]
0x6E9D65: push    1
0x6E9D67: lea     ecx, [esp+48h+arg_0]
0x6E9D6B: push    ecx
0x6E9D6C: push    edi
0x6E9D6D: lea     edx, [esp+50h+var_1C]
0x6E9D71: push    edx
0x6E9D72: mov     [esp+54h+var_1C], 0
0x6E9D7A: push    eax
0x6E9D7B: mov     eax, [eax+4]
0x6E9D7E: mov     [esp+58h+arg_0], edi
0x6E9D82: call    eax
0x6E9D84: xor     edi, edi
0x6E9D86: add     esp, 14h
0x6E9D89: cmp     [esp+44h+var_1C], edi
0x6E9D8D: mov     [esp+44h+arg_0], edi
0x6E9D91: jbe     loc_6E9ECE
0x6E9D97: lea     ebx, [esi+54h]
0x6E9D9A: jmp     short loc_6E9DA4
0x6E9D9C: align 10h
0x6E9DA0: mov     edi, [esp+44h+arg_0]
0x6E9DA4: push    0Ch; Size
0x6E9DA6: call    FormHeapAlloc
0x6E9DAB: add     esp, 4
0x6E9DAE: xor     esi, esi
0x6E9DB0: cmp     eax, esi
0x6E9DB2: jz      short loc_6E9DBE
0x6E9DB4: mov     [eax], esi
0x6E9DB6: mov     [eax+4], esi
0x6E9DB9: mov     [eax+8], esi
0x6E9DBC: mov     esi, eax
0x6E9DBE: movzx   ecx, word ptr [ebx+8]
0x6E9DC2: cmp     edi, ecx
0x6E9DC4: mov     [esp+44h+var_4], 0FFFFFFFFh
0x6E9DCC: jb      short loc_6E9DDC
0x6E9DCE: movzx   edx, word ptr [ebx+0Eh]
0x6E9DD2: add     edx, edi
0x6E9DD4: push    edx
0x6E9DD5: mov     ecx, ebx
0x6E9DD7: call    NiTArray_SetSize
0x6E9DDC: movzx   eax, word ptr [ebx+0Ah]
0x6E9DE0: cmp     edi, eax
0x6E9DE2: jb      short loc_6E9DF6
0x6E9DE4: test    esi, esi
0x6E9DE6: lea     ecx, [edi+1]
0x6E9DE9: mov     [ebx+0Ah], cx
0x6E9DED: jz      short loc_6E9E19
0x6E9DEF: add     word ptr [ebx+0Ch], 1
0x6E9DF4: jmp     short loc_6E9E19
0x6E9DF6: test    esi, esi
0x6E9DF8: jz      short loc_6E9E0A
0x6E9DFA: mov     edx, [ebx+4]
0x6E9DFD: cmp     dword ptr [edx+edi*4], 0
0x6E9E01: jnz     short loc_6E9E19
0x6E9E03: add     word ptr [ebx+0Ch], 1
0x6E9E08: jmp     short loc_6E9E19
0x6E9E0A: mov     eax, [ebx+4]
0x6E9E0D: cmp     dword ptr [eax+edi*4], 0
0x6E9E11: jz      short loc_6E9E19
0x6E9E13: add     word ptr [ebx+0Ch], 0FFFFh
0x6E9E19: mov     ecx, [ebx+4]
0x6E9E1C: push    1
0x6E9E1E: mov     [ecx+edi*4], esi
0x6E9E21: mov     eax, [ebp+21Ch]
0x6E9E27: lea     edx, [esp+48h+var_14]
0x6E9E2B: push    edx
0x6E9E2C: push    4
0x6E9E2E: lea     ecx, [esp+50h+var_24]
0x6E9E32: push    ecx
0x6E9E33: mov     [esp+54h+var_24], 0
0x6E9E3B: mov     edx, [eax+4]
0x6E9E3E: push    eax
0x6E9E3F: mov     [esp+58h+var_14], 4
0x6E9E47: call    edx
0x6E9E49: xor     edi, edi
0x6E9E4B: add     esp, 14h
0x6E9E4E: cmp     [esp+44h+var_24], edi
0x6E9E52: jbe     short loc_6E9EB5
0x6E9E54: push    8; Size
0x6E9E56: call    FormHeapAlloc
0x6E9E5B: xor     ecx, ecx
0x6E9E5D: add     esp, 4
0x6E9E60: cmp     eax, ecx
0x6E9E62: jz      short loc_6E9E6D
0x6E9E64: mov     [eax+4], ecx
0x6E9E67: mov     [esp+44h+var_14], eax
0x6E9E6B: jmp     short loc_6E9E71
0x6E9E6D: mov     [esp+44h+var_14], ecx
0x6E9E71: mov     eax, [esi+4]
0x6E9E74: cmp     [esi+8], eax
0x6E9E77: jnz     short loc_6E9E8E
0x6E9E79: cmp     eax, ecx
0x6E9E7B: jbe     short loc_6E9E81
0x6E9E7D: add     eax, eax
0x6E9E7F: jmp     short loc_6E9E86
0x6E9E81: mov     eax, 1
0x6E9E86: push    eax
0x6E9E87: mov     ecx, esi
0x6E9E89: call    sub_6E8CA0
0x6E9E8E: mov     eax, [esi+8]
0x6E9E91: mov     ecx, [esi]
0x6E9E93: mov     edx, [esp+44h+var_14]
0x6E9E97: mov     [ecx+eax*4], edx
0x6E9E9A: add     dword ptr [esi+8], 1
0x6E9E9E: mov     ecx, ebp
0x6E9EA0: call    sub_712A20
0x6E9EA5: mov     ecx, ebp
0x6E9EA7: call    sub_712A20
0x6E9EAC: add     edi, 1
0x6E9EAF: cmp     edi, [esp+44h+var_24]
0x6E9EB3: jb      short loc_6E9E54
0x6E9EB5: mov     eax, [esp+44h+arg_0]
0x6E9EB9: add     eax, 1
0x6E9EBC: cmp     eax, [esp+44h+var_1C]
0x6E9EC0: mov     [esp+44h+arg_0], eax
0x6E9EC4: jb      loc_6E9DA0
0x6E9ECA: mov     esi, [esp+44h+var_28]
0x6E9ECE: mov     eax, [ebp+21Ch]
0x6E9ED4: push    1
0x6E9ED6: lea     ecx, [esp+48h+var_10]
0x6E9EDA: push    ecx
0x6E9EDB: push    4
0x6E9EDD: lea     edx, [esp+50h+var_18]
0x6E9EE1: push    edx
0x6E9EE2: mov     [esp+54h+var_18], 0
0x6E9EEA: push    eax
0x6E9EEB: mov     eax, [eax+4]
0x6E9EEE: mov     [esp+58h+var_10], 4
0x6E9EF6: call    eax
0x6E9EF8: xor     edi, edi
0x6E9EFA: add     esp, 14h
0x6E9EFD: cmp     [esp+44h+var_18], edi
0x6E9F01: jbe     short loc_6E9F43
0x6E9F03: add     esi, 64h ; 'd'
0x6E9F06: mov     eax, [esi+4]
0x6E9F09: cmp     [esi+8], eax
0x6E9F0C: jnz     short loc_6E9F23
0x6E9F0E: test    eax, eax
0x6E9F10: jbe     short loc_6E9F16
0x6E9F12: add     eax, eax
0x6E9F14: jmp     short loc_6E9F1B
0x6E9F16: mov     eax, 1
0x6E9F1B: push    eax
0x6E9F1C: mov     ecx, esi
0x6E9F1E: call    sub_6E8CA0
0x6E9F23: mov     ecx, [esi+8]
0x6E9F26: mov     edx, [esi]
0x6E9F28: mov     eax, [esp+44h+var_28]
0x6E9F2C: mov     [edx+ecx*4], eax
0x6E9F2F: add     dword ptr [esi+8], 1
0x6E9F33: mov     ecx, ebp
0x6E9F35: call    sub_712A20
0x6E9F3A: add     edi, 1
0x6E9F3D: cmp     edi, [esp+44h+var_18]
0x6E9F41: jb      short loc_6E9F06
0x6E9F43: mov     ecx, [esp+44h+var_C]
0x6E9F47: mov     large fs:0, ecx
0x6E9F4E: pop     ecx
0x6E9F4F: pop     edi
0x6E9F50: pop     esi
0x6E9F51: pop     ebp
0x6E9F52: pop     ebx
0x6E9F53: add     esp, 30h
0x6E9F56: retn    4
