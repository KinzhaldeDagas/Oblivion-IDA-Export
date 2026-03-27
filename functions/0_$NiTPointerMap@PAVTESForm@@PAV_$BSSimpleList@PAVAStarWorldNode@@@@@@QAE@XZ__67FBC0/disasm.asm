0x67FBC0: mov     eax, [esp+arg_0]
0x67FBC4: push    esi
0x67FBC5: mov     esi, ecx
0x67FBC7: xor     ecx, ecx
0x67FBC9: mov     [esi+4], eax
0x67FBCC: mov     edx, 4
0x67FBD1: mul     edx
0x67FBD3: seto    cl
0x67FBD6: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVTESForm@@PAV?$BSSimpleList@PAVAStarWorldNode@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,TESForm *,BSSimpleList<AStarWorldNode *> *>::`vftable'
0x67FBDC: mov     dword ptr [esi+0Ch], 0
0x67FBE3: neg     ecx
0x67FBE5: or      ecx, eax
0x67FBE7: push    ecx; Size
0x67FBE8: call    FormHeapAlloc
0x67FBED: mov     ecx, [esi+4]
0x67FBF0: add     ecx, ecx
0x67FBF2: add     ecx, ecx
0x67FBF4: push    ecx
0x67FBF5: push    0
0x67FBF7: push    eax
0x67FBF8: mov     [esi+8], eax
0x67FBFB: call    __memset
0x67FC00: add     esp, 10h
0x67FC03: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@PAVTESForm@@PAV?$BSSimpleList@PAVAStarWorldNode@@@@@@6B@; const NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *>::`vftable'
0x67FC09: mov     eax, esi
0x67FC0B: pop     esi
0x67FC0C: retn    4
