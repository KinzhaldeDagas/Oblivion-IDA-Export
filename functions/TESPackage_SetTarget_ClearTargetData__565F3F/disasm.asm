0x565F3F: mov     edi, [esi+28h]
0x565F42: test    edi, edi
0x565F44: jz      short loc_565F56
0x565F46: mov     ecx, edi; this
0x565F48: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x565F4D: push    edi
0x565F4E: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x565F53: add     esp, 4
0x565F56: mov     dword ptr [esi+28h], 0
0x565F5D: mov     ecx, [esp+arg_8]
0x565F61: mov     large fs:0, ecx
0x565F68: pop     ecx
0x565F69: pop     edi
0x565F6A: pop     esi
0x565F6B: add     esp, 0Ch
0x565F6E: retn    4
