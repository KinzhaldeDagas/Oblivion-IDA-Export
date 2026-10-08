0x787160: mov     eax, [ecx]; CSpeedTreeRT::SetMinimumBudAngle. Writes CTreeEngine leaf-info field +0xB4 when the engine exists.
0x787162: test    eax, eax
0x787164: jz      short locret_787170
0x787166: fld     [esp+value]
0x78716A: fstp    dword ptr [eax+0B4h]
0x787170: retn    4
