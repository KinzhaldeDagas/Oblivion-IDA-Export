0x7C1340: test    [esp+arg_0], 1
0x7C1345: push    esi
0x7C1346: mov     esi, ecx
0x7C1348: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@V?$NiPointer@VBSRenderedTexture@@@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiPointer<BSRenderedTexture>>::`vftable'
0x7C134E: jz      short loc_7C1359
0x7C1350: push    esi
0x7C1351: call    FormHeapFree
0x7C1356: add     esp, 4
0x7C1359: mov     eax, esi
0x7C135B: pop     esi
0x7C135C: retn    4
