0x4606D0: push    esi
0x4606D1: push    edi
0x4606D2: mov     edi, [esp+8+a1]
0x4606D6: push    edi; a1
0x4606D7: mov     esi, ecx
0x4606D9: call    TESForm_LookupByFormID; OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
0x4606DE: add     esp, 4
0x4606E1: test    eax, eax
0x4606E3: jz      short loc_4606F2
0x4606E5: push    eax; form
0x4606E6: mov     ecx, esi; self
0x4606E8: call    TESSaveLoadGame_DeleteForm
0x4606ED: pop     edi
0x4606EE: pop     esi
0x4606EF: retn    4
0x4606F2: mov     ecx, [esi]; self
0x4606F4: push    1; force
0x4606F6: push    edi; formID
0x4606F7: call    SaveLoadChangesMap_RemoveChanges;
0x4606FC: pop     edi
0x4606FD: pop     esi
0x4606FE: retn    4
