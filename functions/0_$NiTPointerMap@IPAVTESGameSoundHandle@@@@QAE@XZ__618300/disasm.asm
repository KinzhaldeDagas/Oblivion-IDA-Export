0x618300: mov     eax, [esp+arg_0]
0x618304: push    esi
0x618305: mov     esi, ecx
0x618307: xor     ecx, ecx
0x618309: mov     [esi+4], eax
0x61830C: mov     edx, 4
0x618311: mul     edx
0x618313: seto    cl
0x618316: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAVTESGameSoundHandle@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,TESGameSoundHandle *>::`vftable'
0x61831C: mov     dword ptr [esi+0Ch], 0
0x618323: neg     ecx
0x618325: or      ecx, eax
0x618327: push    ecx; Size
0x618328: call    FormHeapAlloc
0x61832D: mov     ecx, [esi+4]
0x618330: add     ecx, ecx
0x618332: add     ecx, ecx
0x618334: push    ecx
0x618335: push    0
0x618337: push    eax
0x618338: mov     [esi+8], eax
0x61833B: call    __memset
0x618340: add     esp, 10h
0x618343: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@IPAVTESGameSoundHandle@@@@6B@; const NiTPointerMap<uint,TESGameSoundHandle *>::`vftable'
0x618349: mov     eax, esi
0x61834B: pop     esi
0x61834C: retn    4
