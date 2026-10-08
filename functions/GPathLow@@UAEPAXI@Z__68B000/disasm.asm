0x68B000: push    esi
0x68B001: mov     esi, ecx
0x68B003: mov     dword ptr [esi], offset ??_7PathLow@@6B@; const PathLow::`vftable'
0x68B009: call    TravelPath_ClearNodes; Verified clears TravelPath.nodes at +4: frees owned kind-1 position payloads, frees every TravelPathNode record and BSSimpleList link, but leaves kind-0 TESObjectREFR payloads unowned/unreleased.
0x68B00E: test    byte ptr [esp+4+arg_0], 1
0x68B013: jz      short loc_68B01E
0x68B015: push    esi
0x68B016: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x68B01B: add     esp, 4
0x68B01E: mov     eax, esi
0x68B020: pop     esi
0x68B021: retn    4
