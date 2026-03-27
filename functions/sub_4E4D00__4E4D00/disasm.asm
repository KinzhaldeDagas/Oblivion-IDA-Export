0x4E4D00: mov     eax, [esp+arg_0]
0x4E4D04: push    ebx
0x4E4D05: xor     bl, bl
0x4E4D07: test    eax, eax
0x4E4D09: push    esi
0x4E4D0A: mov     esi, ecx
0x4E4D0C: jz      short loc_4E4D66
0x4E4D0E: mov     ecx, [eax]
0x4E4D10: cmp     ecx, ds:0B05E20h
0x4E4D16: jnz     short loc_4E4D66
0x4E4D18: mov     ecx, [eax+0Ch]
0x4E4D1B: add     ecx, 0FFFFFFF8h
0x4E4D1E: cmp     ecx, 2
0x4E4D21: ja      short loc_4E4D56
0x4E4D23: mov     edx, [eax+8]
0x4E4D26: push    0; int
0x4E4D28: push    offset ??_R0?AVTESObjectCELL@@@8; struct TypeDescriptor *
0x4E4D2D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4E4D32: push    0; int
0x4E4D34: push    edx; a1
0x4E4D35: call    TESForm_LookupByFormID
0x4E4D3A: add     esp, 4
0x4E4D3D: push    eax; void *
0x4E4D3E: call    OblivionDynamicCast
0x4E4D43: add     esp, 14h
0x4E4D46: test    eax, eax
0x4E4D48: jz      short loc_4E4D66
0x4E4D4A: cmp     [esi+20h], eax
0x4E4D4D: jnz     short loc_4E4D66
0x4E4D4F: pop     esi
0x4E4D50: xor     al, al
0x4E4D52: pop     ebx
0x4E4D53: retn    4
0x4E4D56: mov     ecx, [esi+20h]
0x4E4D59: mov     edx, [ecx]
0x4E4D5B: pop     esi
0x4E4D5C: pop     ebx
0x4E4D5D: mov     [esp+arg_0], eax
0x4E4D61: mov     eax, [edx+30h]
0x4E4D64: jmp     eax
0x4E4D66: pop     esi
0x4E4D67: mov     al, bl
0x4E4D69: pop     ebx
0x4E4D6A: retn    4
