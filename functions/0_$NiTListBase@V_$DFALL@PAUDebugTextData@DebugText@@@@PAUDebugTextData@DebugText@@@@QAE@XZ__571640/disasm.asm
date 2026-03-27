0x571640: test    [esp+arg_0], 1
0x571645: push    esi
0x571646: mov     esi, ecx
0x571648: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$DFALL@PAUDebugTextData@DebugText@@@@PAUDebugTextData@DebugText@@@@6B@; const NiTListBase<DFALL<DebugText::DebugTextData *>,DebugText::DebugTextData *>::`vftable'
0x57164E: jz      short loc_571659
0x571650: push    esi
0x571651: call    FormHeapFree
0x571656: add     esp, 4
0x571659: mov     eax, esi
0x57165B: pop     esi
0x57165C: retn    4
