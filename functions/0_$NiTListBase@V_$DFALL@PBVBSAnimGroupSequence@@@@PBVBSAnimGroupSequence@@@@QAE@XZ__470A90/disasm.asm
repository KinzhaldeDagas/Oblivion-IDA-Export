0x470A90: test    [esp+arg_0], 1
0x470A95: push    esi
0x470A96: mov     esi, ecx
0x470A98: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$DFALL@PBVBSAnimGroupSequence@@@@PBVBSAnimGroupSequence@@@@6B@; const NiTListBase<DFALL<BSAnimGroupSequence const *>,BSAnimGroupSequence const *>::`vftable'
0x470A9E: jz      short loc_470AA9
0x470AA0: push    esi
0x470AA1: call    FormHeapFree
0x470AA6: add     esp, 4
0x470AA9: mov     eax, esi
0x470AAB: pop     esi
0x470AAC: retn    4
