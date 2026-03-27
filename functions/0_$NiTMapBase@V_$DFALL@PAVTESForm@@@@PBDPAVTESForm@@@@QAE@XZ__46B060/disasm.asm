0x46B060: push    esi
0x46B061: mov     esi, ecx
0x46B063: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$DFALL@PAVTESForm@@@@PBDPAVTESForm@@@@6B@; const NiTMapBase<DFALL<TESForm *>,char const *,TESForm *>::`vftable'
0x46B069: call    NiTMap_Clear
0x46B06E: mov     eax, [esi+8]
0x46B071: push    eax
0x46B072: call    FormHeapFree
0x46B077: add     esp, 4
0x46B07A: test    [esp+4+arg_0], 1
0x46B07F: jz      short loc_46B08A
0x46B081: push    esi
0x46B082: call    FormHeapFree
0x46B087: add     esp, 4
0x46B08A: mov     eax, esi
0x46B08C: pop     esi
0x46B08D: retn    4
