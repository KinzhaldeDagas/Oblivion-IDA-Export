0x428E80: mov     eax, [ecx+0Ch]; Verified: sets only ExtraLockData.flags bit 0x01 (Locked), preserving bit 0x02. LockEffect_Apply first writes bit 0x02, then calls the self/linked-door locked setter to produce flags 0x03.
0x428E83: or      byte ptr [eax+8], 1
0x428E87: retn
