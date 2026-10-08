0x663EE0: mov     eax, [esp+door]; Verified paired writer for PlayerCharacter_GetLastSpaceForDoor: writes spaceIndex into the same per-player map at +0x788 using TESObjectDOOR.refID (+0x0C) as key. Called after random destination-space selection. Map value's full stored width is not inferred here; getter returns UInt8.
0x663EE4: test    eax, eax
0x663EE6: jz      short locret_663EFA
0x663EE8: mov     eax, [eax+0Ch]
0x663EEB: mov     [esp+door], eax
0x663EEF: add     ecx, 788h
0x663EF5: jmp     NiTMap_SetAt
0x663EFA: retn    8
