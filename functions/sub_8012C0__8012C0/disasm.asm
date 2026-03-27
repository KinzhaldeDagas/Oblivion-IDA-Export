0x8012C0: mov     eax, [esp+arg_4]
0x8012C4: push    eax; void *
0x8012C5: mov     ecx, offset FormHeap
0x8012CA: call    MemoryHeap_Free_checked
0x8012CF: xor     eax, eax
0x8012D1: retn    8
