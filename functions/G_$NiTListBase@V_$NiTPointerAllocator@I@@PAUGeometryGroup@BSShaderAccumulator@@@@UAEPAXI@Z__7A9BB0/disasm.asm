0x7A9BB0: test    [esp+arg_0], 1
0x7A9BB5: push    esi
0x7A9BB6: mov     esi, ecx
0x7A9BB8: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAUGeometryGroup@BSShaderAccumulator@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,BSShaderAccumulator::GeometryGroup *>::`vftable'
0x7A9BBE: jz      short loc_7A9BC9
0x7A9BC0: push    esi
0x7A9BC1: call    FormHeapFree
0x7A9BC6: add     esp, 4
0x7A9BC9: mov     eax, esi
0x7A9BCB: pop     esi
0x7A9BCC: retn    4
