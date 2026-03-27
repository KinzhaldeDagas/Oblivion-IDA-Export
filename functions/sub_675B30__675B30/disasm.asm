0x675B30: push    ebx
0x675B31: push    edi
0x675B32: mov     edi, [esp+8+arg_0]
0x675B36: test    edi, edi
0x675B38: mov     ebx, ecx
0x675B3A: jz      short loc_675B9D
0x675B3C: mov     eax, [edi+4]
0x675B3F: cmp     eax, 0FFFFFFFFh
0x675B42: jle     short loc_675B9D
0x675B44: cmp     eax, 6
0x675B47: jge     short loc_675B9D
0x675B49: push    esi
0x675B4A: mov     esi, [ebx+eax*4+28h]
0x675B4E: test    esi, esi
0x675B50: jnz     short loc_675B72
0x675B52: push    8; Size
0x675B54: call    FormHeapAlloc
0x675B59: add     esp, 4
0x675B5C: test    eax, eax
0x675B5E: jz      short loc_675B69
0x675B60: mov     [eax], esi
0x675B62: mov     [eax+4], esi
0x675B65: mov     esi, eax
0x675B67: jmp     short loc_675B6B
0x675B69: xor     esi, esi
0x675B6B: mov     eax, [edi+4]
0x675B6E: mov     [ebx+eax*4+28h], esi
0x675B72: push    edi
0x675B73: mov     ecx, esi
0x675B75: call    sub_446C30
0x675B7A: test    al, al
0x675B7C: jnz     short loc_675B8C
0x675B7E: push    edi
0x675B7F: mov     ecx, esi
0x675B81: call    BSSimpleList_PushFront
0x675B86: pop     esi
0x675B87: pop     edi
0x675B88: pop     ebx
0x675B89: retn    4
0x675B8C: mov     ecx, edi
0x675B8E: call    sub_605E80
0x675B93: push    edi
0x675B94: call    FormHeapFree
0x675B99: add     esp, 4
0x675B9C: pop     esi
0x675B9D: pop     edi
0x675B9E: pop     ebx
0x675B9F: retn    4
