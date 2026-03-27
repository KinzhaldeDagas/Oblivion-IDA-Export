0x8E0E90: push    ebp
0x8E0E91: mov     ebp, esp
0x8E0E93: and     esp, 0FFFFFFF0h
0x8E0E96: sub     esp, 14h
0x8E0E99: mov     eax, [ebp+arg_8]
0x8E0E9C: movzx   edx, word ptr [eax+0Ah]
0x8E0EA0: push    ebx
0x8E0EA1: mov     ebx, ecx
0x8E0EA3: movzx   ecx, word ptr [eax+8]
0x8E0EA7: mov     eax, [ebp+arg_0]
0x8E0EAA: mov     [esp+18h+var_4], edx
0x8E0EAE: mov     edx, [ebp+arg_10]
0x8E0EB1: sar     eax, 7
0x8E0EB4: test    eax, eax
0x8E0EB6: push    esi
0x8E0EB7: mov     [esp+1Ch+var_8], ecx
0x8E0EBB: push    edi
0x8E0EBC: mov     [esp+20h+var_C], ebx
0x8E0EC0: xorps   xmm0, xmm0
0x8E0EC3: mov     ecx, edx
0x8E0EC5: jl      short loc_8E0ED3
0x8E0EC7: inc     eax
0x8E0EC8: mov     esi, ecx
0x8E0ECA: add     ecx, 10h
0x8E0ECD: dec     eax
0x8E0ECE: movaps  xmmword ptr [esi], xmm0
0x8E0ED1: jnz     short loc_8E0EC8
0x8E0ED3: mov     eax, [ebx+4Ch]
0x8E0ED6: mov     ecx, [ebx+70h]
0x8E0ED9: add     eax, 4
0x8E0EDC: test    ecx, ecx
0x8E0EDE: jz      loc_8E0FCC
0x8E0EE4: mov     esi, [ebx+74h]
0x8E0EE7: mov     ecx, 10h
0x8E0EEC: sub     ecx, esi
0x8E0EEE: mov     esi, [ebp+arg_4]
0x8E0EF1: sar     esi, cl
0x8E0EF3: test    esi, esi
0x8E0EF5: jle     loc_8E0FCC
0x8E0EFB: mov     eax, [ebx+78h]
0x8E0EFE: shl     esi, 4
0x8E0F01: movzx   ecx, word ptr [esi+eax-10h]
0x8E0F06: lea     esi, [esi+eax-10h]
0x8E0F0A: mov     eax, ecx
0x8E0F0C: and     ecx, 1Fh
0x8E0F0F: sar     eax, 5
0x8E0F12: mov     edi, 1
0x8E0F17: shl     edi, cl
0x8E0F19: xor     [edx+eax*4], edi
0x8E0F1C: mov     eax, [esi+8]
0x8E0F1F: dec     eax
0x8E0F20: mov     ecx, [esi+4]
0x8E0F23: mov     [esp+20h+var_14], ecx
0x8E0F27: js      short loc_8E0F68
0x8E0F29: inc     eax
0x8E0F2A: mov     [esp+20h+var_10], eax
0x8E0F2E: mov     edi, edi
0x8E0F30: mov     eax, [esp+20h+var_14]
0x8E0F34: mov     ax, [eax]
0x8E0F37: cmp     ax, [ebp+arg_C]
0x8E0F3B: jz      short loc_8E0F52
0x8E0F3D: movzx   ecx, ax
0x8E0F40: mov     eax, ecx
0x8E0F42: and     ecx, 1Fh
0x8E0F45: mov     edi, 1
0x8E0F4A: sar     eax, 5
0x8E0F4D: shl     edi, cl
0x8E0F4F: xor     [edx+eax*4], edi
0x8E0F52: mov     ecx, [esp+20h+var_14]
0x8E0F56: mov     eax, [esp+20h+var_10]
0x8E0F5A: add     ecx, 2
0x8E0F5D: dec     eax
0x8E0F5E: mov     [esp+20h+var_14], ecx
0x8E0F62: mov     [esp+20h+var_10], eax
0x8E0F66: jnz     short loc_8E0F30
0x8E0F68: movzx   edi, word ptr [esi]
0x8E0F6B: mov     esi, [ebx+40h]
0x8E0F6E: mov     eax, [ebx+4Ch]
0x8E0F71: shl     edi, 4
0x8E0F74: movzx   ecx, word ptr [edi+esi+8]
0x8E0F79: add     edi, esi
0x8E0F7B: lea     esi, [eax+ecx*4+4]
0x8E0F7F: movzx   ecx, word ptr [edi+0Ah]
0x8E0F83: lea     eax, [eax+ecx*4]
0x8E0F86: cmp     esi, eax
0x8E0F88: mov     [esp+20h+var_10], eax
0x8E0F8C: jnb     short loc_8E0FC1
0x8E0F8E: mov     edi, edi
0x8E0F90: test    byte ptr [esi], 1
0x8E0F93: jnz     short loc_8E0FBA
0x8E0F95: movzx   ecx, word ptr [esi+2]
0x8E0F99: mov     eax, ecx
0x8E0F9B: and     ecx, 1Fh
0x8E0F9E: mov     ebx, 1
0x8E0FA3: shl     ebx, cl
0x8E0FA5: sar     eax, 5
0x8E0FA8: mov     ecx, [edx+eax*4]
0x8E0FAB: not     ebx
0x8E0FAD: and     ecx, ebx
0x8E0FAF: mov     ebx, [esp+20h+var_C]
0x8E0FB3: mov     [edx+eax*4], ecx
0x8E0FB6: mov     eax, [esp+20h+var_10]
0x8E0FBA: add     esi, 4
0x8E0FBD: cmp     esi, eax
0x8E0FBF: jb      short loc_8E0F90
0x8E0FC1: movzx   ecx, word ptr [edi+8]
0x8E0FC5: mov     eax, [ebx+4Ch]
0x8E0FC8: lea     eax, [eax+ecx*4+4]
0x8E0FCC: mov     esi, [esp+20h+var_8]
0x8E0FD0: mov     ecx, [ebx+4Ch]
0x8E0FD3: lea     ecx, [ecx+esi*4]
0x8E0FD6: cmp     eax, ecx
0x8E0FD8: mov     [esp+20h+var_8], ecx
0x8E0FDC: jnb     short loc_8E1004
0x8E0FDE: mov     edi, edi
0x8E0FE0: movzx   ecx, word ptr [eax+2]
0x8E0FE4: mov     esi, ecx
0x8E0FE6: and     ecx, 1Fh
0x8E0FE9: mov     edi, 1
0x8E0FEE: shl     edi, cl
0x8E0FF0: sar     esi, 5
0x8E0FF3: mov     ecx, [edx+esi*4]
0x8E0FF6: add     eax, 4
0x8E0FF9: xor     ecx, edi
0x8E0FFB: mov     [edx+esi*4], ecx
0x8E0FFE: cmp     eax, [esp+20h+var_8]
0x8E1002: jb      short loc_8E0FE0
0x8E1004: mov     ecx, [ebx+4Ch]
0x8E1007: mov     esi, [esp+20h+var_4]
0x8E100B: add     eax, 4
0x8E100E: lea     edi, [ecx+esi*4]
0x8E1011: cmp     eax, edi
0x8E1013: jnb     short loc_8E1037
0x8E1015: test    byte ptr [eax], 1
0x8E1018: jnz     short loc_8E1030
0x8E101A: movzx   ecx, word ptr [eax+2]
0x8E101E: mov     esi, ecx
0x8E1020: and     ecx, 1Fh
0x8E1023: mov     ebx, 1
0x8E1028: sar     esi, 5
0x8E102B: shl     ebx, cl
0x8E102D: xor     [edx+esi*4], ebx
0x8E1030: add     eax, 4
0x8E1033: cmp     eax, edi
0x8E1035: jb      short loc_8E1015
0x8E1037: pop     edi
0x8E1038: pop     esi
0x8E1039: pop     ebx
0x8E103A: mov     esp, ebp
0x8E103C: pop     ebp
0x8E103D: retn    14h
