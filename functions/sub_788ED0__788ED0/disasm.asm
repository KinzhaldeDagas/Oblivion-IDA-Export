0x788ED0: push    ecx; Oblivion stdcall adapter for uninitialized copying of a range of trivial 28-byte collision records.
0x788ED1: mov     edx, [esp+4+destination]
0x788ED5: mov     byte ptr [esp+4+var_4], 0
0x788ED9: mov     eax, [esp+4+var_4]
0x788EDC: push    eax
0x788EDD: mov     eax, [esp+8+destination]
0x788EE1: push    edx
0x788EE2: mov     edx, [esp+0Ch+first]
0x788EE6: push    ecx
0x788EE7: mov     ecx, [esp+10h+last]
0x788EEB: push    eax; destination
0x788EEC: push    ecx; last
0x788EED: push    edx; first
0x788EEE: call    OB_stVector_CollisionObject_UninitializedCopyRange_010201A0; Oblivion collision-vector uninitialized copy: copies [first,last) as 28-byte records into destination and returns the advanced destination.
0x788EF3: add     esp, 1Ch
0x788EF6: retn    0Ch
