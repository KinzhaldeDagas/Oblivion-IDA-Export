0x4B9CF0: push    esi
0x4B9CF1: mov     esi, ecx
0x4B9CF3: mov     eax, [esi+14h]
0x4B9CF6: push    eax
0x4B9CF7: call    FormHeapFree
0x4B9CFC: mov     ecx, [esi+18h]
0x4B9CFF: push    ecx
0x4B9D00: call    FormHeapFree
0x4B9D05: add     esp, 8
0x4B9D08: pop     esi
0x4B9D09: retn
