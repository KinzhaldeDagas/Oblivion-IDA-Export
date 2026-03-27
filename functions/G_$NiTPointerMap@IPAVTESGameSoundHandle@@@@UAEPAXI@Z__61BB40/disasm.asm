0x61BB40: push    esi
0x61BB41: mov     esi, ecx
0x61BB43: call    ??1?$NiTPointerMap@IPAVTESGameSoundHandle@@@@UAE@XZ; NiTPointerMap<uint,TESGameSoundHandle *>::~NiTPointerMap<uint,TESGameSoundHandle *>(void)
0x61BB48: test    [esp+4+arg_0], 1
0x61BB4D: jz      short loc_61BB58
0x61BB4F: push    esi
0x61BB50: call    FormHeapFree
0x61BB55: add     esp, 4
0x61BB58: mov     eax, esi
0x61BB5A: pop     esi
0x61BB5B: retn    4
