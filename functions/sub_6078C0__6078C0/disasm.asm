0x6078C0: mov     eax, [esp+arg_0]
0x6078C4: test    eax, eax
0x6078C6: jz      short locret_6078D9
0x6078C8: movzx   ecx, byte ptr [eax-1]
0x6078CC: sub     eax, ecx
0x6078CE: push    eax; void *
0x6078CF: mov     ecx, offset FormHeap
0x6078D4: call    MemoryHeap_Free_checked
0x6078D9: retn
