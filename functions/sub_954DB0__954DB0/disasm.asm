0x954DB0: mov     eax, [esp+arg_4]
0x954DB4: sub     esp, 0Ch
0x954DB7: push    esi
0x954DB8: mov     esi, [eax+8]
0x954DBB: sub     esi, 8
0x954DBE: test    esi, esi
0x954DC0: push    edi
0x954DC1: jg      short loc_954DC5
0x954DC3: xor     esi, esi
0x954DC5: mov     ecx, [esp+14h+arg_0]
0x954DC9: mov     edi, [ecx+24h]
0x954DCC: mov     edx, edi
0x954DCE: sub     edx, esi
0x954DD0: cmp     edx, edi
0x954DD2: jle     short loc_954DD6
0x954DD4: mov     edx, edi
0x954DD6: test    edx, edx
0x954DD8: mov     esi, [esp+14h+arg_8]
0x954DDC: mov     [esp+14h+var_C], edx
0x954DE0: mov     byte ptr [esi], 0
0x954DE3: jle     loc_954E94
0x954DE9: cmp     edx, 4
0x954DEC: jl      short loc_954DF6
0x954DEE: mov     [esp+14h+var_C], 4
0x954DF6: mov     edx, ecx
0x954DF8: sub     edx, eax
0x954DFA: push    ebx
0x954DFB: mov     [esp+18h+var_4], edx
0x954DFF: push    ebp
0x954E00: mov     edx, [ecx+24h]
0x954E03: mov     esi, [esp+1Ch+var_C]
0x954E07: mov     ebx, [esp+1Ch+arg_8]
0x954E0B: sub     edx, esi
0x954E0D: mov     [eax+24h], edx
0x954E10: mov     [esp+1Ch+var_8], 0
0x954E18: lea     esi, [eax+10h]
0x954E1B: lea     edx, [eax+28h]
0x954E1E: add     ebx, 8
0x954E21: cmp     [esp+1Ch+var_8], 3
0x954E26: jge     short loc_954E7C
0x954E28: mov     eax, [esp+1Ch+var_4]
0x954E2C: mov     edi, [eax+edx]
0x954E2F: mov     ecx, [ecx+24h]
0x954E32: mov     eax, [esi-4]
0x954E35: sub     eax, edi
0x954E37: sar     eax, cl
0x954E39: mov     ebp, eax
0x954E3B: shl     ebp, cl
0x954E3D: add     ebp, edi
0x954E3F: mov     [edx], ebp
0x954E41: mov     [ebx], eax
0x954E43: mov     eax, [edx]
0x954E45: mov     edi, [esi]
0x954E47: sub     edi, eax
0x954E49: mov     eax, [esp+1Ch+arg_4]
0x954E4D: mov     ecx, [eax+24h]
0x954E50: sar     edi, cl
0x954E52: cmp     edi, 0FFh
0x954E58: jge     short loc_954E72
0x954E5A: mov     ebp, [esp+1Ch+var_8]
0x954E5E: mov     ecx, [esp+1Ch+arg_0]
0x954E62: inc     ebp
0x954E63: add     ebx, 4
0x954E66: add     edx, 4
0x954E69: mov     [esp+1Ch+var_8], ebp
0x954E6D: add     esi, 8
0x954E70: jmp     short loc_954E21
0x954E72: dec     [esp+1Ch+var_C]
0x954E76: mov     ecx, [esp+1Ch+arg_0]
0x954E7A: jmp     short loc_954E00
0x954E7C: mov     eax, [esp+1Ch+arg_8]
0x954E80: mov     ecx, [esp+1Ch+var_C]
0x954E84: pop     ebp
0x954E85: pop     ebx
0x954E86: pop     edi
0x954E87: mov     [eax+4], ecx
0x954E8A: mov     byte ptr [eax], 1
0x954E8D: pop     esi
0x954E8E: add     esp, 0Ch
0x954E91: retn    0Ch
0x954E94: mov     edx, [ecx+24h]
0x954E97: mov     [eax+24h], edx
0x954E9A: mov     edx, [ecx+28h]
0x954E9D: mov     [eax+28h], edx
0x954EA0: mov     edx, [ecx+2Ch]
0x954EA3: mov     [eax+2Ch], edx
0x954EA6: mov     ecx, [ecx+30h]
0x954EA9: pop     edi
0x954EAA: mov     [eax+30h], ecx
0x954EAD: pop     esi
0x954EAE: add     esp, 0Ch
0x954EB1: retn    0Ch
