0x4F03D0: mov     eax, [esp+reference]; Verified: WorldSpace wrapper that removes a reference from its persistentCell via TESObjectCELL_RemoveReference; this removes it from the +0x64 persistent-reference index when applicable. It does not touch the separate SubSpace spatial index at +0x60.
0x4F03D4: test    eax, eax
0x4F03D6: jz      short locret_4F03E8
0x4F03D8: mov     ecx, [ecx+34h]; this
0x4F03DB: test    ecx, ecx
0x4F03DD: jz      short locret_4F03E8
0x4F03DF: mov     [esp+reference], eax; reference
0x4F03E3: jmp     TESObjectCELL_RemoveReference; Verified: removes a reference from the cell object list under the cell lock. For persistent cells, clears the reference's ExtraDataList cell pointer and removes it from the owning WorldSpace persistent-reference index (+0x64); for normal cells, clears its parent cell and updates changed state. No write to the separate SubSpace index (+0x60) is present.
0x4F03E8: retn    4
