0x759DE0: push    ecx
0x759DE1: push    ebp
0x759DE2: mov     ebp, [esp+8+arg_0]
0x759DE6: push    esi
0x759DE7: push    edi
0x759DE8: push    ebp
0x759DE9: mov     esi, ecx
0x759DEB: call    sub_73F460
0x759DF0: cmp     dword ptr [ebp+0D8h], 0A030005h
0x759DFA: jnb     short loc_759E78
0x759DFC: cmp     dword ptr [esi+50h], 0
0x759E00: jz      short loc_759E78
0x759E02: movzx   eax, word ptr [esi+8]
0x759E06: xor     ecx, ecx
0x759E08: mov     edx, 4
0x759E0D: mul     edx
0x759E0F: seto    cl
0x759E12: neg     ecx
0x759E14: or      ecx, eax
0x759E16: push    ecx; Size
0x759E17: call    FormHeapAlloc
0x759E1C: mov     [esi+54h], eax
0x759E1F: movzx   eax, word ptr [esi+8]
0x759E23: xor     ecx, ecx
0x759E25: mov     edx, 0Ch
0x759E2A: mul     edx
0x759E2C: seto    cl
0x759E2F: neg     ecx
0x759E31: or      ecx, eax
0x759E33: push    ecx; Size
0x759E34: call    FormHeapAlloc
0x759E39: xor     edi, edi
0x759E3B: add     esp, 8
0x759E3E: cmp     [esi+8], di
0x759E42: mov     [esi+58h], eax
0x759E45: jbe     short loc_759E6F
0x759E47: mov     edx, [esi+58h]
0x759E4A: movzx   ecx, di
0x759E4D: lea     eax, [ecx+ecx*2]
0x759E50: lea     eax, [edx+eax*4]
0x759E53: mov     edx, [esi+54h]
0x759E56: push    eax
0x759E57: lea     eax, [edx+ecx*4]
0x759E5A: shl     ecx, 4
0x759E5D: add     ecx, [esi+50h]
0x759E60: push    eax
0x759E61: call    sub_715000
0x759E66: add     edi, 1
0x759E69: cmp     di, [esi+8]
0x759E6D: jb      short loc_759E47
0x759E6F: push    0
0x759E71: mov     ecx, esi
0x759E73: call    sub_73EF50
0x759E78: push    ebx
0x759E79: movzx   ebx, word ptr [esi+8]
0x759E7D: xor     ecx, ecx
0x759E7F: mov     eax, ebx
0x759E81: mov     edx, 1Ch
0x759E86: mul     edx
0x759E88: seto    cl
0x759E8B: neg     ecx
0x759E8D: or      ecx, eax
0x759E8F: push    ecx; Size
0x759E90: call    FormHeapAlloc
0x759E95: add     esp, 4
0x759E98: test    eax, eax
0x759E9A: mov     [esp+14h+arg_0], eax
0x759E9E: jz      short loc_759EBC
0x759EA0: add     ebx, 0FFFFFFFFh
0x759EA3: mov     edi, eax
0x759EA5: js      short loc_759EBE
0x759EA7: mov     ecx, edi
0x759EA9: call    sub_75F780
0x759EAE: add     edi, 1Ch
0x759EB1: sub     ebx, 1
0x759EB4: jns     short loc_759EA7
0x759EB6: mov     eax, [esp+14h+arg_0]
0x759EBA: jmp     short loc_759EBE
0x759EBC: xor     eax, eax
0x759EBE: xor     edi, edi
0x759EC0: cmp     [esi+8], di
0x759EC4: mov     [esi+5Ch], eax
0x759EC7: pop     ebx
0x759EC8: jbe     short loc_759EF1
0x759ECA: lea     ebx, [ebx+0]
0x759ED0: mov     edx, [esi+5Ch]
0x759ED3: movzx   eax, di
0x759ED6: lea     ecx, ds:0[eax*8]
0x759EDD: sub     ecx, eax
0x759EDF: push    ebp
0x759EE0: lea     ecx, [edx+ecx*4]
0x759EE3: call    sub_75F840
0x759EE8: add     edi, 1
0x759EEB: cmp     di, [esi+8]
0x759EEF: jb      short loc_759ED0
0x759EF1: cmp     dword ptr [ebp+0D8h], 14000002h
0x759EFB: jb      short loc_759F70
0x759EFD: mov     eax, [ebp+21Ch]
0x759F03: push    1
0x759F05: lea     ecx, [esp+14h+var_4]
0x759F09: push    ecx
0x759F0A: push    1
0x759F0C: lea     edx, [esp+1Ch+arg_0]
0x759F10: push    edx
0x759F11: push    eax
0x759F12: mov     eax, [eax+4]
0x759F15: mov     [esp+24h+var_4], 1
0x759F1D: call    eax
0x759F1F: add     esp, 14h
0x759F22: cmp     byte ptr [esp+10h+arg_0], 0
0x759F27: jz      short loc_759FA7
0x759F29: movzx   eax, word ptr [esi+8]
0x759F2D: xor     ecx, ecx
0x759F2F: mov     edx, 4
0x759F34: mul     edx
0x759F36: seto    cl
0x759F39: neg     ecx
0x759F3B: or      ecx, eax
0x759F3D: push    ecx; Size
0x759F3E: call    FormHeapAlloc
0x759F43: push    1
0x759F45: lea     edx, [esp+18h+var_4]
0x759F49: push    edx
0x759F4A: movzx   edx, word ptr [esi+8]
0x759F4E: add     edx, edx
0x759F50: add     edx, edx
0x759F52: push    edx
0x759F53: mov     [esi+60h], eax
0x759F56: mov     ecx, [ebp+21Ch]
0x759F5C: push    eax
0x759F5D: mov     eax, [ecx+4]
0x759F60: push    ecx
0x759F61: mov     [esp+28h+var_4], 4
0x759F69: call    eax
0x759F6B: add     esp, 18h
0x759F6E: jmp     short loc_759FA7
0x759F70: cmp     dword ptr [esi+54h], 0
0x759F74: jz      short loc_759FA7
0x759F76: movzx   eax, word ptr [esi+8]
0x759F7A: xor     ecx, ecx
0x759F7C: mov     edx, 4
0x759F81: mul     edx
0x759F83: seto    cl
0x759F86: neg     ecx
0x759F88: or      ecx, eax
0x759F8A: push    ecx; Size
0x759F8B: call    FormHeapAlloc
0x759F90: movzx   ecx, word ptr [esi+8]
0x759F94: add     ecx, ecx
0x759F96: add     ecx, ecx
0x759F98: push    ecx
0x759F99: push    0
0x759F9B: push    eax
0x759F9C: mov     [esi+60h], eax
0x759F9F: call    __memset
0x759FA4: add     esp, 10h
0x759FA7: mov     eax, [ebp+21Ch]
0x759FAD: push    1
0x759FAF: lea     edx, [esp+14h+arg_0]
0x759FB3: push    edx
0x759FB4: mov     edx, [eax+4]
0x759FB7: mov     edi, 2
0x759FBC: push    edi
0x759FBD: lea     ecx, [esi+64h]
0x759FC0: push    ecx
0x759FC1: push    eax
0x759FC2: mov     [esp+24h+arg_0], edi
0x759FC6: call    edx
0x759FC8: mov     eax, [ebp+21Ch]
0x759FCE: mov     edx, [eax+4]
0x759FD1: push    1
0x759FD3: lea     ecx, [esp+28h+arg_0]
0x759FD7: push    ecx
0x759FD8: push    edi
0x759FD9: add     esi, 66h ; 'f'
0x759FDC: push    esi
0x759FDD: push    eax
0x759FDE: mov     [esp+38h+arg_0], edi
0x759FE2: call    edx
0x759FE4: add     esp, 28h
0x759FE7: pop     edi
0x759FE8: pop     esi
0x759FE9: pop     ebp
0x759FEA: pop     ecx
0x759FEB: retn    4
