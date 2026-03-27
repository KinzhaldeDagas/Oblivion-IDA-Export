0x77AA10: push    ecx
0x77AA11: push    ebp
0x77AA12: push    esi
0x77AA13: push    edi
0x77AA14: mov     esi, ecx
0x77AA16: xor     ebp, ebp
0x77AA18: xor     edi, edi
0x77AA1A: cmp     [esi+38h], ebp
0x77AA1D: jbe     short loc_77AA3D
0x77AA1F: push    ebx
0x77AA20: mov     [esp+14h+var_4], ebp
0x77AA24: lea     ebx, [esi+40h]
0x77AA27: lea     eax, [esp+14h+var_4]
0x77AA2B: push    eax
0x77AA2C: push    edi
0x77AA2D: mov     ecx, ebx
0x77AA2F: call    sub_76CE40
0x77AA34: add     edi, 1
0x77AA37: cmp     edi, [esi+38h]
0x77AA3A: jb      short loc_77AA27
0x77AA3C: pop     ebx
0x77AA3D: mov     ecx, [esi+3Ch]
0x77AA40: cmp     ecx, ebp
0x77AA42: jz      short loc_77AA52
0x77AA44: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x77AA48: jnz     short loc_77AA4F
0x77AA4A: call    sub_7604D0
0x77AA4F: mov     [esi+3Ch], ebp
0x77AA52: pop     edi
0x77AA53: mov     [esi+38h], ebp
0x77AA56: mov     [esi+34h], ebp
0x77AA59: pop     esi
0x77AA5A: pop     ebp
0x77AA5B: pop     ecx
0x77AA5C: retn
