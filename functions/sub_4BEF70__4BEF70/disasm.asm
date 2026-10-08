0x4BEF70: push    esi; Verified: initializes the 0x28-byte point allocation used by ROAD load/copy, zeros its leading 0x14 bytes through sub_67EDC0, initializes its XYZ at +0x14, and zeros the 8-byte connection-list header at +0x20. The meaning of leading bytes +0x00..+0x13 remains Unknown.
0x4BEF71: mov     esi, ecx
0x4BEF73: call    PathGraphNode_InitSearchPrefix; Verified shared graph-node prefix initialization: zeros float slots at +0/+4/+8/+0xC and clears the state byte at +0x10. TESConnectedPoint and TESPathGridPoint constructors both call it.
0x4BEF78: xor     eax, eax
0x4BEF7A: mov     [esi+20h], eax
0x4BEF7D: mov     [esi+24h], eax
0x4BEF80: mov     eax, ds:0B3F9A8h
0x4BEF85: mov     [esi+14h], eax
0x4BEF88: mov     ecx, ds:0B3F9ACh
0x4BEF8E: mov     [esi+18h], ecx
0x4BEF91: mov     edx, ds:0B3F9B0h
0x4BEF97: mov     [esi+1Ch], edx
0x4BEF9A: mov     eax, esi
0x4BEF9C: pop     esi
0x4BEF9D: retn
