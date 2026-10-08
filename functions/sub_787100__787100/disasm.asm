0x787100: mov     eax, [ecx]; CSpeedTreeRT::SetLeafDimmingScalar. Writes CTreeEngine+0x88 when the engine exists.
0x787102: test    eax, eax
0x787104: jz      short locret_787110
0x787106: fld     [esp+value]
0x78710A: fstp    dword ptr [eax+88h]; CSpeedTreeRT::SetLeafDimmingScalar direct store: treeEngine+0x88, which is OB_CTreeEngine::leafInfo.dimmingScalar. No quantization is performed here.
0x787110: retn    4
