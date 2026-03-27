0x7AA6E0: push    0FFFFFFFFh
0x7AA6E2: push    offset ??1?$NiTPointerList@PAUGeometryGroup@BSShaderAccumulator@@@@UAE@XZ_SEH
0x7AA6E7: mov     eax, large fs:0
0x7AA6ED: push    eax
0x7AA6EE: push    ecx
0x7AA6EF: push    esi
0x7AA6F0: mov     eax, ds:0B30AACh
0x7AA6F5: xor     eax, esp
0x7AA6F7: push    eax
0x7AA6F8: lea     eax, [esp+18h+var_C]
0x7AA6FC: mov     large fs:0, eax
0x7AA702: mov     esi, ecx
0x7AA704: mov     [esp+18h+var_10], esi
0x7AA708: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@PAUGeometryGroup@BSShaderAccumulator@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,BSShaderAccumulator::GeometryGroup *>::`vftable'
0x7AA70E: mov     [esp+18h+var_4], 0
0x7AA716: call    NiTPointerList__FreeAllNodes
0x7AA71B: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAUGeometryGroup@BSShaderAccumulator@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,BSShaderAccumulator::GeometryGroup *>::`vftable'
0x7AA721: mov     ecx, [esp+18h+var_C]
0x7AA725: mov     large fs:0, ecx
0x7AA72C: pop     ecx
0x7AA72D: pop     esi
0x7AA72E: add     esp, 10h
0x7AA731: retn
