0x52EA90: mov     eax, [ecx+2Ch]
0x52EA93: lea     ecx, [eax-0Ch]
0x52EA96: cmp     ecx, 14h
0x52EA99: ja      short loc_52EAA5
0x52EA9B: push    eax
0x52EA9C: call    ActorValue_GetName
0x52EAA1: add     esp, 4
0x52EAA4: retn
0x52EAA5: xor     eax, eax
0x52EAA7: retn
