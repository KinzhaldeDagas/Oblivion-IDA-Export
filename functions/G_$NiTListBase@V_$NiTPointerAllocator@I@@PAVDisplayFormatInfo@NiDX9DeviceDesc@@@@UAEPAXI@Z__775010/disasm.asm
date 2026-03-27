0x775010: test    [esp+arg_0], 1
0x775015: push    esi
0x775016: mov     esi, ecx
0x775018: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVDisplayFormatInfo@NiDX9DeviceDesc@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiDX9DeviceDesc::DisplayFormatInfo *>::`vftable'
0x77501E: jz      short loc_775029
0x775020: push    esi
0x775021: call    FormHeapFree
0x775026: add     esp, 4
0x775029: mov     eax, esi
0x77502B: pop     esi
0x77502C: retn    4
