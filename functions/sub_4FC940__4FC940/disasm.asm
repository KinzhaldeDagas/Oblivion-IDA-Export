0x4FC940: push    esi; Script full-load clear: frees current data/text, clears appended variable/reference lists, and clears component references. Called before Script_InitializeDataAndComponents only for existing non-partial replacement records.
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
0x4FC961: call    Script_ClearVariableList; Hot Reload OBSE decode: script variable-list cleanup. Frees each VariableInfo name buffer and payload, removes extra list nodes, leaves script->varList empty.
0x4FC966: mov     ecx, esi
0x4FC968: call    Script_ClearReferenceList; Hot Reload OBSE decode: script ref-list cleanup. Clears executing-script cache if needed, frees each RefVariable name buffer and payload, removes extra list nodes.
0x4FC96D: mov     ecx, esi
0x4FC96F: pop     esi
0x4FC970: jmp     j_TESForm_ClearComponentReferences
