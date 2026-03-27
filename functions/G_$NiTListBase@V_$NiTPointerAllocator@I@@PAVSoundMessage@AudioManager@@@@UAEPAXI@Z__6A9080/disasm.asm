0x6A9080: test    [esp+arg_0], 1
0x6A9085: push    esi
0x6A9086: mov     esi, ecx
0x6A9088: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVSoundMessage@AudioManager@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,AudioManager::SoundMessage *>::`vftable'
0x6A908E: jz      short loc_6A9099
0x6A9090: push    esi
0x6A9091: call    FormHeapFree
0x6A9096: add     esp, 4
0x6A9099: mov     eax, esi
0x6A909B: pop     esi
0x6A909C: retn    4
