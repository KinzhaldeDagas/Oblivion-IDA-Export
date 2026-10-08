0x67EDC0: fldz; Verified shared graph-node prefix initialization: zeros float slots at +0/+4/+8/+0xC and clears the state byte at +0x10. TESConnectedPoint and TESPathGridPoint constructors both call it.
0x67EDC2: mov     eax, ecx
0x67EDC4: fst     dword ptr [eax]
0x67EDC6: xor     ecx, ecx
0x67EDC8: fst     dword ptr [eax+4]
0x67EDCB: mov     [eax+0Ch], ecx
0x67EDCE: fstp    dword ptr [eax+8]
0x67EDD1: mov     [eax+10h], cl
0x67EDD4: retn
