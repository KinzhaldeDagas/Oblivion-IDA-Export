0x629E20: push    esi
0x629E21: mov     esi, ecx
0x629E23: mov     eax, [esi]
0x629E25: mov     edx, [eax+34Ch]
0x629E2B: call    edx
0x629E2D: test    al, al
0x629E2F: jnz     loc_629ECE
0x629E35: push    edi
0x629E36: mov     edi, [esp+8+arg_4]
0x629E3A: cmp     edi, 0FFFFFFFFh
0x629E3D: jnz     short loc_629E44
0x629E3F: mov     edi, 101h
0x629E44: mov     eax, [esi]
0x629E46: mov     edx, [eax+184h]
0x629E4C: mov     ecx, esi
0x629E4E: call    edx
0x629E50: test    eax, eax
0x629E52: jz      short loc_629E63
0x629E54: mov     eax, [eax+1Ch]
0x629E57: shr     eax, 0Dh
0x629E5A: test    al, 1
0x629E5C: jz      short loc_629E63
0x629E5E: mov     edi, 201h
0x629E63: mov     edx, [esi]
0x629E65: mov     eax, [edx+2C0h]
0x629E6B: push    ebx
0x629E6C: mov     ecx, esi
0x629E6E: call    eax
0x629E70: and     ax, 0C00h
0x629E74: or      ax, di
0x629E77: mov     edi, [esp+8+arg_4]
0x629E7B: mov     edx, [edi]
0x629E7D: movzx   ebx, ax
0x629E80: mov     eax, [edx+380h]
0x629E86: mov     ecx, edi
0x629E88: call    eax
0x629E8A: test    eax, eax
0x629E8C: jz      short loc_629EBF
0x629E8E: mov     edx, [esi]
0x629E90: mov     eax, [edx+36Ch]
0x629E96: mov     ecx, esi
0x629E98: call    eax
0x629E9A: cmp     eax, 4
0x629E9D: jnz     short loc_629EBF
0x629E9F: mov     edx, [edi]
0x629EA1: mov     eax, [edx+380h]
0x629EA7: mov     ecx, edi
0x629EA9: call    eax
0x629EAB: mov     ecx, [eax+58h]
0x629EAE: mov     edx, [ecx]
0x629EB0: mov     eax, [edx+2C8h]
0x629EB6: push    ebx
0x629EB7: call    eax
0x629EB9: pop     ebx
0x629EBA: pop     edi
0x629EBB: pop     esi
0x629EBC: retn    8
0x629EBF: mov     edx, [esi]
0x629EC1: mov     eax, [edx+2C8h]
0x629EC7: mov     ecx, esi
0x629EC9: push    ebx
0x629ECA: call    eax
0x629ECC: pop     ebx
0x629ECD: pop     edi
0x629ECE: pop     esi
0x629ECF: retn    8
