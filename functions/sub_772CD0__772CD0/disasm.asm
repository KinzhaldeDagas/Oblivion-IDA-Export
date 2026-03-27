0x772CD0: push    ecx
0x772CD1: push    ebx
0x772CD2: push    esi
0x772CD3: push    edi
0x772CD4: mov     esi, ecx
0x772CD6: mov     ecx, [esp+10h+arg_0]
0x772CDA: lea     eax, [esp+10h+var_1]
0x772CDE: push    eax
0x772CDF: push    ecx
0x772CE0: mov     ecx, esi
0x772CE2: mov     [esp+18h+var_1], 0
0x772CE7: call    sub_7727D0
0x772CEC: mov     edi, eax
0x772CEE: xor     ebx, ebx
0x772CF0: cmp     edi, ebx
0x772CF2: jz      short loc_772D5C
0x772CF4: mov     al, [esp+10h+var_1]
0x772CF8: cmp     al, [esp+10h+arg_8]
0x772CFC: mov     edx, [esp+10h+arg_4]
0x772D00: mov     [edi+4], edx
0x772D03: jz      loc_772DE6
0x772D09: test    al, al
0x772D0B: push    edi
0x772D0C: mov     ecx, esi
0x772D0E: jz      short loc_772D36
0x772D10: call    sub_772790
0x772D15: mov     eax, [esi+8]
0x772D18: cmp     eax, ebx
0x772D1A: jz      short loc_772D25
0x772D1C: mov     [eax+0Ch], edi
0x772D1F: mov     eax, [esi+8]
0x772D22: mov     [edi+8], eax
0x772D25: mov     [edi+0Ch], ebx
0x772D28: add     dword ptr [esi+4], 1
0x772D2C: mov     [esi+8], edi
0x772D2F: pop     edi
0x772D30: pop     esi
0x772D31: pop     ebx
0x772D32: pop     ecx
0x772D33: retn    0Ch
0x772D36: call    sub_772750
0x772D3B: mov     eax, [esi+10h]
0x772D3E: cmp     eax, ebx
0x772D40: jz      short loc_772D4B
0x772D42: mov     [eax+0Ch], edi
0x772D45: mov     ecx, [esi+10h]
0x772D48: mov     [edi+8], ecx
0x772D4B: mov     [edi+0Ch], ebx
0x772D4E: add     dword ptr [esi+0Ch], 1
0x772D52: mov     [esi+10h], edi
0x772D55: pop     edi
0x772D56: pop     esi
0x772D57: pop     ebx
0x772D58: pop     ecx
0x772D59: retn    0Ch
0x772D5C: mov     ecx, ds:0B427ACh
0x772D62: cmp     [ecx+8], ebx
0x772D65: lea     edi, [ecx+8]
0x772D68: push    ebp
0x772D69: mov     ebp, ecx
0x772D6B: jnz     short loc_772D81
0x772D6D: mov     edx, [ecx+0Ch]
0x772D70: lea     ebx, [ecx+0Ch]
0x772D73: push    edx
0x772D74: call    sub_772A80
0x772D79: mov     eax, [ebx]
0x772D7B: add     eax, eax
0x772D7D: mov     [ebx], eax
0x772D7F: xor     ebx, ebx
0x772D81: mov     ecx, [ebp+0]
0x772D84: mov     eax, [ecx]
0x772D86: add     dword ptr [edi], 0FFFFFFFFh
0x772D89: cmp     [esp+14h+arg_8], 0
0x772D8E: mov     edi, [edi]
0x772D90: mov     edx, [ecx+edi*4]
0x772D93: mov     [ecx], edx
0x772D95: mov     ecx, [esp+14h+arg_0]
0x772D99: mov     edx, [esp+14h+arg_4]
0x772D9D: mov     [eax+8], ebx
0x772DA0: mov     [eax+0Ch], ebx
0x772DA3: mov     [eax], ecx
0x772DA5: mov     [eax+4], edx
0x772DA8: pop     ebp
0x772DA9: jz      short loc_772DCC
0x772DAB: mov     ecx, [esi+10h]
0x772DAE: cmp     ecx, ebx
0x772DB0: jz      short loc_772DBB
0x772DB2: mov     [ecx+0Ch], eax
0x772DB5: mov     ecx, [esi+10h]
0x772DB8: mov     [eax+8], ecx
0x772DBB: mov     [eax+0Ch], ebx
0x772DBE: add     dword ptr [esi+0Ch], 1
0x772DC2: pop     edi
0x772DC3: mov     [esi+10h], eax
0x772DC6: pop     esi
0x772DC7: pop     ebx
0x772DC8: pop     ecx
0x772DC9: retn    0Ch
0x772DCC: mov     ecx, [esi+8]
0x772DCF: cmp     ecx, ebx
0x772DD1: jz      short loc_772DDC
0x772DD3: mov     [ecx+0Ch], eax
0x772DD6: mov     edx, [esi+8]
0x772DD9: mov     [eax+8], edx
0x772DDC: mov     [eax+0Ch], ebx
0x772DDF: add     dword ptr [esi+4], 1
0x772DE3: mov     [esi+8], eax
0x772DE6: pop     edi
0x772DE7: pop     esi
0x772DE8: pop     ebx
0x772DE9: pop     ecx
0x772DEA: retn    0Ch
