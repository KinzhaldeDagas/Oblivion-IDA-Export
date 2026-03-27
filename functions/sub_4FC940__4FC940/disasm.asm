0x4FC940: push    esi
0x4FC941: mov     esi, ecx
0x4FC943: mov     eax, [esi+30h]
0x4FC946: push    eax; void *
0x4FC947: mov     ecx, offset FormHeap
0x4FC94C: call    MemoryHeap_Free_checked
0x4FC951: mov     ecx, [esi+2Ch]
0x4FC954: push    ecx; void *
0x4FC955: mov     ecx, offset FormHeap
0x4FC95A: call    MemoryHeap_Free_checked
0x4FC95F: mov     ecx, esi
0x4FC961: call    sub_4FC6C0
0x4FC966: mov     ecx, esi
0x4FC968: call    sub_4FC730
0x4FC96D: mov     ecx, esi
0x4FC96F: pop     esi
0x4FC970: jmp     j_TESForm_ClearComponentReferences
