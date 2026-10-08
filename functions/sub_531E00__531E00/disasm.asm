0x531E00: test    ecx, ecx
0x531E02: jz      short loc_531E10
0x531E04: mov     ecx, [ecx+8]
0x531E07: test    ecx, ecx
0x531E09: jz      short loc_531E10
0x531E0B: jmp     bhkCollisionWrapper_GetPositionPtr; Returns low-level Havok object position pointer: *(wrapper+0x30 + 0x1C) + 0x30.
0x531E10: mov     eax, offset unk_BA7A40
0x531E15: retn
