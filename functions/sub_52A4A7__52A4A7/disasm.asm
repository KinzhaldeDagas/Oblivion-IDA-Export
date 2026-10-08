0x52A4A7: mov     eax, [edi]
0x52A4A9: cmp     eax, ebx
0x52A4AB: jz      short loc_52A4B2
0x52A4AD: mov     esi, [eax+64h]
0x52A4B0: jmp     short loc_52A4B4
0x52A4B2: xor     esi, esi
0x52A4B4: cmp     esi, ebx
0x52A4B6: jz      short sub_52A4CB
0x52A4B8: mov     ecx, esi; this
0x52A4BA: mov     [eax+64h], ebx
0x52A4BD: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x52A4C2: push    esi
0x52A4C3: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x52A4C8: add     esp, 4
