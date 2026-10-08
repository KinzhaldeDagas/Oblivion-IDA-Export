0x428E70: xor     al, al; Verified runtime lock predicate: returns (ExtraLockData.flags & 0x01) != 0. ExtraDataList_Load sets this bit on accepted 12-byte and legacy 16-byte XLOC payloads; serialized flag bits are then preserved. This is a runtime normalization step.
0x428E72: test    byte ptr [ecx+8], 1
0x428E76: jz      short locret_428E7A
0x428E78: mov     al, 1
0x428E7A: retn
