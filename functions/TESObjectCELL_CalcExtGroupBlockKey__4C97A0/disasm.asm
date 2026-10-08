0x4C97A0: mov     eax, dword ptr [esp+group_y]
0x4C97A4: sar     eax, 5
0x4C97A7: mov     dword ptr [esp+group_y], eax; group_y
0x4C97AB: mov     ecx, dword ptr [esp+group_x]
0x4C97AF: sar     ecx, 5
0x4C97B2: mov     dword ptr [esp+group_x], ecx; group_x
0x4C97B6: jmp     TESObjectCELL_PackExteriorGroupLabel; Verified exact key encoding used by the DistantLOD cell model map: packed label = (signed cellX << 16) | unsigned cellY.
