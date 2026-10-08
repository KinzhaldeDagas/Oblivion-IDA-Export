0x4A43E0: mov     eax, ecx; Verified: initializes the 12-byte TESRegionDataList header: firstData null, overflowNodes null, ownsData byte set from constructor argument.
0x4A43E2: mov     cl, [esp+arg_0]
0x4A43E6: mov     dword ptr [eax], 0
0x4A43EC: mov     dword ptr [eax+4], 0
0x4A43F3: mov     [eax+8], cl
0x4A43F6: retn    4
