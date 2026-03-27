0x54A430: test    [esp+arg_0], 1
0x54A435: push    esi
0x54A436: mov     esi, ecx
0x54A438: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVBSFaceGenKeyframe@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,BSFaceGenKeyframe *>::`vftable'
0x54A43E: jz      short loc_54A449
0x54A440: push    esi
0x54A441: call    FormHeapFree
0x54A446: add     esp, 4
0x54A449: mov     eax, esi
0x54A44B: pop     esi
0x54A44C: retn    4
