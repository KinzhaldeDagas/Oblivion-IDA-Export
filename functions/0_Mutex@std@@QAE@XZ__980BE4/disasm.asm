0x980BE4: push    esi
0x980BE5: push    18h; Size
0x980BE7: mov     esi, ecx
0x980BE9: call    FormHeapAlloc
0x980BEE: push    eax; lpCriticalSection
0x980BEF: mov     [esi], eax
0x980BF1: call    unknown_libname_7
0x980BF6: pop     ecx
0x980BF7: pop     ecx
0x980BF8: mov     eax, esi
0x980BFA: pop     esi
0x980BFB: retn
