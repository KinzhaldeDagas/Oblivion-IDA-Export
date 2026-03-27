0x402B80: mov     eax, [ecx+4]
0x402B83: test    eax, eax
0x402B85: jz      short loc_402B93
0x402B87: fld     dword ptr [eax+24h]
0x402B8A: call    Double_To_SInt32
0x402B8F: movsx   eax, al
0x402B92: retn
0x402B93: mov     eax, 7
0x402B98: retn
