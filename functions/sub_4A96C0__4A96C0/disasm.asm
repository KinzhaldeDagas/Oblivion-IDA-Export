0x4A96C0: push    esi
0x4A96C1: mov     esi, ecx
0x4A96C3: mov     eax, [esi+94h]
0x4A96C9: test    eax, eax
0x4A96CB: jz      short loc_4A96E0
0x4A96CD: push    eax
0x4A96CE: call    FormHeapFree
0x4A96D3: add     esp, 4
0x4A96D6: mov     dword ptr [esi+94h], 0
0x4A96E0: mov     ecx, esi
0x4A96E2: pop     esi
0x4A96E3: jmp     j_TESForm_ClearComponentReferences
