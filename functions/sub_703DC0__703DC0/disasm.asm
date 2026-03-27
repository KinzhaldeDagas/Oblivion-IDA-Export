0x703DC0: push    ebx
0x703DC1: push    ebp
0x703DC2: push    esi
0x703DC3: push    edi
0x703DC4: mov     edi, [esp+10h+arg_0]
0x703DC8: mov     esi, ecx
0x703DCA: movzx   eax, word ptr [esi+26h]
0x703DCE: add     edi, 6
0x703DD1: cmp     edi, eax
0x703DD3: jnb     loc_703E5C
0x703DD9: mov     ebp, [esp+10h+arg_4]
0x703DDD: test    ebp, ebp
0x703DDF: mov     ecx, [esi+20h]
0x703DE2: mov     ebx, [ecx+edi*4]
0x703DE5: jz      short loc_703E0D
0x703DE7: test    ebx, ebx
0x703DE9: jnz     short loc_703E31
0x703DEB: movzx   eax, word ptr [esi+18h]
0x703DEF: mov     edx, eax
0x703DF1: shr     edx, 4
0x703DF4: and     edx, 0FFh
0x703DFA: add     edx, 1
0x703DFD: shl     edx, 4
0x703E00: and     eax, 0F00Fh
0x703E05: or      edx, eax
0x703E07: mov     [esi+18h], dx
0x703E0B: jmp     short loc_703E31
0x703E0D: test    ebx, ebx
0x703E0F: jz      short loc_703E31
0x703E11: movzx   eax, word ptr [esi+18h]
0x703E15: mov     ecx, eax
0x703E17: shr     ecx, 4
0x703E1A: and     ecx, 0FFh
0x703E20: sub     ecx, 1
0x703E23: shl     ecx, 4
0x703E26: and     eax, 0F00Fh
0x703E2B: or      ecx, eax
0x703E2D: mov     [esi+18h], cx
0x703E31: lea     edx, [esp+10h+arg_4]
0x703E35: push    edx
0x703E36: push    edi
0x703E37: lea     ecx, [esi+1Ch]
0x703E3A: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x703E3F: test    ebx, ebx
0x703E41: jz      short loc_703EAA
0x703E43: mov     eax, [ebx]
0x703E45: mov     edx, [eax]
0x703E47: push    1
0x703E49: mov     ecx, ebx
0x703E4B: call    edx
0x703E4D: push    ebp
0x703E4E: mov     ecx, esi
0x703E50: call    sub_703D70
0x703E55: pop     edi
0x703E56: pop     esi
0x703E57: pop     ebp
0x703E58: pop     ebx
0x703E59: retn    8
0x703E5C: movzx   eax, word ptr [esi+24h]
0x703E60: cmp     edi, eax
0x703E62: lea     ebx, [esi+1Ch]
0x703E65: jb      short loc_703E75
0x703E67: movzx   ecx, word ptr [ebx+0Eh]
0x703E6B: add     ecx, edi
0x703E6D: push    ecx
0x703E6E: mov     ecx, ebx
0x703E70: call    NiTArray_SetSize
0x703E75: lea     edx, [esp+10h+arg_4]
0x703E79: push    edx
0x703E7A: push    edi
0x703E7B: mov     ecx, ebx
0x703E7D: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x703E82: mov     ebp, [esp+10h+arg_4]
0x703E86: test    ebp, ebp
0x703E88: jz      short loc_703EAA
0x703E8A: movzx   eax, word ptr [esi+18h]
0x703E8E: mov     ecx, eax
0x703E90: shr     ecx, 4
0x703E93: and     ecx, 0FFh
0x703E99: add     ecx, 1
0x703E9C: shl     ecx, 4
0x703E9F: and     eax, 0F00Fh
0x703EA4: or      ecx, eax
0x703EA6: mov     [esi+18h], cx
0x703EAA: push    ebp
0x703EAB: mov     ecx, esi
0x703EAD: call    sub_703D70
0x703EB2: pop     edi
0x703EB3: pop     esi
0x703EB4: pop     ebp
0x703EB5: pop     ebx
0x703EB6: retn    8
