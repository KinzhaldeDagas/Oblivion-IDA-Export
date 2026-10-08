0x4C9880: mov     al, [ecx+24h]; Verified: returns true when flags0 bit 0x20 or 0x40 is set. IsOffLimitToThePlayer uses this combined check for interior-cell access. Probable interpretation is Public or TempPublic state; Fallout GetPublicState uses the same OR of SetPublic 0x20 and SetTempPublic 0x40.
0x4C9883: test    al, 20h
0x4C9885: jz      short loc_4C988A
0x4C9887: mov     al, 1
0x4C9889: retn
0x4C988A: shr     eax, 6
0x4C988D: and     al, 1
0x4C988F: retn
