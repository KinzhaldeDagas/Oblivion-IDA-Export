0x77CE20: push    esi
0x77CE21: mov     esi, ecx
0x77CE23: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@PBDPAVNiShader@@@@6B@; const NiTPointerMap<char const *,NiShader *>::`vftable'
0x77CE29: call    NiTMap_Clear
0x77CE2E: mov     ecx, esi
0x77CE30: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDPAVNiShader@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,NiShader *>::`vftable'
0x77CE36: call    NiTMap_Clear
0x77CE3B: mov     eax, [esi+8]
0x77CE3E: push    eax
0x77CE3F: call    FormHeapFree
0x77CE44: add     esp, 4
0x77CE47: test    [esp+4+arg_0], 1
0x77CE4C: jz      short loc_77CE57
0x77CE4E: push    esi
0x77CE4F: call    FormHeapFree
0x77CE54: add     esp, 4
0x77CE57: mov     eax, esi
0x77CE59: pop     esi
0x77CE5A: retn    4
