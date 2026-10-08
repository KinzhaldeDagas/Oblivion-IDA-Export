0x8AC070: mov     eax, [ecx+30h]; Returns low-level Havok object position pointer: *(wrapper+0x30 + 0x1C) + 0x30.
0x8AC073: mov     eax, [eax+1Ch]
0x8AC076: add     eax, 30h ; '0'
0x8AC079: retn
