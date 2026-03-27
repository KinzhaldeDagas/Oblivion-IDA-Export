0x71E440: test    [esp+arg_0], 1
0x71E445: push    esi
0x71E446: mov     esi, ecx
0x71E448: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVNiImageReader@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiImageReader *>::`vftable'
0x71E44E: jz      short loc_71E459
0x71E450: push    esi
0x71E451: call    FormHeapFree
0x71E456: add     esp, 4
0x71E459: mov     eax, esi
0x71E45B: pop     esi
0x71E45C: retn    4
