0x6E8DD0: sub     esp, 8
0x6E8DD3: mov     edx, ecx
0x6E8DD5: mov     eax, [edx+40h]
0x6E8DD8: test    eax, eax
0x6E8DDA: push    edi
0x6E8DDB: mov     [esp+0Ch+var_8], edx
0x6E8DDF: jbe     loc_6E8F30
0x6E8DE5: mov     edi, [esp+0Ch+arg_0]
0x6E8DE9: cmp     [edx+3Ch], edi
0x6E8DEC: jz      loc_6E8F30
0x6E8DF2: cmp     edi, 0FFFFFFFFh
0x6E8DF5: jz      short loc_6E8E05
0x6E8DF7: jle     loc_6E8F30
0x6E8DFD: cmp     edi, eax
0x6E8DFF: jnb     loc_6E8F30
0x6E8E05: push    ebx
0x6E8E06: push    ebp
0x6E8E07: xor     ebp, ebp
0x6E8E09: xor     bl, bl
0x6E8E0B: cmp     [edx+4Eh], bp
0x6E8E0F: push    esi
0x6E8E10: jbe     short loc_6E8E5D
0x6E8E12: mov     eax, [edx+48h]
0x6E8E15: mov     esi, [eax+ebp*4]
0x6E8E18: test    esi, esi
0x6E8E1A: jz      short loc_6E8E52
0x6E8E1C: cmp     ebp, edi
0x6E8E1E: jnz     short loc_6E8E22
0x6E8E20: mov     bl, 1
0x6E8E22: xor     ecx, ecx
0x6E8E24: cmp     [esi+8], ecx
0x6E8E27: jbe     short loc_6E8E52
0x6E8E29: lea     esp, [esp+0]
0x6E8E30: test    bl, bl
0x6E8E32: mov     eax, [esi]
0x6E8E34: mov     eax, [eax+ecx*4]
0x6E8E37: jz      short loc_6E8E40
0x6E8E39: or      word ptr [eax+18h], 2
0x6E8E3E: jmp     short loc_6E8E46
0x6E8E40: and     word ptr [eax+18h], 0FFFDh
0x6E8E46: add     ecx, 1
0x6E8E49: cmp     ecx, [esi+8]
0x6E8E4C: jb      short loc_6E8E30
0x6E8E4E: mov     edi, [esp+18h+arg_0]
0x6E8E52: movzx   ecx, word ptr [edx+4Eh]
0x6E8E56: add     ebp, 1
0x6E8E59: cmp     ebp, ecx
0x6E8E5B: jb      short loc_6E8E12
0x6E8E5D: xor     eax, eax
0x6E8E5F: cmp     [edx+6Ch], eax
0x6E8E62: jbe     short loc_6E8E83
0x6E8E64: mov     ecx, [edx+64h]
0x6E8E67: mov     ecx, [ecx+eax*4]
0x6E8E6A: mov     si, [ecx+18h]
0x6E8E6E: and     si, 0FFFDh
0x6E8E73: or      si, 1
0x6E8E77: add     eax, 1
0x6E8E7A: mov     [ecx+18h], si
0x6E8E7E: cmp     eax, [edx+6Ch]
0x6E8E81: jb      short loc_6E8E64
0x6E8E83: cmp     edi, 0FFFFFFFFh
0x6E8E86: jz      loc_6E8F21
0x6E8E8C: mov     eax, [edx+58h]
0x6E8E8F: mov     ebp, [eax+edi*4]
0x6E8E92: test    ebp, ebp
0x6E8E94: jz      loc_6E8F21
0x6E8E9A: xor     eax, eax
0x6E8E9C: cmp     [ebp+8], eax
0x6E8E9F: mov     [esp+18h+var_4], eax
0x6E8EA3: jbe     short loc_6E8F21
0x6E8EA5: mov     ecx, [ebp+0]
0x6E8EA8: mov     ecx, [ecx+eax*4]
0x6E8EAB: mov     esi, [ecx]
0x6E8EAD: mov     cx, [esi+18h]
0x6E8EB1: and     cx, 0FFFEh
0x6E8EB6: or      cx, 2
0x6E8EBA: mov     [esi+18h], cx
0x6E8EBE: mov     ecx, [ebp+0]
0x6E8EC1: mov     eax, [ecx+eax*4]
0x6E8EC4: mov     ebx, [eax+4]
0x6E8EC7: mov     edi, [esi+0B8h]
0x6E8ECD: cmp     edi, ebx
0x6E8ECF: jz      short loc_6E8F0D
0x6E8ED1: test    edi, edi
0x6E8ED3: jz      short loc_6E8EF5
0x6E8ED5: lea     ecx, [edi+4]
0x6E8ED8: push    ecx; lpAddend
0x6E8ED9: call    dword ptr ds:0A2807Ch
0x6E8EDF: test    eax, eax
0x6E8EE1: jnz     short loc_6E8EF1
0x6E8EE3: test    edi, edi
0x6E8EE5: jz      short loc_6E8EF1
0x6E8EE7: mov     edx, [edi]
0x6E8EE9: mov     eax, [edx]
0x6E8EEB: push    1
0x6E8EED: mov     ecx, edi
0x6E8EEF: call    eax
0x6E8EF1: mov     edx, [esp+18h+var_8]
0x6E8EF5: test    ebx, ebx
0x6E8EF7: mov     [esi+0B8h], ebx
0x6E8EFD: jz      short loc_6E8F0D
0x6E8EFF: add     ebx, 4
0x6E8F02: push    ebx; lpAddend
0x6E8F03: call    dword ptr ds:0A28078h
0x6E8F09: mov     edx, [esp+18h+var_8]
0x6E8F0D: mov     eax, [esp+18h+var_4]
0x6E8F11: add     eax, 1
0x6E8F14: cmp     eax, [ebp+8]
0x6E8F17: mov     [esp+18h+var_4], eax
0x6E8F1B: jb      short loc_6E8EA5
0x6E8F1D: mov     edi, [esp+18h+arg_0]
0x6E8F21: pop     esi
0x6E8F22: pop     ebp
0x6E8F23: pop     ebx
0x6E8F24: mov     [edx+3Ch], edi
0x6E8F27: mov     al, 1
0x6E8F29: pop     edi
0x6E8F2A: add     esp, 8
0x6E8F2D: retn    4
0x6E8F30: xor     al, al
0x6E8F32: pop     edi
0x6E8F33: add     esp, 8
0x6E8F36: retn    4
