0x660CC0: sub     esp, 18h
0x660CC3: push    ebx
0x660CC4: push    esi
0x660CC5: push    edi
0x660CC6: mov     ebx, ecx
0x660CC8: call    TESObjectREFR_GetParentCell
0x660CCD: mov     esi, eax
0x660CCF: call    sub_4C9F60
0x660CD4: test    al, al
0x660CD6: jz      short loc_660D26
0x660CD8: test    esi, esi
0x660CDA: jz      short loc_660D26
0x660CDC: mov     ecx, esi
0x660CDE: call    sub_4CC910
0x660CE3: test    eax, eax
0x660CE5: jnz     short loc_660CF3
0x660CE7: push    ebx
0x660CE8: mov     ecx, esi
0x660CEA: call    sub_4D4790
0x660CEF: test    eax, eax
0x660CF1: jz      short loc_660D26
0x660CF3: mov     ecx, [esp+24h+arg_4]
0x660CF7: mov     edx, [ebx]
0x660CF9: mov     edx, [edx+100h]
0x660CFF: push    0
0x660D01: push    1
0x660D03: push    0
0x660D05: push    0
0x660D07: push    eax
0x660D08: mov     eax, [esp+38h+arg_8]
0x660D0C: push    0
0x660D0E: push    0
0x660D10: push    eax
0x660D11: mov     eax, [esp+44h+arg_0]
0x660D15: push    ecx
0x660D16: push    eax
0x660D17: mov     ecx, ebx
0x660D19: call    edx
0x660D1B: xor     eax, eax
0x660D1D: pop     edi
0x660D1E: pop     esi
0x660D1F: pop     ebx
0x660D20: add     esp, 18h
0x660D23: retn    14h
0x660D26: mov     ecx, [esp+24h+arg_10]
0x660D2A: mov     edx, [esp+24h+arg_C]
0x660D2E: mov     eax, [ebx]
0x660D30: push    0
0x660D32: push    1
0x660D34: push    ecx
0x660D35: mov     ecx, [esp+30h+arg_8]
0x660D39: push    edx
0x660D3A: mov     edx, [esp+34h+arg_4]
0x660D3E: push    0
0x660D40: push    1
0x660D42: push    0
0x660D44: push    ecx
0x660D45: mov     ecx, [esp+44h+arg_0]
0x660D49: push    edx
0x660D4A: mov     edx, [eax+100h]
0x660D50: push    ecx
0x660D51: mov     ecx, ebx
0x660D53: call    edx
0x660D55: mov     edi, eax
0x660D57: test    edi, edi
0x660D59: jz      loc_660E71
0x660D5F: mov     eax, [edi]
0x660D61: mov     edx, [eax+154h]
0x660D67: mov     ecx, edi
0x660D69: call    edx
0x660D6B: mov     esi, eax
0x660D6D: test    esi, esi
0x660D6F: jz      loc_660E55
0x660D75: push    1
0x660D77: push    1
0x660D79: push    0
0x660D7B: push    esi
0x660D7C: call    sub_88CEB0
0x660D81: fldz
0x660D83: add     esp, 10h
0x660D86: push    0; a3
0x660D88: push    ecx
0x660D89: mov     ecx, esi; this
0x660D8B: fstp    [esp+2Ch+a2]; a2
0x660D8E: call    NiAVObject_UpdateNiAVObject
0x660D93: push    1; a4
0x660D95: push    1; a3
0x660D97: push    1; a2
0x660D99: push    esi
0x660D9A: call    sub_88CEB0
0x660D9F: mov     eax, [edi]
0x660DA1: mov     edx, [eax+174h]
0x660DA7: add     esp, 10h
0x660DAA: mov     ecx, edi
0x660DAC: call    edx
0x660DAE: mov     ecx, [eax]
0x660DB0: mov     edx, [eax+4]
0x660DB3: mov     eax, [eax+8]
0x660DB6: mov     [esp+24h+var_18], ecx
0x660DBA: fld     [esp+24h+var_18]
0x660DBE: fld     st
0x660DC0: mov     [esp+24h+var_14], edx
0x660DC4: fsub    dword ptr [esi+20h]
0x660DC7: mov     [esp+24h+var_10], eax
0x660DCB: sub     esp, 0Ch
0x660DCE: mov     eax, esp
0x660DD0: fstp    [esp+30h+var_C]
0x660DD4: fld     [esp+30h+var_14]
0x660DD8: fld     st
0x660DDA: fsub    dword ptr [esi+24h]
0x660DDD: fstp    [esp+30h+var_8]
0x660DE1: fld     [esp+30h+var_10]
0x660DE5: fld     st
0x660DE7: fsub    dword ptr [esi+28h]
0x660DEA: fstp    [esp+30h+var_4]
0x660DEE: fld     [esp+30h+var_C]
0x660DF2: faddp   st(3), st
0x660DF4: fxch    st(2)
0x660DF6: fstp    [esp+30h+var_18]
0x660DFA: mov     ecx, [esp+30h+var_18]
0x660DFE: mov     [esi+54h], ecx
0x660E01: fadd    [esp+30h+var_8]
0x660E05: mov     [eax], ecx
0x660E07: mov     ecx, edi; this
0x660E09: fstp    [esp+30h+var_14]
0x660E0D: mov     edx, [esp+30h+var_14]
0x660E11: mov     [esi+58h], edx
0x660E14: fadd    [esp+30h+var_4]
0x660E18: mov     [eax+4], edx
0x660E1B: fstp    [esp+30h+var_10]
0x660E1F: mov     ebx, [esp+30h+var_10]
0x660E23: mov     [esi+5Ch], ebx
0x660E26: mov     [eax+8], ebx
0x660E29: call    TESObjectREFR_SetPosition
0x660E2E: push    1
0x660E30: push    esi
0x660E31: call    sub_897A20
0x660E36: push    0
0x660E38: push    1
0x660E3A: push    1
0x660E3C: push    esi
0x660E3D: call    sub_88CF90
0x660E42: add     esp, 18h
0x660E45: call    sub_5C1900
0x660E4A: mov     eax, edi
0x660E4C: pop     edi
0x660E4D: pop     esi
0x660E4E: pop     ebx
0x660E4F: add     esp, 18h
0x660E52: retn    14h
0x660E55: push    edi
0x660E56: lea     ecx, [ebx+780h]
0x660E5C: call    BSSimpleList_PushFront
0x660E61: or      dword ptr [edi+8], 400000h
0x660E68: push    1
0x660E6A: mov     ecx, edi
0x660E6C: call    sub_4D6F40
0x660E71: call    sub_5C1900
0x660E76: mov     eax, edi
0x660E78: pop     edi
0x660E79: pop     esi
0x660E7A: pop     ebx
0x660E7B: add     esp, 18h
0x660E7E: retn    14h
