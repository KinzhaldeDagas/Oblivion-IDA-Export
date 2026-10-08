0x8AC0A0: lea     eax, [ecx+10h]; TES4 authoritative: returns pointer to bhk collision object's velocity vector at object+0x10. 0x896000 copies this into proxy +0x2E0 before state update.
0x8AC0A3: retn
