0x980BFC: push    esi
0x980BFD: mov     esi, ecx
0x980BFF: push    dword ptr [esi]; lpCriticalSection
0x980C01: call    sub_980D64
0x980C06: push    dword ptr [esi]
0x980C08: call    FormHeapFree
0x980C0D: pop     ecx
0x980C0E: pop     ecx
0x980C0F: pop     esi
0x980C10: retn
