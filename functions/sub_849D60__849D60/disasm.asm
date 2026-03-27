0x849D60: push    0FFFFFFFFh
0x849D62: push    offset SEH_879360
0x849D67: mov     eax, large fs:0
0x849D6D: push    eax
0x849D6E: push    ecx
0x849D6F: push    ebx
0x849D70: push    ebp
0x849D71: push    esi
0x849D72: push    edi
0x849D73: mov     eax, ds:0B30AACh
0x849D78: xor     eax, esp
0x849D7A: push    eax
0x849D7B: lea     eax, [esp+24h+var_C]
0x849D7F: mov     large fs:0, eax
0x849D85: mov     [esp+24h+var_10], ecx
0x849D89: mov     eax, [esp+24h+arg_8]
0x849D8D: mov     eax, [eax+10h]
0x849D90: mov     edi, ds:0B45608h
0x849D96: push    eax
0x849D97: call    sub_848C40
0x849D9C: mov     ecx, [edi+24h]
0x849D9F: mov     ebx, [esp+24h+arg_C]
0x849DA3: mov     esi, [ecx]
0x849DA5: mov     edx, [ebx]
0x849DA7: mov     eax, [edx+88h]
0x849DAD: push    0
0x849DAF: mov     ecx, ebx
0x849DB1: mov     [esp+28h+arg_8], esi
0x849DB5: call    eax
0x849DB7: mov     esi, [esi+4]
0x849DBA: mov     ebp, eax
0x849DBC: cmp     esi, ebp
0x849DBE: jz      short loc_849DF7
0x849DC0: test    esi, esi
0x849DC2: jz      short loc_849DE0
0x849DC4: lea     ecx, [esi+4]
0x849DC7: push    ecx; lpAddend
0x849DC8: call    dword ptr ds:0A2807Ch
0x849DCE: test    eax, eax
0x849DD0: jnz     short loc_849DE0
0x849DD2: test    esi, esi
0x849DD4: jz      short loc_849DE0
0x849DD6: mov     edx, [esi]
0x849DD8: mov     eax, [edx]
0x849DDA: push    1
0x849DDC: mov     ecx, esi
0x849DDE: call    eax
0x849DE0: test    ebp, ebp
0x849DE2: mov     esi, [esp+24h+arg_8]
0x849DE6: mov     [esi+4], ebp
0x849DE9: jz      short loc_849DFB
0x849DEB: add     ebp, 4
0x849DEE: push    ebp; lpAddend
0x849DEF: call    dword ptr ds:0A28078h
0x849DF5: jmp     short loc_849DFB
0x849DF7: mov     esi, [esp+24h+arg_8]
0x849DFB: test    esi, esi
0x849DFD: jz      short loc_849E19
0x849DFF: cmp     byte ptr ds:0B42CDDh, 0
0x849E06: jz      short loc_849E19
0x849E08: mov     edx, [ebx]
0x849E0A: mov     eax, [edx+78h]
0x849E0D: mov     ecx, ebx
0x849E0F: call    eax
0x849E11: push    eax
0x849E12: mov     ecx, esi
0x849E14: call    sub_7715E0
0x849E19: mov     ecx, [edi+24h]
0x849E1C: mov     esi, [ecx+4]
0x849E1F: mov     edx, [ebx]
0x849E21: mov     eax, [edx+8Ch]
0x849E27: push    0
0x849E29: mov     ecx, ebx
0x849E2B: mov     [esp+28h+arg_8], esi
0x849E2F: call    eax
0x849E31: test    eax, eax
0x849E33: jz      short loc_849E47
0x849E35: mov     edx, [ebx]
0x849E37: mov     eax, [edx+8Ch]
0x849E3D: push    0
0x849E3F: mov     ecx, ebx
0x849E41: call    eax
0x849E43: mov     ebp, eax
0x849E45: jmp     short loc_849E5C
0x849E47: test    dword ptr [ebx+1Ch], 80h
0x849E4E: mov     ebp, ds:0B430F0h
0x849E54: ja      short loc_849E5C
0x849E56: mov     ebp, ds:0B430DCh
0x849E5C: mov     esi, [esi+4]
0x849E5F: cmp     esi, ebp
0x849E61: jz      short loc_849E9A
0x849E63: test    esi, esi
0x849E65: jz      short loc_849E83
0x849E67: lea     ecx, [esi+4]
0x849E6A: push    ecx; lpAddend
0x849E6B: call    dword ptr ds:0A2807Ch
0x849E71: test    eax, eax
0x849E73: jnz     short loc_849E83
0x849E75: test    esi, esi
0x849E77: jz      short loc_849E83
0x849E79: mov     edx, [esi]
0x849E7B: mov     eax, [edx]
0x849E7D: push    1
0x849E7F: mov     ecx, esi
0x849E81: call    eax
0x849E83: test    ebp, ebp
0x849E85: mov     esi, [esp+24h+arg_8]
0x849E89: mov     [esi+4], ebp
0x849E8C: jz      short loc_849E9E
0x849E8E: add     ebp, 4
0x849E91: push    ebp; lpAddend
0x849E92: call    dword ptr ds:0A28078h
0x849E98: jmp     short loc_849E9E
0x849E9A: mov     esi, [esp+24h+arg_8]
0x849E9E: test    esi, esi
0x849EA0: jz      short loc_849EBC
0x849EA2: cmp     byte ptr ds:0B42CDDh, 0
0x849EA9: jz      short loc_849EBC
0x849EAB: mov     edx, [ebx]
0x849EAD: mov     eax, [edx+78h]
0x849EB0: mov     ecx, ebx
0x849EB2: call    eax
0x849EB4: push    eax
0x849EB5: mov     ecx, esi
0x849EB7: call    sub_7715E0
0x849EBC: mov     ebx, 1
0x849EC1: add     [edi+60h], ebx
0x849EC4: mov     [esp+24h+arg_8], edi
0x849EC8: mov     esi, [esp+24h+var_10]
0x849ECC: mov     edx, [esi+38h]
0x849ECF: lea     ecx, [esp+24h+arg_8]
0x849ED3: push    ecx
0x849ED4: push    edx
0x849ED5: lea     ecx, [esi+40h]
0x849ED8: mov     [esp+2Ch+var_4], 0
0x849EE0: call    sub_76CE40
0x849EE5: or      eax, 0FFFFFFFFh
0x849EE8: add     [edi+60h], eax
0x849EEB: mov     [esp+24h+var_4], eax
0x849EEF: jnz     short loc_849EF8
0x849EF1: mov     ecx, edi
0x849EF3: call    sub_7604D0
0x849EF8: add     [esi+38h], ebx
0x849EFB: mov     ecx, [esp+24h+var_C]
0x849EFF: mov     large fs:0, ecx
0x849F06: pop     ecx
0x849F07: pop     edi
0x849F08: pop     esi
0x849F09: pop     ebp
0x849F0A: pop     ebx
0x849F0B: add     esp, 10h
0x849F0E: retn    10h
