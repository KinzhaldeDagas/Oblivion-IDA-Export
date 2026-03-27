0x6479C0: push    ebp
0x6479C1: push    esi
0x6479C2: mov     esi, ecx
0x6479C4: mov     eax, [esi]
0x6479C6: mov     edx, [eax+0BCh]
0x6479CC: push    edi
0x6479CD: xor     ebp, ebp
0x6479CF: push    ebp
0x6479D0: call    edx
0x6479D2: mov     eax, [esi]
0x6479D4: mov     edx, [eax+394h]
0x6479DA: push    ebp
0x6479DB: mov     ecx, esi
0x6479DD: call    edx
0x6479DF: mov     eax, [esi+44h]
0x6479E2: cmp     eax, ebp
0x6479E4: mov     [esi+2Ch], ebp
0x6479E7: mov     [esi+30h], ebp
0x6479EA: jz      short loc_647A08
0x6479EC: push    eax
0x6479ED: lea     ecx, [esi+3Ch]
0x6479F0: call    BSSimpleList_Remove
0x6479F5: mov     eax, [esi+44h]
0x6479F8: cmp     eax, ebp
0x6479FA: jz      short loc_647A05
0x6479FC: push    eax
0x6479FD: call    FormHeapFree
0x647A02: add     esp, 4
0x647A05: mov     [esi+44h], ebp
0x647A08: mov     eax, [esi+48h]
0x647A0B: cmp     eax, ebp
0x647A0D: jz      short loc_647A2B
0x647A0F: push    eax
0x647A10: lea     ecx, [esi+3Ch]
0x647A13: call    BSSimpleList_Remove
0x647A18: mov     eax, [esi+48h]
0x647A1B: cmp     eax, ebp
0x647A1D: jz      short loc_647A28
0x647A1F: push    eax
0x647A20: call    FormHeapFree
0x647A25: add     esp, 4
0x647A28: mov     [esi+48h], ebp
0x647A2B: lea     edi, [esi+3Ch]
0x647A2E: push    ebx
0x647A2F: nop
0x647A30: cmp     [edi+4], ebp
0x647A33: jnz     short loc_647A39
0x647A35: cmp     [edi], ebp
0x647A37: jz      short loc_647A52
0x647A39: mov     ebx, [edi]
0x647A3B: cmp     ebx, ebp
0x647A3D: jz      short loc_647A48
0x647A3F: push    ebx
0x647A40: call    FormHeapFree
0x647A45: add     esp, 4
0x647A48: push    ebx
0x647A49: mov     ecx, edi
0x647A4B: call    BSSimpleList_Remove
0x647A50: jmp     short loc_647A30
0x647A52: cmp     [esi+50h], ebp
0x647A55: pop     ebx
0x647A56: jz      short loc_647A6E
0x647A58: mov     eax, [esi+50h]
0x647A5B: mov     edi, [eax+4]
0x647A5E: push    eax
0x647A5F: call    FormHeapFree
0x647A64: add     esp, 4
0x647A67: cmp     edi, ebp
0x647A69: mov     [esi+50h], edi
0x647A6C: jnz     short loc_647A58
0x647A6E: pop     edi
0x647A6F: mov     [esi+4Ch], ebp
0x647A72: pop     esi
0x647A73: pop     ebp
0x647A74: retn    4
