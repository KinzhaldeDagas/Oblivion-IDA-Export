0x478010: push    esi
0x478011: mov     esi, ecx
0x478013: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVNiObject@@PAV2@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,NiObject *,NiObject *>::`vftable'
0x478019: call    NiTMap_Clear
0x47801E: mov     eax, [esi+8]
0x478021: push    eax
0x478022: call    FormHeapFree
0x478027: add     esp, 4
0x47802A: test    [esp+4+arg_0], 1
0x47802F: jz      short loc_47803A
0x478031: push    esi
0x478032: call    FormHeapFree
0x478037: add     esp, 4
0x47803A: mov     eax, esi
0x47803C: pop     esi
0x47803D: retn    4
