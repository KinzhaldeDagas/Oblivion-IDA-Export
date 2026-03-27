0x493B70: push    esi
0x493B71: mov     esi, ecx
0x493B73: mov     eax, [esi+8]
0x493B76: mov     ecx, [eax]
0x493B78: push    ecx
0x493B79: call    FormHeapFree
0x493B7E: mov     edx, [esi+8]
0x493B81: push    edx
0x493B82: call    FormHeapFree
0x493B87: mov     eax, [esi+0Ch]
0x493B8A: push    eax
0x493B8B: call    FormHeapFree
0x493B90: add     esp, 0Ch
0x493B93: pop     esi
0x493B94: retn
