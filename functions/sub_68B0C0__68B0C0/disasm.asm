0x68B0C0: mov     eax, ecx; Verified TravelPathNode_Init sets payload +0 to null and kind +4 to 0xFF (uninitialized sentinel); the three bytes at +5..+7 are not written.
0x68B0C2: mov     dword ptr [eax], 0
0x68B0C8: mov     byte ptr [eax+4], 0FFh
0x68B0CC: retn
