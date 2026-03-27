0x662D10: push    esi
0x662D11: push    edi
0x662D12: mov     edi, ecx
0x662D14: mov     esi, [edi+1FCh]
0x662D1A: test    esi, esi
0x662D1C: jz      short loc_662D98
0x662D1E: push    ebx
0x662D1F: nop
0x662D20: cmp     dword ptr [esi+4], 0
0x662D24: mov     eax, [esi]
0x662D26: jnz     short loc_662D2E
0x662D28: test    eax, eax
0x662D2A: jz      short loc_662D73
0x662D2C: jmp     short loc_662D32
0x662D2E: test    eax, eax
0x662D30: jz      short loc_662D6C
0x662D32: push    0; int
0x662D34: push    offset ??_R0?AVTESEnchantableForm@@@8; struct TypeDescriptor *
0x662D39: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x662D3E: push    0; int
0x662D40: push    eax; void *
0x662D41: call    OblivionDynamicCast
0x662D46: add     esp, 14h
0x662D49: test    eax, eax
0x662D4B: jz      short loc_662D52
0x662D4D: mov     eax, [eax+4]
0x662D50: jmp     short loc_662D54
0x662D52: xor     eax, eax
0x662D54: test    eax, eax
0x662D56: jz      short loc_662D6C
0x662D58: mov     ebx, [esi]
0x662D5A: mov     edx, [edi+5Ch]
0x662D5D: push    0
0x662D5F: lea     ecx, [edi+5Ch]
0x662D62: add     eax, 18h
0x662D65: push    ebx
0x662D66: push    eax
0x662D67: mov     eax, [edx+8]
0x662D6A: call    eax
0x662D6C: mov     esi, [esi+4]
0x662D6F: test    esi, esi
0x662D71: jnz     short loc_662D20
0x662D73: mov     ecx, [edi+1FCh]
0x662D79: call    BSSimpleList_Clear
0x662D7E: mov     ecx, [edi+1FCh]
0x662D84: push    ecx
0x662D85: call    FormHeapFree
0x662D8A: add     esp, 4
0x662D8D: mov     dword ptr [edi+1FCh], 0
0x662D97: pop     ebx
0x662D98: pop     edi
0x662D99: pop     esi
0x662D9A: retn
