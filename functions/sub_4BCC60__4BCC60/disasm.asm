0x4BCC60: push    esi; Verified worker callback (+0x04 vtable): obtains an existing task BSFile or opens the task path, calls TESWorldSpace_LoadCellDistantLODData with task cellX/cellY, embedded object map and lodMode, then sets parseComplete at taskData +0x28.
0x4BCC61: push    1
0x4BCC63: push    0
0x4BCC65: mov     esi, ecx
0x4BCC67: call    sub_434650
0x4BCC6C: test    eax, eax
0x4BCC6E: jnz     short loc_4BCC83
0x4BCC70: mov     eax, [esi+20h]
0x4BCC73: push    800h
0x4BCC78: push    0
0x4BCC7A: push    eax
0x4BCC7B: call    FileFinder_LoadBSFile
0x4BCC80: add     esp, 0Ch
0x4BCC83: mov     esi, [esi+2Ch]
0x4BCC86: test    esi, esi
0x4BCC88: jz      short loc_4BCCA6
0x4BCC8A: mov     edx, [esi+4]
0x4BCC8D: push    eax; externalFile
0x4BCC8E: mov     eax, [esi+24h]
0x4BCC91: push    eax; lodMode
0x4BCC92: mov     eax, [esi]
0x4BCC94: lea     ecx, [esi+0Ch]
0x4BCC97: push    ecx; outMap
0x4BCC98: mov     ecx, [esi+8]; this
0x4BCC9B: push    edx; cellY
0x4BCC9C: push    eax; cellX
0x4BCC9D: call    TESWorldSpace_LoadCellDistantLODData; Verified source selection: externalLodFiles uses the parsed external .lod stream exclusively; otherwise the loader searches this WorldSpace's override files, parses matching cell records, and follows parentWorldspace until a contributing file is found. Callers include DistantLODLoaderTask_LoadCellData.
0x4BCCA2: mov     byte ptr [esi+28h], 1
0x4BCCA6: pop     esi
0x4BCCA7: retn
