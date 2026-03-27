0x6C0C40: sub     esp, 9Ch
0x6C0C46: push    ebx
0x6C0C47: mov     ebx, [esp+0A0h+arg_0]
0x6C0C4E: push    ebp
0x6C0C4F: push    esi
0x6C0C50: push    edi
0x6C0C51: mov     esi, ecx
0x6C0C53: lea     edi, [esi+4]
0x6C0C56: push    edi
0x6C0C57: lea     eax, [esp+0B0h+var_80]
0x6C0C5B: push    eax
0x6C0C5C: lea     ecx, [ebx+4]
0x6C0C5F: push    ecx
0x6C0C60: lea     edx, [esp+0B8h+var_70]
0x6C0C64: push    edx
0x6C0C65: call    sub_714D80
0x6C0C6A: add     esp, 8
0x6C0C6D: mov     ecx, eax
0x6C0C6F: call    sub_714CF0
0x6C0C74: push    eax
0x6C0C75: lea     eax, [esp+0B0h+var_50]
0x6C0C79: push    eax
0x6C0C7A: call    sub_714DB0
0x6C0C7F: mov     ebp, [esp+0B4h+arg_4]
0x6C0C86: add     esp, 8
0x6C0C89: lea     ecx, [ebp+4]
0x6C0C8C: push    ecx
0x6C0C8D: lea     edx, [esp+0B0h+var_70]
0x6C0C91: push    edx
0x6C0C92: lea     eax, [esp+0B4h+var_80]
0x6C0C96: push    edi
0x6C0C97: push    eax
0x6C0C98: call    sub_714D80
0x6C0C9D: add     esp, 8
0x6C0CA0: mov     ecx, eax
0x6C0CA2: call    sub_714CF0
0x6C0CA7: push    eax
0x6C0CA8: lea     ecx, [esp+0B0h+var_60]
0x6C0CAC: push    ecx
0x6C0CAD: call    sub_714DB0
0x6C0CB2: fld     dword ptr [ebp+0]
0x6C0CB5: fsub    dword ptr [ebx]
0x6C0CB7: add     esp, 8
0x6C0CBA: fld1
0x6C0CBC: lea     edx, [esp+0ACh+var_50]
0x6C0CC0: fld     st
0x6C0CC2: push    edx; int
0x6C0CC3: fdivrp  st(2), st
0x6C0CC5: push    ecx
0x6C0CC6: lea     eax, [esp+0B4h+var_70]
0x6C0CCA: fxch    st(1)
0x6C0CCC: fstp    [esp+0B4h+var_84]
0x6C0CD0: fld     dword ptr [esi+14h]
0x6C0CD3: fsubr   st, st(1)
0x6C0CD5: fstp    [esp+0B4h+var_88]
0x6C0CD9: fld     dword ptr [esi+18h]
0x6C0CDC: fsubr   st, st(1)
0x6C0CDE: fstp    [esp+0B4h+var_90]
0x6C0CE2: fld     dword ptr [esi+18h]
0x6C0CE5: fadd    st, st(1)
0x6C0CE7: fstp    [esp+0B4h+var_8C]
0x6C0CEB: fld     dword ptr [esi+1Ch]
0x6C0CEE: fsubr   st, st(1)
0x6C0CF0: fstp    [esp+0B4h+var_98]
0x6C0CF4: fadd    dword ptr [esi+1Ch]
0x6C0CF7: fstp    [esp+0B4h+var_94]
0x6C0CFB: fld     dword ptr [esi]
0x6C0CFD: fsub    dword ptr [ebx]
0x6C0CFF: fmul    [esp+0B4h+var_84]
0x6C0D03: fstp    [esp+0B4h+var_9C]
0x6C0D07: fld     [esp+0B4h+var_9C]
0x6C0D0B: fmul    [esp+0B4h+var_88]
0x6C0D0F: fst     [esp+0B4h+var_80]
0x6C0D13: fmul    [esp+0B4h+var_8C]
0x6C0D17: fmul    [esp+0B4h+var_94]
0x6C0D1B: fstp    [esp+0B4h+var_9C]
0x6C0D1F: fld     [esp+0B4h+var_9C]
0x6C0D23: fstp    [esp+0B4h+var_B4]; float
0x6C0D26: push    eax; int
0x6C0D27: call    sub_72F990
0x6C0D2C: add     esp, 0Ch
0x6C0D2F: push    eax
0x6C0D30: fld     [esp+0B0h+var_90]
0x6C0D34: lea     ecx, [esp+0B0h+var_10]
0x6C0D3B: fmul    [esp+0B0h+var_80]
0x6C0D3F: push    ecx
0x6C0D40: lea     edx, [esp+0B4h+var_60]
0x6C0D44: push    edx; int
0x6C0D45: fmul    [esp+0B8h+var_98]
0x6C0D49: push    ecx
0x6C0D4A: lea     eax, [esp+0BCh+var_40]
0x6C0D4E: fstp    [esp+0BCh+var_9C]
0x6C0D52: fld     [esp+0BCh+var_9C]
0x6C0D56: fstp    [esp+0BCh+var_BC]; float
0x6C0D59: push    eax; int
0x6C0D5A: call    sub_72F990
0x6C0D5F: add     esp, 0Ch
0x6C0D62: mov     ecx, eax
0x6C0D64: call    sub_714C60
0x6C0D69: lea     ecx, [esp+0ACh+var_60]
0x6C0D6D: push    ecx
0x6C0D6E: lea     edx, [esp+0B0h+var_40]
0x6C0D72: push    edx
0x6C0D73: lea     ecx, [esp+0B4h+var_10]
0x6C0D7A: call    sub_714C90
0x6C0D7F: fld     dword ptr ds:0A3D65Ch
0x6C0D85: push    eax; int
0x6C0D86: push    ecx
0x6C0D87: lea     eax, [esp+0B4h+var_70]
0x6C0D8B: fstp    [esp+0B4h+var_B4]; float
0x6C0D8E: push    eax; int
0x6C0D8F: call    sub_72F990
0x6C0D94: push    eax
0x6C0D95: lea     ecx, [esp+0BCh+var_80]
0x6C0D99: push    ecx
0x6C0D9A: call    sub_72F9F0
0x6C0D9F: add     esp, 14h
0x6C0DA2: push    eax
0x6C0DA3: lea     edx, [esp+0B0h+var_30]
0x6C0DAA: push    edx
0x6C0DAB: mov     ecx, edi
0x6C0DAD: call    sub_714CF0
0x6C0DB2: mov     ecx, [eax]
0x6C0DB4: mov     [esi+20h], ecx
0x6C0DB7: mov     edx, [eax+4]
0x6C0DBA: mov     [esi+24h], edx
0x6C0DBD: mov     ecx, [eax+8]
0x6C0DC0: mov     [esi+28h], ecx
0x6C0DC3: mov     edx, [eax+0Ch]
0x6C0DC6: mov     [esi+2Ch], edx
0x6C0DC9: fld     dword ptr [ebp+0]
0x6C0DCC: fsub    dword ptr [esi]
0x6C0DCE: lea     eax, [esp+0ACh+var_50]
0x6C0DD2: push    eax; int
0x6C0DD3: push    ecx
0x6C0DD4: fmul    [esp+0B4h+var_84]
0x6C0DD8: lea     ecx, [esp+0B4h+var_30]
0x6C0DDF: fstp    [esp+0B4h+var_9C]
0x6C0DE3: fld     [esp+0B4h+var_9C]
0x6C0DE7: fmul    [esp+0B4h+var_88]
0x6C0DEB: fst     [esp+0B4h+var_80]
0x6C0DEF: fmul    [esp+0B4h+var_90]
0x6C0DF3: fmul    [esp+0B4h+var_94]
0x6C0DF7: fstp    [esp+0B4h+var_94]
0x6C0DFB: fld     [esp+0B4h+var_94]
0x6C0DFF: fstp    [esp+0B4h+var_B4]; float
0x6C0E02: push    ecx; int
0x6C0E03: call    sub_72F990
0x6C0E08: fld     [esp+0B8h+var_8C]
0x6C0E0C: fmul    [esp+0B8h+var_80]
0x6C0E10: add     esp, 0Ch
0x6C0E13: push    eax
0x6C0E14: lea     edx, [esp+0B0h+var_20]
0x6C0E1B: fmul    [esp+0B0h+var_98]
0x6C0E1F: push    edx
0x6C0E20: lea     eax, [esp+0B4h+var_60]
0x6C0E24: push    eax; int
0x6C0E25: fstp    [esp+0B8h+var_98]
0x6C0E29: push    ecx
0x6C0E2A: fld     [esp+0BCh+var_98]
0x6C0E2E: lea     ecx, [esp+0BCh+var_40]
0x6C0E32: fstp    [esp+0BCh+var_BC]; float
0x6C0E35: push    ecx; int
0x6C0E36: call    sub_72F990
0x6C0E3B: add     esp, 0Ch
0x6C0E3E: mov     ecx, eax
0x6C0E40: call    sub_714C60
0x6C0E45: lea     edx, [esp+0ACh+var_20]
0x6C0E4C: push    edx
0x6C0E4D: lea     eax, [esp+0B0h+var_30]
0x6C0E54: push    eax
0x6C0E55: lea     ecx, [esp+0B4h+var_50]
0x6C0E59: call    sub_714C90
0x6C0E5E: fld     dword ptr ds:0A3D65Ch
0x6C0E64: push    eax; int
0x6C0E65: push    ecx
0x6C0E66: lea     ecx, [esp+0B4h+var_40]
0x6C0E6A: fstp    [esp+0B4h+var_B4]; float
0x6C0E6D: push    ecx; int
0x6C0E6E: call    sub_72F990
0x6C0E73: push    eax
0x6C0E74: lea     edx, [esp+0BCh+var_70]
0x6C0E78: push    edx
0x6C0E79: call    sub_72F9F0
0x6C0E7E: add     esp, 14h
0x6C0E81: push    eax
0x6C0E82: lea     eax, [esp+0B0h+var_80]
0x6C0E86: push    eax
0x6C0E87: mov     ecx, edi
0x6C0E89: call    sub_714CF0
0x6C0E8E: mov     ecx, [eax]
0x6C0E90: mov     [esi+30h], ecx
0x6C0E93: mov     edx, [eax+4]
0x6C0E96: mov     [esi+34h], edx
0x6C0E99: mov     ecx, [eax+8]
0x6C0E9C: mov     [esi+38h], ecx
0x6C0E9F: mov     edx, [eax+0Ch]
0x6C0EA2: pop     edi
0x6C0EA3: mov     [esi+3Ch], edx
0x6C0EA6: pop     esi
0x6C0EA7: pop     ebp
0x6C0EA8: pop     ebx
0x6C0EA9: add     esp, 9Ch
0x6C0EAF: retn    8
