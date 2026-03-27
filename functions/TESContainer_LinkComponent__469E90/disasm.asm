0x469E90: push    ebx
0x469E91: mov     ebx, ecx
0x469E93: test    byte ptr [ebx+4], 1
0x469E97: jnz     loc_469F28
0x469E9D: push    ebp
0x469E9E: push    esi
0x469E9F: lea     esi, [ebx+8]
0x469EA2: xor     ebp, ebp
0x469EA4: test    esi, esi
0x469EA6: jz      short loc_469F22
0x469EA8: push    edi
0x469EA9: lea     esp, [esp+0]
0x469EB0: mov     edi, [esi]
0x469EB2: test    edi, edi
0x469EB4: jz      short loc_469F1A
0x469EB6: mov     eax, [esp+10h+arg_0]
0x469EBA: push    eax
0x469EBB: mov     ecx, edi
0x469EBD: call    TESContainer_ItemEntry_Link
0x469EC2: cmp     dword ptr [edi+4], 0
0x469EC6: jnz     short loc_469F18
0x469EC8: test    ebp, ebp
0x469ECA: jz      short loc_469EE2
0x469ECC: push    edi
0x469ECD: mov     ecx, ebp
0x469ECF: call    BSSimpleList_Remove
0x469ED4: mov     esi, [ebp+4]
0x469ED7: push    edi
0x469ED8: call    FormHeapFree
0x469EDD: add     esp, 4
0x469EE0: jmp     short loc_469F1D
0x469EE2: mov     eax, [esi+4]
0x469EE5: test    eax, eax
0x469EE7: jz      short loc_469F07
0x469EE9: mov     ecx, [eax+4]
0x469EEC: mov     [esi+4], ecx
0x469EEF: mov     edx, [eax]
0x469EF1: push    eax
0x469EF2: mov     [esi], edx
0x469EF4: call    FormHeapFree
0x469EF9: add     esp, 4
0x469EFC: push    edi
0x469EFD: call    FormHeapFree
0x469F02: add     esp, 4
0x469F05: jmp     short loc_469F1D
0x469F07: push    edi
0x469F08: mov     dword ptr [esi], 0
0x469F0E: call    FormHeapFree
0x469F13: add     esp, 4
0x469F16: jmp     short loc_469F1D
0x469F18: mov     ebp, esi
0x469F1A: mov     esi, [esi+4]
0x469F1D: test    esi, esi
0x469F1F: jnz     short loc_469EB0
0x469F21: pop     edi
0x469F22: or      byte ptr [ebx+4], 1
0x469F26: pop     esi
0x469F27: pop     ebp
0x469F28: pop     ebx
0x469F29: retn    4
