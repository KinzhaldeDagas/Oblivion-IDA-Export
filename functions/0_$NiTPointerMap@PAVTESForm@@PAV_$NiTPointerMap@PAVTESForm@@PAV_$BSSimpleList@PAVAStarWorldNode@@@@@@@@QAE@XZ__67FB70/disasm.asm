0x67FB70: mov     eax, [esp+arg_0]
0x67FB74: push    esi
0x67FB75: mov     esi, ecx
0x67FB77: xor     ecx, ecx
0x67FB79: mov     [esi+4], eax
0x67FB7C: mov     edx, 4
0x67FB81: mul     edx
0x67FB83: seto    cl
0x67FB86: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVTESForm@@PAV?$NiTPointerMap@PAVTESForm@@PAV?$BSSimpleList@PAVAStarWorldNode@@@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,TESForm *,NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *> *>::`vftable'
0x67FB8C: mov     dword ptr [esi+0Ch], 0
0x67FB93: neg     ecx
0x67FB95: or      ecx, eax
0x67FB97: push    ecx; Size
0x67FB98: call    FormHeapAlloc
0x67FB9D: mov     ecx, [esi+4]
0x67FBA0: add     ecx, ecx
0x67FBA2: add     ecx, ecx
0x67FBA4: push    ecx
0x67FBA5: push    0
0x67FBA7: push    eax
0x67FBA8: mov     [esi+8], eax
0x67FBAB: call    __memset
0x67FBB0: add     esp, 10h
0x67FBB3: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@PAVTESForm@@PAV?$NiTPointerMap@PAVTESForm@@PAV?$BSSimpleList@PAVAStarWorldNode@@@@@@@@6B@; const NiTPointerMap<TESForm *,NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *> *>::`vftable'
0x67FBB9: mov     eax, esi
0x67FBBB: pop     esi
0x67FBBC: retn    4
