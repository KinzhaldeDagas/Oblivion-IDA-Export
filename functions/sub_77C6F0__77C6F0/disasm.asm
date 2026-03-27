0x77C6F0: push    esi
0x77C6F1: mov     esi, ecx
0x77C6F3: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDPAVNiShader@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,NiShader *>::`vftable'
0x77C6F9: call    NiTMap_Clear
0x77C6FE: mov     eax, [esi+8]
0x77C701: push    eax
0x77C702: call    FormHeapFree
0x77C707: add     esp, 4
0x77C70A: test    [esp+4+arg_0], 1
0x77C70F: jz      short loc_77C71A
0x77C711: push    esi
0x77C712: call    FormHeapFree
0x77C717: add     esp, 4
0x77C71A: mov     eax, esi
0x77C71C: pop     esi
0x77C71D: retn    4
