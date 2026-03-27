0x52F450: push    esi
0x52F451: mov     esi, ecx
0x52F453: mov     eax, [esi+4]
0x52F456: push    eax
0x52F457: mov     dword ptr [esi], offset ??_7?$NiTLargeArray@PAVTESTopicInfo@@@@6B@; const NiTLargeArray<TESTopicInfo *>::`vftable'
0x52F45D: call    FormHeapFree
0x52F462: add     esp, 4
0x52F465: test    [esp+4+arg_0], 1
0x52F46A: jz      short loc_52F475
0x52F46C: push    esi
0x52F46D: call    FormHeapFree
0x52F472: add     esp, 4
0x52F475: mov     eax, esi
0x52F477: pop     esi
0x52F478: retn    4
