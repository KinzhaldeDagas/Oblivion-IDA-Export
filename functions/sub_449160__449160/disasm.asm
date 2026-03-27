0x449160: push    esi
0x449161: mov     esi, ecx
0x449163: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVTESForm@@_N@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,TESForm *,bool>::`vftable'
0x449169: call    NiTMap_Clear
0x44916E: mov     eax, [esi+8]
0x449171: push    eax
0x449172: call    FormHeapFree
0x449177: add     esp, 4
0x44917A: test    [esp+4+arg_0], 1
0x44917F: jz      short loc_44918A
0x449181: push    esi
0x449182: call    FormHeapFree
0x449187: add     esp, 4
0x44918A: mov     eax, esi
0x44918C: pop     esi
0x44918D: retn    4
