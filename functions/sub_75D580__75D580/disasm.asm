0x75D580: push    esi
0x75D581: mov     esi, ecx
0x75D583: mov     eax, [esi+4]
0x75D586: push    eax
0x75D587: mov     dword ptr [esi], offset ??_7?$NiTArray@PAV?$NiTArray@V?$NiPointer@VNiAVObject@@@@@@@@6B@; const NiTArray<NiTArray<NiPointer<NiAVObject>> *>::`vftable'
0x75D58D: call    FormHeapFree
0x75D592: add     esp, 4
0x75D595: test    [esp+4+arg_0], 1
0x75D59A: jz      short loc_75D5A5
0x75D59C: push    esi
0x75D59D: call    FormHeapFree
0x75D5A2: add     esp, 4
0x75D5A5: mov     eax, esi
0x75D5A7: pop     esi
0x75D5A8: retn    4
