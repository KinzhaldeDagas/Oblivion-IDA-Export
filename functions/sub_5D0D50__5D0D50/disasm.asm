0x5D0D50: push    ebp
0x5D0D51: push    esi
0x5D0D52: mov     esi, ecx
0x5D0D54: xor     ebp, ebp
0x5D0D56: cmp     [esi+0Ch], ebp
0x5D0D59: jz      short loc_5D0DAF
0x5D0D5B: push    ebx
0x5D0D5C: push    edi
0x5D0D5D: lea     ecx, [ecx+0]
0x5D0D60: mov     eax, [esi+4]
0x5D0D63: mov     ecx, [eax]
0x5D0D65: cmp     ecx, ebp
0x5D0D67: mov     [esi+4], ecx
0x5D0D6A: jz      short loc_5D0D71
0x5D0D6C: mov     [ecx+4], ebp
0x5D0D6F: jmp     short loc_5D0D74
0x5D0D71: mov     [esi+8], ebp
0x5D0D74: mov     edx, [esi]
0x5D0D76: mov     edi, [eax+8]
0x5D0D79: push    eax
0x5D0D7A: mov     eax, [edx+8]
0x5D0D7D: mov     ecx, esi
0x5D0D7F: call    eax
0x5D0D81: add     dword ptr [esi+0Ch], 0FFFFFFFFh
0x5D0D85: cmp     edi, ebp
0x5D0D87: jz      short loc_5D0DA8
0x5D0D89: mov     ebx, [edi]
0x5D0D8B: cmp     ebx, ebp
0x5D0D8D: jz      short loc_5D0D9F
0x5D0D8F: mov     ecx, ebx
0x5D0D91: call    ContainerEntryExtraData_DestroyDataTable
0x5D0D96: push    ebx
0x5D0D97: call    FormHeapFree
0x5D0D9C: add     esp, 4
0x5D0D9F: push    edi
0x5D0DA0: call    FormHeapFree
0x5D0DA5: add     esp, 4
0x5D0DA8: cmp     [esi+0Ch], ebp
0x5D0DAB: jnz     short loc_5D0D60
0x5D0DAD: pop     edi
0x5D0DAE: pop     ebx
0x5D0DAF: pop     esi
0x5D0DB0: pop     ebp
0x5D0DB1: retn
