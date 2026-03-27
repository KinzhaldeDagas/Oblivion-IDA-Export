0x614EA0: push    esi
0x614EA1: mov     esi, ecx
0x614EA3: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAVTESGameSoundHandle@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,TESGameSoundHandle *>::`vftable'
0x614EA9: call    NiTMap_Clear
0x614EAE: mov     eax, [esi+8]
0x614EB1: push    eax
0x614EB2: call    FormHeapFree
0x614EB7: add     esp, 4
0x614EBA: test    [esp+4+arg_0], 1
0x614EBF: jz      short loc_614ECA
0x614EC1: push    esi
0x614EC2: call    FormHeapFree
0x614EC7: add     esp, 4
0x614ECA: mov     eax, esi
0x614ECC: pop     esi
0x614ECD: retn    4
