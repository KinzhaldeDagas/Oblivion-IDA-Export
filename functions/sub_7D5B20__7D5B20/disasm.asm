0x7D5B20: push    0FFFFFFFFh
0x7D5B22: push    offset SEH_7D5B20
0x7D5B27: mov     eax, large fs:0
0x7D5B2D: push    eax
0x7D5B2E: sub     esp, 180h
0x7D5B34: push    ebx
0x7D5B35: push    esi
0x7D5B36: push    edi
0x7D5B37: mov     eax, ds:0B30AACh
0x7D5B3C: xor     eax, esp
0x7D5B3E: push    eax
0x7D5B3F: lea     eax, [esp+19Ch+var_C]
0x7D5B46: mov     large fs:0, eax
0x7D5B4C: mov     edi, ecx
0x7D5B4E: movzx   esi, [esp+19Ch+arg_14]
0x7D5B56: cmp     esi, 5; switch 6 cases
0x7D5B59: mov     eax, [esp+19Ch+arg_10]
0x7D5B60: mov     ebx, [eax+0Ch]
0x7D5B63: ja      def_7D5B69
0x7D5B69: jmp     ds:jpt_7D5B69[esi*4]; switch jump
0x7D5B70: fld     dword ptr ds:0B258D0h; jumptable 007D5B69 case 0
0x7D5B76: fchs
0x7D5B78: fstp    [esp+19Ch+var_178]
0x7D5B7C: fld     dword ptr ds:0B258D4h
0x7D5B82: fchs
0x7D5B84: fstp    [esp+19Ch+var_18C]
0x7D5B88: fld     dword ptr ds:0B258D8h
0x7D5B8E: fchs
0x7D5B90: fstp    [esp+19Ch+var_188]
0x7D5B94: fld     [esp+19Ch+var_178]
0x7D5B98: fstp    [esp+19Ch+var_174]
0x7D5B9C: mov     eax, [esp+19Ch+var_174]
0x7D5BA0: fld     [esp+19Ch+var_18C]
0x7D5BA4: fstp    [esp+19Ch+var_170]
0x7D5BA8: mov     ecx, [esp+19Ch+var_170]
0x7D5BAC: fld     [esp+19Ch+var_188]
0x7D5BB0: fstp    [esp+19Ch+var_16C]
0x7D5BB4: mov     edx, [esp+19Ch+var_16C]
0x7D5BB8: fld     dword ptr ds:0B258DCh
0x7D5BBE: fchs
0x7D5BC0: fstp    [esp+19Ch+var_188]
0x7D5BC4: fld     dword ptr ds:0B258E0h
0x7D5BCA: fchs
0x7D5BCC: fstp    [esp+19Ch+var_18C]
0x7D5BD0: fld     dword ptr ds:0B258E4h
0x7D5BD6: fchs
0x7D5BD8: mov     [esp+19Ch+var_168], eax
0x7D5BDC: fstp    [esp+19Ch+var_178]
0x7D5BE0: mov     [esp+19Ch+var_164], ecx
0x7D5BE4: fld     [esp+19Ch+var_188]
0x7D5BE8: mov     [esp+19Ch+var_160], edx
0x7D5BEC: fstp    [esp+19Ch+var_184]
0x7D5BF0: mov     eax, [esp+19Ch+var_184]
0x7D5BF4: fld     [esp+19Ch+var_18C]
0x7D5BF8: mov     [esp+19Ch+var_174], eax
0x7D5BFC: fstp    [esp+19Ch+var_180]
0x7D5C00: mov     ecx, [esp+19Ch+var_180]
0x7D5C04: fld     [esp+19Ch+var_178]
0x7D5C08: lea     eax, [esp+19Ch+var_174]
0x7D5C0C: fstp    [esp+19Ch+var_17C]
0x7D5C10: mov     edx, [esp+19Ch+var_17C]
0x7D5C14: mov     [esp+19Ch+var_170], ecx
0x7D5C18: push    eax
0x7D5C19: lea     ecx, [esp+1A0h+var_184]
0x7D5C1D: mov     [esp+1A0h+var_16C], edx
0x7D5C21: push    ecx
0x7D5C22: jmp     loc_7D5E0D
0x7D5C27: mov     edx, ds:0B258D0h; jumptable 007D5B69 case 1
0x7D5C2D: mov     eax, ds:0B258D4h
0x7D5C32: mov     ecx, ds:0B258D8h
0x7D5C38: fld     dword ptr ds:0B258DCh
0x7D5C3E: mov     [esp+19Ch+var_168], edx
0x7D5C42: fchs
0x7D5C44: mov     [esp+19Ch+var_164], eax
0x7D5C48: fstp    [esp+19Ch+var_188]
0x7D5C4C: mov     [esp+19Ch+var_160], ecx
0x7D5C50: fld     dword ptr ds:0B258E0h
0x7D5C56: fchs
0x7D5C58: fstp    [esp+19Ch+var_18C]
0x7D5C5C: fld     dword ptr ds:0B258E4h
0x7D5C62: fchs
0x7D5C64: fstp    [esp+19Ch+var_178]
0x7D5C68: fld     [esp+19Ch+var_188]
0x7D5C6C: fstp    [esp+19Ch+var_184]
0x7D5C70: mov     edx, [esp+19Ch+var_184]
0x7D5C74: fld     [esp+19Ch+var_18C]
0x7D5C78: mov     [esp+19Ch+var_174], edx
0x7D5C7C: fstp    [esp+19Ch+var_180]
0x7D5C80: mov     eax, [esp+19Ch+var_180]
0x7D5C84: fld     [esp+19Ch+var_178]
0x7D5C88: lea     edx, [esp+19Ch+var_174]
0x7D5C8C: fstp    [esp+19Ch+var_17C]
0x7D5C90: mov     ecx, [esp+19Ch+var_17C]
0x7D5C94: mov     [esp+19Ch+var_170], eax
0x7D5C98: push    edx
0x7D5C99: lea     eax, [esp+1A0h+var_184]
0x7D5C9D: mov     [esp+1A0h+var_16C], ecx
0x7D5CA1: push    eax
0x7D5CA2: jmp     loc_7D5E0D
0x7D5CA7: fld     dword ptr ds:0B258DCh; jumptable 007D5B69 case 2
0x7D5CAD: fchs
0x7D5CAF: fstp    [esp+19Ch+var_188]
0x7D5CB3: fld     dword ptr ds:0B258E0h
0x7D5CB9: fchs
0x7D5CBB: fstp    [esp+19Ch+var_18C]
0x7D5CBF: fld     dword ptr ds:0B258E4h
0x7D5CC5: fchs
0x7D5CC7: fstp    [esp+19Ch+var_178]
0x7D5CCB: fld     [esp+19Ch+var_188]
0x7D5CCF: fstp    [esp+19Ch+var_184]
0x7D5CD3: mov     ecx, [esp+19Ch+var_184]
0x7D5CD7: fld     [esp+19Ch+var_18C]
0x7D5CDB: mov     [esp+19Ch+var_168], ecx
0x7D5CDF: mov     ecx, ds:0B258E8h
0x7D5CE5: fstp    [esp+19Ch+var_180]
0x7D5CE9: fld     [esp+19Ch+var_178]
0x7D5CED: mov     edx, [esp+19Ch+var_180]
0x7D5CF1: fstp    [esp+19Ch+var_17C]
0x7D5CF5: mov     eax, [esp+19Ch+var_17C]
0x7D5CF9: mov     [esp+19Ch+var_164], edx
0x7D5CFD: mov     edx, ds:0B258ECh
0x7D5D03: mov     [esp+19Ch+var_160], eax
0x7D5D07: mov     eax, ds:0B258F0h
0x7D5D0C: jmp     loc_7D5DF7
0x7D5D11: fld     dword ptr ds:0B258E8h; jumptable 007D5B69 case 3
0x7D5D17: mov     eax, ds:0B258DCh
0x7D5D1C: mov     ecx, ds:0B258E0h
0x7D5D22: fchs
0x7D5D24: mov     edx, ds:0B258E4h
0x7D5D2A: fstp    [esp+19Ch+var_188]
0x7D5D2E: fld     dword ptr ds:0B258ECh
0x7D5D34: fchs
0x7D5D36: fstp    [esp+19Ch+var_18C]
0x7D5D3A: fld     dword ptr ds:0B258F0h
0x7D5D40: jmp     loc_7D5BD6
0x7D5D45: fld     dword ptr ds:0B258E8h; jumptable 007D5B69 case 4
0x7D5D4B: fchs
0x7D5D4D: fstp    [esp+19Ch+var_188]
0x7D5D51: fld     dword ptr ds:0B258ECh
0x7D5D57: fchs
0x7D5D59: fstp    [esp+19Ch+var_18C]
0x7D5D5D: fld     dword ptr ds:0B258F0h
0x7D5D63: fchs
0x7D5D65: fstp    [esp+19Ch+var_178]
0x7D5D69: fld     [esp+19Ch+var_188]
0x7D5D6D: fstp    [esp+19Ch+var_184]
0x7D5D71: mov     edx, [esp+19Ch+var_184]
0x7D5D75: fld     [esp+19Ch+var_18C]
0x7D5D79: fstp    [esp+19Ch+var_180]
0x7D5D7D: mov     eax, [esp+19Ch+var_180]
0x7D5D81: fld     [esp+19Ch+var_178]
0x7D5D85: fstp    [esp+19Ch+var_17C]
0x7D5D89: mov     ecx, [esp+19Ch+var_17C]
0x7D5D8D: jmp     loc_7D5C38
0x7D5D92: fld     dword ptr ds:0B258DCh; jumptable 007D5B69 case 5
0x7D5D98: mov     ecx, ds:0B258E8h
0x7D5D9E: mov     edx, ds:0B258ECh
0x7D5DA4: fchs
0x7D5DA6: mov     eax, ds:0B258F0h
0x7D5DAB: fstp    [esp+19Ch+var_188]
0x7D5DAF: fld     dword ptr ds:0B258E0h
0x7D5DB5: mov     [esp+19Ch+var_168], ecx
0x7D5DB9: fchs
0x7D5DBB: mov     [esp+19Ch+var_164], edx
0x7D5DBF: fstp    [esp+19Ch+var_18C]
0x7D5DC3: mov     [esp+19Ch+var_160], eax
0x7D5DC7: fld     dword ptr ds:0B258E4h
0x7D5DCD: fchs
0x7D5DCF: fstp    [esp+19Ch+var_178]
0x7D5DD3: fld     [esp+19Ch+var_188]
0x7D5DD7: fstp    [esp+19Ch+var_184]
0x7D5DDB: mov     ecx, [esp+19Ch+var_184]
0x7D5DDF: fld     [esp+19Ch+var_18C]
0x7D5DE3: fstp    [esp+19Ch+var_180]
0x7D5DE7: mov     edx, [esp+19Ch+var_180]
0x7D5DEB: fld     [esp+19Ch+var_178]
0x7D5DEF: fstp    [esp+19Ch+var_17C]
0x7D5DF3: mov     eax, [esp+19Ch+var_17C]
0x7D5DF7: mov     [esp+19Ch+var_174], ecx
0x7D5DFB: lea     ecx, [esp+19Ch+var_174]
0x7D5DFF: mov     [esp+19Ch+var_170], edx
0x7D5E03: push    ecx
0x7D5E04: lea     edx, [esp+1A0h+var_184]
0x7D5E08: push    edx
0x7D5E09: mov     [esp+1A4h+var_16C], eax
0x7D5E0D: lea     ecx, [esp+1A4h+var_168]
0x7D5E11: call    sub_498FE0
