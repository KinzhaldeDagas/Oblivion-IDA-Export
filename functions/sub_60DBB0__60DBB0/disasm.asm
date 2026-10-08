0x60DBB0: mov     eax, [ecx+1E0h]
0x60DBB6: test    eax, eax
0x60DBB8: jz      short locret_60DBE1
0x60DBBA: cmp     dword ptr [eax+60h], 0
0x60DBBE: jnz     short locret_60DBE1
0x60DBC0: mov     ecx, [eax+8]
0x60DBC3: shr     ecx, 5
0x60DBC6: test    cl, 1
0x60DBC9: jnz     short locret_60DBE1
0x60DBCB: mov     ecx, [esp+havokPoint]
0x60DBCF: lea     edx, [ecx+10h]
0x60DBD2: push    edx; havokNormal
0x60DBD3: push    ecx; havokPoint
0x60DBD4: mov     ecx, [ecx+28h]
0x60DBD7: push    ecx; collidable
0x60DBD8: push    eax; projectile
0x60DBD9: call    ArrowProjectile_HandleCollisionHit; Arrow projectile Havok-contact callback. Resolves the collidable to a live NiAVObject/TESObjectREFR, classifies Actor versus non-Actor impact, converts contact vectors, and dispatches the corresponding impact handler.
0x60DBDE: add     esp, 10h
0x60DBE1: retn    4
