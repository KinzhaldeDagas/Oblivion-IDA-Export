0x689A00: push    esi; Verified clears TravelPath.nodes at +4: frees owned kind-1 position payloads, frees every TravelPathNode record and BSSimpleList link, but leaves kind-0 TESObjectREFR payloads unowned/unreleased.
0x689A01: lea     esi, [ecx+4]
0x689A04: test    esi, esi
0x689A06: jz      short loc_689A56
0x689A08: push    edi
0x689A09: lea     esp, [esp+0]
0x689A10: mov     ecx, esi
0x689A12: call    BSSimpleList_IsEmpty
0x689A17: test    al, al
0x689A19: jnz     short loc_689A55
0x689A1B: mov     edi, [esi]
0x689A1D: test    edi, edi
0x689A1F: jz      short loc_689A31
0x689A21: mov     ecx, edi; this
0x689A23: call    TravelPathNode_FreeOwnedPosition; Verified frees only the owned position payload when kind==1; it does not free the TravelPathNode record itself and does not release reference-kind payloads.
0x689A28: push    edi
0x689A29: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x689A2E: add     esp, 4
0x689A31: mov     eax, [esi+4]
0x689A34: test    eax, eax
0x689A36: jz      short loc_689A4D
0x689A38: mov     ecx, [eax+4]
0x689A3B: mov     [esi+4], ecx
0x689A3E: mov     edx, [eax]
0x689A40: push    eax
0x689A41: mov     [esi], edx
0x689A43: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x689A48: add     esp, 4
0x689A4B: jmp     short loc_689A10
0x689A4D: mov     dword ptr [esi], 0
0x689A53: jmp     short loc_689A10
0x689A55: pop     edi
0x689A56: pop     esi
0x689A57: retn
