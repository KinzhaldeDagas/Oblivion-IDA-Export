0x42A660: mov     eax, ecx; Verified ExtraRandomTeleportMarker constructor: sets ExtraData type 0x43 and the ExtraRandomTeleportMarker vtable, and zeroes its 4-byte teleportRef payload at +0x0C.
0x42A662: xor     ecx, ecx
0x42A664: mov     byte ptr [eax+4], 43h ; 'C'
0x42A668: mov     [eax+8], ecx
0x42A66B: mov     dword ptr [eax], offset ??_7ExtraRandomTeleportMarker@@6B@; const ExtraRandomTeleportMarker::`vftable'
0x42A671: mov     [eax+0Ch], ecx
0x42A674: retn
