0x7A2400: fld     dword ptr [ecx+4Ch]; CTreeEngine::GetSize: returns tree size and variance from CTreeEngine+0x4C/+0x50.
0x7A2403: mov     eax, [esp+sizeOut]
0x7A2407: fstp    dword ptr [eax]
0x7A2409: fld     dword ptr [ecx+50h]
0x7A240C: mov     ecx, [esp+varianceOut]
0x7A2410: fstp    dword ptr [ecx]
0x7A2412: retn    8
