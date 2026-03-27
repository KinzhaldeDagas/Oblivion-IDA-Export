0x4D55E0: push    esi
0x4D55E1: mov     esi, ecx
0x4D55E3: call    TESObjectCELL_destr
0x4D55E8: test    [esp+4+arg_0], 1
0x4D55ED: jz      short loc_4D55F8
0x4D55EF: push    esi
0x4D55F0: call    FormHeapFree
0x4D55F5: add     esp, 4
0x4D55F8: mov     eax, esi
0x4D55FA: pop     esi
0x4D55FB: retn    4
