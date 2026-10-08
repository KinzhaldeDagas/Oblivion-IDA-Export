0x71FB00: push    esi
0x71FB01: mov     esi, ecx
0x71FB03: mov     eax, [esi]
0x71FB05: push    eax
0x71FB06: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x71FB0B: mov     ecx, [esi+10h]; self
0x71FB0E: add     esp, 4
0x71FB11: test    ecx, ecx
0x71FB13: jz      short loc_71FB1C
0x71FB15: push    1; freeThis
0x71FB17: call    NiSharedNormalIndexPoolBlock_Destruct; Destroy one shared-normal index-pool block and its linked successors.
0x71FB1C: test    [esp+4+freeThis], 1
0x71FB21: jz      short loc_71FB2C
0x71FB23: push    esi
0x71FB24: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x71FB29: add     esp, 4
0x71FB2C: mov     eax, esi
0x71FB2E: pop     esi
0x71FB2F: retn    4
