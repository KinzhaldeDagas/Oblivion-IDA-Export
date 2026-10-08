0x6C0FE0: mov     eax, [esp+arg_0]
0x6C0FE4: test    eax, eax
0x6C0FE6: jz      short locret_6C1007
0x6C0FE8: mov     ecx, [eax-4]
0x6C0FEB: push    esi
0x6C0FEC: lea     esi, [eax-4]
0x6C0FEF: push    offset Shared_NoOpVirtual_60D0A0; void (__thiscall *)(void *)
0x6C0FF4: push    ecx; int
0x6C0FF5: push    40h ; '@'; unsigned int
0x6C0FF7: push    eax; void *
0x6C0FF8: call    $LN21
0x6C0FFD: push    esi
0x6C0FFE: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6C1003: add     esp, 4
0x6C1006: pop     esi
0x6C1007: retn
