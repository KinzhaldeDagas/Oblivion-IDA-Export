0x787060: mov     ecx, [ecx]; CSpeedTreeRT::GetTreeSize thin wrapper. Forwards to CTreeEngine::GetSize at 0x7A2400, reading CTreeEngine+0x4C/+0x50.
0x787062: jmp     CTreeEngine__GetSize; CTreeEngine::GetSize: returns tree size and variance from CTreeEngine+0x4C/+0x50.
