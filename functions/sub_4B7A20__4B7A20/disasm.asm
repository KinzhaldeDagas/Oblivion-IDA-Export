0x4B7A20: push    esi
0x4B7A21: mov     esi, ecx
0x4B7A23: cmp     dword ptr [esi+6Ch], 0
0x4B7A27: jz      short loc_4B7A47
0x4B7A29: push    edi
0x4B7A2A: lea     ebx, [ebx+0]
0x4B7A30: mov     eax, [esi+6Ch]
0x4B7A33: mov     edi, [eax+4]
0x4B7A36: push    eax
0x4B7A37: call    FormHeapFree
0x4B7A3C: add     esp, 4
0x4B7A3F: test    edi, edi
0x4B7A41: mov     [esi+6Ch], edi
0x4B7A44: jnz     short loc_4B7A30
0x4B7A46: pop     edi
0x4B7A47: mov     dword ptr [esi+68h], 0
0x4B7A4E: mov     ecx, esi
0x4B7A50: pop     esi
0x4B7A51: jmp     j_TESForm_ClearComponentReferences
