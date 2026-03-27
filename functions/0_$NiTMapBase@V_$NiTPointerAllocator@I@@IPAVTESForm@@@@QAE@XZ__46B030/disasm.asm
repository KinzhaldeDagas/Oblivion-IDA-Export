0x46B030: push    esi
0x46B031: mov     esi, ecx
0x46B033: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAVTESForm@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,TESForm *>::`vftable'
0x46B039: call    NiTMap_Clear
0x46B03E: mov     eax, [esi+8]
0x46B041: push    eax
0x46B042: call    FormHeapFree
0x46B047: add     esp, 4
0x46B04A: test    [esp+4+arg_0], 1
0x46B04F: jz      short loc_46B05A
0x46B051: push    esi
0x46B052: call    FormHeapFree
0x46B057: add     esp, 4
0x46B05A: mov     eax, esi
0x46B05C: pop     esi
0x46B05D: retn    4
