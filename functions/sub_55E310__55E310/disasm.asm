0x55E310: push    esi
0x55E311: mov     esi, ecx
0x55E313: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVTESObjectTREE@@PAV?$NiPointer@VBSTreeModel@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,TESObjectTREE *,NiPointer<BSTreeModel> *>::`vftable'
0x55E319: call    NiTMap_Clear
0x55E31E: mov     eax, [esi+8]
0x55E321: push    eax
0x55E322: call    FormHeapFree
0x55E327: add     esp, 4
0x55E32A: test    [esp+4+arg_0], 1
0x55E32F: jz      short loc_55E33A
0x55E331: push    esi
0x55E332: call    FormHeapFree
0x55E337: add     esp, 4
0x55E33A: mov     eax, esi
0x55E33C: pop     esi
0x55E33D: retn    4
