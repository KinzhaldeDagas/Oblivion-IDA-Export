0x467572: test    al, al
0x467574: jz      short locret_467592
0x467576: mov     edx, [ecx]
0x467578: test    edx, edx
0x46757A: jz      short TESActorBaseData_AllFactionsAreEvil___FactionLoop_next
0x46757C: mov     edx, [edx]
0x46757E: movzx   edx, byte ptr [edx+34h]
0x467582: shr     edx, 1
0x467584: test    dl, 1
0x467587: jnz     short TESActorBaseData_AllFactionsAreEvil___FactionLoop_next
0x467589: xor     al, al
