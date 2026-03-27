0x6AA530: push    esi
0x6AA531: mov     esi, ecx
0x6AA533: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@HPAVTESGameSound@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,int,TESGameSound *>::`vftable'
0x6AA539: call    NiTMap_Clear
0x6AA53E: mov     eax, [esi+8]
0x6AA541: push    eax
0x6AA542: call    FormHeapFree
0x6AA547: add     esp, 4
0x6AA54A: test    [esp+4+arg_0], 1
0x6AA54F: jz      short loc_6AA55A
0x6AA551: push    esi
0x6AA552: call    FormHeapFree
0x6AA557: add     esp, 4
0x6AA55A: mov     eax, esi
0x6AA55C: pop     esi
0x6AA55D: retn    4
