0x64AED0: push    esi; Authoritative MiddleHighProcess equipped-AMMO setter (vtable +0x10C). Destroys/frees the prior copied EntryData, stores the replacement pointer (NULL on final-shot depletion), and returns true. It does not clear ActorAnimData ammo-slot 3D and does not spawn/detach a projectile.
0x64AED1: push    edi
0x64AED2: mov     edi, ecx
0x64AED4: mov     esi, [edi+0ECh]
0x64AEDA: test    esi, esi
0x64AEDC: jz      short loc_64AEFF
0x64AEDE: mov     ecx, esi
0x64AEE0: call    ContainerEntryExtraData_DestroyDataTable
0x64AEE5: push    esi
0x64AEE6: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x64AEEB: mov     eax, [esp+0Ch+arg_0]
0x64AEEF: add     esp, 4
0x64AEF2: mov     [edi+0ECh], eax
0x64AEF8: pop     edi
0x64AEF9: mov     al, 1
0x64AEFB: pop     esi
0x64AEFC: retn    4
0x64AEFF: mov     ecx, [esp+8+arg_0]
0x64AF03: mov     [edi+0ECh], ecx
0x64AF09: pop     edi
0x64AF0A: mov     al, 1
0x64AF0C: pop     esi
0x64AF0D: retn    4
