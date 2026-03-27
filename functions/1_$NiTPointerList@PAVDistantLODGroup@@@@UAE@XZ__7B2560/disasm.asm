0x7B2560: push    0FFFFFFFFh
0x7B2562: push    offset ??1?$NiTPointerList@PAVDistantLODGroup@@@@UAE@XZ_SEH
0x7B2567: mov     eax, large fs:0
0x7B256D: push    eax
0x7B256E: push    ecx
0x7B256F: push    esi
0x7B2570: mov     eax, ds:0B30AACh
0x7B2575: xor     eax, esp
0x7B2577: push    eax
0x7B2578: lea     eax, [esp+18h+var_C]
0x7B257C: mov     large fs:0, eax
0x7B2582: mov     esi, ecx
0x7B2584: mov     [esp+18h+var_10], esi
0x7B2588: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@PAVDistantLODGroup@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,DistantLODGroup *>::`vftable'
0x7B258E: mov     [esp+18h+var_4], 0
0x7B2596: call    NiTPointerList__FreeAllNodes
0x7B259B: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVDistantLODGroup@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,DistantLODGroup *>::`vftable'
0x7B25A1: mov     ecx, [esp+18h+var_C]
0x7B25A5: mov     large fs:0, ecx
0x7B25AC: pop     ecx
0x7B25AD: pop     esi
0x7B25AE: add     esp, 10h
0x7B25B1: retn
