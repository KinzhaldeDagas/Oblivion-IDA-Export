0x8C9F30: push    ebx
0x8C9F31: mov     ebx, [esp+4+arg_0]
0x8C9F35: push    esi
0x8C9F36: push    edi
0x8C9F37: mov     edi, ecx
0x8C9F39: mov     esi, [edi+0Ch]
0x8C9F3C: shl     ebx, 3
0x8C9F3F: mov     ecx, [esi+ebx+4]
0x8C9F43: add     esi, ebx
0x8C9F45: test    ecx, ecx
0x8C9F47: jz      short loc_8C9F61
0x8C9F49: cmp     word ptr [ecx+4], 0
0x8C9F4E: jz      short loc_8C9F61
0x8C9F50: dec     word ptr [ecx+6]
0x8C9F54: cmp     word ptr [ecx+6], 0
0x8C9F59: jnz     short loc_8C9F61
0x8C9F5B: mov     eax, [ecx]
0x8C9F5D: push    1
0x8C9F5F: call    dword ptr [eax]
0x8C9F61: mov     ecx, [esi]
0x8C9F63: test    ecx, ecx
0x8C9F65: jz      short loc_8C9F7F
0x8C9F67: cmp     word ptr [ecx+4], 0
0x8C9F6C: jz      short loc_8C9F7F
0x8C9F6E: dec     word ptr [ecx+6]
0x8C9F72: cmp     word ptr [ecx+6], 0
0x8C9F77: jnz     short loc_8C9F7F
0x8C9F79: mov     edx, [ecx]
0x8C9F7B: push    1
0x8C9F7D: call    dword ptr [edx]
0x8C9F7F: mov     eax, [edi+10h]
0x8C9F82: dec     eax
0x8C9F83: mov     [edi+10h], eax
0x8C9F86: mov     edi, [edi+0Ch]
0x8C9F89: mov     ecx, [edi+eax*8]
0x8C9F8C: mov     [edi+ebx], ecx
0x8C9F8F: mov     edx, [edi+eax*8+4]
0x8C9F93: mov     [edi+ebx+4], edx
0x8C9F97: pop     edi
0x8C9F98: pop     esi
0x8C9F99: pop     ebx
0x8C9F9A: retn    4
