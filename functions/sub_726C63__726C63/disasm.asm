0x726C63: mov     eax, [ebx+21Ch]
0x726C69: push    1
0x726C6B: lea     edx, [esp+4+arg_18]
0x726C6F: push    edx
0x726C70: lea     ecx, [ebp+0Ch]
0x726C73: push    2
0x726C75: push    ecx
0x726C76: push    eax
0x726C77: mov     eax, [eax+4]
0x726C7A: mov     [esp+14h+arg_18], 2
0x726C82: call    eax
0x726C84: mov     eax, [ebx+21Ch]
0x726C8A: mov     edx, [eax+4]
0x726C8D: push    1
0x726C8F: lea     ecx, [esp+18h+arg_18]
0x726C93: push    ecx
0x726C94: push    4
0x726C96: lea     esi, [ebp+10h]
0x726C99: push    esi
0x726C9A: push    eax
0x726C9B: mov     [esp+28h+arg_18], 4
0x726CA3: call    edx
0x726CA5: mov     edi, [esi]
0x726CA7: add     esp, 28h
0x726CAA: test    edi, edi
0x726CAC: jz      short loc_726D1D
0x726CAE: xor     ecx, ecx
0x726CB0: mov     eax, edi
0x726CB2: mov     edx, 1Ch
0x726CB7: mul     edx
0x726CB9: seto    cl
0x726CBC: neg     ecx
0x726CBE: or      ecx, eax
0x726CC0: push    ecx; Size
0x726CC1: call    FormHeapAlloc
0x726CC6: add     esp, 4
0x726CC9: mov     [esp+arg_18], eax
0x726CCD: test    eax, eax
0x726CCF: mov     [esp+arg_28], 0
0x726CD7: jz      short loc_726CED
0x726CD9: push    offset sub_53D910
0x726CDE: push    edi
0x726CDF: push    1Ch
0x726CE1: push    eax
0x726CE2: call    sub_401080
0x726CE7: mov     eax, [esp+arg_18]
0x726CEB: jmp     short loc_726CEF
0x726CED: xor     eax, eax
0x726CEF: xor     edi, edi
0x726CF1: cmp     [esi], edi
0x726CF3: mov     [esp+arg_28], 0FFFFFFFFh
0x726CFB: mov     [ebp+14h], eax
0x726CFE: jbe     short loc_726D1D
0x726D00: mov     [esp+arg_18], edi
0x726D04: mov     ecx, [ebp+14h]
0x726D07: add     ecx, [esp+arg_18]
0x726D0B: push    ebx
0x726D0C: call    sub_726510
0x726D11: add     [esp+arg_18], 1Ch
0x726D16: add     edi, 1
0x726D19: cmp     edi, [esi]
0x726D1B: jb      short loc_726D04
0x726D1D: mov     eax, [ebx+21Ch]
0x726D23: push    1
0x726D25: lea     ecx, [esp+4+arg_18]
0x726D29: push    ecx
0x726D2A: push    4
0x726D2C: lea     edx, [esp+0Ch+arg_14]
0x726D30: push    edx
0x726D31: mov     [esp+10h+arg_14], 0
0x726D39: push    eax
0x726D3A: mov     eax, [eax+4]
0x726D3D: mov     [esp+14h+arg_18], 4
0x726D45: call    eax
0x726D47: mov     ecx, [esp+14h+arg_14]
0x726D4B: add     esp, 14h
0x726D4E: lea     esi, [ebp+1Ch]
0x726D51: push    ecx
0x726D52: mov     ecx, esi
0x726D54: call    NiTArray_SetSize
0x726D59: xor     edi, edi
0x726D5B: cmp     [esp+arg_14], edi
0x726D5F: jbe     loc_726E59
0x726D65: jmp     short loc_726D70
0x726D67: align 10h
0x726D70: mov     eax, [ebx+21Ch]
0x726D76: push    1
0x726D78: lea     edx, [esp+4+arg_1C]
0x726D7C: push    edx
0x726D7D: mov     edx, [eax+4]
0x726D80: push    1
0x726D82: lea     ecx, [esp+0Ch+arg_13]
0x726D86: push    ecx
0x726D87: push    eax
0x726D88: mov     [esp+14h+arg_1C], 1
0x726D90: call    edx
0x726D92: add     esp, 14h
0x726D95: cmp     [esp+arg_13], 0
0x726D9A: jz      loc_726E22
0x726DA0: mov     eax, [ebp+0]
0x726DA3: mov     edx, [eax+50h]
0x726DA6: mov     ecx, ebp
0x726DA8: call    edx
0x726DAA: mov     ecx, [ebp+10h]
0x726DAD: mov     edx, [ebp+14h]
0x726DB0: mov     ebx, eax
0x726DB2: movzx   eax, word ptr [ebp+0Ch]
0x726DB6: push    eax
0x726DB7: mov     eax, [esp+4+arg_30]
0x726DBB: push    ecx
0x726DBC: push    edx
0x726DBD: push    edi
0x726DBE: push    eax
0x726DBF: mov     ecx, ebx
0x726DC1: call    sub_7266D0
0x726DC6: movzx   ecx, word ptr [esi+0Ah]
0x726DCA: cmp     edi, ecx
0x726DCC: jb      short loc_726DEA
0x726DCE: test    ebx, ebx
0x726DD0: lea     edx, [edi+1]
0x726DD3: mov     [esi+0Ah], dx
0x726DD7: jz      short loc_726E16
0x726DD9: mov     edx, [esi+4]
0x726DDC: add     word ptr [esi+0Ch], 1
0x726DE1: mov     [edx+edi*4], ebx
0x726DE4: mov     ebx, [esp+arg_30]
0x726DE8: jmp     short loc_726E4C
0x726DEA: test    ebx, ebx
0x726DEC: jz      short loc_726E07
0x726DEE: mov     eax, [esi+4]
0x726DF1: cmp     dword ptr [eax+edi*4], 0
0x726DF5: jnz     short loc_726E16
0x726DF7: add     word ptr [esi+0Ch], 1
0x726DFC: mov     edx, eax
0x726DFE: mov     [edx+edi*4], ebx
0x726E01: mov     ebx, [esp+arg_30]
0x726E05: jmp     short loc_726E4C
0x726E07: mov     ecx, [esi+4]
0x726E0A: cmp     dword ptr [ecx+edi*4], 0
0x726E0E: jz      short loc_726E16
0x726E10: add     word ptr [esi+0Ch], 0FFFFh
0x726E16: mov     edx, [esi+4]
0x726E19: mov     [edx+edi*4], ebx
0x726E1C: mov     ebx, [esp+arg_30]
0x726E20: jmp     short loc_726E4C
0x726E22: movzx   eax, word ptr [esi+0Ah]
0x726E26: cmp     edi, eax
0x726E28: jb      short loc_726E33
0x726E2A: lea     ecx, [edi+1]
0x726E2D: mov     [esi+0Ah], cx
0x726E31: jmp     short loc_726E42
0x726E33: mov     edx, [esi+4]
0x726E36: cmp     dword ptr [edx+edi*4], 0
0x726E3A: jz      short loc_726E42
0x726E3C: add     word ptr [esi+0Ch], 0FFFFh
0x726E42: mov     eax, [esi+4]
0x726E45: mov     dword ptr [eax+edi*4], 0
0x726E4C: add     edi, 1
0x726E4F: cmp     edi, [esp+arg_14]
0x726E53: jb      loc_726D70
0x726E59: mov     ecx, [esp+arg_20]
0x726E5D: mov     large fs:0, ecx
0x726E64: pop     ecx
0x726E65: pop     edi
0x726E66: pop     esi
0x726E67: pop     ebp
0x726E68: pop     ebx
0x726E69: add     esp, 1Ch
0x726E6C: retn    4
