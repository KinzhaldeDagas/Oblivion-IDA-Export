0x787210: mov     ecx, [ecx+8]; CSpeedTreeRT::FreeLeafLODDataArrays. If leaf geometry exists, delegates to CLeafGeometry::FreeLODDataArrays.
0x787213: test    ecx, ecx
0x787215: jz      short locret_78721C
0x787217: jmp     OB_CLeafGeometry_FreeLODDataArrays_010201A0; Frees dynamic arrays inside every 0x44-byte leaf LOD record without deleting the record array itself.
0x78721C: retn
