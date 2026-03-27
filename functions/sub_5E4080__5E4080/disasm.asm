0x5E4080: mov     eax, [ecx+58h]
0x5E4083: test    eax, eax
0x5E4085: jz      short loc_5E409A
0x5E4087: mov     eax, [eax+8]
0x5E408A: test    eax, eax
0x5E408C: jz      short loc_5E409A
0x5E408E: movsx   eax, byte ptr [eax+20h]
0x5E4092: mov     eax, ds:0B12988h[eax*4]
0x5E4099: retn
0x5E409A: xor     eax, eax
0x5E409C: retn
