0x67BF00: push    ebp
0x67BF01: mov     ebp, ecx
0x67BF03: push    esi
0x67BF04: mov     esi, [ebp+0]
0x67BF07: test    esi, esi
0x67BF09: jz      short loc_67BF49
0x67BF0B: push    ebx
0x67BF0C: mov     ebx, [esp+0Ch+arg_0]
0x67BF10: mov     eax, [esi]
0x67BF12: test    eax, eax
0x67BF14: jz      short loc_67BF48
0x67BF16: cmp     [eax+4], ebx
0x67BF19: jnz     short loc_67BF22
0x67BF1B: mov     dword ptr [eax+4], 0
0x67BF22: mov     ecx, [eax]
0x67BF24: mov     eax, ecx
0x67BF26: test    eax, eax
0x67BF28: jz      short loc_67BF41
0x67BF2A: lea     ebx, [ebx+0]
0x67BF30: mov     edx, [eax]
0x67BF32: test    edx, edx
0x67BF34: jz      short loc_67BF41
0x67BF36: cmp     [edx], ebx
0x67BF38: jz      short loc_67BF4E
0x67BF3A: mov     eax, [eax+4]
0x67BF3D: test    eax, eax
0x67BF3F: jnz     short loc_67BF30
0x67BF41: mov     esi, [esi+4]
0x67BF44: test    esi, esi
0x67BF46: jnz     short loc_67BF10
0x67BF48: pop     ebx
0x67BF49: pop     esi
0x67BF4A: pop     ebp
0x67BF4B: retn    4
0x67BF4E: mov     eax, ecx
0x67BF50: test    eax, eax
0x67BF52: jz      short loc_67BF79
0x67BF54: mov     esi, [eax]
0x67BF56: test    esi, esi
0x67BF58: jz      short loc_67BF79
0x67BF5A: cmp     [esi], ebx
0x67BF5C: jz      short loc_67BF6A
0x67BF5E: mov     eax, [eax+4]
0x67BF61: test    eax, eax
0x67BF63: jnz     short loc_67BF54
0x67BF65: mov     esi, [ebp+0]
0x67BF68: jmp     short loc_67BF44
0x67BF6A: push    esi
0x67BF6B: call    BSSimpleList_Remove
0x67BF70: push    esi
0x67BF71: call    FormHeapFree
0x67BF76: add     esp, 4
0x67BF79: mov     esi, [ebp+0]
0x67BF7C: jmp     short loc_67BF44
