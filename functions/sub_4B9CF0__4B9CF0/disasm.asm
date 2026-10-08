0x4B9CF0: push    esi; Verified: frees the context's copied NiPoint3 array at +0x14 and float array at +0x18; called by QueuedTreeBillboard destructor before QueuedTexture base cleanup.
0x4B9CF1: mov     esi, ecx
0x4B9CF3: mov     eax, [esi+14h]
0x4B9CF6: push    eax
0x4B9CF7: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4B9CFC: mov     ecx, [esi+18h]
0x4B9CFF: push    ecx
0x4B9D00: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4B9D05: add     esp, 8
0x4B9D08: pop     esi
0x4B9D09: retn
