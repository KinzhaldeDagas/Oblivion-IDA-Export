0x4A55E0: push    esi
0x4A55E1: mov     esi, ecx
0x4A55E3: mov     dword ptr [esi], offset ??_7TESRegionDataSound@@6B@; const TESRegionDataSound::`vftable'
0x4A55E9: call    TESRegionDataSound_ClearRecords; Verified: clears embedded TESRegionDataSound.sounds linked list and frees each owned OblivionTESRegionSoundRecord.
0x4A55EE: mov     ecx, esi
0x4A55F0: call    TESRegionData_SetBaseVTable
0x4A55F5: test    [esp+4+arg_0], 1
0x4A55FA: jz      short loc_4A5605
0x4A55FC: push    esi
0x4A55FD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4A5602: add     esp, 4
0x4A5605: mov     eax, esi
0x4A5607: pop     esi
0x4A5608: retn    4
