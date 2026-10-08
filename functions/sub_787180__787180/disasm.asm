0x787180: mov     eax, [ecx]; CSpeedTreeRT::SetMaximumBudAngle. Writes CTreeEngine leaf-info field +0xB8 when the engine exists.
0x787182: test    eax, eax
0x787184: jz      short locret_787190
0x787186: fld     [esp+value]
0x78718A: fstp    dword ptr [eax+0B8h]
0x787190: retn    4
