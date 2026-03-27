0x7C59C0: test    [esp+arg_0], 1
0x7C59C5: push    esi
0x7C59C6: mov     esi, ecx
0x7C59C8: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@V?$NiPointer@VShadowSceneLight@@@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiPointer<ShadowSceneLight>>::`vftable'
0x7C59CE: jz      short loc_7C59D9
0x7C59D0: push    esi
0x7C59D1: call    FormHeapFree
0x7C59D6: add     esp, 4
0x7C59D9: mov     eax, esi
0x7C59DB: pop     esi
0x7C59DC: retn    4
