0x467560: add     ecx, 18h
0x467563: cmp     dword ptr [ecx+4], 0
0x467567: mov     al, 1
0x467569: jnz     short TESActorBaseData_AllFactionsAreEvil___FactionLoop
0x46756B: cmp     dword ptr [ecx], 0
0x46756E: jnz     short TESActorBaseData_AllFactionsAreEvil___FactionLoop
0x467570: xor     al, al
