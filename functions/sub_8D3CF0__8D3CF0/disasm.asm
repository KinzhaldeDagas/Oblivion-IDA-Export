0x8D3CF0: sub     esp, 0Ch
0x8D3CF3: mov     ecx, [esp+0Ch+arg_C]
0x8D3CF7: mov     edx, [ecx+4]
0x8D3CFA: push    ebx
0x8D3CFB: xor     ebx, ebx
0x8D3CFD: xor     eax, eax
0x8D3CFF: cmp     edx, ebx
0x8D3D01: mov     [esp+10h+var_4], eax
0x8D3D05: jle     loc_8D401A
0x8D3D0B: push    ebp
0x8D3D0C: push    esi
0x8D3D0D: push    edi
0x8D3D0E: mov     edi, [esp+1Ch+arg_18]
0x8D3D12: jmp     short loc_8D3D20
0x8D3D14: xor     ebx, ebx
0x8D3D16: jmp     short loc_8D3D20
0x8D3D18: align 10h
0x8D3D20: mov     ecx, [ecx]
0x8D3D22: mov     ebp, [ecx+eax*4]
0x8D3D25: movzx   edx, word ptr [ebp+8Ch]
0x8D3D2C: mov     esi, [esp+1Ch+arg_10]
0x8D3D30: mov     eax, [esi]
0x8D3D32: mov     cl, [eax+edx]
0x8D3D35: add     eax, edx
0x8D3D37: test    cl, cl
0x8D3D39: jnz     short loc_8D3D56
0x8D3D3B: mov     ecx, [esp+1Ch+arg_8]
0x8D3D3F: mov     byte ptr [eax], 1
0x8D3D42: mov     eax, [ebp+50h]
0x8D3D45: add     eax, 10h
0x8D3D48: push    eax; int
0x8D3D49: push    ecx; float
0x8D3D4A: add     eax, 40h ; '@'
0x8D3D4D: push    eax; int
0x8D3D4E: call    sub_8DD150
0x8D3D53: add     esp, 0Ch
0x8D3D56: movzx   edx, word ptr [ebp+8Ch]
0x8D3D5D: mov     eax, [esi]
0x8D3D5F: mov     ecx, [esp+1Ch+arg_8]
0x8D3D63: push    esi; int
0x8D3D64: mov     byte ptr [edx+eax], 8
0x8D3D68: mov     edx, [esp+20h+arg_0]
0x8D3D6C: mov     eax, [esp+20h+arg_4]
0x8D3D70: push    ecx; float
0x8D3D71: push    edx; int
0x8D3D72: push    eax; int
0x8D3D73: push    ebp; int
0x8D3D74: call    sub_8D3850
0x8D3D79: mov     eax, [ebp+6Ch]
0x8D3D7C: add     esp, 14h
0x8D3D7F: cmp     eax, ebx
0x8D3D81: mov     [esp+1Ch+var_8], ebx
0x8D3D85: jle     loc_8D3EC6
0x8D3D8B: mov     [esp+1Ch+var_C], ebx
0x8D3D8F: nop
0x8D3D90: mov     ecx, [esp+1Ch+var_C]
0x8D3D94: mov     ebx, [ebp+68h]
0x8D3D97: mov     eax, [esp+1Ch+arg_4]
0x8D3D9B: add     ebx, ecx
0x8D3D9D: mov     ecx, [ebx]
0x8D3D9F: movzx   edx, byte ptr [ecx+18h]
0x8D3DA3: cmp     eax, edx
0x8D3DA5: jg      loc_8D3EA7
0x8D3DAB: mov     esi, [ebx+8]
0x8D3DAE: xor     esi, [ebx+4]
0x8D3DB1: xor     esi, ebp
0x8D3DB3: mov     al, [esi+91h]
0x8D3DB9: test    al, al
0x8D3DBB: jz      short loc_8D3DE9
0x8D3DBD: mov     eax, [edi+8]
0x8D3DC0: mov     ecx, [edi+4]
0x8D3DC3: and     eax, 3FFFFFFFh
0x8D3DC8: cmp     ecx, eax
0x8D3DCA: jnz     short loc_8D3DD7
0x8D3DCC: push    4
0x8D3DCE: push    edi
0x8D3DCF: call    sub_8A6EE0
0x8D3DD4: add     esp, 8
0x8D3DD7: mov     eax, [ebx]
0x8D3DD9: mov     ecx, [edi+4]
0x8D3DDC: mov     edx, [edi]
0x8D3DDE: mov     [edx+ecx*4], eax
0x8D3DE1: inc     dword ptr [edi+4]
0x8D3DE4: jmp     loc_8D3EA7
0x8D3DE9: mov     edx, [esp+1Ch+arg_10]
0x8D3DED: movzx   ecx, word ptr [esi+8Ch]
0x8D3DF4: mov     eax, [edx]
0x8D3DF6: cmp     byte ptr [ecx+eax], 8
0x8D3DFA: jz      loc_8D3EA7
0x8D3E00: mov     ecx, [edi+8]
0x8D3E03: mov     eax, [edi+4]
0x8D3E06: and     ecx, 3FFFFFFFh
0x8D3E0C: cmp     eax, ecx
0x8D3E0E: jnz     short loc_8D3E1B
0x8D3E10: push    4
0x8D3E12: push    edi
0x8D3E13: call    sub_8A6EE0
0x8D3E18: add     esp, 8
0x8D3E1B: mov     edx, [edi+4]
0x8D3E1E: mov     ecx, [ebx]
0x8D3E20: mov     eax, [edi]
0x8D3E22: mov     [eax+edx*4], ecx
0x8D3E25: mov     ecx, [edi+4]
0x8D3E28: mov     eax, [esp+1Ch+arg_10]
0x8D3E2C: inc     ecx
0x8D3E2D: mov     [edi+4], ecx
0x8D3E30: movzx   edx, word ptr [esi+8Ch]
0x8D3E37: mov     ecx, [eax]
0x8D3E39: cmp     byte ptr [edx+ecx], 2
0x8D3E3D: jnb     short loc_8D3EA7
0x8D3E3F: mov     ebx, [esp+1Ch+arg_14]
0x8D3E43: mov     edx, [ebx+8]
0x8D3E46: mov     eax, [ebx+4]
0x8D3E49: and     edx, 3FFFFFFFh
0x8D3E4F: cmp     eax, edx
0x8D3E51: jnz     short loc_8D3E5E
0x8D3E53: push    4
0x8D3E55: push    ebx
0x8D3E56: call    sub_8A6EE0
0x8D3E5B: add     esp, 8
0x8D3E5E: mov     eax, [ebx+4]
0x8D3E61: mov     ecx, [ebx]
0x8D3E63: mov     [ecx+eax*4], esi
0x8D3E66: inc     dword ptr [ebx+4]
0x8D3E69: movzx   edx, word ptr [esi+8Ch]
0x8D3E70: mov     ebx, [esp+1Ch+arg_10]
0x8D3E74: mov     eax, [ebx]
0x8D3E76: mov     cl, [eax+edx]
0x8D3E79: add     eax, edx
0x8D3E7B: test    cl, cl
0x8D3E7D: jnz     short loc_8D3E9A
0x8D3E7F: mov     ecx, [esp+1Ch+arg_8]
0x8D3E83: mov     byte ptr [eax], 1
0x8D3E86: mov     eax, [esi+50h]
0x8D3E89: add     eax, 10h
0x8D3E8C: push    eax; int
0x8D3E8D: push    ecx; float
0x8D3E8E: add     eax, 40h ; '@'
0x8D3E91: push    eax; int
0x8D3E92: call    sub_8DD150
0x8D3E97: add     esp, 0Ch
0x8D3E9A: movzx   edx, word ptr [esi+8Ch]
0x8D3EA1: mov     eax, [ebx]
0x8D3EA3: mov     byte ptr [edx+eax], 2
0x8D3EA7: mov     eax, [esp+1Ch+var_8]
0x8D3EAB: mov     edx, [esp+1Ch+var_C]
0x8D3EAF: mov     ecx, [ebp+6Ch]
0x8D3EB2: inc     eax
0x8D3EB3: add     edx, 1Ch
0x8D3EB6: cmp     eax, ecx
0x8D3EB8: mov     [esp+1Ch+var_8], eax
0x8D3EBC: mov     [esp+1Ch+var_C], edx
0x8D3EC0: jl      loc_8D3D90
0x8D3EC6: mov     ecx, [ebp+78h]
0x8D3EC9: xor     eax, eax
0x8D3ECB: test    ecx, ecx
0x8D3ECD: mov     [esp+1Ch+var_8], eax
0x8D3ED1: jle     loc_8D3FFF
0x8D3ED7: mov     ecx, [ebp+74h]
0x8D3EDA: mov     edx, [ecx+eax*4]
0x8D3EDD: mov     ebx, [edx+24h]
0x8D3EE0: mov     eax, [ebx]
0x8D3EE2: movzx   ecx, byte ptr [eax+18h]
0x8D3EE6: cmp     [esp+1Ch+arg_4], ecx
0x8D3EEA: jg      loc_8D3FEB
0x8D3EF0: mov     esi, [ebx+8]
0x8D3EF3: xor     esi, [ebx+4]
0x8D3EF6: xor     esi, ebp
0x8D3EF8: mov     al, [esi+91h]
0x8D3EFE: test    al, al
0x8D3F00: jz      short loc_8D3F2F
0x8D3F02: mov     edx, [edi+8]
0x8D3F05: mov     eax, [edi+4]
0x8D3F08: and     edx, 3FFFFFFFh
0x8D3F0E: cmp     eax, edx
0x8D3F10: jnz     short loc_8D3F1D
0x8D3F12: push    4
0x8D3F14: push    edi
0x8D3F15: call    sub_8A6EE0
0x8D3F1A: add     esp, 8
0x8D3F1D: mov     eax, [edi+4]
0x8D3F20: mov     edx, [ebx]
0x8D3F22: mov     ecx, [edi]
0x8D3F24: mov     [ecx+eax*4], edx
0x8D3F27: inc     dword ptr [edi+4]
0x8D3F2A: jmp     loc_8D3FEB
0x8D3F2F: mov     ecx, [esp+1Ch+arg_10]
0x8D3F33: movzx   eax, word ptr [esi+8Ch]
0x8D3F3A: mov     edx, [ecx]
0x8D3F3C: cmp     byte ptr [eax+edx], 8
0x8D3F40: jz      loc_8D3FEB
0x8D3F46: mov     eax, [edi+8]
0x8D3F49: mov     ecx, [edi+4]
0x8D3F4C: and     eax, 3FFFFFFFh
0x8D3F51: cmp     ecx, eax
0x8D3F53: jnz     short loc_8D3F60
0x8D3F55: push    4
0x8D3F57: push    edi
0x8D3F58: call    sub_8A6EE0
0x8D3F5D: add     esp, 8
0x8D3F60: mov     eax, [ebx]
0x8D3F62: mov     ecx, [edi+4]
0x8D3F65: mov     edx, [edi]
0x8D3F67: mov     [edx+ecx*4], eax
0x8D3F6A: mov     ebx, [edi+4]
0x8D3F6D: mov     edx, [esp+1Ch+arg_10]
0x8D3F71: inc     ebx
0x8D3F72: mov     [edi+4], ebx
0x8D3F75: movzx   ecx, word ptr [esi+8Ch]
0x8D3F7C: mov     eax, [edx]
0x8D3F7E: cmp     byte ptr [ecx+eax], 2
0x8D3F82: jnb     short loc_8D3FEB
0x8D3F84: mov     ebx, [esp+1Ch+arg_14]
0x8D3F88: mov     ecx, [ebx+8]
0x8D3F8B: mov     eax, [ebx+4]
0x8D3F8E: and     ecx, 3FFFFFFFh
0x8D3F94: cmp     eax, ecx
0x8D3F96: jnz     short loc_8D3FA3
0x8D3F98: push    4
0x8D3F9A: push    ebx
0x8D3F9B: call    sub_8A6EE0
0x8D3FA0: add     esp, 8
0x8D3FA3: mov     edx, [ebx+4]
0x8D3FA6: mov     eax, [ebx]
0x8D3FA8: mov     [eax+edx*4], esi
0x8D3FAB: inc     dword ptr [ebx+4]
0x8D3FAE: movzx   ecx, word ptr [esi+8Ch]
0x8D3FB5: mov     ebx, [esp+1Ch+arg_10]
0x8D3FB9: mov     edx, [ebx]
0x8D3FBB: lea     eax, [ecx+edx]
0x8D3FBE: cmp     byte ptr [eax], 0
0x8D3FC1: jnz     short loc_8D3FDE
0x8D3FC3: mov     ecx, [esp+1Ch+arg_8]
0x8D3FC7: mov     byte ptr [eax], 1
0x8D3FCA: mov     eax, [esi+50h]
0x8D3FCD: add     eax, 10h
0x8D3FD0: push    eax; int
0x8D3FD1: push    ecx; float
0x8D3FD2: add     eax, 40h ; '@'
0x8D3FD5: push    eax; int
0x8D3FD6: call    sub_8DD150
0x8D3FDB: add     esp, 0Ch
0x8D3FDE: movzx   edx, word ptr [esi+8Ch]
0x8D3FE5: mov     eax, [ebx]
0x8D3FE7: mov     byte ptr [edx+eax], 2
0x8D3FEB: mov     eax, [esp+1Ch+var_8]
0x8D3FEF: mov     ecx, [ebp+78h]
0x8D3FF2: inc     eax
0x8D3FF3: cmp     eax, ecx
0x8D3FF5: mov     [esp+1Ch+var_8], eax
0x8D3FF9: jl      loc_8D3ED7
0x8D3FFF: mov     eax, [esp+1Ch+var_4]
0x8D4003: mov     ecx, [esp+1Ch+arg_C]
0x8D4007: mov     edx, [ecx+4]
0x8D400A: inc     eax
0x8D400B: cmp     eax, edx
0x8D400D: mov     [esp+1Ch+var_4], eax
0x8D4011: jl      loc_8D3D14
0x8D4017: pop     edi
0x8D4018: pop     esi
0x8D4019: pop     ebp
0x8D401A: pop     ebx
0x8D401B: add     esp, 0Ch
0x8D401E: retn
