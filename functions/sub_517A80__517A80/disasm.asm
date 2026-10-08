0x517A80: fldz; Construct 0x20-byte Script VariableInfo: initializes selected runtime fields and empty BSString at +0x18, but does not guarantee every SLSD data byte is initialized before a short/zero chunk read.
0x517A82: mov     eax, ecx
0x517A84: xor     ecx, ecx
0x517A86: fstp    qword ptr [eax+8]
0x517A89: mov     [eax], ecx
0x517A8B: mov     [eax+10h], cl
0x517A8E: mov     [eax+18h], ecx
0x517A91: mov     [eax+1Ch], cx
0x517A95: mov     [eax+1Eh], cx
0x517A99: retn
