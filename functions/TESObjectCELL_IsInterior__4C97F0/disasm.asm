0x4C97F0: mov     al, [ecx+24h]; 3DTheft decode: TESObjectCELL_IsInterior returns flags0 bit 0, matching the plugin's CellIsInterior test.
0x4C97F3: and     al, 1
0x4C97F5: retn
