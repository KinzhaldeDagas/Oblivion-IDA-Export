0x76D7D0: test    [esp+arg_0], 1
0x76D7D5: push    esi
0x76D7D6: mov     esi, ecx
0x76D7D8: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVNiDX9AdditionalDepthStencilBufferData@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiDX9AdditionalDepthStencilBufferData *>::`vftable'
0x76D7DE: jz      short loc_76D7E9
0x76D7E0: push    esi
0x76D7E1: call    FormHeapFree
0x76D7E6: add     esp, 4
0x76D7E9: mov     eax, esi
0x76D7EB: pop     esi
0x76D7EC: retn    4
