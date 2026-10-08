0x4027A0: push    esi; Destroys every registered small MemoryPool; invoked during FormHeap shutdown.
0x4027A1: push    edi
0x4027A2: xor     esi, esi
0x4027A4: mov     edi, [esi+0B33080h]
0x4027AA: test    edi, edi
0x4027AC: jz      short loc_4027BE
0x4027AE: mov     ecx, edi
0x4027B0: call    MemoryPool_Destroy; Destroys one small allocation pool: releases its 4 KiB pages, removes its registry entry, clears page metadata, frees its table, and deletes its lock.
0x4027B5: push    edi
0x4027B6: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4027BB: add     esp, 4
0x4027BE: add     esi, 4
0x4027C1: cmp     esi, 204h
0x4027C7: jb      short loc_4027A4
0x4027C9: pop     edi
0x4027CA: pop     esi
0x4027CB: retn
