0x4D7A50: push    ebx
0x4D7A51: push    esi
0x4D7A52: mov     esi, ecx
0x4D7A54: mov     eax, [esi]
0x4D7A56: mov     edx, [eax+170h]
0x4D7A5C: xor     bl, bl
0x4D7A5E: call    edx
0x4D7A60: test    eax, eax
0x4D7A62: jz      short loc_4D7A86
0x4D7A64: mov     eax, [esi]
0x4D7A66: mov     edx, [eax+170h]
0x4D7A6C: mov     ecx, esi
0x4D7A6E: call    edx
0x4D7A70: movzx   eax, byte ptr [eax+4]
0x4D7A74: add     eax, 0FFFFFFDDh
0x4D7A77: cmp     eax, 2
0x4D7A7A: ja      short loc_4D7A86
0x4D7A7C: lea     ecx, [esi+44h]
0x4D7A7F: pop     esi
0x4D7A80: pop     ebx
0x4D7A81: jmp     ExtraDataList__TrespassPackakePresent
0x4D7A86: pop     esi
0x4D7A87: mov     al, bl
0x4D7A89: pop     ebx
0x4D7A8A: retn
