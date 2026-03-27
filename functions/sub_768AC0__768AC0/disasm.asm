0x768AC0: push    esi
0x768AC1: mov     esi, ecx
0x768AC3: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVNiVBBlock@@PAVPrePackObject@NiDX9Renderer@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,NiVBBlock *,NiDX9Renderer::PrePackObject *>::`vftable'
0x768AC9: call    NiTMap_Clear
0x768ACE: mov     eax, [esi+8]
0x768AD1: push    eax
0x768AD2: call    FormHeapFree
0x768AD7: add     esp, 4
0x768ADA: test    [esp+4+arg_0], 1
0x768ADF: jz      short loc_768AEA
0x768AE1: push    esi
0x768AE2: call    FormHeapFree
0x768AE7: add     esp, 4
0x768AEA: mov     eax, esi
0x768AEC: pop     esi
0x768AED: retn    4
