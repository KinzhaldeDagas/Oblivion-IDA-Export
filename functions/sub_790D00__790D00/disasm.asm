0x790D00: push    0FFFFFFFFh
0x790D02: push    offset SEH_790D00
0x790D07: mov     eax, large fs:0
0x790D0D: push    eax
0x790D0E: push    ecx
0x790D0F: push    ebx
0x790D10: push    ebp
0x790D11: push    esi
0x790D12: push    edi
0x790D13: mov     eax, ds:0B30AACh
0x790D18: xor     eax, esp
0x790D1A: push    eax
0x790D1B: lea     eax, [esp+24h+var_C]
0x790D1F: mov     large fs:0, eax
0x790D25: mov     esi, ecx
0x790D27: mov     [esp+24h+var_10], esi
0x790D2B: mov     eax, [esi+18h]
0x790D2E: push    eax
0x790D2F: mov     [esp+28h+var_4], 1
0x790D37: call    FormHeapFree
0x790D3C: xor     ebx, ebx
0x790D3E: add     esp, 4
0x790D41: xor     edi, edi
0x790D43: mov     [esi+18h], ebx
0x790D46: xor     ebp, ebp
0x790D48: jmp     short loc_790D50
0x790D4A: align 10h
0x790D50: mov     eax, [esi+0Ch]
0x790D53: cmp     eax, ebx
0x790D55: jz      loc_790DF1
0x790D5B: mov     ecx, [esi+10h]
0x790D5E: sub     ecx, eax
0x790D60: mov     eax, 2AAAAAABh
0x790D65: imul    ecx
0x790D67: sar     edx, 1
0x790D69: mov     eax, edx
0x790D6B: shr     eax, 1Fh
0x790D6E: add     eax, edx
0x790D70: cmp     edi, eax
0x790D72: jnb     short loc_790DF1
0x790D74: mov     eax, [esi+0Ch]
0x790D77: cmp     eax, ebx
0x790D79: jz      short loc_790D94
0x790D7B: mov     ecx, [esi+10h]
0x790D7E: sub     ecx, eax
0x790D80: mov     eax, 2AAAAAABh
0x790D85: imul    ecx
0x790D87: sar     edx, 1
0x790D89: mov     eax, edx
0x790D8B: shr     eax, 1Fh
0x790D8E: add     eax, edx
0x790D90: cmp     edi, eax
0x790D92: jb      short loc_790D99
0x790D94: call    __invalid_parameter_noinfo
0x790D99: mov     ecx, [esi+0Ch]
0x790D9C: mov     ebx, [ecx+ebp+8]
0x790DA0: test    ebx, ebx
0x790DA2: jz      short loc_790DB4
0x790DA4: mov     ecx, ebx
0x790DA6: call    sub_790D00
0x790DAB: push    ebx
0x790DAC: call    FormHeapFree
0x790DB1: add     esp, 4
0x790DB4: mov     eax, [esi+0Ch]
0x790DB7: test    eax, eax
0x790DB9: jz      short loc_790DD4
0x790DBB: mov     ecx, [esi+10h]
0x790DBE: sub     ecx, eax
0x790DC0: mov     eax, 2AAAAAABh
0x790DC5: imul    ecx
0x790DC7: sar     edx, 1
0x790DC9: mov     eax, edx
0x790DCB: shr     eax, 1Fh
0x790DCE: add     eax, edx
0x790DD0: cmp     edi, eax
0x790DD2: jb      short loc_790DD9
0x790DD4: call    __invalid_parameter_noinfo
0x790DD9: mov     edx, [esi+0Ch]
0x790DDC: mov     dword ptr [edx+ebp+8], 0
0x790DE4: add     edi, 1
0x790DE7: add     ebp, 0Ch
0x790DEA: xor     ebx, ebx
0x790DEC: jmp     loc_790D50
0x790DF1: mov     eax, [esi+34h]
0x790DF4: cmp     eax, ebx
0x790DF6: jz      short loc_790E01
0x790DF8: push    eax
0x790DF9: call    FormHeapFree
0x790DFE: add     esp, 4
0x790E01: mov     [esi+34h], ebx
0x790E04: mov     [esi+38h], ebx
0x790E07: mov     [esi+3Ch], ebx
0x790E0A: mov     eax, [esi+0Ch]
0x790E0D: cmp     eax, ebx
0x790E0F: jz      short loc_790E1A
0x790E11: push    eax
0x790E12: call    FormHeapFree
0x790E17: add     esp, 4
0x790E1A: mov     [esi+0Ch], ebx
0x790E1D: mov     [esi+10h], ebx
0x790E20: mov     [esi+14h], ebx
0x790E23: mov     ecx, [esp+24h+var_C]
0x790E27: mov     large fs:0, ecx
0x790E2E: pop     ecx
0x790E2F: pop     edi
0x790E30: pop     esi
0x790E31: pop     ebp
0x790E32: pop     ebx
0x790E33: add     esp, 10h
0x790E36: retn
