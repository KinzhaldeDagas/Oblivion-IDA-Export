0x7A9BD0: test    [esp+arg_0], 1
0x7A9BD5: push    esi
0x7A9BD6: mov     esi, ecx
0x7A9BD8: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAUImmediateGeometryGroup@BSShaderAccumulator@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,BSShaderAccumulator::ImmediateGeometryGroup *>::`vftable'
0x7A9BDE: jz      short loc_7A9BE9
0x7A9BE0: push    esi
0x7A9BE1: call    FormHeapFree
0x7A9BE6: add     esp, 4
0x7A9BE9: mov     eax, esi
0x7A9BEB: pop     esi
0x7A9BEC: retn    4
