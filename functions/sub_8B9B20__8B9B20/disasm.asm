0x8B9B20: push    ebx
0x8B9B21: mov     ebx, [esp+4+arg_0]
0x8B9B25: push    esi
0x8B9B26: mov     esi, ecx
0x8B9B28: push    edi
0x8B9B29: mov     ecx, ebx
0x8B9B2B: call    sub_7124A0
0x8B9B30: mov     edi, eax
0x8B9B32: mov     eax, [esi]
0x8B9B34: mov     edx, [eax+74h]
0x8B9B37: lea     ecx, [esp+0Ch+arg_0]
0x8B9B3B: push    ecx
0x8B9B3C: mov     ecx, esi
0x8B9B3E: call    edx
0x8B9B40: test    eax, eax
0x8B9B42: jz      short loc_8B9B4E
0x8B9B44: test    edi, edi
0x8B9B46: jz      short loc_8B9B4E
0x8B9B48: mov     ecx, [edi+8]
0x8B9B4B: mov     [eax+48h], ecx
0x8B9B4E: push    ebx
0x8B9B4F: mov     ecx, esi
0x8B9B51: call    sub_89D6C0
0x8B9B56: pop     edi
0x8B9B57: pop     esi
0x8B9B58: pop     ebx
0x8B9B59: retn    4
