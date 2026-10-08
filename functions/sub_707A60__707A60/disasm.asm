0x707A60: mov     eax, dword ptr [esp+valueOut]
0x707A64: push    esi
0x707A65: mov     esi, [eax+8]
0x707A68: test    esi, esi
0x707A6A: jz      short loc_707A9D
0x707A6C: push    ebx
0x707A6D: mov     ebx, [esp+8+arg_4]
0x707A71: push    edi
0x707A72: mov     edi, [esi+8]
0x707A75: lea     eax, [esi+8]
0x707A78: mov     esi, [esi+4]
0x707A7B: lea     ecx, [esp+0Ch+valueOut]
0x707A7F: push    ecx; valueOut
0x707A80: mov     ecx, [ebx+4]; this
0x707A83: push    edi; key
0x707A84: call    NiTMap_TryGetAtByteValue; Verified generic NiTMap lookup helper: hashes the UInt32 key through the map vtable, walks the bucket chain using the map's key comparator, returns false when absent, and on a match writes the low byte of the entry data field to valueOut and returns true. Callers use it for byte/boolean-valued maps, including PlayerCharacter_GetLastSpaceForDoor and cell/worldspace visited or filter maps; this helper does not establish the full map value width.
0x707A89: test    al, al
0x707A8B: jnz     short loc_707A97
0x707A8D: mov     edx, [edi]
0x707A8F: mov     eax, [edx+38h]
0x707A92: push    ebx
0x707A93: mov     ecx, edi
0x707A95: call    eax
0x707A97: test    esi, esi
0x707A99: jnz     short loc_707A72
0x707A9B: pop     edi
0x707A9C: pop     ebx
0x707A9D: pop     esi
0x707A9E: retn    8
