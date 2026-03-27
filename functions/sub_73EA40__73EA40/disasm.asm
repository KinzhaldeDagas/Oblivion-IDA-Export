0x73EA40: sub     esp, 34h
0x73EA43: push    ebx
0x73EA44: push    esi
0x73EA45: push    edi
0x73EA46: mov     edi, [esp+40h+arg_0]
0x73EA4A: mov     ebx, ecx
0x73EA4C: mov     ecx, edi
0x73EA4E: call    sub_723930
0x73EA53: fldz
0x73EA55: fstp    dword ptr [ebx+24h]
0x73EA58: xor     esi, esi
0x73EA5A: movzx   eax, word ptr [edi+0B6h]
0x73EA61: test    eax, eax
0x73EA63: jle     short loc_73EA90
0x73EA65: cmp     eax, esi
0x73EA67: jbe     short loc_73EA82
0x73EA69: mov     eax, [edi+0B0h]
0x73EA6F: mov     eax, [eax+esi*4]
0x73EA72: test    eax, eax
0x73EA74: jz      short loc_73EA82
0x73EA76: add     eax, 20h ; ' '
0x73EA79: push    eax
0x73EA7A: lea     ecx, [ebx+18h]
0x73EA7D: call    sub_72A6B0
0x73EA82: movzx   eax, word ptr [edi+0B6h]
0x73EA89: add     esi, 1
0x73EA8C: cmp     eax, esi
0x73EA8E: jg      short loc_73EA67
0x73EA90: lea     ecx, [esp+40h+var_34]
0x73EA94: push    ecx
0x73EA95: lea     ecx, [edi+64h]
0x73EA98: call    sub_718A80
0x73EA9D: lea     edx, [esp+40h+var_34]
0x73EAA1: push    edx
0x73EAA2: lea     eax, [ebx+18h]
0x73EAA5: push    eax
0x73EAA6: lea     ecx, [ebx+8]
0x73EAA9: call    sub_72A820
0x73EAAE: pop     edi
0x73EAAF: pop     esi
0x73EAB0: pop     ebx
0x73EAB1: add     esp, 34h
0x73EAB4: retn    4
