0x5C7BA0: push    0FFFFFFFFh
0x5C7BA2: push    offset SEH_5C7BA0
0x5C7BA7: mov     eax, large fs:0
0x5C7BAD: push    eax
0x5C7BAE: sub     esp, 80h
0x5C7BB4: push    ebx; a3
0x5C7BB5: push    ebp; a3
0x5C7BB6: push    esi; a3
0x5C7BB7: push    edi; a3
0x5C7BB8: mov     eax, ds:0B30AACh
0x5C7BBD: xor     eax, esp
0x5C7BBF: push    eax; a3
0x5C7BC0: lea     eax, [esp+0A0h+var_C]
0x5C7BC7: mov     large fs:0, eax
0x5C7BCD: mov     esi, ecx
0x5C7BCF: mov     ecx, ds:0B333C4h
0x5C7BD5: mov     eax, [ecx]
0x5C7BD7: mov     edx, [eax+170h]
0x5C7BDD: call    edx
0x5C7BDF: mov     [esp+0A0h+var_88], eax
0x5C7BE3: mov     eax, [eax+0E8h]
0x5C7BE9: add     eax, 0A8h ; '¨'
0x5C7BEE: xor     ebx, ebx
0x5C7BF0: xor     ebp, ebp
0x5C7BF2: or      edi, 0FFFFFFFFh
0x5C7BF5: cmp     eax, ebx
0x5C7BF7: mov     [esp+0A0h+var_84], eax
0x5C7BFB: mov     dword ptr [esp+0A0h+var_90+4], ebp; a3
0x5C7BFF: mov     [esi+87Ch], ebx
0x5C7C05: jz      loc_5C7E3D
0x5C7C0B: cmp     [eax+4], ebx
0x5C7C0E: jnz     short loc_5C7C18
0x5C7C10: cmp     [eax], ebx
0x5C7C12: jz      loc_5C7E3D
0x5C7C18: xor     ecx, ecx
0x5C7C1A: lea     ebx, [ebx+0]
0x5C7C20: cmp     [eax], ebx
0x5C7C22: jz      short loc_5C7C27
0x5C7C24: add     ecx, 1
0x5C7C27: mov     eax, [eax+4]
0x5C7C2A: cmp     eax, ebx
0x5C7C2C: jnz     short loc_5C7C20
0x5C7C2E: mov     eax, ds:0B38F90h
0x5C7C33: sub     esp, 8
0x5C7C36: mov     [esp+0A8h+var_7C], esp
0x5C7C3A: cmp     ecx, 1
0x5C7C3D: mov     ecx, esp; this
0x5C7C3F: push    ebx; a3
0x5C7C40: mov     [ecx], ebx
0x5C7C42: mov     [ecx+4], bx
0x5C7C46: mov     [ecx+6], bx
0x5C7C4A: push    eax; a2
0x5C7C4B: jnz     short loc_5C7C8A
0x5C7C4D: call    BSStringT_Set
0x5C7C52: mov     eax, ds:0B38F70h
0x5C7C57: sub     esp, 8
0x5C7C5A: mov     ecx, esp; this
0x5C7C5C: mov     dword ptr [esp+0B0h+var_90+4], esp
0x5C7C60: push    ebx; a3
0x5C7C61: push    eax; a2
0x5C7C62: mov     [esp+0B8h+var_4], ebx
0x5C7C69: mov     [ecx], ebx
0x5C7C6B: mov     [ecx+4], bx
0x5C7C6F: mov     [ecx+6], bx
0x5C7C73: call    BSStringT_Set
0x5C7C78: mov     ecx, esi
0x5C7C7A: mov     [esp+0B0h+var_4], edi
0x5C7C81: call    sub_5C3440
0x5C7C86: fld1
0x5C7C88: jmp     short loc_5C7CCD
0x5C7C8A: call    BSStringT_Set
0x5C7C8F: mov     eax, ds:0B38F70h
0x5C7C94: sub     esp, 8
0x5C7C97: mov     ecx, esp; this
0x5C7C99: mov     dword ptr [esp+0B0h+var_90+4], esp
0x5C7C9D: push    ebx; a3
0x5C7C9E: push    eax; a2
0x5C7C9F: mov     [esp+0B8h+var_4], 1
0x5C7CAA: mov     [ecx], ebx
0x5C7CAC: mov     [ecx+4], bx
0x5C7CB0: mov     [ecx+6], bx
0x5C7CB4: call    BSStringT_Set
0x5C7CB9: mov     ecx, esi
0x5C7CBB: mov     [esp+0B0h+var_4], edi
0x5C7CC2: call    sub_5C3440
0x5C7CC7: fld     dword ptr ds:0A379B4h
0x5C7CCD: push    ecx
0x5C7CCE: fstp    [esp+0A4h+a2]; a3
0x5C7CD1: push    0FBBh; a2
0x5C7CD6: mov     ecx, eax; this
0x5C7CD8: call    Tile_SetFloat
0x5C7CDD: mov     eax, [esp+0A0h+var_84]
0x5C7CE1: mov     ecx, [eax]
0x5C7CE3: cmp     ecx, ebx
0x5C7CE5: mov     dword ptr [esp+0A0h+var_90+4], ecx
0x5C7CE9: jz      loc_5C7E29
0x5C7CEF: mov     eax, [esp+0A0h+var_88]
0x5C7CF3: cmp     [eax+1D0h], ebx
0x5C7CF9: jnz     loc_5C7D8F
0x5C7CFF: call    sub_51ED80
0x5C7D04: test    al, al
0x5C7D06: jz      loc_5C7D8F
0x5C7D0C: cmp     ebp, ebx
0x5C7D0E: jnz     short loc_5C7D8F
0x5C7D10: mov     ecx, dword ptr [esp+0A0h+var_90+4]
0x5C7D14: mov     eax, [ecx+1Ch]
0x5C7D17: cmp     eax, ebx
0x5C7D19: jnz     short loc_5C7D20
0x5C7D1B: mov     eax, offset EmptyString
0x5C7D20: push    eax
0x5C7D21: mov     eax, ds:0B38F90h
0x5C7D26: push    0FB4h
0x5C7D2B: sub     esp, 8
0x5C7D2E: mov     ecx, esp; this
0x5C7D30: mov     [esp+0B0h+var_7C], esp
0x5C7D34: push    ebx; a3
0x5C7D35: push    eax; a2
0x5C7D36: mov     [ecx], ebx
0x5C7D38: mov     [ecx+4], bx
0x5C7D3C: mov     [ecx+6], bx
0x5C7D40: call    BSStringT_Set
0x5C7D45: mov     eax, ds:0B38F70h
0x5C7D4A: sub     esp, 8
0x5C7D4D: mov     ecx, esp; this
0x5C7D4F: mov     [esp+0B8h+var_7C+4], esp
0x5C7D53: push    ebx; a3
0x5C7D54: push    eax; a2
0x5C7D55: mov     [esp+0C0h+var_4], 2
0x5C7D60: mov     [ecx], ebx
0x5C7D62: mov     [ecx+4], bx
0x5C7D66: mov     [ecx+6], bx
0x5C7D6A: call    BSStringT_Set
0x5C7D6F: mov     ecx, esi
0x5C7D71: mov     [esp+0B8h+var_4], edi
0x5C7D78: call    sub_5C3440
0x5C7D7D: mov     ecx, eax
0x5C7D7F: call    Tile_SetString
0x5C7D84: mov     [esi+87Ch], ebx
0x5C7D8A: jmp     loc_5C7E15
0x5C7D8F: mov     eax, dword ptr [esp+0A0h+var_90+4]
0x5C7D93: mov     edx, [esp+0A0h+var_88]
0x5C7D97: cmp     [edx+1D0h], eax
0x5C7D9D: jnz     short loc_5C7E15
0x5C7D9F: mov     eax, [eax+1Ch]
0x5C7DA2: cmp     eax, ebx
0x5C7DA4: jnz     short loc_5C7DAB
0x5C7DA6: mov     eax, offset EmptyString
0x5C7DAB: push    eax
0x5C7DAC: mov     eax, ds:0B38F90h
0x5C7DB1: push    0FB4h
0x5C7DB6: sub     esp, 8
0x5C7DB9: mov     ecx, esp; this
0x5C7DBB: mov     [esp+0B0h+var_7C+4], esp
0x5C7DBF: push    ebx; a3
0x5C7DC0: push    eax; a2
0x5C7DC1: mov     [ecx], ebx
0x5C7DC3: mov     [ecx+4], bx
0x5C7DC7: mov     [ecx+6], bx
0x5C7DCB: call    BSStringT_Set
0x5C7DD0: mov     eax, ds:0B38F70h
0x5C7DD5: sub     esp, 8
0x5C7DD8: mov     ecx, esp; this
0x5C7DDA: mov     [esp+0B8h+var_7C], esp
0x5C7DDE: push    ebx; a3
0x5C7DDF: push    eax; a2
0x5C7DE0: mov     [esp+0C0h+var_4], 3
0x5C7DEB: mov     [ecx], ebx
0x5C7DED: mov     [ecx+4], bx
0x5C7DF1: mov     [ecx+6], bx
0x5C7DF5: call    BSStringT_Set
0x5C7DFA: mov     ecx, esi
0x5C7DFC: mov     [esp+0B8h+var_4], edi
0x5C7E03: call    sub_5C3440
0x5C7E08: mov     ecx, eax
0x5C7E0A: call    Tile_SetString
0x5C7E0F: mov     [esi+87Ch], ebp
0x5C7E15: mov     ecx, dword ptr [esp+0A0h+var_90+4]
0x5C7E19: call    sub_51ED80
0x5C7E1E: test    al, al
0x5C7E20: mov     eax, [esp+0A0h+var_84]
0x5C7E24: jz      short loc_5C7E29
0x5C7E26: add     ebp, 1
0x5C7E29: mov     eax, [eax+4]
0x5C7E2C: cmp     eax, ebx
0x5C7E2E: mov     [esp+0A0h+var_84], eax
0x5C7E32: jnz     loc_5C7CE1
0x5C7E38: jmp     loc_5C7EFC
0x5C7E3D: mov     eax, ds:0B33A98h
0x5C7E42: add     eax, 3Ch ; '<'
0x5C7E45: cmp     eax, ebx
0x5C7E47: mov     [esp+0A0h+var_84], eax; a3
0x5C7E4B: jz      loc_5C7EFC
0x5C7E51: mov     ebp, [eax]
0x5C7E53: cmp     ebp, ebx
0x5C7E55: jz      short loc_5C7E79
0x5C7E57: mov     eax, [ebp+28h]
0x5C7E5A: cmp     eax, ebx
0x5C7E5C: jnz     short loc_5C7E63
0x5C7E5E: mov     eax, offset EmptyString
0x5C7E63: push    offset aCharactersEyes; "Characters\\Eyes\\EyeDefault.dds"
0x5C7E68: push    eax; Str1
0x5C7E69: call    __strcmp
0x5C7E6E: add     esp, 8
0x5C7E71: test    eax, eax
0x5C7E73: jz      short loc_5C7E88
0x5C7E75: mov     eax, [esp+0A0h+var_84]
0x5C7E79: mov     eax, [eax+4]
0x5C7E7C: cmp     eax, ebx
0x5C7E7E: mov     [esp+0A0h+var_84], eax
0x5C7E82: jnz     short loc_5C7E51
0x5C7E84: mov     ebp, ebx
0x5C7E86: jmp     short loc_5C7EFC
0x5C7E88: mov     eax, [ebp+1Ch]
0x5C7E8B: cmp     eax, ebx
0x5C7E8D: jnz     short loc_5C7E94
0x5C7E8F: mov     eax, offset EmptyString
0x5C7E94: push    eax; int
0x5C7E95: mov     eax, ds:0B38F90h
0x5C7E9A: push    0FB4h; unsigned __int8 *
0x5C7E9F: sub     esp, 8
0x5C7EA2: mov     ecx, esp; this
0x5C7EA4: mov     [esp+0B0h+var_7C+4], esp
0x5C7EA8: push    ebx; a3
0x5C7EA9: push    eax; a2
0x5C7EAA: mov     [ecx], ebx
0x5C7EAC: mov     [ecx+4], bx
0x5C7EB0: mov     [ecx+6], bx
0x5C7EB4: call    BSStringT_Set
0x5C7EB9: mov     eax, ds:0B38F70h
0x5C7EBE: sub     esp, 8
0x5C7EC1: mov     ecx, esp; this
0x5C7EC3: mov     [esp+0B8h+var_7C], esp
0x5C7EC7: push    ebx; a3
0x5C7EC8: push    eax; a2
0x5C7EC9: mov     [esp+0C0h+var_4], 4
0x5C7ED4: mov     [ecx], ebx
0x5C7ED6: mov     [ecx+4], bx
0x5C7EDA: mov     [ecx+6], bx
0x5C7EDE: call    BSStringT_Set
0x5C7EE3: mov     ecx, esi
0x5C7EE5: mov     [esp+0B8h+var_4], edi
0x5C7EEC: call    sub_5C3440
0x5C7EF1: mov     ecx, eax
0x5C7EF3: call    Tile_SetString
0x5C7EF8: mov     ebp, dword ptr [esp+0A0h+var_90+4]
0x5C7EFC: mov     eax, ds:0B38F90h
0x5C7F01: sub     esp, 8
0x5C7F04: mov     ecx, esp; this
0x5C7F06: mov     [esp+0A8h+var_7C+4], esp
0x5C7F0A: push    ebx; a3
0x5C7F0B: push    eax; a2
0x5C7F0C: mov     [ecx], ebx
0x5C7F0E: mov     [ecx+4], bx
0x5C7F12: mov     [ecx+6], bx
0x5C7F16: call    BSStringT_Set
0x5C7F1B: mov     eax, ds:0B38F70h
0x5C7F20: sub     esp, 8
0x5C7F23: mov     ecx, esp; this
0x5C7F25: mov     [esp+0B0h+var_7C], esp
0x5C7F29: push    ebx; a3
0x5C7F2A: push    eax; a2
0x5C7F2B: mov     [esp+0B8h+var_4], 5
0x5C7F36: mov     [ecx], ebx
0x5C7F38: mov     [ecx+4], bx
0x5C7F3C: mov     [ecx+6], bx
0x5C7F40: call    BSStringT_Set
0x5C7F45: mov     ecx, esi
0x5C7F47: mov     [esp+0B0h+var_4], edi
0x5C7F4E: call    sub_5C3440
0x5C7F53: fldz
0x5C7F55: push    ecx
0x5C7F56: fstp    [esp+0A4h+a2]; a3
0x5C7F59: push    0FB2h; a2
0x5C7F5E: mov     ecx, eax; this
0x5C7F60: call    Tile_SetFloat
0x5C7F65: mov     eax, ds:0B38F90h
0x5C7F6A: sub     esp, 8
0x5C7F6D: mov     ecx, esp; this
0x5C7F6F: mov     [esp+0A8h+var_7C+4], esp
0x5C7F73: push    ebx; a3
0x5C7F74: push    eax; a2
0x5C7F75: mov     [ecx], ebx
0x5C7F77: mov     [ecx+4], bx
0x5C7F7B: mov     [ecx+6], bx
0x5C7F7F: call    BSStringT_Set
0x5C7F84: mov     eax, ds:0B38F70h
0x5C7F89: sub     esp, 8
0x5C7F8C: mov     ecx, esp; this
0x5C7F8E: mov     [esp+0B0h+var_7C], esp
0x5C7F92: push    ebx; a3
0x5C7F93: push    eax; a2
0x5C7F94: mov     [esp+0B8h+var_4], 6
0x5C7F9F: mov     [ecx], ebx
0x5C7FA1: mov     [ecx+4], bx
0x5C7FA5: mov     [ecx+6], bx
0x5C7FA9: call    BSStringT_Set
0x5C7FAE: mov     ecx, esi
0x5C7FB0: mov     [esp+0B0h+var_4], edi
0x5C7FB7: call    sub_5C3440
0x5C7FBC: add     ebp, 0FFFFFFFFh
0x5C7FBF: mov     [esp+0A0h+var_7C], ebp
0x5C7FC3: fild    [esp+0A0h+var_7C]
0x5C7FC7: push    ecx
0x5C7FC8: mov     ecx, eax; this
0x5C7FCA: fstp    [esp+0A4h+a2]; a3
0x5C7FCD: push    0FB3h; a2
0x5C7FD2: call    Tile_SetFloat
0x5C7FD7: mov     eax, ds:0B38F90h
0x5C7FDC: push    0FAEh
0x5C7FE1: sub     esp, 8
0x5C7FE4: mov     ecx, esp; this
0x5C7FE6: mov     [esp+0ACh+var_7C+4], esp
0x5C7FEA: push    ebx; a3
0x5C7FEB: push    eax; a2
0x5C7FEC: mov     [ecx], ebx
0x5C7FEE: mov     [ecx+4], bx
0x5C7FF2: mov     [ecx+6], bx
0x5C7FF6: call    BSStringT_Set
0x5C7FFB: mov     eax, ds:0B38F70h
0x5C8000: sub     esp, 8
0x5C8003: mov     [esp+0B4h+var_4], 7
0x5C800E: mov     [esp+0B4h+var_7C], esp
0x5C8012: mov     ecx, esp; this
0x5C8014: push    ebx; a3
0x5C8015: push    eax; a2
0x5C8016: mov     [ecx], ebx
0x5C8018: mov     [ecx+4], bx
0x5C801C: mov     [ecx+6], bx
0x5C8020: call    BSStringT_Set
0x5C8025: mov     ecx, esi
0x5C8027: mov     [esp+0B4h+var_4], edi
0x5C802E: call    sub_5C3440
0x5C8033: fild    dword ptr [esi+87Ch]
0x5C8039: mov     ecx, eax
0x5C803B: fstp    qword ptr [esp+0A4h+var_74]
0x5C803F: call    Tile_GetFloat
0x5C8044: fcomp   qword ptr [esp+0A0h+var_74]
0x5C8048: fnstsw  ax
0x5C804A: test    ah, 44h
0x5C804D: jnp     short loc_5C80B8
0x5C804F: fild    dword ptr [esi+87Ch]
0x5C8055: mov     eax, ds:0B38F90h
0x5C805A: sub     esp, 0Ch
0x5C805D: mov     ecx, esp; this
0x5C805F: fstp    [esp+0ACh+a2]; float
0x5C8063: mov     [esp+0ACh+var_7C+4], esp
0x5C8067: push    ebx; a3
0x5C8068: push    eax; a2
0x5C8069: mov     [ecx], ebx
0x5C806B: mov     [ecx+4], bx
0x5C806F: mov     [ecx+6], bx
0x5C8073: call    BSStringT_Set
0x5C8078: mov     eax, ds:0B38F70h
0x5C807D: sub     esp, 8
0x5C8080: mov     ecx, esp; this
0x5C8082: mov     [esp+0B4h+var_7C], esp
0x5C8086: push    ebx; a3
0x5C8087: push    eax; a2
0x5C8088: mov     [esp+0BCh+var_4], 8
0x5C8093: mov     [ecx], ebx
0x5C8095: mov     [ecx+4], bx
0x5C8099: mov     [ecx+6], bx
0x5C809D: call    BSStringT_Set
0x5C80A2: mov     ecx, esi
0x5C80A4: mov     [esp+0B4h+var_4], edi
0x5C80AB: call    sub_5C3440
0x5C80B0: push    eax; int
0x5C80B1: mov     ecx, esi
0x5C80B3: call    sub_5C2B50
0x5C80B8: mov     eax, ds:0B33A98h
0x5C80BD: add     eax, 44h ; 'D'
0x5C80C0: cmp     eax, ebx
0x5C80C2: mov     [esp+0A0h+var_7C], eax
0x5C80C6: mov     dword ptr [esp+0A0h+var_90+4], ebx
0x5C80CA: jz      loc_5C82BF
0x5C80D0: mov     ebp, [eax]
0x5C80D2: cmp     ebp, ebx
0x5C80D4: mov     [esp+0A0h+var_84], ebp
0x5C80D8: jz      loc_5C82B0
0x5C80DE: mov     ecx, [esp+0A0h+var_88]
0x5C80E2: cmp     [ecx+0E8h], ebp
0x5C80E8: jnz     loc_5C82A5
0x5C80EE: mov     eax, [ebp+1Ch]
0x5C80F1: cmp     eax, ebx
0x5C80F3: jnz     short loc_5C80FA
0x5C80F5: mov     eax, offset EmptyString
0x5C80FA: push    eax
0x5C80FB: mov     eax, ds:0B38F78h
0x5C8100: push    0FB4h
0x5C8105: sub     esp, 8
0x5C8108: mov     ecx, esp; this
0x5C810A: mov     [esp+0B0h+var_7C+4], esp
0x5C810E: push    ebx; a3
0x5C810F: push    eax; a2
0x5C8110: mov     [ecx], ebx
0x5C8112: mov     [ecx+4], bx
0x5C8116: mov     [ecx+6], bx
0x5C811A: call    BSStringT_Set
0x5C811F: mov     eax, ds:0B38F70h
0x5C8124: sub     esp, 8
0x5C8127: mov     ecx, esp; this
0x5C8129: mov     [esp+0B8h+var_74], esp
0x5C812D: push    ebx; a3
0x5C812E: push    eax; a2
0x5C812F: mov     [esp+0C0h+var_4], 9
0x5C813A: mov     [ecx], ebx
0x5C813C: mov     [ecx+4], bx
0x5C8140: mov     [ecx+6], bx
0x5C8144: call    BSStringT_Set
0x5C8149: mov     ecx, esi
0x5C814B: mov     [esp+0B8h+var_4], edi
0x5C8152: call    sub_5C3440
0x5C8157: mov     ecx, eax
0x5C8159: call    Tile_SetString
0x5C815E: mov     eax, [ebp+1Ch]
0x5C8161: cmp     eax, ebx
0x5C8163: jnz     short loc_5C816A
0x5C8165: mov     eax, offset EmptyString
0x5C816A: push    eax
0x5C816B: mov     eax, ds:0B38F78h
0x5C8170: push    0FB4h
0x5C8175: sub     esp, 8
0x5C8178: mov     ecx, esp; this
0x5C817A: mov     [esp+0B0h+var_74], esp
0x5C817E: push    ebx; a3
0x5C817F: push    eax; a2
0x5C8180: mov     [ecx], ebx
0x5C8182: mov     [ecx+4], bx
0x5C8186: mov     [ecx+6], bx
0x5C818A: call    BSStringT_Set
0x5C818F: mov     eax, ds:0B38F78h
0x5C8194: sub     esp, 8
0x5C8197: mov     ecx, esp; this
0x5C8199: mov     [esp+0B8h+var_7C+4], esp
0x5C819D: push    ebx; a3
0x5C819E: push    eax; a2
0x5C819F: mov     [esp+0C0h+var_4], 0Ah
0x5C81AA: mov     [ecx], ebx
0x5C81AC: mov     [ecx+4], bx
0x5C81B0: mov     [ecx+6], bx
0x5C81B4: call    BSStringT_Set
0x5C81B9: mov     ecx, esi
0x5C81BB: mov     [esp+0B8h+var_4], edi
0x5C81C2: call    sub_5C3440
0x5C81C7: mov     ecx, eax
0x5C81C9: call    Tile_SetString
0x5C81CE: mov     edx, dword ptr [esp+0A0h+var_90+4]
0x5C81D2: mov     ebp, [esp+0A0h+var_84]
0x5C81D6: mov     [esi+86Ch], edx
0x5C81DC: mov     eax, [ebp+24h]
0x5C81DF: mov     edx, [eax+10h]
0x5C81E2: add     ebp, 24h ; '$'
0x5C81E5: push    43534544h; a3
0x5C81EA: push    ebx; a3
0x5C81EB: mov     ecx, ebp
0x5C81ED: call    edx
0x5C81EF: test    eax, eax
0x5C81F1: jz      short loc_5C8235
0x5C81F3: mov     eax, [ebp+0]
0x5C81F6: mov     edx, [eax+10h]
0x5C81F9: push    43534544h
0x5C81FE: push    ebx
0x5C81FF: mov     ecx, ebp
0x5C8201: call    edx
0x5C8203: push    eax
0x5C8204: mov     eax, ds:0B38FB0h
0x5C8209: push    0FB4h
0x5C820E: sub     esp, 8
0x5C8211: mov     ecx, esp; this
0x5C8213: mov     [esp+0B0h+var_74], esp
0x5C8217: push    ebx; a3
0x5C8218: push    eax; a2
0x5C8219: mov     [ecx], ebx
0x5C821B: mov     [ecx+4], bx
0x5C821F: mov     [ecx+6], bx
0x5C8223: call    BSStringT_Set
0x5C8228: mov     [esp+0B0h+var_4], 0Bh
0x5C8233: jmp     short loc_5C8269
0x5C8235: mov     eax, ds:0B38FB0h
0x5C823A: push    offset word_A36430; a3
0x5C823F: push    0FB4h; a3
0x5C8244: sub     esp, 8
0x5C8247: mov     ecx, esp; this
0x5C8249: mov     [esp+0B0h+var_74], esp
0x5C824D: push    ebx; a3
0x5C824E: push    eax; a2
0x5C824F: mov     [ecx], ebx
0x5C8251: mov     [ecx+4], bx
0x5C8255: mov     [ecx+6], bx
0x5C8259: call    BSStringT_Set
0x5C825E: mov     [esp+0B0h+var_4], 0Ch
0x5C8269: mov     eax, ds:0B38F78h
0x5C826E: sub     esp, 8
0x5C8271: mov     ecx, esp; this
0x5C8273: mov     [esp+0B8h+var_7C+4], esp
0x5C8277: push    ebx; a3
0x5C8278: mov     [ecx], ebx
0x5C827A: mov     [ecx+4], bx
0x5C827E: push    eax; a2
0x5C827F: mov     [ecx+6], bx
0x5C8283: call    BSStringT_Set
0x5C8288: mov     ecx, esi
0x5C828A: mov     [esp+0B8h+var_4], edi
0x5C8291: call    sub_5C3440
0x5C8296: mov     ecx, eax
0x5C8298: call    Tile_SetString
0x5C829D: mov     ebp, [esp+0A0h+var_84]
0x5C82A1: mov     eax, [esp+0A0h+var_7C]
0x5C82A5: test    byte ptr [ebp+70h], 1
0x5C82A9: jz      short loc_5C82B0
0x5C82AB: add     dword ptr [esp+0A0h+var_90+4], 1
0x5C82B0: mov     eax, [eax+4]
0x5C82B3: cmp     eax, ebx
0x5C82B5: mov     [esp+0A0h+var_7C], eax
0x5C82B9: jnz     loc_5C80D0
0x5C82BF: mov     eax, ds:0B38F78h
0x5C82C4: sub     esp, 8
0x5C82C7: mov     ecx, esp; this
0x5C82C9: mov     [esp+0A8h+var_74], esp
0x5C82CD: push    ebx; a3
0x5C82CE: push    eax; a2
0x5C82CF: mov     [ecx], ebx
0x5C82D1: mov     [ecx+4], bx
0x5C82D5: mov     [ecx+6], bx
0x5C82D9: call    BSStringT_Set
0x5C82DE: mov     eax, ds:0B38F78h
0x5C82E3: sub     esp, 8
0x5C82E6: mov     ecx, esp; this
0x5C82E8: mov     [esp+0B0h+var_7C+4], esp
0x5C82EC: push    ebx; a3
0x5C82ED: push    eax; a2
0x5C82EE: mov     [esp+0B8h+var_4], 0Dh
0x5C82F9: mov     [ecx], ebx
0x5C82FB: mov     [ecx+4], bx
0x5C82FF: mov     [ecx+6], bx
0x5C8303: call    BSStringT_Set
0x5C8308: mov     ecx, esi
0x5C830A: mov     [esp+0B0h+var_4], edi
0x5C8311: call    sub_5C3440
0x5C8316: fldz
0x5C8318: push    ecx
0x5C8319: fstp    [esp+0A4h+a2]; a3
0x5C831C: push    0FB2h; a2
0x5C8321: mov     ecx, eax; this
0x5C8323: call    Tile_SetFloat
0x5C8328: mov     eax, ds:0B38F78h
0x5C832D: sub     esp, 8
0x5C8330: mov     ecx, esp; this
0x5C8332: mov     [esp+0A8h+var_74], esp
0x5C8336: push    ebx; a3
0x5C8337: push    eax; a2
0x5C8338: mov     [ecx], ebx
0x5C833A: mov     [ecx+4], bx
0x5C833E: mov     [ecx+6], bx
0x5C8342: call    BSStringT_Set
0x5C8347: mov     eax, ds:0B38F78h
0x5C834C: sub     esp, 8
0x5C834F: mov     ecx, esp; this
0x5C8351: mov     [esp+0B0h+var_7C+4], esp; a3
0x5C8355: push    ebx; a3
0x5C8356: push    eax; a2
0x5C8357: mov     [esp+0B8h+var_4], 0Eh
0x5C8362: mov     [ecx], ebx
0x5C8364: mov     [ecx+4], bx
0x5C8368: mov     [ecx+6], bx
0x5C836C: call    BSStringT_Set
0x5C8371: mov     ecx, esi
0x5C8373: mov     [esp+0B0h+var_4], edi
0x5C837A: call    sub_5C3440
0x5C837F: mov     ecx, dword ptr [esp+0A0h+var_90+4]
0x5C8383: add     ecx, 0FFFFFFFFh
0x5C8386: mov     [esp+0A0h+var_7C], ecx; a3
0x5C838A: fild    [esp+0A0h+var_7C]
0x5C838E: push    ecx
0x5C838F: mov     ecx, eax; this
0x5C8391: fstp    [esp+0A4h+a2]; a3
0x5C8394: push    0FB3h; a2
0x5C8399: call    Tile_SetFloat
0x5C839E: mov     eax, ds:0B38F78h
0x5C83A3: push    0FAEh
0x5C83A8: sub     esp, 8
0x5C83AB: mov     ecx, esp; this
0x5C83AD: mov     [esp+0ACh+var_74], esp
0x5C83B1: push    ebx; a3
0x5C83B2: push    eax; a2
0x5C83B3: mov     [ecx], ebx
0x5C83B5: mov     [ecx+4], bx
0x5C83B9: mov     [ecx+6], bx
0x5C83BD: call    BSStringT_Set
0x5C83C2: mov     eax, ds:0B38F78h
0x5C83C7: sub     esp, 8
0x5C83CA: mov     [esp+0B4h+var_4], 0Fh
0x5C83D5: mov     [esp+0B4h+var_7C+4], esp
0x5C83D9: mov     ecx, esp; this
0x5C83DB: push    ebx; a3
0x5C83DC: push    eax; a2
0x5C83DD: mov     [ecx], ebx
0x5C83DF: mov     [ecx+4], bx
0x5C83E3: mov     [ecx+6], bx
0x5C83E7: call    BSStringT_Set
0x5C83EC: mov     ecx, esi
0x5C83EE: mov     [esp+0B4h+var_4], edi
0x5C83F5: call    sub_5C3440
0x5C83FA: fild    dword ptr [esi+86Ch]
0x5C8400: mov     ecx, eax
0x5C8402: fstp    qword ptr [esp+0A4h+var_74]
0x5C8406: call    Tile_GetFloat
0x5C840B: fcomp   qword ptr [esp+0A0h+var_74]
0x5C840F: fnstsw  ax
0x5C8411: test    ah, 44h
0x5C8414: jnp     short loc_5C847F
0x5C8416: fild    dword ptr [esi+86Ch]
0x5C841C: mov     eax, ds:0B38F78h
0x5C8421: sub     esp, 0Ch
0x5C8424: mov     ecx, esp; this
0x5C8426: fstp    [esp+0ACh+a2]; float
0x5C842A: mov     [esp+0ACh+var_74], esp
0x5C842E: push    ebx; a3
0x5C842F: push    eax; a2
0x5C8430: mov     [ecx], ebx
0x5C8432: mov     [ecx+4], bx
0x5C8436: mov     [ecx+6], bx
0x5C843A: call    BSStringT_Set
0x5C843F: mov     eax, ds:0B38F78h
0x5C8444: sub     esp, 8
0x5C8447: mov     ecx, esp; this
0x5C8449: mov     [esp+0B4h+var_7C+4], esp
0x5C844D: push    ebx; a3
0x5C844E: push    eax; a2
0x5C844F: mov     [esp+0BCh+var_4], 10h
0x5C845A: mov     [ecx], ebx
0x5C845C: mov     [ecx+4], bx
0x5C8460: mov     [ecx+6], bx
0x5C8464: call    BSStringT_Set
0x5C8469: mov     ecx, esi
0x5C846B: mov     [esp+0B4h+var_4], edi
0x5C8472: call    sub_5C3440
0x5C8477: push    eax; int
0x5C8478: mov     ecx, esi
0x5C847A: call    sub_5C2B50
0x5C847F: mov     edx, [esp+0A0h+var_88]
0x5C8483: mov     eax, [edx+0E8h]
0x5C8489: add     eax, 8Ch ; 'Œ'
0x5C848E: cmp     eax, ebx
0x5C8490: mov     [esp+0A0h+var_84], eax; a3
0x5C8494: mov     dword ptr [esp+0A0h+var_90+4], ebx; a3
0x5C8498: jz      loc_5C86E7
0x5C849E: cmp     [eax+4], ebx
0x5C84A1: jnz     short loc_5C84B0
0x5C84A3: cmp     [eax], ebx
0x5C84A5: jz      loc_5C86E7
0x5C84AB: jmp     short loc_5C84B0
0x5C84AD: align 10h
0x5C84B0: mov     ebp, [eax]
0x5C84B2: cmp     ebp, ebx
0x5C84B4: jz      loc_5C86D6
0x5C84BA: mov     eax, [esp+0A0h+var_88]
0x5C84BE: cmp     [eax+1C8h], ebx
0x5C84C4: jnz     loc_5C85B8
0x5C84CA: mov     ecx, ebp
0x5C84CC: call    sub_51FE80
0x5C84D1: test    al, al
0x5C84D3: jz      loc_5C85B8
0x5C84D9: mov     ecx, [esp+0A0h+var_88]
0x5C84DD: push    ecx
0x5C84DE: mov     ecx, ebp
0x5C84E0: call    sub_51FFD0
0x5C84E5: test    al, al
0x5C84E7: jz      loc_5C85B8
0x5C84ED: cmp     dword ptr [esp+0A0h+var_90+4], ebx
0x5C84F1: jnz     loc_5C85B8
0x5C84F7: mov     eax, [ebp+1Ch]
0x5C84FA: cmp     eax, ebx
0x5C84FC: jnz     short loc_5C8503
0x5C84FE: mov     eax, offset EmptyString
0x5C8503: mov     edx, ds:0B38F88h
0x5C8509: push    eax
0x5C850A: push    0FB4h
0x5C850F: sub     esp, 8
0x5C8512: mov     ecx, esp
0x5C8514: mov     [esp+0B0h+var_74], esp
0x5C8518: push    edx; int
0x5C8519: call    BSStringT_constr_str
0x5C851E: mov     eax, ds:0B38F70h
0x5C8523: sub     esp, 8
0x5C8526: mov     ecx, esp
0x5C8528: mov     [esp+0B8h+var_7C+4], esp
0x5C852C: push    eax
0x5C852D: mov     [esp+0BCh+var_4], 11h
0x5C8538: call    BSStringT_constr_str
0x5C853D: mov     ecx, esi
0x5C853F: mov     [esp+0B8h+var_4], edi
0x5C8546: call    sub_5C3440
0x5C854B: mov     ecx, eax
0x5C854D: call    Tile_SetString
0x5C8552: mov     eax, [ebp+1Ch]
0x5C8555: cmp     eax, ebx
0x5C8557: jnz     short loc_5C855E
0x5C8559: mov     eax, offset EmptyString
0x5C855E: mov     edx, ds:0B38FB8h
0x5C8564: push    eax
0x5C8565: push    0FB4h
0x5C856A: sub     esp, 8
0x5C856D: mov     ecx, esp
0x5C856F: mov     [esp+0B0h+var_74], esp
0x5C8573: push    edx; int
0x5C8574: call    BSStringT_constr_str
0x5C8579: mov     eax, ds:0B38F88h
0x5C857E: sub     esp, 8
0x5C8581: mov     ecx, esp
0x5C8583: mov     [esp+0B8h+var_7C+4], esp
0x5C8587: push    eax
0x5C8588: mov     [esp+0BCh+var_4], 12h
0x5C8593: call    BSStringT_constr_str
0x5C8598: mov     ecx, esi
0x5C859A: mov     [esp+0B8h+var_4], edi
0x5C85A1: call    sub_5C3440
0x5C85A6: mov     ecx, eax
0x5C85A8: call    Tile_SetString
0x5C85AD: mov     [esi+870h], ebx
0x5C85B3: jmp     loc_5C86B2
0x5C85B8: mov     ecx, [esp+0A0h+var_88]
0x5C85BC: cmp     [ecx+1C8h], ebp
0x5C85C2: jnz     loc_5C86B2
0x5C85C8: mov     eax, [ebp+1Ch]
0x5C85CB: cmp     eax, ebx
0x5C85CD: jnz     short loc_5C85D4
0x5C85CF: mov     eax, offset EmptyString
0x5C85D4: push    eax
0x5C85D5: mov     eax, ds:0B38F88h
0x5C85DA: push    0FB4h
0x5C85DF: sub     esp, 8
0x5C85E2: mov     ecx, esp; this
0x5C85E4: mov     [esp+0B0h+var_74], esp
0x5C85E8: push    ebx; a3
0x5C85E9: push    eax; a2
0x5C85EA: mov     [ecx], ebx
0x5C85EC: mov     [ecx+4], bx
0x5C85F0: mov     [ecx+6], bx
0x5C85F4: call    BSStringT_Set
0x5C85F9: mov     eax, ds:0B38F70h
0x5C85FE: sub     esp, 8
0x5C8601: mov     ecx, esp; this
0x5C8603: mov     [esp+0B8h+var_7C+4], esp
0x5C8607: push    ebx; a3
0x5C8608: push    eax; a2
0x5C8609: mov     [esp+0C0h+var_4], 13h
0x5C8614: mov     [ecx], ebx
0x5C8616: mov     [ecx+4], bx
0x5C861A: mov     [ecx+6], bx
0x5C861E: call    BSStringT_Set
0x5C8623: mov     ecx, esi
0x5C8625: mov     [esp+0B8h+var_4], edi
0x5C862C: call    sub_5C3440
0x5C8631: mov     ecx, eax
0x5C8633: call    Tile_SetString
0x5C8638: mov     eax, [ebp+1Ch]
0x5C863B: cmp     eax, ebx
0x5C863D: jnz     short loc_5C8644
0x5C863F: mov     eax, offset EmptyString
0x5C8644: push    eax
0x5C8645: mov     eax, ds:0B38FB8h
0x5C864A: push    0FB4h
0x5C864F: sub     esp, 8
0x5C8652: mov     ecx, esp; this
0x5C8654: mov     [esp+0B0h+var_74], esp
0x5C8658: push    ebx; a3
0x5C8659: push    eax; a2
0x5C865A: mov     [ecx], ebx
0x5C865C: mov     [ecx+4], bx
0x5C8660: mov     [ecx+6], bx
0x5C8664: call    BSStringT_Set
0x5C8669: mov     eax, ds:0B38F88h
0x5C866E: sub     esp, 8
0x5C8671: mov     ecx, esp; this
0x5C8673: mov     [esp+0B8h+var_7C+4], esp
0x5C8677: push    ebx; a3
0x5C8678: push    eax; a2
0x5C8679: mov     [esp+0C0h+var_4], 14h
0x5C8684: mov     [ecx], ebx
0x5C8686: mov     [ecx+4], bx
0x5C868A: mov     [ecx+6], bx
0x5C868E: call    BSStringT_Set
0x5C8693: mov     ecx, esi
0x5C8695: mov     [esp+0B8h+var_4], edi
0x5C869C: call    sub_5C3440
0x5C86A1: mov     ecx, eax
0x5C86A3: call    Tile_SetString
0x5C86A8: mov     edx, dword ptr [esp+0A0h+var_90+4]
0x5C86AC: mov     [esi+870h], edx
0x5C86B2: mov     ecx, ebp
0x5C86B4: call    sub_51FE80
0x5C86B9: test    al, al
0x5C86BB: jz      short loc_5C86D2
0x5C86BD: mov     eax, [esp+0A0h+var_88]
0x5C86C1: push    eax
0x5C86C2: mov     ecx, ebp
0x5C86C4: call    sub_51FFD0
0x5C86C9: test    al, al
0x5C86CB: jz      short loc_5C86D2
0x5C86CD: add     dword ptr [esp+0A0h+var_90+4], 1
0x5C86D2: mov     eax, [esp+0A0h+var_84]
0x5C86D6: mov     eax, [eax+4]
0x5C86D9: cmp     eax, ebx
0x5C86DB: mov     [esp+0A0h+var_84], eax
0x5C86DF: jnz     loc_5C84B0
0x5C86E5: jmp     short loc_5C8751
0x5C86E7: mov     ecx, ds:0B38B80h
0x5C86ED: mov     eax, ds:0B38F88h
0x5C86F2: push    ecx; int
0x5C86F3: push    0FB4h; unsigned __int8 *
0x5C86F8: sub     esp, 8
0x5C86FB: mov     ecx, esp; this
0x5C86FD: mov     [esp+0B0h+var_74], esp
0x5C8701: push    ebx; a3
0x5C8702: push    eax; a2
0x5C8703: mov     [ecx], ebx
0x5C8705: mov     [ecx+4], bx
0x5C8709: mov     [ecx+6], bx
0x5C870D: call    BSStringT_Set
0x5C8712: mov     eax, ds:0B38F70h
0x5C8717: sub     esp, 8
0x5C871A: mov     ecx, esp; this
0x5C871C: mov     [esp+0B8h+var_7C+4], esp
0x5C8720: push    ebx; a3
0x5C8721: push    eax; a2
0x5C8722: mov     [esp+0C0h+var_4], 15h
0x5C872D: mov     [ecx], ebx
0x5C872F: mov     [ecx+4], bx
0x5C8733: mov     [ecx+6], bx
0x5C8737: call    BSStringT_Set
0x5C873C: mov     ecx, esi
0x5C873E: mov     [esp+0B8h+var_4], edi
0x5C8745: call    sub_5C3440
0x5C874A: mov     ecx, eax
0x5C874C: call    Tile_SetString
0x5C8751: mov     eax, ds:0B38FB8h
0x5C8756: sub     esp, 8
0x5C8759: mov     ecx, esp; this
0x5C875B: mov     [esp+0A8h+var_74], esp
0x5C875F: push    ebx; a3
0x5C8760: push    eax; a2
0x5C8761: mov     [ecx], ebx
0x5C8763: mov     [ecx+4], bx
0x5C8767: mov     [ecx+6], bx
0x5C876B: call    BSStringT_Set
0x5C8770: mov     eax, ds:0B38F88h
0x5C8775: sub     esp, 8
0x5C8778: mov     ecx, esp; this
0x5C877A: mov     [esp+0B0h+var_7C+4], esp
0x5C877E: push    ebx; a3
0x5C877F: push    eax; a2
0x5C8780: mov     [esp+0B8h+var_4], 16h
0x5C878B: mov     [ecx], ebx
0x5C878D: mov     [ecx+4], bx
0x5C8791: mov     [ecx+6], bx
0x5C8795: call    BSStringT_Set
0x5C879A: mov     ecx, esi
0x5C879C: mov     [esp+0B0h+var_4], edi
0x5C87A3: call    sub_5C3440
0x5C87A8: fldz
0x5C87AA: push    ecx
0x5C87AB: fstp    [esp+0A4h+a2]; a3
0x5C87AE: push    0FB2h; a2
0x5C87B3: mov     ecx, eax; this
0x5C87B5: call    Tile_SetFloat
0x5C87BA: mov     eax, ds:0B38FB8h
0x5C87BF: sub     esp, 8
0x5C87C2: mov     ecx, esp; this
0x5C87C4: mov     [esp+0A8h+var_74], esp
0x5C87C8: push    ebx; a3
0x5C87C9: push    eax; a2
0x5C87CA: mov     [ecx], ebx
0x5C87CC: mov     [ecx+4], bx
0x5C87D0: mov     [ecx+6], bx
0x5C87D4: call    BSStringT_Set
0x5C87D9: mov     eax, ds:0B38F88h
0x5C87DE: sub     esp, 8
0x5C87E1: mov     ecx, esp; this
0x5C87E3: mov     [esp+0B0h+var_7C+4], esp
0x5C87E7: push    ebx; a3
0x5C87E8: push    eax; a2
0x5C87E9: mov     [esp+0B8h+var_4], 17h
0x5C87F4: mov     [ecx], ebx
0x5C87F6: mov     [ecx+4], bx
0x5C87FA: mov     [ecx+6], bx
0x5C87FE: call    BSStringT_Set
0x5C8803: mov     ecx, esi
0x5C8805: mov     [esp+0B0h+var_4], edi
0x5C880C: call    sub_5C3440
0x5C8811: mov     edx, dword ptr [esp+0A0h+var_90+4]
0x5C8815: add     edx, 0FFFFFFFFh
0x5C8818: mov     [esp+0A0h+var_7C], edx; a3
0x5C881C: fild    [esp+0A0h+var_7C]
0x5C8820: push    ecx
0x5C8821: mov     ecx, eax; this
0x5C8823: fstp    [esp+0A4h+a2]; a3
0x5C8826: push    0FB3h; a2
0x5C882B: call    Tile_SetFloat
0x5C8830: mov     eax, ds:0B38FB8h
0x5C8835: push    0FAEh
0x5C883A: sub     esp, 8
0x5C883D: mov     ecx, esp; this
0x5C883F: mov     [esp+0ACh+var_74], esp
0x5C8843: push    ebx; a3
0x5C8844: push    eax; a2
0x5C8845: mov     [ecx], ebx
0x5C8847: mov     [ecx+4], bx
0x5C884B: mov     [ecx+6], bx
0x5C884F: call    BSStringT_Set
0x5C8854: mov     eax, ds:0B38F88h
0x5C8859: sub     esp, 8
0x5C885C: mov     [esp+0B4h+var_4], 18h
0x5C8867: mov     [esp+0B4h+var_7C+4], esp
0x5C886B: mov     ecx, esp; this
0x5C886D: push    ebx; a3
0x5C886E: push    eax; a2
0x5C886F: mov     [ecx], ebx
0x5C8871: mov     [ecx+4], bx
0x5C8875: mov     [ecx+6], bx
0x5C8879: call    BSStringT_Set
0x5C887E: mov     ecx, esi
0x5C8880: mov     [esp+0B4h+var_4], edi
0x5C8887: call    sub_5C3440
0x5C888C: fild    dword ptr [esi+870h]
0x5C8892: mov     ecx, eax
0x5C8894: fstp    qword ptr [esp+0A4h+var_74]
0x5C8898: call    Tile_GetFloat
0x5C889D: fcomp   qword ptr [esp+0A0h+var_74]
0x5C88A1: fnstsw  ax
0x5C88A3: test    ah, 44h
0x5C88A6: jnp     short loc_5C8911
0x5C88A8: fild    dword ptr [esi+870h]
0x5C88AE: mov     eax, ds:0B38FB8h
0x5C88B3: sub     esp, 0Ch
0x5C88B6: mov     ecx, esp; this
0x5C88B8: fstp    [esp+0ACh+a2]; int
0x5C88BC: mov     [esp+0ACh+var_74], esp
0x5C88C0: push    ebx; a3
0x5C88C1: push    eax; a2
0x5C88C2: mov     [ecx], ebx
0x5C88C4: mov     [ecx+4], bx
0x5C88C8: mov     [ecx+6], bx
0x5C88CC: call    BSStringT_Set
0x5C88D1: mov     eax, ds:0B38F88h
0x5C88D6: sub     esp, 8
0x5C88D9: mov     ecx, esp; this
0x5C88DB: mov     [esp+0B4h+var_7C+4], esp
0x5C88DF: push    ebx; a3
0x5C88E0: push    eax; a2
0x5C88E1: mov     [esp+0BCh+var_4], 19h
0x5C88EC: mov     [ecx], ebx
0x5C88EE: mov     [ecx+4], bx
0x5C88F2: mov     [ecx+6], bx
0x5C88F6: call    BSStringT_Set
0x5C88FB: mov     ecx, esi
0x5C88FD: mov     [esp+0B4h+var_4], edi
0x5C8904: call    sub_5C3440
0x5C8909: push    eax; unsigned __int8 *
0x5C890A: mov     ecx, esi
0x5C890C: call    sub_5C2B50
0x5C8911: mov     eax, ds:0B39330h
0x5C8916: sub     esp, 8
0x5C8919: mov     ecx, esp; this
0x5C891B: mov     [esp+0A8h+var_74], esp
0x5C891F: push    ebx; a3
0x5C8920: push    eax; a2
0x5C8921: mov     [ecx], ebx
0x5C8923: mov     [ecx+4], bx
0x5C8927: mov     [ecx+6], bx
0x5C892B: call    BSStringT_Set
0x5C8930: mov     eax, ds:0B38F88h
0x5C8935: sub     esp, 8
0x5C8938: mov     ecx, esp; this
0x5C893A: mov     [esp+0B0h+var_7C+4], esp; a3
0x5C893E: push    ebx; a3
0x5C893F: push    eax; a2
0x5C8940: mov     [esp+0B8h+var_4], 1Ah
0x5C894B: mov     [ecx], ebx
0x5C894D: mov     [ecx+4], bx
0x5C8951: mov     [ecx+6], bx
0x5C8955: call    BSStringT_Set
0x5C895A: mov     ecx, esi
0x5C895C: mov     [esp+0B0h+var_4], edi
0x5C8963: call    sub_5C3440
0x5C8968: fldz
0x5C896A: push    ecx
0x5C896B: fstp    [esp+0A4h+a2]; a3
0x5C896E: push    0FB2h; a2
0x5C8973: mov     ecx, eax; this
0x5C8975: call    Tile_SetFloat
0x5C897A: mov     eax, ds:0B39330h
0x5C897F: sub     esp, 8
0x5C8982: mov     ecx, esp; this
0x5C8984: mov     [esp+0A8h+var_74], esp
0x5C8988: push    ebx; a3
0x5C8989: push    eax; a2
0x5C898A: mov     [ecx], ebx
0x5C898C: mov     [ecx+4], bx
0x5C8990: mov     [ecx+6], bx
0x5C8994: call    BSStringT_Set
0x5C8999: mov     eax, ds:0B38F88h
0x5C899E: sub     esp, 8
0x5C89A1: mov     ecx, esp; this
0x5C89A3: mov     [esp+0B0h+var_7C+4], esp
0x5C89A7: push    ebx; a3
0x5C89A8: push    eax; a2
0x5C89A9: mov     [esp+0B8h+var_4], 1Bh
0x5C89B4: mov     [ecx], ebx
0x5C89B6: mov     [ecx+4], bx
0x5C89BA: mov     [ecx+6], bx
0x5C89BE: call    BSStringT_Set
0x5C89C3: mov     ecx, esi
0x5C89C5: mov     [esp+0B0h+var_4], edi
0x5C89CC: call    sub_5C3440
0x5C89D1: fld     dword ptr ds:0A468FCh
0x5C89D7: push    ecx
0x5C89D8: fstp    [esp+0A4h+a2]; a3
0x5C89DB: push    0FB3h; a2
0x5C89E0: mov     ecx, eax; this
0x5C89E2: call    Tile_SetFloat
0x5C89E7: mov     eax, ds:0B39330h
0x5C89EC: push    0FAEh; int
0x5C89F1: sub     esp, 8
0x5C89F4: mov     ecx, esp; this
0x5C89F6: mov     [esp+0ACh+var_74], esp
0x5C89FA: push    ebx; a3
0x5C89FB: push    eax; a2
0x5C89FC: mov     [ecx], ebx
0x5C89FE: mov     [ecx+4], bx
0x5C8A02: mov     [ecx+6], bx
0x5C8A06: call    BSStringT_Set
0x5C8A0B: mov     eax, ds:0B38F88h
0x5C8A10: sub     esp, 8
0x5C8A13: mov     ecx, esp; this
0x5C8A15: mov     [esp+0B4h+var_4], 1Ch
0x5C8A20: mov     [esp+0B4h+var_7C+4], esp
0x5C8A24: mov     [ecx], ebx
0x5C8A26: mov     [ecx+4], bx
0x5C8A2A: push    ebx; a3
0x5C8A2B: push    eax; a2
0x5C8A2C: mov     [ecx+6], bx
0x5C8A30: call    BSStringT_Set
0x5C8A35: mov     ecx, esi
0x5C8A37: mov     [esp+0B4h+var_4], edi
0x5C8A3E: call    sub_5C3440
0x5C8A43: mov     ecx, eax
0x5C8A45: call    Tile_GetFloat
0x5C8A4A: call    Double_To_SInt32
0x5C8A4F: cmp     [esp+0A0h+arg_0], bl
0x5C8A56: mov     [esi+88Ch], eax
0x5C8A5C: mov     eax, [esp+0A0h+var_88]
0x5C8A60: mov     eax, [eax+1E8h]
0x5C8A66: mov     [esi+878h], eax
0x5C8A6C: jz      short loc_5C8A76
0x5C8A6E: cmp     ds:0B14500h, bl
0x5C8A74: jz      short loc_5C8A7D
0x5C8A76: mov     ecx, esi
0x5C8A78: call    sub_5C5F00
0x5C8A7D: movzx   ecx, byte ptr [esi+878h]
0x5C8A84: mov     [esp+0A0h+var_7C], ecx; a3
0x5C8A88: mov     eax, ds:0B38FC0h
0x5C8A8D: fild    [esp+0A0h+var_7C]
0x5C8A91: sub     esp, 8
0x5C8A94: mov     ecx, esp; this
0x5C8A96: mov     [esp+0A8h+var_74], esp; a3
0x5C8A9A: fdiv    qword ptr ds:0A3DDD8h
0x5C8AA0: push    ebx; a3
0x5C8AA1: push    eax; a2
0x5C8AA2: mov     [ecx], ebx
0x5C8AA4: mov     [ecx+4], bx
0x5C8AA8: mov     [ecx+6], bx
0x5C8AAC: fstp    [esp+0B0h+var_84]; a3
0x5C8AB0: call    BSStringT_Set
0x5C8AB5: mov     eax, ds:0B38F88h
0x5C8ABA: sub     esp, 8
0x5C8ABD: mov     ecx, esp; this
0x5C8ABF: mov     [esp+0B0h+var_7C+4], esp
0x5C8AC3: push    ebx; a3
0x5C8AC4: push    eax; a2
0x5C8AC5: mov     [esp+0B8h+var_4], 1Dh
0x5C8AD0: mov     [ecx], ebx
0x5C8AD2: mov     [ecx+4], bx
0x5C8AD6: mov     [ecx+6], bx
0x5C8ADA: call    BSStringT_Set
0x5C8ADF: mov     ecx, esi
0x5C8AE1: mov     [esp+0B0h+var_4], edi
0x5C8AE8: call    sub_5C3440
0x5C8AED: fld     dword ptr ds:0A6D2D8h
0x5C8AF3: push    ecx
0x5C8AF4: mov     ebp, eax
0x5C8AF6: fstp    [esp+0A4h+a2]; a3
0x5C8AF9: push    0FB1h; a2
0x5C8AFE: mov     ecx, ebp; this
0x5C8B00: call    Tile_SetFloat
0x5C8B05: fld     [esp+0A0h+var_84]
0x5C8B09: push    ecx
0x5C8B0A: fstp    [esp+0A4h+a2]; a3
0x5C8B0D: push    0FB1h; a2
0x5C8B12: mov     ecx, ebp; this
0x5C8B14: call    Tile_SetFloat
0x5C8B19: fldz
0x5C8B1B: push    ecx
0x5C8B1C: fstp    [esp+0A4h+a2]; a3
0x5C8B1F: push    0FB1h; a2
0x5C8B24: mov     ecx, ebp; this
0x5C8B26: call    Tile_SetFloat
0x5C8B2B: movzx   edx, byte ptr [esi+879h]
0x5C8B32: mov     [esp+0A0h+var_7C], edx; a3
0x5C8B36: mov     eax, ds:0B38FC8h
0x5C8B3B: fild    [esp+0A0h+var_7C]
0x5C8B3F: sub     esp, 8
0x5C8B42: mov     ecx, esp; this
0x5C8B44: mov     [esp+0A8h+var_74], esp; a3
0x5C8B48: fdiv    qword ptr ds:0A3DDD8h
0x5C8B4E: push    ebx; a3
0x5C8B4F: push    eax; a2
0x5C8B50: mov     [ecx], ebx
0x5C8B52: mov     [ecx+4], bx
0x5C8B56: mov     [ecx+6], bx
0x5C8B5A: fstp    [esp+0B0h+var_84]; a3
0x5C8B5E: call    BSStringT_Set
0x5C8B63: mov     eax, ds:0B38F88h
0x5C8B68: sub     esp, 8
0x5C8B6B: mov     ecx, esp; this
0x5C8B6D: mov     [esp+0B0h+var_7C+4], esp
0x5C8B71: push    ebx; a3
0x5C8B72: push    eax; a2
0x5C8B73: mov     [esp+0B8h+var_4], 1Eh
0x5C8B7E: mov     [ecx], ebx
0x5C8B80: mov     [ecx+4], bx
0x5C8B84: mov     [ecx+6], bx
0x5C8B88: call    BSStringT_Set
0x5C8B8D: mov     ecx, esi
0x5C8B8F: mov     [esp+0B0h+var_4], edi
0x5C8B96: call    sub_5C3440
0x5C8B9B: mov     ebp, eax
0x5C8B9D: push    ecx
0x5C8B9E: fld     dword ptr ds:0A6D2D8h
0x5C8BA4: mov     ecx, ebp; this
0x5C8BA6: fstp    [esp+0A4h+a2]; a3
0x5C8BA9: push    0FB1h; a2
0x5C8BAE: call    Tile_SetFloat
0x5C8BB3: fld     [esp+0A0h+var_84]
0x5C8BB7: push    ecx
0x5C8BB8: fstp    [esp+0A4h+a2]; a3
0x5C8BBB: push    0FB1h; a2
0x5C8BC0: mov     ecx, ebp; this
0x5C8BC2: call    Tile_SetFloat
0x5C8BC7: fldz
0x5C8BC9: push    ecx
0x5C8BCA: fstp    [esp+0A4h+a2]; a3
0x5C8BCD: push    0FB1h; a2
0x5C8BD2: mov     ecx, ebp; this
0x5C8BD4: call    Tile_SetFloat
0x5C8BD9: movzx   eax, byte ptr [esi+87Ah]
0x5C8BE0: mov     [esp+0A0h+var_7C], eax; a3
0x5C8BE4: mov     eax, ds:0B38FD0h
0x5C8BE9: fild    [esp+0A0h+var_7C]
0x5C8BED: sub     esp, 8
0x5C8BF0: mov     ecx, esp; this
0x5C8BF2: mov     [esp+0A8h+var_74], esp; a3
0x5C8BF6: fdiv    qword ptr ds:0A3DDD8h
0x5C8BFC: push    ebx; a3
0x5C8BFD: push    eax; a2
0x5C8BFE: mov     [ecx], ebx
0x5C8C00: mov     [ecx+4], bx
0x5C8C04: mov     [ecx+6], bx
0x5C8C08: fstp    [esp+0B0h+var_84]; a3
0x5C8C0C: call    BSStringT_Set
0x5C8C11: mov     eax, ds:0B38F88h
0x5C8C16: sub     esp, 8
0x5C8C19: mov     ecx, esp; this
0x5C8C1B: mov     [esp+0B0h+var_7C+4], esp; a3
0x5C8C1F: push    ebx; a3
0x5C8C20: push    eax; a2
0x5C8C21: mov     [esp+0B8h+var_4], 1Fh
0x5C8C2C: mov     [ecx], ebx
0x5C8C2E: mov     [ecx+4], bx
0x5C8C32: mov     [ecx+6], bx
0x5C8C36: call    BSStringT_Set
0x5C8C3B: mov     ecx, esi
0x5C8C3D: mov     [esp+0B0h+var_4], edi
0x5C8C44: call    sub_5C3440
0x5C8C49: fld     dword ptr ds:0A6D2D8h
0x5C8C4F: push    ecx
0x5C8C50: mov     ebp, eax
0x5C8C52: fstp    [esp+0A4h+a2]; a3
0x5C8C55: push    0FB1h; a2
0x5C8C5A: mov     ecx, ebp; this
0x5C8C5C: call    Tile_SetFloat
0x5C8C61: fld     [esp+0A0h+var_84]
0x5C8C65: push    ecx
0x5C8C66: fstp    [esp+0A4h+a2]; a3
0x5C8C69: push    0FB1h; a2
0x5C8C6E: mov     ecx, ebp; this
0x5C8C70: call    Tile_SetFloat
0x5C8C75: fldz
0x5C8C77: push    ecx
0x5C8C78: fstp    [esp+0A4h+a2]; a3
0x5C8C7B: push    0FB1h; a2
0x5C8C80: mov     ecx, ebp; this
0x5C8C82: call    Tile_SetFloat
0x5C8C87: mov     ecx, [esp+0A0h+var_88]
0x5C8C8B: fld     dword ptr [ecx+1CCh]
0x5C8C91: sub     esp, 8
0x5C8C94: mov     ecx, esp; this
0x5C8C96: fstp    [esp+0A8h+var_7C]
0x5C8C9A: fld     [esp+0A8h+var_7C]
0x5C8C9E: mov     [esp+0A8h+var_74], esp
0x5C8CA2: fstp    dword ptr [esi+874h]
0x5C8CA8: mov     eax, ds:0B38FD8h
0x5C8CAD: push    ebx; a3
0x5C8CAE: push    eax; a2
0x5C8CAF: mov     [ecx], ebx
0x5C8CB1: mov     [ecx+4], bx
0x5C8CB5: mov     [ecx+6], bx
0x5C8CB9: call    BSStringT_Set
0x5C8CBE: mov     eax, ds:0B38F88h
0x5C8CC3: sub     esp, 8
0x5C8CC6: mov     ecx, esp; this
0x5C8CC8: mov     [esp+0B0h+var_7C+4], esp; a3
0x5C8CCC: push    ebx; a3
0x5C8CCD: push    eax; a2
0x5C8CCE: mov     [esp+0B8h+var_4], 20h ; ' '
0x5C8CD9: mov     [ecx], ebx
0x5C8CDB: mov     [ecx+4], bx
0x5C8CDF: mov     [ecx+6], bx
0x5C8CE3: call    BSStringT_Set
0x5C8CE8: mov     ecx, esi
0x5C8CEA: mov     [esp+0B0h+var_4], edi
0x5C8CF1: call    sub_5C3440
0x5C8CF6: fld     dword ptr [esi+874h]
0x5C8CFC: push    ecx
0x5C8CFD: fstp    [esp+0A4h+var_7C]; a3
0x5C8D01: fld     dword ptr ds:0A6D2D8h
0x5C8D07: mov     ebp, eax
0x5C8D09: fstp    [esp+0A4h+a2]; a3
0x5C8D0C: push    0FB1h; a2
0x5C8D11: mov     ecx, ebp; this
0x5C8D13: call    Tile_SetFloat
0x5C8D18: fld     [esp+0A0h+var_7C]
0x5C8D1C: push    ecx
0x5C8D1D: fstp    [esp+0A4h+a2]; a3
0x5C8D20: push    0FB1h; a2
0x5C8D25: mov     ecx, ebp; this
0x5C8D27: call    Tile_SetFloat
0x5C8D2C: fldz
0x5C8D2E: push    ecx
0x5C8D2F: fstp    [esp+0A4h+a2]; a3
0x5C8D32: push    0FB1h; a2
0x5C8D37: mov     ecx, ebp; this
0x5C8D39: call    Tile_SetFloat
0x5C8D3E: mov     ebp, [esp+0A0h+var_88]
0x5C8D42: mov     ecx, ebp
0x5C8D44: call    TESActorBase_IsFemale
0x5C8D49: cmp     eax, 1
0x5C8D4C: setz    dl
0x5C8D4F: mov     ecx, ebp
0x5C8D51: mov     [esi+868h], dl
0x5C8D57: call    TESActorBase_IsFemale
0x5C8D5C: test    eax, eax
0x5C8D5E: mov     eax, ds:0B39520h
0x5C8D63: jz      short loc_5C8D6A
0x5C8D65: mov     eax, ds:0B39528h
0x5C8D6A: push    eax; int
0x5C8D6B: mov     eax, ds:0B38FA8h
0x5C8D70: push    0FB4h; unsigned __int8 *
0x5C8D75: sub     esp, 8
0x5C8D78: mov     ecx, esp; this
0x5C8D7A: mov     [esp+0B0h+var_74], esp
0x5C8D7E: push    ebx; a3
0x5C8D7F: push    eax; a2
0x5C8D80: mov     [ecx], ebx
0x5C8D82: mov     [ecx+4], bx
0x5C8D86: mov     [ecx+6], bx
0x5C8D8A: call    BSStringT_Set
0x5C8D8F: mov     eax, ds:0B38F78h
0x5C8D94: sub     esp, 8
0x5C8D97: mov     ecx, esp; this
0x5C8D99: mov     [esp+0B8h+var_7C+4], esp
0x5C8D9D: push    ebx; a3
0x5C8D9E: push    eax; a2
0x5C8D9F: mov     [esp+0C0h+var_4], 21h ; '!'
0x5C8DAA: mov     [ecx], ebx
0x5C8DAC: mov     [ecx+4], bx
0x5C8DB0: mov     [ecx+6], bx
0x5C8DB4: call    BSStringT_Set
0x5C8DB9: mov     ecx, esi
0x5C8DBB: mov     [esp+0B8h+var_4], edi
0x5C8DC2: call    sub_5C3440
0x5C8DC7: mov     ecx, eax
0x5C8DC9: call    Tile_SetString
0x5C8DCE: mov     eax, ds:0B38FA8h
0x5C8DD3: sub     esp, 8
0x5C8DD6: mov     ecx, esp; this
0x5C8DD8: mov     [esp+0A8h+var_74], esp
0x5C8DDC: push    ebx; a3
0x5C8DDD: push    eax; a2
0x5C8DDE: mov     [ecx], ebx
0x5C8DE0: mov     [ecx+4], bx
0x5C8DE4: mov     [ecx+6], bx
0x5C8DE8: call    BSStringT_Set
0x5C8DED: mov     eax, ds:0B38F78h
0x5C8DF2: sub     esp, 8
0x5C8DF5: mov     ecx, esp; this
0x5C8DF7: mov     [esp+0B0h+var_7C+4], esp
0x5C8DFB: push    ebx; a3
0x5C8DFC: push    eax; a2
0x5C8DFD: mov     [esp+0B8h+var_4], 22h ; '"'
0x5C8E08: mov     [ecx], ebx
0x5C8E0A: mov     [ecx+4], bx
0x5C8E0E: mov     [ecx+6], bx
0x5C8E12: call    BSStringT_Set
0x5C8E17: mov     ecx, esi
0x5C8E19: mov     [esp+0B0h+var_4], edi
0x5C8E20: call    sub_5C3440
0x5C8E25: fldz
0x5C8E27: push    ecx
0x5C8E28: fstp    [esp+0A4h+a2]; a3
0x5C8E2B: push    0FB2h; a2
0x5C8E30: mov     ecx, eax; this
0x5C8E32: call    Tile_SetFloat
0x5C8E37: mov     eax, ds:0B38FA8h
0x5C8E3C: sub     esp, 8
0x5C8E3F: mov     ecx, esp; this
0x5C8E41: mov     [esp+0A8h+var_74], esp
0x5C8E45: push    ebx; a3
0x5C8E46: push    eax; a2
0x5C8E47: mov     [ecx], ebx
0x5C8E49: mov     [ecx+4], bx
0x5C8E4D: mov     [ecx+6], bx
0x5C8E51: call    BSStringT_Set
0x5C8E56: mov     eax, ds:0B38F78h
0x5C8E5B: sub     esp, 8
0x5C8E5E: mov     ecx, esp; this
0x5C8E60: mov     [esp+0B0h+var_7C+4], esp
0x5C8E64: push    ebx; a3
0x5C8E65: mov     [esp+0B4h+var_4], 23h ; '#'
0x5C8E70: mov     [ecx], ebx
0x5C8E72: mov     [ecx+4], bx
0x5C8E76: mov     [ecx+6], bx
0x5C8E7A: push    eax; a2
0x5C8E7B: call    BSStringT_Set
0x5C8E80: mov     ecx, esi
0x5C8E82: mov     [esp+0B0h+var_4], edi
0x5C8E89: call    sub_5C3440
0x5C8E8E: fld1
0x5C8E90: push    ecx
0x5C8E91: fstp    [esp+0A4h+a2]; a3
0x5C8E94: push    0FB3h; a2
0x5C8E99: mov     ecx, eax; this
0x5C8E9B: call    Tile_SetFloat
0x5C8EA0: mov     eax, ds:0B38FA8h
0x5C8EA5: push    0FAEh
0x5C8EAA: sub     esp, 8
0x5C8EAD: mov     ecx, esp; this
0x5C8EAF: mov     [esp+0ACh+var_74], esp
0x5C8EB3: push    ebx; a3
0x5C8EB4: push    eax; a2
0x5C8EB5: mov     [ecx], ebx
0x5C8EB7: mov     [ecx+4], bx
0x5C8EBB: mov     [ecx+6], bx
0x5C8EBF: call    BSStringT_Set
0x5C8EC4: mov     eax, ds:0B38F78h
0x5C8EC9: sub     esp, 8
0x5C8ECC: mov     ecx, esp; this
0x5C8ECE: mov     [esp+0B4h+var_7C+4], esp
0x5C8ED2: push    ebx; a3
0x5C8ED3: push    eax; a2
0x5C8ED4: mov     [esp+0BCh+var_4], 24h ; '$'
0x5C8EDF: mov     [ecx], ebx
0x5C8EE1: mov     [ecx+4], bx
0x5C8EE5: mov     [ecx+6], bx
0x5C8EE9: call    BSStringT_Set
0x5C8EEE: mov     ecx, esi
0x5C8EF0: mov     [esp+0B4h+var_4], edi
0x5C8EF7: call    sub_5C3440
0x5C8EFC: mov     ecx, eax
0x5C8EFE: call    Tile_GetFloat
0x5C8F03: fcomp   dword ptr ds:0A379B4h
0x5C8F09: fnstsw  ax
0x5C8F0B: test    ah, 44h
0x5C8F0E: jp      short loc_5C8F17
0x5C8F10: mov     eax, 1
0x5C8F15: jmp     short loc_5C8F19
0x5C8F17: xor     eax, eax
0x5C8F19: movzx   ecx, byte ptr [esi+868h]
0x5C8F20: cmp     ecx, eax
0x5C8F22: mov     [esp+0A0h+var_7C], ecx
0x5C8F26: jz      short loc_5C8F8F
0x5C8F28: fild    [esp+0A0h+var_7C]
0x5C8F2C: mov     eax, ds:0B38FA8h
0x5C8F31: sub     esp, 0Ch
0x5C8F34: mov     ecx, esp; this
0x5C8F36: fstp    [esp+0ACh+a2]; float
0x5C8F3A: mov     [esp+0ACh+var_74], esp
0x5C8F3E: push    ebx; a3
0x5C8F3F: push    eax; a2
0x5C8F40: mov     [ecx], ebx
0x5C8F42: mov     [ecx+4], bx
0x5C8F46: mov     [ecx+6], bx
0x5C8F4A: call    BSStringT_Set
0x5C8F4F: mov     eax, ds:0B38F78h
0x5C8F54: sub     esp, 8
0x5C8F57: mov     ecx, esp; this
0x5C8F59: mov     [esp+0B4h+var_7C+4], esp
0x5C8F5D: push    ebx; a3
0x5C8F5E: push    eax; a2
0x5C8F5F: mov     [esp+0BCh+var_4], 25h ; '%'
0x5C8F6A: mov     [ecx], ebx
0x5C8F6C: mov     [ecx+4], bx
0x5C8F70: mov     [ecx+6], bx
0x5C8F74: call    BSStringT_Set
0x5C8F79: mov     ecx, esi
0x5C8F7B: mov     [esp+0B4h+var_4], edi
0x5C8F82: call    sub_5C3440
0x5C8F87: push    eax; int
0x5C8F88: mov     ecx, esi
0x5C8F8A: call    sub_5C2B50
0x5C8F8F: push    offset sub_43ACE0; a5
0x5C8F94: push    offset sub_43EB30; a4
0x5C8F99: push    4; size
0x5C8F9B: push    18h; a2
0x5C8F9D: lea     eax, [esp+0B0h+a1]
0x5C8FA1: push    eax; a1
0x5C8FA2: call    ArrayConstructor
0x5C8FA7: fldz
0x5C8FA9: mov     ecx, [esp+0A0h+var_88]
0x5C8FAD: mov     ebp, [ecx+0E8h]
0x5C8FB3: push    ecx
0x5C8FB4: fstp    [esp+0A4h+a2]; int
0x5C8FB7: push    ebx; unsigned __int8 *
0x5C8FB8: lea     edx, [esp+0A8h+a1]
0x5C8FBC: push    edx; int
0x5C8FBD: mov     [esp+0ACh+var_4], 26h ; '&'
0x5C8FC8: call    sub_521A10
0x5C8FCD: push    eax; int
0x5C8FCE: add     ebp, 29Ch
0x5C8FD4: push    ebp; int
0x5C8FD5: call    sub_552990
0x5C8FDA: push    ebx
0x5C8FDB: lea     eax, [esp+0B8h+a1]
0x5C8FDF: push    ebx
0x5C8FE0: push    eax
0x5C8FE1: call    BSFaceGen_GetAge
0x5C8FE6: fstp    [esp+0C0h+var_7C]
0x5C8FEA: fld1
0x5C8FEC: add     esp, 18h
0x5C8FEF: fldz
0x5C8FF1: mov     ecx, esp; this
0x5C8FF3: fsub    st(1), st
0x5C8FF5: mov     [esp+0A8h+var_74], esp
0x5C8FF9: fxch    st(1)
0x5C8FFB: push    ebx; a3
0x5C8FFC: fst     qword ptr [esp+0ACh+var_84]
0x5C9000: fld     [esp+0ACh+var_7C]
0x5C9004: fsub    qword ptr ds:0A492F0h
0x5C900A: fdiv    qword ptr ds:0A3F3D0h
0x5C9010: fmulp   st(1), st
0x5C9012: faddp   st(1), st
0x5C9014: fstp    dword ptr [esi+880h]
0x5C901A: mov     eax, ds:0B38F98h
0x5C901F: push    eax; a2
0x5C9020: mov     [ecx], ebx
0x5C9022: mov     [ecx+4], bx
0x5C9026: mov     [ecx+6], bx
0x5C902A: call    BSStringT_Set
0x5C902F: mov     eax, ds:0B38F70h
0x5C9034: sub     esp, 8
0x5C9037: mov     ecx, esp; this
0x5C9039: mov     [esp+0B0h+var_7C+4], esp
0x5C903D: push    ebx; a3
0x5C903E: push    eax; a2
0x5C903F: mov     byte ptr [esp+0B8h+var_4], 27h ; '''
0x5C9047: mov     [ecx], ebx
0x5C9049: mov     [ecx+4], bx
0x5C904D: mov     [ecx+6], bx
0x5C9051: call    BSStringT_Set
0x5C9056: mov     ecx, esi
0x5C9058: mov     byte ptr [esp+0B0h+var_4], 26h ; '&'
0x5C9060: call    sub_5C3440
0x5C9065: fld     dword ptr [esi+880h]
0x5C906B: push    ecx
0x5C906C: fstp    [esp+0A4h+var_7C]
0x5C9070: fld     dword ptr ds:0A6D2D8h
0x5C9076: mov     ebp, eax
0x5C9078: fstp    [esp+0A4h+a2]; a3
0x5C907B: push    0FB1h; a2
0x5C9080: mov     ecx, ebp; this
0x5C9082: call    Tile_SetFloat
0x5C9087: fld     [esp+0A0h+var_7C]
0x5C908B: push    ecx
0x5C908C: fstp    [esp+0A4h+a2]; a3
0x5C908F: push    0FB1h; a2
0x5C9094: mov     ecx, ebp; this
0x5C9096: call    Tile_SetFloat
0x5C909B: fldz
0x5C909D: push    ecx
0x5C909E: fstp    [esp+0A4h+a2]; a3
0x5C90A1: push    0FB1h; a2
0x5C90A6: mov     ecx, ebp; this
0x5C90A8: call    Tile_SetFloat
0x5C90AD: mov     ecx, [esp+0A0h+var_88]
0x5C90B1: call    TESActorBase_IsFemale
0x5C90B6: test    eax, eax
0x5C90B8: jnz     short loc_5C90C2
0x5C90BA: fld     dword ptr ds:0A53954h
0x5C90C0: jmp     short loc_5C90C8
0x5C90C2: fld     dword ptr ds:0A379B4h
0x5C90C8: push    ebx; int
0x5C90C9: fstp    [esp+0A4h+var_7C]
0x5C90CD: lea     ecx, [esp+0A4h+a1]
0x5C90D1: push    1; unsigned __int8 *
0x5C90D3: push    ecx
0x5C90D4: call    BSFaceGen_GetAge
0x5C90D9: fsub    [esp+0ACh+var_7C]
0x5C90DD: add     esp, 4
0x5C90E0: mov     ecx, esp; this
0x5C90E2: fstp    [esp+0A8h+var_7C]
0x5C90E6: mov     [esp+0A8h+var_74], esp
0x5C90EA: fld     [esp+0A8h+var_7C]
0x5C90EE: push    ebx; a3
0x5C90EF: fsub    qword ptr ds:0A3F400h
0x5C90F5: fmul    qword ptr ds:0A3C770h
0x5C90FB: fmul    qword ptr [esp+0ACh+var_84]
0x5C90FF: fadd    qword ptr ds:0A2FC68h
0x5C9105: fstp    dword ptr [esi+884h]
0x5C910B: mov     eax, ds:0B38FA0h
0x5C9110: push    eax; a2
0x5C9111: mov     [ecx], ebx
0x5C9113: mov     [ecx+4], bx
0x5C9117: mov     [ecx+6], bx
0x5C911B: call    BSStringT_Set
0x5C9120: mov     eax, ds:0B38F70h
0x5C9125: sub     esp, 8
0x5C9128: mov     ecx, esp; this
0x5C912A: mov     [esp+0B0h+var_7C+4], esp
0x5C912E: push    ebx; a3
0x5C912F: push    eax; a2
0x5C9130: mov     byte ptr [esp+0B8h+var_4], 28h ; '('
0x5C9138: mov     [ecx], ebx
0x5C913A: mov     [ecx+4], bx
0x5C913E: mov     [ecx+6], bx
0x5C9142: call    BSStringT_Set
0x5C9147: mov     ecx, esi
0x5C9149: mov     byte ptr [esp+0B0h+var_4], 26h ; '&'
0x5C9151: call    sub_5C3440
0x5C9156: fld     dword ptr [esi+884h]
0x5C915C: push    ecx
0x5C915D: fstp    [esp+0A4h+var_7C]
0x5C9161: fld     dword ptr ds:0A6D2D8h
0x5C9167: mov     ebx, eax
0x5C9169: fstp    [esp+0A4h+a2]; a3
0x5C916C: push    0FB1h; a2
0x5C9171: mov     ecx, ebx; this
0x5C9173: call    Tile_SetFloat
0x5C9178: fld     [esp+0A0h+var_7C]
0x5C917C: push    ecx
0x5C917D: fstp    [esp+0A4h+a2]; a3
0x5C9180: push    0FB1h; a2
0x5C9185: mov     ecx, ebx; this
0x5C9187: call    Tile_SetFloat
0x5C918C: fldz
0x5C918E: push    ecx
0x5C918F: fstp    [esp+0A4h+a2]; a3
0x5C9192: push    0FB1h; a2
0x5C9197: mov     ecx, ebx; this
0x5C9199: call    Tile_SetFloat
0x5C919E: push    offset sub_43ACE0; void (__thiscall *)(void *)
0x5C91A3: push    4; int
0x5C91A5: push    18h; unsigned int
0x5C91A7: lea     edx, [esp+0ACh+a1]
0x5C91AB: push    edx; void *
0x5C91AC: mov     [esp+0B0h+var_4], edi
0x5C91B3: call    $LN21
0x5C91B8: mov     al, 1
0x5C91BA: mov     ecx, [esp+0A0h+var_C]
0x5C91C1: mov     large fs:0, ecx
0x5C91C8: pop     ecx
0x5C91C9: pop     edi
0x5C91CA: pop     esi
0x5C91CB: pop     ebp
0x5C91CC: pop     ebx
0x5C91CD: add     esp, 8Ch
0x5C91D3: retn    4
