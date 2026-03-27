0x664D70: push    ebp
0x664D71: push    edi
0x664D72: mov     edi, [esp+8+arg_0]
0x664D76: test    edi, edi
0x664D78: mov     ebp, ecx
0x664D7A: jz      loc_664E57
0x664D80: push    ebx
0x664D81: push    esi
0x664D82: mov     esi, [edi+0Ch]
0x664D85: test    esi, esi
0x664D87: jz      short loc_664DBC
0x664D89: lea     esp, [esp+0]
0x664D90: mov     eax, [esi]
0x664D92: mov     edx, [eax+4]
0x664D95: mov     ebx, [esi+34h]
0x664D98: mov     ecx, esi
0x664D9A: call    edx
0x664D9C: test    eax, eax
0x664D9E: jz      short loc_664DAE
0x664DA0: cmp     eax, offset dword_B3CA58
0x664DA5: jz      short loc_664DB6
0x664DA7: mov     eax, [eax+4]
0x664DAA: test    eax, eax
0x664DAC: jnz     short loc_664DA0
0x664DAE: push    esi
0x664DAF: mov     ecx, edi
0x664DB1: call    sub_6FFE90
0x664DB6: test    ebx, ebx
0x664DB8: mov     esi, ebx
0x664DBA: jnz     short loc_664D90
0x664DBC: mov     esi, [edi+0A8h]
0x664DC2: test    esi, esi
0x664DC4: jz      short loc_664DEC
0x664DC6: lea     eax, [esi+4]
0x664DC9: push    eax; lpAddend
0x664DCA: call    dword ptr ds:0A2807Ch
0x664DD0: test    eax, eax
0x664DD2: jnz     short loc_664DE2
0x664DD4: test    esi, esi
0x664DD6: jz      short loc_664DE2
0x664DD8: mov     edx, [esi]
0x664DDA: mov     eax, [edx]
0x664DDC: push    1
0x664DDE: mov     ecx, esi
0x664DE0: call    eax
0x664DE2: mov     dword ptr [edi+0A8h], 0
0x664DEC: mov     ecx, [edi+0A8h]
0x664DF2: test    ecx, ecx
0x664DF4: jz      short loc_664E0D
0x664DF6: call    sub_452A60
0x664DFB: cmp     eax, edi
0x664DFD: jz      short loc_664E0D
0x664DFF: mov     ecx, [edi+0A8h]
0x664E05: mov     edx, [ecx]
0x664E07: mov     eax, [edx+4Ch]
0x664E0A: push    edi
0x664E0B: call    eax
0x664E0D: movzx   eax, word ptr [edi+0B6h]
0x664E14: xor     esi, esi
0x664E16: test    eax, eax
0x664E18: jbe     short loc_664E55
0x664E1A: cmp     eax, esi
0x664E1C: mov     ebx, 0FFFEh
0x664E21: jbe     short loc_664E47
0x664E23: mov     ecx, [edi+0B0h]
0x664E29: mov     ecx, [ecx+esi*4]
0x664E2C: test    ecx, ecx
0x664E2E: jz      short loc_664E47
0x664E30: mov     edx, [ecx]
0x664E32: mov     eax, [edx+8]
0x664E35: and     [ecx+18h], bx
0x664E39: call    eax
0x664E3B: test    eax, eax
0x664E3D: jz      short loc_664E47
0x664E3F: push    eax
0x664E40: mov     ecx, ebp
0x664E42: call    sub_664D70
0x664E47: movzx   eax, word ptr [edi+0B6h]
0x664E4E: add     esi, 1
0x664E51: cmp     eax, esi
0x664E53: ja      short loc_664E23
0x664E55: pop     esi
0x664E56: pop     ebx
0x664E57: pop     edi
0x664E58: pop     ebp
0x664E59: retn    4
