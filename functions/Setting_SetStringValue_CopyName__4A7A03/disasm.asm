0x4A7A03: mov     al, [ecx]
0x4A7A05: mov     [edx], al
0x4A7A07: add     ecx, 1
0x4A7A0A: add     edx, 1
0x4A7A0D: test    al, al
0x4A7A0F: jnz     short Setting_SetStringValue___CopyName
0x4A7A11: mov     byte ptr [esi], 53h ; 'S'
0x4A7A14: mov     eax, [edi+4]
0x4A7A17: cmp     byte ptr [eax], 53h ; 'S'
0x4A7A1A: jnz     short loc_4A7A25
0x4A7A1C: push    eax
0x4A7A1D: call    FormHeapFree
0x4A7A22: add     esp, 4
0x4A7A25: mov     [edi+4], esi
0x4A7A28: pop     esi
0x4A7A29: mov     eax, edi
0x4A7A2B: pop     edi
0x4A7A2C: pop     ebx
0x4A7A2D: pop     ebp
0x4A7A2E: pop     ecx
0x4A7A2F: retn    4
