0x6B1D40: push    0FFFFFFFFh
0x6B1D42: push    offset SEH_6B1D40
0x6B1D47: mov     eax, large fs:0
0x6B1D4D: push    eax
0x6B1D4E: push    esi
0x6B1D4F: push    edi
0x6B1D50: mov     eax, ds:0B30AACh
0x6B1D55: xor     eax, esp
0x6B1D57: push    eax
0x6B1D58: lea     eax, [esp+18h+var_C]
0x6B1D5C: mov     large fs:0, eax
0x6B1D62: mov     esi, ecx
0x6B1D64: mov     eax, [esp+18h+arg_0]
0x6B1D68: push    18h; Size
0x6B1D6A: mov     [esi], eax
0x6B1D6C: call    FormHeapAlloc
0x6B1D71: add     esp, 4
0x6B1D74: mov     [esp+18h+arg_0], eax
0x6B1D78: xor     edi, edi
0x6B1D7A: cmp     eax, edi
0x6B1D7C: mov     [esp+18h+var_4], edi
0x6B1D80: jz      short loc_6B1D8B
0x6B1D82: mov     ecx, eax
0x6B1D84: call    sub_6AF660
0x6B1D89: jmp     short loc_6B1D8D
0x6B1D8B: xor     eax, eax
0x6B1D8D: push    1090h; Size
0x6B1D92: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x6B1D9A: mov     [esi+4], eax
0x6B1D9D: call    FormHeapAlloc
0x6B1DA2: add     esp, 4
0x6B1DA5: mov     [esp+18h+arg_0], eax
0x6B1DA9: cmp     eax, edi
0x6B1DAB: mov     [esp+18h+var_4], 1
0x6B1DB3: jz      short loc_6B1DC8
0x6B1DB5: fld     dword ptr ds:0A590B4h
0x6B1DBB: push    ecx
0x6B1DBC: mov     ecx, eax
0x6B1DBE: fstp    [esp+1Ch+var_1C]; float
0x6B1DC1: call    sub_6B5820
0x6B1DC6: jmp     short loc_6B1DCA
0x6B1DC8: xor     eax, eax
0x6B1DCA: push    8; Size
0x6B1DCC: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x6B1DD4: mov     [esi+8], eax
0x6B1DD7: call    FormHeapAlloc
0x6B1DDC: add     esp, 4
0x6B1DDF: mov     [esp+18h+arg_0], eax
0x6B1DE3: cmp     eax, edi
0x6B1DE5: mov     [esp+18h+var_4], 2
0x6B1DED: jz      short loc_6B1DF8
0x6B1DEF: mov     ecx, eax
0x6B1DF1: call    sub_6B57C0
0x6B1DF6: jmp     short loc_6B1DFA
0x6B1DF8: xor     eax, eax
0x6B1DFA: mov     edx, [esi]
0x6B1DFC: mov     ecx, 240h
0x6B1E01: mov     [esi+0Ch], eax
0x6B1E04: mov     [esi+14h], ecx
0x6B1E07: mov     [esi+10h], ecx
0x6B1E0A: mov     [esi+4124h], edi
0x6B1E10: mov     [esi+4128h], edi
0x6B1E16: mov     [esi+18h], edi
0x6B1E19: mov     dword ptr [esi+412Ch], 1
0x6B1E23: mov     dword ptr [esi+4120h], 2
0x6B1E2D: mov     eax, [edx+4]
0x6B1E30: mov     eax, [eax+8]
0x6B1E33: cmp     eax, 7D00h
0x6B1E38: jz      short loc_6B1E60
0x6B1E3A: cmp     eax, 0AC44h
0x6B1E3F: jz      short loc_6B1E54
0x6B1E41: cmp     eax, 0BB80h
0x6B1E46: jnz     short loc_6B1E6A
0x6B1E48: mov     dword ptr [esi+4138h], 4
0x6B1E52: jmp     short loc_6B1E6A
0x6B1E54: mov     dword ptr [esi+4138h], 3
0x6B1E5E: jmp     short loc_6B1E6A
0x6B1E60: mov     dword ptr [esi+4138h], 5
0x6B1E6A: mov     [esi+4134h], edi
0x6B1E70: mov     [esi+4130h], edi
0x6B1E76: xor     eax, eax
0x6B1E78: lea     edi, [esi+242Ch]
0x6B1E7E: rep stosd
0x6B1E80: mov     eax, esi
0x6B1E82: mov     ecx, [esp+18h+var_C]
0x6B1E86: mov     large fs:0, ecx
0x6B1E8D: pop     ecx
0x6B1E8E: pop     edi
0x6B1E8F: pop     esi
0x6B1E90: add     esp, 0Ch
0x6B1E93: retn    4
