0x663EB0: push    ecx; Verified via direct caller data flow: reads the per-player last-selected destination-space index for a TESObjectDOOR, keyed by that door's refID at +0x0C, from PlayerCharacter offset +0x788. Returns 0xFF when door is null or no map value is found; the stored value is exposed as UInt8. The caller uses it to avoid immediately reusing the prior space when another destination can be selected.
0x663EB1: mov     edx, [esp+4+door]
0x663EB5: or      al, 0FFh
0x663EB7: test    edx, edx
0x663EB9: mov     [esp+4+valueOut], al
0x663EBD: jz      short loc_663ED7
0x663EBF: mov     edx, [edx+0Ch]
0x663EC2: lea     eax, [esp+4+valueOut]
0x663EC6: push    eax; valueOut
0x663EC7: push    edx; key
0x663EC8: add     ecx, 788h; this
0x663ECE: call    NiTMap_TryGetAtByteValue; Verified generic NiTMap lookup helper: hashes the UInt32 key through the map vtable, walks the bucket chain using the map's key comparator, returns false when absent, and on a match writes the low byte of the entry data field to valueOut and returns true. Callers use it for byte/boolean-valued maps, including PlayerCharacter_GetLastSpaceForDoor and cell/worldspace visited or filter maps; this helper does not establish the full map value width.
0x663ED3: mov     al, [esp+4+valueOut]
0x663ED7: pop     ecx
0x663ED8: retn    4
