0x776340: push    esi
0x776341: mov     esi, ecx
0x776343: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVNiLight@@PAVLightEntry@NiDX9LightManager@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,NiLight *,NiDX9LightManager::LightEntry *>::`vftable'
0x776349: call    NiTMap_Clear
0x77634E: mov     eax, [esi+8]
0x776351: push    eax
0x776352: call    FormHeapFree
0x776357: add     esp, 4
0x77635A: test    [esp+4+arg_0], 1
0x77635F: jz      short loc_77636A
0x776361: push    esi
0x776362: call    FormHeapFree
0x776367: add     esp, 4
0x77636A: mov     eax, esi
0x77636C: pop     esi
0x77636D: retn    4
