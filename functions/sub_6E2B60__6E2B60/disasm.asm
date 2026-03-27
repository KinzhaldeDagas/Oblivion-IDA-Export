0x6E2B60: push    esi
0x6E2B61: mov     esi, ecx
0x6E2B63: mov     eax, [esi+4Ch]
0x6E2B66: test    eax, eax
0x6E2B68: jnz     short loc_6E2BB8
0x6E2B6A: push    ebx
0x6E2B6B: push    eax
0x6E2B6C: call    FormHeapFree
0x6E2B71: mov     ebx, [esi+40h]
0x6E2B74: add     esp, 4
0x6E2B77: test    ebx, ebx
0x6E2B79: mov     dword ptr [esi+4Ch], 0
0x6E2B80: jz      short loc_6E2BB4
0x6E2B82: mov     eax, ebx
0x6E2B84: lea     edx, [eax+1]
0x6E2B87: mov     cl, [eax]
0x6E2B89: add     eax, 1
0x6E2B8C: test    cl, cl
0x6E2B8E: jnz     short loc_6E2B87
0x6E2B90: sub     eax, edx
0x6E2B92: push    edi
0x6E2B93: lea     edi, [eax+0Fh]
0x6E2B96: push    edi; Size
0x6E2B97: call    FormHeapAlloc
0x6E2B9C: mov     ecx, [esi+48h]
0x6E2B9F: push    ecx
0x6E2BA0: push    ebx; ArgList
0x6E2BA1: push    offset aSD_4; "%s[%d]"
0x6E2BA6: push    edi; SizeInBytes
0x6E2BA7: push    eax; DstBuf
0x6E2BA8: mov     [esi+4Ch], eax
0x6E2BAB: call    sub_6C5D40
0x6E2BB0: add     esp, 18h
0x6E2BB3: pop     edi
0x6E2BB4: mov     eax, [esi+4Ch]
0x6E2BB7: pop     ebx
0x6E2BB8: pop     esi
0x6E2BB9: retn
