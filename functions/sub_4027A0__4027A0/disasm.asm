0x4027A0: push    esi
0x4027A1: push    edi
0x4027A2: xor     esi, esi
0x4027A4: mov     edi, g_HeapPoolsBySize[esi]
0x4027AA: test    edi, edi
0x4027AC: jz      short loc_4027BE
0x4027AE: mov     ecx, edi
0x4027B0: call    sub_402400
0x4027B5: push    edi
0x4027B6: call    FormHeapFree
0x4027BB: add     esp, 4
0x4027BE: add     esi, 4
0x4027C1: cmp     esi, 204h
0x4027C7: jb      short loc_4027A4
0x4027C9: pop     edi
0x4027CA: pop     esi
0x4027CB: retn
