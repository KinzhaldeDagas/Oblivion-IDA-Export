0x41E690: push    31h ; '1'; Verified: looks up BSExtraData type 0x31 (ExtraLock) and returns its ExtraLockData* payload at wrapper offset +0x0C, or null. The returned value is the 12-byte lock-data structure, not the ExtraLock wrapper.
0x41E692: call    BaseExtraList_GetExtraData
0x41E697: test    eax, eax
0x41E699: jz      short loc_41E69F
0x41E69B: mov     eax, [eax+0Ch]
0x41E69E: retn
0x41E69F: xor     eax, eax
0x41E6A1: retn
