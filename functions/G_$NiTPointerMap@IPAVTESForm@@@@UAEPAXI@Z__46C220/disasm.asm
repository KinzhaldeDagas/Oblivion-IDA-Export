0x46C220: push    esi
0x46C221: mov     esi, ecx
0x46C223: call    ??1?$NiTPointerMap@IPAVTESForm@@@@UAE@XZ; NiTPointerMap<uint,TESForm *>::~NiTPointerMap<uint,TESForm *>(void)
0x46C228: test    [esp+4+arg_0], 1
0x46C22D: jz      short loc_46C238
0x46C22F: push    esi
0x46C230: call    FormHeapFree
0x46C235: add     esp, 4
0x46C238: mov     eax, esi
0x46C23A: pop     esi
0x46C23B: retn    4
