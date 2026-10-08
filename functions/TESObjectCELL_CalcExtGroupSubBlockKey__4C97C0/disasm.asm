0x4C97C0: mov     eax, dword ptr [esp+group_y]
0x4C97C4: sar     eax, 3
0x4C97C7: mov     dword ptr [esp+group_y], eax; group_y
0x4C97CB: mov     ecx, dword ptr [esp+group_x]
0x4C97CF: sar     ecx, 3
0x4C97D2: mov     dword ptr [esp+group_x], ecx; group_x
0x4C97D6: jmp     TESObjectCELL_PackExteriorGroupLabel; Verified exact key encoding used by the DistantLOD cell model map: packed label = (signed cellX << 16) | unsigned cellY.
