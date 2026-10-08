0x4029D0: mov     eax, [ecx+14h]; Returns TimeGlobals field +5 TESGlobal value (time scale). Observed callers use it for magic cooldown and fast-travel time calculations.
0x4029D3: fld     dword ptr [eax+24h]
0x4029D6: retn
