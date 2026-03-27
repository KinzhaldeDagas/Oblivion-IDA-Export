0x7F6AE0: movzx   eax, word ptr [esp+arg_4]
0x7F6AE5: push    ebx
0x7F6AE6: mov     ebx, [esp+4+arg_C]
0x7F6AEA: mov     edx, [ebx]
0x7F6AEC: push    ebp
0x7F6AED: mov     ebp, ds:0B455A0h[eax*4]
0x7F6AF4: mov     ecx, [ebp+24h]
0x7F6AF7: mov     eax, [edx+88h]
0x7F6AFD: push    esi
0x7F6AFE: mov     esi, [ecx]
0x7F6B00: push    edi
0x7F6B01: push    0
0x7F6B03: mov     ecx, ebx
0x7F6B05: mov     [esp+14h+arg_4], esi
0x7F6B09: call    eax
0x7F6B0B: mov     esi, [esi+4]
0x7F6B0E: mov     edi, eax
0x7F6B10: cmp     esi, edi
0x7F6B12: jz      short loc_7F6B49
0x7F6B14: test    esi, esi
0x7F6B16: jz      short loc_7F6B34
0x7F6B18: lea     ecx, [esi+4]
0x7F6B1B: push    ecx; lpAddend
0x7F6B1C: call    dword ptr ds:0A2807Ch
0x7F6B22: test    eax, eax
0x7F6B24: jnz     short loc_7F6B34
0x7F6B26: test    esi, esi
0x7F6B28: jz      short loc_7F6B34
0x7F6B2A: mov     edx, [esi]
0x7F6B2C: mov     eax, [edx]
0x7F6B2E: push    1
0x7F6B30: mov     ecx, esi
0x7F6B32: call    eax
0x7F6B34: test    edi, edi
0x7F6B36: mov     ecx, [esp+18h]
0x7F6B3A: mov     [ecx+4], edi
0x7F6B3D: jz      short loc_7F6B49
0x7F6B3F: add     edi, 4
0x7F6B42: push    edi; lpAddend
0x7F6B43: call    dword ptr ds:0A28078h
0x7F6B49: mov     edx, [ebp+24h]
0x7F6B4C: mov     ecx, [esp+18h+arg_8]
0x7F6B50: mov     edi, [edx+4]
0x7F6B53: push    0
0x7F6B55: push    ebx
0x7F6B56: call    sub_848FD0
0x7F6B5B: mov     esi, [edi+4]
0x7F6B5E: mov     ebx, eax
0x7F6B60: cmp     esi, ebx
0x7F6B62: jz      short loc_7F6B95
0x7F6B64: test    esi, esi
0x7F6B66: jz      short loc_7F6B84
0x7F6B68: lea     eax, [esi+4]
0x7F6B6B: push    eax; lpAddend
0x7F6B6C: call    dword ptr ds:0A2807Ch
0x7F6B72: test    eax, eax
0x7F6B74: jnz     short loc_7F6B84
0x7F6B76: test    esi, esi
0x7F6B78: jz      short loc_7F6B84
0x7F6B7A: mov     edx, [esi]
0x7F6B7C: mov     eax, [edx]
0x7F6B7E: push    1
0x7F6B80: mov     ecx, esi
0x7F6B82: call    eax
0x7F6B84: test    ebx, ebx
0x7F6B86: mov     [edi+4], ebx
0x7F6B89: jz      short loc_7F6B95
0x7F6B8B: add     ebx, 4
0x7F6B8E: push    ebx; lpAddend
0x7F6B8F: call    dword ptr ds:0A28078h
0x7F6B95: cmp     dword ptr [ebp+30h], 0
0x7F6B99: mov     ecx, [esp+1Ch]
0x7F6B9D: mov     edx, [ecx+8]
0x7F6BA0: mov     bl, [edx+1Ah]
0x7F6BA3: jnz     short loc_7F6BAD
0x7F6BA5: call    sub_772DF0
0x7F6BAA: mov     [ebp+30h], eax
0x7F6BAD: mov     ecx, [ebp+30h]
0x7F6BB0: movzx   eax, bl
0x7F6BB3: push    0
0x7F6BB5: push    eax
0x7F6BB6: push    18h
0x7F6BB8: call    sub_772CD0
0x7F6BBD: mov     ecx, [esp+1Ch+var_8]
0x7F6BC1: mov     edx, [ecx+0B4h]
0x7F6BC7: cmp     dword ptr [edx+24h], 0
0x7F6BCB: pop     edi
0x7F6BCC: pop     esi
0x7F6BCD: pop     ebp
0x7F6BCE: pop     ebx
0x7F6BCF: jz      short loc_7F6BDC
0x7F6BD1: fld1
0x7F6BD3: fstp    dword ptr ds:0B46688h
0x7F6BD9: retn    14h
0x7F6BDC: fldz
0x7F6BDE: fstp    dword ptr ds:0B46688h
0x7F6BE4: retn    14h
