0x7753C0: push    esi
0x7753C1: mov     esi, ecx
0x7753C3: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@PAVDisplayFormatInfo@NiDX9DeviceDesc@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,NiDX9DeviceDesc::DisplayFormatInfo *>::`vftable'
0x7753C9: call    NiTPointerList__FreeAllNodes
0x7753CE: test    [esp+4+arg_0], 1
0x7753D3: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVDisplayFormatInfo@NiDX9DeviceDesc@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiDX9DeviceDesc::DisplayFormatInfo *>::`vftable'
0x7753D9: jz      short loc_7753E4
0x7753DB: push    esi
0x7753DC: call    FormHeapFree
0x7753E1: add     esp, 4
0x7753E4: mov     eax, esi
0x7753E6: pop     esi
0x7753E7: retn    4
