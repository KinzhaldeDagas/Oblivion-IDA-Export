0x64FFF0: push    ebx
0x64FFF1: mov     ebx, [esp+4+arg_0]
0x64FFF5: push    esi
0x64FFF6: push    edi
0x64FFF7: mov     edi, ecx
0x64FFF9: mov     esi, [edi+17Ch]
0x64FFFF: test    esi, esi
0x650001: jz      short loc_650017
0x650003: cmp     esi, ebx
0x650005: jz      short loc_65001D
0x650007: mov     ecx, esi; this
0x650009: call    DisposeActorAnimData; Destroys ActorAnimData-owned state. Releases current/queued/cleanup idles; deactivates and releases the controller manager; deleting-destructs every +0x9C animation-map entry; frees the +0xB8 pending-KF linked list; clears/destroys the map; and nulls the accumulation node. Confirms map entries and pending-KF nodes are ActorAnimData-owned.
0x65000E: push    esi
0x65000F: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x650014: add     esp, 4
0x650017: mov     [edi+17Ch], ebx
0x65001D: pop     edi
0x65001E: pop     esi
0x65001F: pop     ebx
0x650020: retn    4
