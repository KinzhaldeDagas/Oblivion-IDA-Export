0x452B60: push    esi
0x452B61: mov     esi, ecx
0x452B63: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAVChangeData@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,ChangeData *>::`vftable'
0x452B69: call    NiTMap_Clear
0x452B6E: mov     eax, [esi+8]
0x452B71: push    eax
0x452B72: call    FormHeapFree
0x452B77: add     esp, 4
0x452B7A: test    [esp+4+arg_0], 1
0x452B7F: jz      short loc_452B8A
0x452B81: push    esi
0x452B82: call    FormHeapFree
0x452B87: add     esp, 4
0x452B8A: mov     eax, esi
0x452B8C: pop     esi
0x452B8D: retn    4
