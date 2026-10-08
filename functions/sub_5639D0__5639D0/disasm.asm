0x5639D0: test    ecx, ecx
0x5639D2: jz      short locret_5639EE
0x5639D4: mov     ecx, [ecx+8]
0x5639D7: test    ecx, ecx
0x5639D9: jz      short locret_5639EE
0x5639DB: call    bhkWorldObject_GetLinearVelocityPtr; TES4 authoritative: returns pointer to bhk collision object's velocity vector at object+0x10. 0x896000 copies this into proxy +0x2E0 before state update.
0x5639E0: push    eax
0x5639E1: mov     eax, [esp+4+arg_0]
0x5639E5: push    eax
0x5639E6: call    HavokVector_ToWorldVector; TES4 authoritative: converts Havok-unit vector to TES/world units using dbl_A372E0 (inverse hkFactor).
0x5639EB: add     esp, 8
0x5639EE: retn    4
