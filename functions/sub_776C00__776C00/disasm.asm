0x776C00: push    esi
0x776C01: mov     esi, ecx
0x776C03: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@PAVNiLight@@PAVLightEntry@NiDX9LightManager@@@@6B@; const NiTPointerMap<NiLight *,NiDX9LightManager::LightEntry *>::`vftable'
0x776C09: call    NiTMap_Clear
0x776C0E: mov     ecx, esi
0x776C10: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVNiLight@@PAVLightEntry@NiDX9LightManager@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,NiLight *,NiDX9LightManager::LightEntry *>::`vftable'
0x776C16: call    NiTMap_Clear
0x776C1B: mov     eax, [esi+8]
0x776C1E: push    eax
0x776C1F: call    FormHeapFree
0x776C24: add     esp, 4
0x776C27: test    [esp+4+arg_0], 1
0x776C2C: jz      short loc_776C37
0x776C2E: push    esi
0x776C2F: call    FormHeapFree
0x776C34: add     esp, 4
0x776C37: mov     eax, esi
0x776C39: pop     esi
0x776C3A: retn    4
