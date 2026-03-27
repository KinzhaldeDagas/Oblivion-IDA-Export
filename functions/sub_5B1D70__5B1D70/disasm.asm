0x5B1D70: push    esi
0x5B1D71: mov     esi, ecx
0x5B1D73: test    esi, esi
0x5B1D75: push    edi
0x5B1D76: mov     edi, esi
0x5B1D78: jz      short loc_5B1D92
0x5B1D7A: lea     ebx, [ebx+0]
0x5B1D80: mov     eax, [edi]
0x5B1D82: push    eax
0x5B1D83: call    FormHeapFree
0x5B1D88: mov     edi, [edi+4]
0x5B1D8B: add     esp, 4
0x5B1D8E: test    edi, edi
0x5B1D90: jnz     short loc_5B1D80
0x5B1D92: cmp     dword ptr [esi+4], 0
0x5B1D96: jz      short loc_5B1DAE
0x5B1D98: mov     eax, [esi+4]
0x5B1D9B: mov     edi, [eax+4]
0x5B1D9E: push    eax
0x5B1D9F: call    FormHeapFree
0x5B1DA4: add     esp, 4
0x5B1DA7: test    edi, edi
0x5B1DA9: mov     [esi+4], edi
0x5B1DAC: jnz     short loc_5B1D98
0x5B1DAE: pop     edi
0x5B1DAF: mov     dword ptr [esi], 0
0x5B1DB5: pop     esi
0x5B1DB6: retn
