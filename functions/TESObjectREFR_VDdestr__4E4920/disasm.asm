0x4E4920: push    esi
0x4E4921: mov     esi, ecx
0x4E4923: call    TESObjectREFR_destr; Verified reference destruction lifecycle: TESObjectREFR_destr calls TESForm_SetDeleted(this, true) before removing the reference from its cell and destroying its ExtraDataList.
0x4E4928: test    [esp+4+arg_0], 1
0x4E492D: jz      short loc_4E4938
0x4E492F: push    esi
0x4E4930: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4E4935: add     esp, 4
0x4E4938: mov     eax, esi
0x4E493A: pop     esi
0x4E493B: retn    4
