0x68A180: mov     ecx, [ecx+4]; this
0x68A183: test    ecx, ecx
0x68A185: jz      short loc_68A18C
0x68A187: jmp     TravelPathNode_GetReference; Verified returns payload as TESObjectREFR* only when kind==0 (reference node); returns null for position nodes or other kinds.
0x68A18C: xor     eax, eax
0x68A18E: retn
