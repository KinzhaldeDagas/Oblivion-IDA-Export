0x67BDD0: push    ebx
0x67BDD1: push    ebp
0x67BDD2: mov     ebp, ecx
0x67BDD4: push    esi
0x67BDD5: mov     esi, [ebp+0]
0x67BDD8: xor     ebx, ebx
0x67BDDA: test    esi, esi
0x67BDDC: jz      loc_67BE7F
0x67BDE2: push    edi
0x67BDE3: cmp     dword ptr [esi+4], 0
0x67BDE7: jnz     short loc_67BDF2
0x67BDE9: cmp     dword ptr [esi], 0
0x67BDEC: jz      loc_67BE7E
0x67BDF2: mov     edi, [esi]
0x67BDF4: mov     eax, [edi]
0x67BDF6: test    eax, eax
0x67BDF8: jz      short loc_67BE1C
0x67BDFA: push    0; int
0x67BDFC: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x67BE01: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x67BE06: push    0; int
0x67BE08: push    eax; a1
0x67BE09: call    TESForm_LookupByFormID
0x67BE0E: add     esp, 4
0x67BE11: push    eax; void *
0x67BE12: call    OblivionDynamicCast
0x67BE17: add     esp, 14h
0x67BE1A: mov     [edi], eax
0x67BE1C: cmp     dword ptr [edi], 0
0x67BE1F: jnz     short loc_67BE71
0x67BE21: test    ebx, ebx
0x67BE23: jnz     short loc_67BE5B
0x67BE25: mov     eax, [esi+4]
0x67BE28: test    eax, eax
0x67BE2A: jz      short loc_67BE4A
0x67BE2C: mov     ecx, [eax+4]
0x67BE2F: mov     [esi+4], ecx
0x67BE32: mov     edx, [eax]
0x67BE34: push    eax
0x67BE35: mov     [esi], edx
0x67BE37: call    FormHeapFree
0x67BE3C: add     esp, 4
0x67BE3F: push    edi
0x67BE40: call    FormHeapFree
0x67BE45: add     esp, 4
0x67BE48: jmp     short loc_67BE76
0x67BE4A: push    edi
0x67BE4B: mov     dword ptr [esi], 0
0x67BE51: call    FormHeapFree
0x67BE56: add     esp, 4
0x67BE59: jmp     short loc_67BE76
0x67BE5B: push    edi
0x67BE5C: mov     ecx, ebx
0x67BE5E: call    BSSimpleList_Remove
0x67BE63: mov     esi, [ebx+4]
0x67BE66: push    edi
0x67BE67: call    FormHeapFree
0x67BE6C: add     esp, 4
0x67BE6F: jmp     short loc_67BE76
0x67BE71: mov     ebx, esi
0x67BE73: mov     esi, [esi+4]
0x67BE76: test    esi, esi
0x67BE78: jnz     loc_67BDE3
0x67BE7E: pop     edi
0x67BE7F: mov     eax, [ebp+4]
0x67BE82: test    eax, eax
0x67BE84: jz      short loc_67BEA9
0x67BE86: push    0; int
0x67BE88: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x67BE8D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x67BE92: push    0; int
0x67BE94: push    eax; a1
0x67BE95: call    TESForm_LookupByFormID
0x67BE9A: add     esp, 4
0x67BE9D: push    eax; void *
0x67BE9E: call    OblivionDynamicCast
0x67BEA3: add     esp, 14h
0x67BEA6: mov     [ebp+4], eax
0x67BEA9: mov     ecx, [ebp+8]
0x67BEAC: mov     eax, [ecx]
0x67BEAE: mov     edx, [eax+0E8h]
0x67BEB4: pop     esi
0x67BEB5: pop     ebp
0x67BEB6: pop     ebx
0x67BEB7: jmp     edx
