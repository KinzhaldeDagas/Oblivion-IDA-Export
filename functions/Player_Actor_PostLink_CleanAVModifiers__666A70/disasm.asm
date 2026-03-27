0x666A70: sub     esp, 120h
0x666A76: push    ebp
0x666A77: push    esi
0x666A78: push    edi
0x666A79: push    120h
0x666A7E: lea     eax, [esp+130h+var_120]
0x666A82: push    0
0x666A84: push    eax
0x666A85: mov     ebp, ecx
0x666A87: call    __memset
0x666A8C: mov     edx, [ebp+68h]
0x666A8F: mov     eax, [edx+8]
0x666A92: lea     ecx, [ebp+68h]
0x666A95: add     esp, 0Ch
0x666A98: call    eax
0x666A9A: mov     edi, eax
0x666A9C: test    edi, edi
0x666A9E: jz      loc_666B30
