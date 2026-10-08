0x451580: mov     edx, [ecx+23Ch]; MEF v20 fix: TESFile::NextGroup short-GRUP guard. Reject lengths below 0x14 before subtracting the group header and tail-calling TESFile_NextRecord.
0x451586: xor     eax, eax
0x451588: cmp     edx, ds:0B05E20h
0x45158E: jnz     short locret_4515A2
0x451590: mov     [ecx+23Ch], eax; EngineIssues review: TESFile::NextGroup subtracts 0x14 from group length without checking length >= 0x14 before handing off to TESFile_NextRecord.
0x451596: add     dword ptr [ecx+240h], 0FFFFFFECh
0x45159D: jmp     TESFile_NextRecord
0x4515A2: retn
