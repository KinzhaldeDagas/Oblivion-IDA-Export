0x723C80: push    0FFFFFFFFh
0x723C82: push    offset SEH_723C80
0x723C87: mov     eax, large fs:0
0x723C8D: push    eax
0x723C8E: sub     esp, 24h
0x723C91: push    ebx
0x723C92: push    ebp
0x723C93: push    esi
0x723C94: push    edi
0x723C95: mov     eax, ds:0B30AACh
0x723C9A: xor     eax, esp
0x723C9C: push    eax
0x723C9D: lea     eax, [esp+44h+var_C]
0x723CA1: mov     large fs:0, eax
0x723CA7: mov     ebp, ecx
0x723CA9: mov     [esp+44h+var_1C], ebp
0x723CAD: mov     ebx, [esp+44h+arg_0]
0x723CB1: push    ebx
0x723CB2: call    sub_7247D0
0x723CB7: cmp     dword ptr [ebx+0D8h], 0A00010Bh
0x723CC1: ja      loc_723E2C
0x723CC7: push    28h ; '('; Size
0x723CC9: call    FormHeapAlloc
0x723CCE: add     esp, 4
0x723CD1: mov     [esp+44h+var_20], eax
0x723CD5: xor     edi, edi
0x723CD7: cmp     eax, edi
0x723CD9: mov     [esp+44h+var_4], edi
0x723CDD: jz      short loc_723CEA
0x723CDF: mov     ecx, eax
0x723CE1: call    sub_7249A0
0x723CE6: mov     esi, eax
0x723CE8: jmp     short loc_723CEC
0x723CEA: xor     esi, esi
0x723CEC: push    ebx
0x723CED: lea     ecx, [esp+48h+var_18]
0x723CF1: mov     [esp+48h+var_4], 0FFFFFFFFh
0x723CF9: call    sub_709430
0x723CFE: mov     eax, [esp+44h+var_18]
0x723D02: mov     [esi+8], eax
0x723D05: mov     ecx, [esp+44h+var_14]
0x723D09: mov     [esi+0Ch], ecx
0x723D0C: mov     edx, [esp+44h+var_10]
0x723D10: push    1
0x723D12: lea     ecx, [esp+48h+var_30]
0x723D16: push    ecx
0x723D17: mov     [esi+10h], edx
0x723D1A: mov     eax, [ebx+21Ch]
0x723D20: push    4
0x723D22: lea     edx, [esp+50h+arg_0]
0x723D26: push    edx
0x723D27: push    eax
0x723D28: mov     eax, [eax+4]
0x723D2B: mov     [esp+58h+var_30], 4
0x723D33: call    eax
0x723D35: mov     eax, [esp+58h+arg_0]
0x723D39: add     esp, 14h
0x723D3C: cmp     eax, edi
0x723D3E: jbe     loc_723DF0
0x723D44: push    eax
0x723D45: mov     ecx, esi
0x723D47: call    sub_724AB0
0x723D4C: cmp     [esp+44h+arg_0], edi
0x723D50: jbe     loc_723DF0
0x723D56: xor     ebp, ebp
0x723D58: jmp     short loc_723D60
0x723D5A: align 10h
0x723D60: mov     eax, [ebx+21Ch]
0x723D66: push    1
0x723D68: lea     ecx, [esp+48h+var_30]
0x723D6C: push    ecx
0x723D6D: push    4
0x723D6F: lea     edx, [esp+50h+var_28]
0x723D73: push    edx
0x723D74: push    eax
0x723D75: mov     eax, [eax+4]
0x723D78: mov     [esp+58h+var_30], 4
0x723D80: call    eax
0x723D82: mov     eax, [ebx+21Ch]
0x723D88: push    1
0x723D8A: lea     ecx, [esp+5Ch+var_2C]
0x723D8E: push    ecx
0x723D8F: push    4
0x723D91: lea     edx, [esp+64h+var_24]
0x723D95: push    edx
0x723D96: push    eax
0x723D97: mov     eax, [eax+4]
0x723D9A: mov     [esp+6Ch+var_2C], 4
0x723DA2: call    eax
0x723DA4: fld     [esp+6Ch+var_28]
0x723DA8: fstp    [esp+6Ch+var_30]
0x723DAC: add     esp, 28h
0x723DAF: cmp     edi, [esi+20h]
0x723DB2: fld     [esp+44h+var_24]
0x723DB6: fstp    [esp+44h+var_20]
0x723DBA: jb      short loc_723DC7
0x723DBC: lea     ecx, [edi+1]
0x723DBF: push    ecx
0x723DC0: mov     ecx, esi
0x723DC2: call    sub_724AB0
0x723DC7: mov     edx, [esi+24h]
0x723DCA: fld     [esp+44h+var_30]
0x723DCE: fstp    dword ptr [edx+ebp]
0x723DD1: mov     eax, [esi+24h]
0x723DD4: fld     [esp+44h+var_20]
0x723DD8: add     edi, 1
0x723DDB: fstp    dword ptr [eax+ebp+4]
0x723DDF: add     ebp, 10h
0x723DE2: cmp     edi, [esp+44h+arg_0]
0x723DE6: jb      loc_723D60
0x723DEC: mov     ebp, [esp+44h+var_1C]
0x723DF0: mov     edi, [ebp+0FCh]
0x723DF6: cmp     edi, esi
0x723DF8: jz      short loc_723E33
0x723DFA: test    edi, edi
0x723DFC: jz      short loc_723E1A
0x723DFE: lea     ecx, [edi+4]
0x723E01: push    ecx; lpAddend
0x723E02: call    dword ptr ds:0A2807Ch
0x723E08: test    eax, eax
0x723E0A: jnz     short loc_723E1A
0x723E0C: test    edi, edi
0x723E0E: jz      short loc_723E1A
0x723E10: mov     edx, [edi]
0x723E12: mov     eax, [edx]
0x723E14: push    1
0x723E16: mov     ecx, edi
0x723E18: call    eax
0x723E1A: mov     [ebp+0FCh], esi
0x723E20: add     esi, 4
0x723E23: push    esi; lpAddend
0x723E24: call    dword ptr ds:0A28078h
0x723E2A: jmp     short loc_723E33
0x723E2C: mov     ecx, ebx
0x723E2E: call    sub_712A20
0x723E33: mov     ecx, [esp+44h+var_C]
0x723E37: mov     large fs:0, ecx
0x723E3E: pop     ecx
0x723E3F: pop     edi
0x723E40: pop     esi
0x723E41: pop     ebp
0x723E42: pop     ebx
0x723E43: add     esp, 30h
0x723E46: retn    4
