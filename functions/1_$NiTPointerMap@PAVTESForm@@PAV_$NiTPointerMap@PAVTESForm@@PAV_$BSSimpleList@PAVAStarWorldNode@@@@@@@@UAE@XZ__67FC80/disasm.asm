0x67FC80: push    0FFFFFFFFh
0x67FC82: push    offset ??1?$NiTPointerMap@PAVTESForm@@PAV?$NiTPointerMap@PAVTESForm@@PAV?$BSSimpleList@PAVAStarWorldNode@@@@@@@@UAE@XZ_SEH
0x67FC87: mov     eax, large fs:0
0x67FC8D: push    eax
0x67FC8E: push    ecx
0x67FC8F: push    esi
0x67FC90: mov     eax, ds:0B30AACh
0x67FC95: xor     eax, esp
0x67FC97: push    eax
0x67FC98: lea     eax, [esp+18h+var_C]
0x67FC9C: mov     large fs:0, eax
0x67FCA2: mov     esi, ecx
0x67FCA4: mov     [esp+18h+var_10], esi
0x67FCA8: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@PAVTESForm@@PAV?$NiTPointerMap@PAVTESForm@@PAV?$BSSimpleList@PAVAStarWorldNode@@@@@@@@6B@; const NiTPointerMap<TESForm *,NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *> *>::`vftable'
0x67FCAE: mov     [esp+18h+var_4], 0
0x67FCB6: call    NiTMap_Clear
0x67FCBB: mov     ecx, esi
0x67FCBD: mov     [esp+18h+var_4], 0FFFFFFFFh
0x67FCC5: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVTESForm@@PAV?$NiTPointerMap@PAVTESForm@@PAV?$BSSimpleList@PAVAStarWorldNode@@@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,TESForm *,NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *> *>::`vftable'
0x67FCCB: call    NiTMap_Clear
0x67FCD0: mov     eax, [esi+8]
0x67FCD3: push    eax
0x67FCD4: call    FormHeapFree
0x67FCD9: add     esp, 4
0x67FCDC: mov     ecx, [esp+18h+var_C]
0x67FCE0: mov     large fs:0, ecx
0x67FCE7: pop     ecx
0x67FCE8: pop     esi
0x67FCE9: add     esp, 10h
0x67FCEC: retn
