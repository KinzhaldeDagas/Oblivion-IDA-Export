0x5708B0: cmp     dword ptr [ecx+1Ch], 0; Verified: particle temp effect is saveable only when its model path and cloned particle root are both non-null.
0x5708B4: jz      short loc_5708BF
0x5708B6: cmp     dword ptr [ecx+18h], 0
0x5708BA: jz      short loc_5708BF
0x5708BC: mov     al, 1
0x5708BE: retn
0x5708BF: xor     al, al
0x5708C1: retn
