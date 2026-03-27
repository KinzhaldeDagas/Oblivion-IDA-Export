0x956DD0: sub     esp, 0Ch
0x956DD3: push    ebx
0x956DD4: push    ebp
0x956DD5: mov     [esp+14h+var_8], ecx
0x956DD9: mov     ecx, [esp+14h+arg_0]
0x956DDD: mov     ebx, [ecx]
0x956DDF: mov     ebp, [ebx]
0x956DE1: xor     eax, eax
0x956DE3: push    edi
0x956DE4: mov     edi, [esp+18h+arg_4]
0x956DE8: mov     [edi+2Ch], eax
0x956DEB: mov     [edi+34h], eax
0x956DEE: mov     dword ptr [edi+30h], 0FFFFFFFFh
0x956DF5: mov     eax, [ecx+4]
0x956DF8: dec     eax
0x956DF9: mov     [esp+18h+var_C], ebp
0x956DFD: js      short loc_956E6D
0x956DFF: inc     eax
0x956E00: mov     [esp+18h+arg_4], eax
0x956E04: push    esi
0x956E05: mov     eax, [ebx]
0x956E07: cmp     eax, [esp+1Ch+var_C]
0x956E0B: jbe     short loc_956E11
0x956E0D: mov     [esp+1Ch+var_C], eax
0x956E11: cmp     eax, ebp
0x956E13: jnb     short loc_956E17
0x956E15: mov     ebp, eax
0x956E17: mov     eax, [esp+1Ch+var_8]
0x956E1B: mov     ecx, [eax+28h]
0x956E1E: mov     edx, [ecx]
0x956E20: lea     eax, [esp+1Ch+var_4]
0x956E24: push    eax
0x956E25: push    ebx
0x956E26: call    dword ptr [edx+1Ch]
0x956E29: cmp     eax, [edi+2Ch]
0x956E2C: jle     short loc_956E31
0x956E2E: mov     [edi+2Ch], eax
0x956E31: xor     esi, esi
0x956E33: test    eax, eax
0x956E35: jle     short loc_956E5A
0x956E37: lea     ecx, [edi+34h]
0x956E3A: lea     ebx, [ebx+0]
0x956E40: mov     edx, [esp+esi*4+1Ch+var_4]
0x956E44: cmp     edx, [ecx-4]
0x956E47: jnb     short loc_956E4C
0x956E49: mov     [ecx-4], edx
0x956E4C: cmp     edx, [ecx]
0x956E4E: jbe     short loc_956E52
0x956E50: mov     [ecx], edx
0x956E52: inc     esi
0x956E53: add     ecx, 4
0x956E56: cmp     esi, eax
0x956E58: jl      short loc_956E40
0x956E5A: mov     eax, [esp+1Ch+arg_4]
0x956E5E: add     ebx, 10h
0x956E61: dec     eax
0x956E62: mov     [esp+1Ch+arg_4], eax
0x956E66: jnz     short loc_956E05
0x956E68: mov     ecx, [esp+1Ch+arg_0]
0x956E6C: pop     esi
0x956E6D: mov     ecx, [ecx+4]
0x956E70: mov     edx, [esp+18h+var_C]
0x956E74: mov     [edi+24h], ebp
0x956E77: mov     [edi+8], ecx
0x956E7A: mov     [edi+28h], edx
0x956E7D: pop     edi
0x956E7E: pop     ebp
0x956E7F: pop     ebx
0x956E80: add     esp, 0Ch
0x956E83: retn    8
