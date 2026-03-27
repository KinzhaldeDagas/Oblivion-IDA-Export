0x67FC10: push    0FFFFFFFFh
0x67FC12: push    offset ??1?$NiTPointerMap@PAVTESForm@@PAV?$BSSimpleList@PAVAStarWorldNode@@@@@@UAE@XZ_SEH
0x67FC17: mov     eax, large fs:0
0x67FC1D: push    eax
0x67FC1E: push    ecx
0x67FC1F: push    esi
0x67FC20: mov     eax, ds:0B30AACh
0x67FC25: xor     eax, esp
0x67FC27: push    eax
0x67FC28: lea     eax, [esp+18h+var_C]
0x67FC2C: mov     large fs:0, eax
0x67FC32: mov     esi, ecx
0x67FC34: mov     [esp+18h+var_10], esi
0x67FC38: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@PAVTESForm@@PAV?$BSSimpleList@PAVAStarWorldNode@@@@@@6B@; const NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *>::`vftable'
0x67FC3E: mov     [esp+18h+var_4], 0
0x67FC46: call    NiTMap_Clear
0x67FC4B: mov     ecx, esi
0x67FC4D: mov     [esp+18h+var_4], 0FFFFFFFFh
0x67FC55: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVTESForm@@PAV?$BSSimpleList@PAVAStarWorldNode@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,TESForm *,BSSimpleList<AStarWorldNode *> *>::`vftable'
0x67FC5B: call    NiTMap_Clear
0x67FC60: mov     eax, [esi+8]
0x67FC63: push    eax
0x67FC64: call    FormHeapFree
0x67FC69: add     esp, 4
0x67FC6C: mov     ecx, [esp+18h+var_C]
0x67FC70: mov     large fs:0, ecx
0x67FC77: pop     ecx
0x67FC78: pop     esi
0x67FC79: add     esp, 10h
0x67FC7C: retn
