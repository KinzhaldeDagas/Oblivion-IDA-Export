0x739CD0: sub     esp, 8
0x739CD3: push    ebx
0x739CD4: push    ebp
0x739CD5: mov     ebp, [esp+10h+a2]
0x739CD9: push    esi
0x739CDA: push    edi
0x739CDB: push    ebp; a2
0x739CDC: mov     esi, ecx
0x739CDE: call    sub_7008A0
0x739CE3: mov     eax, [ebp+21Ch]
0x739CE9: mov     edx, [eax+4]
0x739CEC: push    1
0x739CEE: lea     ecx, [esp+1Ch+var_4]
0x739CF2: push    ecx
0x739CF3: push    2
0x739CF5: lea     edi, [esi+0Ch]
0x739CF8: push    edi
0x739CF9: push    eax
0x739CFA: mov     [esp+2Ch+var_4], 2
0x739D02: call    edx
0x739D04: movzx   eax, word ptr [edi]
0x739D07: xor     ecx, ecx
0x739D09: mov     edx, 0Ch
0x739D0E: mul     edx
0x739D10: seto    cl
0x739D13: neg     ecx
0x739D15: or      ecx, eax
0x739D17: push    ecx; Size
0x739D18: call    FormHeapAlloc
0x739D1D: xor     ebx, ebx
0x739D1F: add     esp, 18h
0x739D22: cmp     [edi], bx
0x739D25: mov     [esi+10h], eax
0x739D28: jbe     short loc_739D4A
0x739D2A: lea     ebx, [ebx+0]
0x739D30: mov     ecx, [esi+10h]
0x739D33: movzx   eax, bx
0x739D36: lea     eax, [eax+eax*2]
0x739D39: push    ebp
0x739D3A: lea     ecx, [ecx+eax*4]
0x739D3D: call    sub_709430
0x739D42: add     ebx, 1
0x739D45: cmp     bx, [edi]
0x739D48: jb      short loc_739D30
0x739D4A: cmp     dword ptr [ebp+0D8h], 4010000h
0x739D54: mov     eax, [ebp+21Ch]
0x739D5A: push    1
0x739D5C: jnb     short loc_739D84
0x739D5E: lea     edx, [esp+1Ch+var_4]
0x739D62: push    edx
0x739D63: push    4
0x739D65: lea     ebx, [esi+14h]
0x739D68: push    ebx
0x739D69: push    eax
0x739D6A: mov     eax, [eax+4]
0x739D6D: mov     [esp+2Ch+var_4], 4
0x739D75: call    eax
0x739D77: add     esp, 14h
0x739D7A: cmp     dword ptr [ebx], 0
0x739D7D: setnz   byte ptr [esp+18h+a2]
0x739D82: jmp     short loc_739DA1
0x739D84: lea     ecx, [esp+1Ch+var_4]
0x739D88: push    ecx
0x739D89: push    1
0x739D8B: lea     edx, [esp+24h+a2]
0x739D8F: push    edx
0x739D90: push    eax
0x739D91: mov     eax, [eax+4]
0x739D94: mov     [esp+2Ch+var_4], 1
0x739D9C: call    eax
0x739D9E: add     esp, 14h
0x739DA1: cmp     byte ptr [esp+18h+a2], 0
0x739DA6: jz      short loc_739DE7
0x739DA8: movzx   eax, word ptr [edi]
0x739DAB: xor     ecx, ecx
0x739DAD: mov     edx, 8
0x739DB2: mul     edx
0x739DB4: seto    cl
0x739DB7: neg     ecx
0x739DB9: or      ecx, eax
0x739DBB: push    ecx; Size
0x739DBC: call    FormHeapAlloc
0x739DC1: xor     ebx, ebx
0x739DC3: add     esp, 4
0x739DC6: cmp     [edi], bx
0x739DC9: mov     [esi+14h], eax
0x739DCC: jbe     short loc_739DE7
0x739DCE: mov     edi, edi
0x739DD0: mov     ecx, [esi+14h]
0x739DD3: movzx   eax, bx
0x739DD6: push    ebp
0x739DD7: lea     ecx, [ecx+eax*8]
0x739DDA: call    sub_714BA0
0x739DDF: add     ebx, 1
0x739DE2: cmp     bx, [edi]
0x739DE5: jb      short loc_739DD0
0x739DE7: cmp     dword ptr [ebp+0D8h], 4010000h
0x739DF1: mov     eax, [ebp+21Ch]
0x739DF7: push    1
0x739DF9: jnb     short loc_739E21
0x739DFB: lea     edx, [esp+1Ch+var_4]
0x739DFF: push    edx
0x739E00: push    4
0x739E02: lea     ebx, [esi+18h]
0x739E05: push    ebx
0x739E06: push    eax
0x739E07: mov     eax, [eax+4]
0x739E0A: mov     [esp+2Ch+var_4], 4
0x739E12: call    eax
0x739E14: add     esp, 14h
0x739E17: cmp     dword ptr [ebx], 0
0x739E1A: setnz   [esp+18h+var_5]
0x739E1F: jmp     short loc_739E3E
0x739E21: lea     ecx, [esp+1Ch+var_4]
0x739E25: push    ecx
0x739E26: push    1
0x739E28: lea     edx, [esp+24h+var_5]
0x739E2C: push    edx
0x739E2D: push    eax
0x739E2E: mov     eax, [eax+4]
0x739E31: mov     [esp+2Ch+var_4], 1
0x739E39: call    eax
0x739E3B: add     esp, 14h
0x739E3E: cmp     [esp+18h+var_5], 0
0x739E43: jz      short loc_739EAE
0x739E45: movzx   ebx, word ptr [edi]
0x739E48: xor     ecx, ecx
0x739E4A: mov     eax, ebx
0x739E4C: mov     edx, 10h
0x739E51: mul     edx
0x739E53: seto    cl
0x739E56: neg     ecx
0x739E58: or      ecx, eax
0x739E5A: push    ecx; Size
0x739E5B: call    FormHeapAlloc
0x739E60: add     esp, 4
0x739E63: test    eax, eax
0x739E65: jz      short loc_739E8B
0x739E67: lea     edx, [ebx-1]
0x739E6A: test    edx, edx
0x739E6C: jl      short loc_739E8D
0x739E6E: fldz
0x739E70: lea     ecx, [eax+8]
0x739E73: fst     dword ptr [ecx-8]
0x739E76: add     ecx, 10h
0x739E79: sub     edx, 1
0x739E7C: fst     dword ptr [ecx-14h]
0x739E7F: fst     dword ptr [ecx-10h]
0x739E82: fst     dword ptr [ecx-0Ch]
0x739E85: jns     short loc_739E73
0x739E87: fstp    st
0x739E89: jmp     short loc_739E8D
0x739E8B: xor     eax, eax
0x739E8D: xor     ebx, ebx
0x739E8F: cmp     [edi], bx
0x739E92: mov     [esi+18h], eax
0x739E95: jbe     short loc_739EAE
0x739E97: movzx   ecx, bx
0x739E9A: shl     ecx, 4
0x739E9D: add     ecx, [esi+18h]
0x739EA0: push    ebp
0x739EA1: call    sub_715420
0x739EA6: add     ebx, 1
0x739EA9: cmp     bx, [edi]
0x739EAC: jb      short loc_739E97
0x739EAE: mov     ecx, ebp
0x739EB0: call    sub_712AE0
0x739EB5: pop     edi
0x739EB6: pop     esi
0x739EB7: pop     ebp
0x739EB8: pop     ebx
0x739EB9: add     esp, 8
0x739EBC: retn    4
