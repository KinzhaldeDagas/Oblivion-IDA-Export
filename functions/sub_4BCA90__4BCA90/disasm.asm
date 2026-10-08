0x4BCA90: mov     eax, dword ptr [esp+priority]; Verified task constructor for the embedded-record source path: initializes IOTask, sets DistantLODLoaderTask vtable, stores owner map and DistantLODLoaderTaskData, and carries no external .lod path.
0x4BCA94: push    esi
0x4BCA95: push    eax
0x4BCA96: mov     esi, ecx
0x4BCA98: call    sub_436FA0
0x4BCA9D: mov     ecx, [esp+4+ownerMap]
0x4BCAA1: mov     edx, [esp+4+taskData]
0x4BCAA5: mov     dword ptr [esi], offset ??_7DistantLODLoaderTask@@6B@; const DistantLODLoaderTask::`vftable'
0x4BCAAB: mov     [esi+28h], ecx
0x4BCAAE: mov     [esi+2Ch], edx
0x4BCAB1: mov     eax, esi
0x4BCAB3: pop     esi
0x4BCAB4: retn    0Ch
