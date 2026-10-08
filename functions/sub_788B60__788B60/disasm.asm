0x788B60: push    ecx; Oblivion compiler adapter for the 28-byte collision copy-backward primitive; preserves the same first/last/destinationEnd semantics.
0x788B61: mov     ecx, [esp+4+destinationEnd]
0x788B65: mov     edx, [esp+4+destinationEnd]
0x788B69: mov     byte ptr [esp+4+var_4], 0
0x788B6D: mov     eax, [esp+4+var_4]
0x788B70: push    eax
0x788B71: mov     eax, [esp+8+destinationEnd]
0x788B75: push    ecx
0x788B76: mov     ecx, [esp+0Ch+last]
0x788B7A: push    edx
0x788B7B: mov     edx, [esp+10h+first]
0x788B7F: push    eax; destinationEnd
0x788B80: push    ecx; last
0x788B81: push    edx; first
0x788B82: call    OB_stVector_CollisionObject_CopyBackwardRange_010201A0; Oblivion collision-vector copy-backward primitive: moves 28-byte records from the end toward the front-safe destination and returns destination start.
0x788B87: add     esp, 1Ch
0x788B8A: retn
