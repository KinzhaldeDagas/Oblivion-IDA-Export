0x68A160: mov     ecx, [ecx+4]; this
0x68A163: test    ecx, ecx
0x68A165: jz      short loc_68A16C
0x68A167: jmp     TravelPathNode_GetPosition; Verified TravelPathNode_GetPosition returns a stored NiPoint3* for kind 1; for kind 0, returns reference GetPos unless the ref has TeleportData, in which case it returns the linked door's TeleportData xyz marker. Null payloads and unrecognized kinds return g_zeroNiPoint3.
0x68A16C: mov     eax, offset g_zeroNiPoint3
0x68A171: retn
