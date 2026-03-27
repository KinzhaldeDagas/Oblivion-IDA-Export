0x4E4920: push    esi
0x4E4921: mov     esi, ecx
0x4E4923: call    TESObjectREFR_destr
0x4E4928: test    [esp+4+arg_0], 1
0x4E492D: jz      short loc_4E4938
0x4E492F: push    esi
0x4E4930: call    FormHeapFree
0x4E4935: add     esp, 4
0x4E4938: mov     eax, esi
0x4E493A: pop     esi
0x4E493B: retn    4
