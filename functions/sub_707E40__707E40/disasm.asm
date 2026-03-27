0x707E40: mov     eax, [esp+arg_4]
0x707E44: push    edi
0x707E45: mov     edi, [eax+8]
0x707E48: test    edi, edi
0x707E4A: jz      short loc_707E85
0x707E4C: push    ebx
0x707E4D: mov     ebx, [esp+8+arg_8]
0x707E51: push    ebp
0x707E52: mov     ebp, [esp+0Ch+arg_0]
0x707E56: push    esi
0x707E57: mov     esi, [edi+8]
0x707E5A: mov     edx, [esi]
0x707E5C: lea     eax, [edi+8]
0x707E5F: mov     eax, [edx+4Ch]
0x707E62: mov     edi, [edi+4]
0x707E65: mov     ecx, esi
0x707E67: call    eax
0x707E69: cmp     eax, 0Ah
0x707E6C: jge     short loc_707E7E
0x707E6E: push    ebx
0x707E6F: mov     ecx, esi
0x707E71: call    sub_700710
0x707E76: push    eax; a2
0x707E77: mov     ecx, ebp; this
0x707E79: call    sub_405680
0x707E7E: test    edi, edi
0x707E80: jnz     short loc_707E57
0x707E82: pop     esi
0x707E83: pop     ebp
0x707E84: pop     ebx
0x707E85: pop     edi
0x707E86: retn    0Ch
