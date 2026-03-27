0x54DFD0: push    ebp
0x54DFD1: mov     ebp, esp
0x54DFD3: push    0FFFFFFFFh
0x54DFD5: push    offset SEH_54DFD0
0x54DFDA: mov     eax, large fs:0
0x54DFE0: push    eax
0x54DFE1: sub     esp, 18h
0x54DFE4: push    ebx
0x54DFE5: push    esi
0x54DFE6: push    edi
0x54DFE7: mov     eax, ds:0B30AACh
0x54DFEC: xor     eax, ebp
0x54DFEE: push    eax
0x54DFEF: lea     eax, [ebp+var_C]
0x54DFF2: mov     large fs:0, eax
0x54DFF8: mov     [ebp+var_10], esp
0x54DFFB: mov     esi, ecx
0x54DFFD: mov     eax, [ebp+arg_C]
0x54E000: mov     ecx, [eax]
0x54E002: mov     edx, [eax+4]
0x54E005: mov     [ebp+var_24], ecx
0x54E008: mov     ecx, [eax+8]
0x54E00B: mov     [ebp+var_1C], ecx
0x54E00E: mov     ecx, [esi+4]
0x54E011: test    ecx, ecx
0x54E013: mov     [ebp+var_20], edx
0x54E016: mov     edx, [eax+0Ch]
0x54E019: mov     [ebp+var_18], edx
0x54E01C: jnz     short loc_54E022
0x54E01E: xor     eax, eax
0x54E020: jmp     short loc_54E02A
0x54E022: mov     eax, [esi+0Ch]
0x54E025: sub     eax, ecx
0x54E027: sar     eax, 4
0x54E02A: mov     edi, [ebp+arg_8]
0x54E02D: test    edi, edi
0x54E02F: jz      loc_54E213
0x54E035: test    ecx, ecx
0x54E037: jnz     short loc_54E03D
0x54E039: xor     edx, edx
0x54E03B: jmp     short loc_54E045
0x54E03D: mov     edx, [esi+8]
0x54E040: sub     edx, ecx
0x54E042: sar     edx, 4
0x54E045: or      ebx, 0FFFFFFFFh
0x54E048: sub     ebx, edx
0x54E04A: cmp     ebx, edi
0x54E04C: jnb     short loc_54E053
0x54E04E: call    sub_790B90
0x54E053: test    ecx, ecx
0x54E055: jnz     short loc_54E05B
0x54E057: xor     edx, edx
0x54E059: jmp     short loc_54E063
0x54E05B: mov     edx, [esi+8]
0x54E05E: sub     edx, ecx
0x54E060: sar     edx, 4
0x54E063: add     edx, edi
0x54E065: cmp     eax, edx
0x54E067: jnb     loc_54E167
0x54E06D: mov     edx, eax
0x54E06F: shr     edx, 1
0x54E071: or      ebx, 0FFFFFFFFh
0x54E074: sub     ebx, edx
0x54E076: cmp     ebx, eax
0x54E078: jnb     short loc_54E07E
0x54E07A: xor     eax, eax
0x54E07C: jmp     short loc_54E080
0x54E07E: add     eax, edx
0x54E080: test    ecx, ecx
0x54E082: jnz     short loc_54E088
0x54E084: xor     edx, edx
0x54E086: jmp     short loc_54E090
0x54E088: mov     edx, [esi+8]
0x54E08B: sub     edx, ecx
0x54E08D: sar     edx, 4
0x54E090: add     edx, edi
0x54E092: cmp     eax, edx
0x54E094: jnb     short loc_54E0A8
0x54E096: test    ecx, ecx
0x54E098: jnz     short loc_54E09E
0x54E09A: xor     eax, eax
0x54E09C: jmp     short loc_54E0A6
0x54E09E: mov     eax, [esi+8]
0x54E0A1: sub     eax, ecx
0x54E0A3: sar     eax, 4
0x54E0A6: add     eax, edi
0x54E0A8: shl     eax, 4
0x54E0AB: push    eax; Size
0x54E0AC: mov     [ebp+arg_8], eax
0x54E0AF: call    FormHeapAlloc
0x54E0B4: mov     byte ptr [ebp+arg_C], 0
0x54E0B8: mov     ecx, [ebp+arg_C]
0x54E0BB: mov     edx, [ebp+arg_C]
0x54E0BE: push    ecx
0x54E0BF: mov     ecx, [ebp+arg_4]
0x54E0C2: push    edx
0x54E0C3: mov     ebx, eax
0x54E0C5: mov     eax, [esi+4]
0x54E0C8: push    esi
0x54E0C9: push    ebx
0x54E0CA: push    ecx
0x54E0CB: push    eax
0x54E0CC: mov     [ebp+var_14], ebx
0x54E0CF: mov     [ebp+var_4], 0
0x54E0D6: call    sub_54D910
0x54E0DB: add     esp, 1Ch
0x54E0DE: lea     edx, [ebp+var_24]
0x54E0E1: push    edx
0x54E0E2: push    edi
0x54E0E3: push    eax
0x54E0E4: mov     ecx, esi
0x54E0E6: call    sub_6F13C0
0x54E0EB: mov     ecx, [esi+8]
0x54E0EE: mov     byte ptr [ebp+arg_C], 0
0x54E0F2: mov     edx, [ebp+arg_C]
0x54E0F5: push    edx
0x54E0F6: mov     edx, [ebp+arg_C]
0x54E0F9: push    edx
0x54E0FA: push    esi
0x54E0FB: push    eax
0x54E0FC: mov     eax, [ebp+arg_4]
0x54E0FF: push    ecx
0x54E100: push    eax
0x54E101: call    sub_54D910
0x54E106: mov     ecx, [esi+4]
0x54E109: add     esp, 18h
0x54E10C: test    ecx, ecx
0x54E10E: jnz     short loc_54E114
0x54E110: xor     eax, eax
0x54E112: jmp     short loc_54E11C
0x54E114: mov     eax, [esi+8]
0x54E117: sub     eax, ecx
0x54E119: sar     eax, 4
0x54E11C: add     edi, eax
0x54E11E: test    ecx, ecx
0x54E120: jz      short loc_54E12B
0x54E122: push    ecx
0x54E123: call    FormHeapFree
0x54E128: add     esp, 4
0x54E12B: mov     ecx, [ebp+arg_8]
0x54E12E: add     ecx, ebx
0x54E130: shl     edi, 4
0x54E133: add     edi, ebx
0x54E135: mov     [esi+0Ch], ecx
0x54E138: mov     [esi+8], edi
0x54E13B: mov     [esi+4], ebx
0x54E13E: mov     ecx, [ebp+var_C]
0x54E141: mov     large fs:0, ecx
0x54E148: pop     ecx
0x54E149: pop     edi
0x54E14A: pop     esi
0x54E14B: pop     ebx
0x54E14C: mov     esp, ebp
0x54E14E: pop     ebp
0x54E14F: retn    10h
0x54E152: mov     edx, [ebp+var_14]
0x54E155: push    edx
0x54E156: call    FormHeapFree
0x54E15B: add     esp, 4
0x54E15E: push    0
0x54E160: push    0
0x54E162: call    ThrowException??
0x54E167: mov     eax, [esi+8]
0x54E16A: mov     ebx, [ebp+arg_4]
0x54E16D: mov     ecx, eax
0x54E16F: sub     ecx, ebx
0x54E171: sar     ecx, 4
0x54E174: cmp     ecx, edi
0x54E176: mov     [ebp+arg_8], eax
0x54E179: jnb     short loc_54E1DC
0x54E17B: mov     ecx, edi
0x54E17D: shl     ecx, 4
0x54E180: mov     [ebp+arg_C], ecx
0x54E183: add     ecx, ebx
0x54E185: push    ecx
0x54E186: push    eax
0x54E187: push    ebx
0x54E188: mov     ecx, esi
0x54E18A: call    sub_6F15D0
0x54E18F: mov     eax, [esi+8]
0x54E192: mov     ecx, eax
0x54E194: sub     ecx, ebx
0x54E196: sar     ecx, 4
0x54E199: lea     edx, [ebp+var_24]
0x54E19C: push    edx
0x54E19D: sub     edi, ecx
0x54E19F: push    edi
0x54E1A0: push    eax
0x54E1A1: mov     ecx, esi
0x54E1A3: mov     [ebp+var_4], 2
0x54E1AA: call    sub_6F13C0
0x54E1AF: mov     eax, [ebp+arg_C]
0x54E1B2: add     [esi+8], eax
0x54E1B5: mov     esi, [esi+8]
0x54E1B8: lea     edx, [ebp+var_24]
0x54E1BB: push    edx
0x54E1BC: sub     esi, eax
0x54E1BE: push    esi
0x54E1BF: push    ebx
0x54E1C0: call    sub_54D9A0
0x54E1C5: add     esp, 0Ch
0x54E1C8: mov     ecx, [ebp+var_C]
0x54E1CB: mov     large fs:0, ecx
0x54E1D2: pop     ecx
0x54E1D3: pop     edi
0x54E1D4: pop     esi
0x54E1D5: pop     ebx
0x54E1D6: mov     esp, ebp
0x54E1D8: pop     ebp
0x54E1D9: retn    10h
0x54E1DC: shl     edi, 4
0x54E1DF: mov     ecx, edi
0x54E1E1: push    eax
0x54E1E2: mov     edi, eax
0x54E1E4: sub     edi, ecx
0x54E1E6: push    eax
0x54E1E7: mov     [ebp+arg_C], ecx
0x54E1EA: push    edi
0x54E1EB: mov     ecx, esi
0x54E1ED: call    sub_6F15D0
0x54E1F2: mov     [esi+8], eax
0x54E1F5: mov     eax, [ebp+arg_8]
0x54E1F8: push    eax
0x54E1F9: push    edi
0x54E1FA: push    ebx
0x54E1FB: call    sub_6F1440
0x54E200: mov     edx, [ebp+arg_C]
0x54E203: lea     ecx, [ebp+var_24]
0x54E206: push    ecx
0x54E207: add     edx, ebx
0x54E209: push    edx
0x54E20A: push    ebx
0x54E20B: call    sub_54D9A0
0x54E210: add     esp, 18h
0x54E213: mov     ecx, [ebp+var_C]
0x54E216: mov     large fs:0, ecx
0x54E21D: pop     ecx
0x54E21E: pop     edi
0x54E21F: pop     esi
0x54E220: pop     ebx
0x54E221: mov     esp, ebp
0x54E223: pop     ebp
0x54E224: retn    10h
