0x776370: push    esi
0x776371: mov     esi, ecx
0x776373: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@PAVNiLight@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,NiLight *>::`vftable'
0x776379: call    NiTPointerList__FreeAllNodes
0x77637E: test    [esp+4+arg_0], 1
0x776383: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVNiLight@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiLight *>::`vftable'
0x776389: jz      short loc_776394
0x77638B: push    esi
0x77638C: call    FormHeapFree
0x776391: add     esp, 4
0x776394: mov     eax, esi
0x776396: pop     esi
0x776397: retn    4
