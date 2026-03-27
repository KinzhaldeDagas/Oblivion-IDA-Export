0x44FF50: push    ebx
0x44FF51: push    edi
0x44FF52: mov     edi, [esp+8+arg_0]
0x44FF56: test    edi, edi
0x44FF58: mov     ebx, ecx
0x44FF5A: jz      short loc_44FF92
0x44FF5C: push    esi
0x44FF5D: push    18h; Size
0x44FF5F: call    FormHeapAlloc
0x44FF64: add     esp, 4
0x44FF67: mov     esi, eax
0x44FF69: push    esi
0x44FF6A: lea     ecx, [ebx+284h]
0x44FF70: call    BSSimpleList_PushFront
0x44FF75: mov     eax, [edi]
0x44FF77: mov     [esi], eax
0x44FF79: mov     ecx, [edi+4]
0x44FF7C: mov     [esi+4], ecx
0x44FF7F: mov     edx, [edi+8]
0x44FF82: mov     [esi+8], edx
0x44FF85: mov     eax, [edi+0Ch]
0x44FF88: mov     [esi+0Ch], eax
0x44FF8B: mov     ecx, [edi+10h]
0x44FF8E: mov     [esi+10h], ecx
0x44FF91: pop     esi
0x44FF92: pop     edi
0x44FF93: pop     ebx
0x44FF94: retn    4
