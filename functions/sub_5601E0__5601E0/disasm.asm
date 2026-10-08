0x5601E0: mov     ecx, [ecx+0Ch]; this
0x5601E3: test    ecx, ecx
0x5601E5: jz      short loc_5601F0
0x5601E7: call    CSpeedTreeRT__GetNumBranchLodLevels; CSpeedTreeRT::GetNumBranchLodLevels. Returns the 16-bit branch LOD count at CTreeEngine+0x70.
0x5601EC: movzx   eax, ax
0x5601EF: retn
0x5601F0: xor     eax, eax
0x5601F2: retn
