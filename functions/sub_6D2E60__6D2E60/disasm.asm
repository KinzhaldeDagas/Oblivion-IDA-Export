0x6D2E60: push    esi
0x6D2E61: push    edi
0x6D2E62: mov     edi, [esp+8+arg_0]
0x6D2E66: push    edi
0x6D2E67: mov     esi, ecx
0x6D2E69: call    sub_6EC2E0
0x6D2E6E: test    al, al
0x6D2E70: jnz     short loc_6D2E79
0x6D2E72: pop     edi
0x6D2E73: xor     al, al
0x6D2E75: pop     esi
0x6D2E76: retn    4
0x6D2E79: fld     dword ptr [esi+0Ch]
0x6D2E7C: fld     dword ptr [edi+0Ch]
0x6D2E7F: fucompp
0x6D2E81: fnstsw  ax
0x6D2E83: test    ah, 44h
0x6D2E86: jp      short loc_6D2E72
0x6D2E88: mov     ecx, [esi+10h]
0x6D2E8B: test    ecx, ecx
0x6D2E8D: jz      short loc_6D2E99
0x6D2E8F: cmp     dword ptr [edi+10h], 0
0x6D2E93: jz      short loc_6D2E72
0x6D2E95: test    ecx, ecx
0x6D2E97: jnz     short loc_6D2EA3
0x6D2E99: cmp     dword ptr [edi+10h], 0
0x6D2E9D: jnz     short loc_6D2E72
0x6D2E9F: test    ecx, ecx
0x6D2EA1: jz      short loc_6D2EB2
0x6D2EA3: mov     edi, [edi+10h]
0x6D2EA6: mov     eax, [ecx]
0x6D2EA8: mov     edx, [eax+2Ch]
0x6D2EAB: push    edi
0x6D2EAC: call    edx
0x6D2EAE: test    al, al
0x6D2EB0: jz      short loc_6D2E72
0x6D2EB2: pop     edi
0x6D2EB3: mov     al, 1
0x6D2EB5: pop     esi
0x6D2EB6: retn    4
