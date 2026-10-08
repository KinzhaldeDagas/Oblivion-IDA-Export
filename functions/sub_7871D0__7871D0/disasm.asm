0x7871D0: fld     [esp+farDistance]; CSpeedTreeRT::SetLodLimits thin wrapper. Forwards near/far limits to CTreeEngine::SetLodLimits at 0x7A24D0.
0x7871D4: mov     ecx, [ecx]; this
0x7871D6: sub     esp, 8
0x7871D9: fstp    [esp+8+var_4]; farDistance
0x7871DD: fld     [esp+8+nearDistance]
0x7871E1: fstp    [esp+8+var_8]; nearDistance
0x7871E4: call    CTreeEngine__SetLodLimits; CTreeEngine::SetLodLimits: stores caller near/far limits at CTreeEngine+0x44/+0x40.
0x7871E9: retn    8
