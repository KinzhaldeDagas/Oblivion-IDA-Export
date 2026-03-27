0x4E2900: push    esi
0x4E2901: mov     esi, ecx
0x4E2903: call    ??1?$NiTPointerMap@PAVTESObjectREFR@@_N@@UAE@XZ; NiTPointerMap<TESObjectREFR *,bool>::~NiTPointerMap<TESObjectREFR *,bool>(void)
0x4E2908: test    [esp+4+arg_0], 1
0x4E290D: jz      short loc_4E2918
0x4E290F: push    esi
0x4E2910: call    FormHeapFree
0x4E2915: add     esp, 4
0x4E2918: mov     eax, esi
0x4E291A: pop     esi
0x4E291B: retn    4
