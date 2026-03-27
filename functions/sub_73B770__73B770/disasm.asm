0x73B770: fld     dword ptr [ecx]
0x73B772: mov     edx, [esp+arg_0]
0x73B776: fld     dword ptr [edx]
0x73B778: fucompp
0x73B77A: fnstsw  ax
0x73B77C: test    ah, 44h
0x73B77F: jp      short loc_73B7B6
0x73B781: fld     dword ptr [ecx+4]
0x73B784: fld     dword ptr [edx+4]
0x73B787: fucompp
0x73B789: fnstsw  ax
0x73B78B: test    ah, 44h
0x73B78E: jp      short loc_73B7B6
0x73B790: fld     dword ptr [ecx+8]
0x73B793: fld     dword ptr [edx+8]
0x73B796: fucompp
0x73B798: fnstsw  ax
0x73B79A: test    ah, 44h
0x73B79D: jp      short loc_73B7B6
0x73B79F: fld     dword ptr [ecx+0Ch]
0x73B7A2: fld     dword ptr [edx+0Ch]
0x73B7A5: fucompp
0x73B7A7: fnstsw  ax
0x73B7A9: test    ah, 44h
0x73B7AC: jp      short loc_73B7B6
0x73B7AE: mov     eax, 1
0x73B7B3: retn    4
0x73B7B6: xor     eax, eax
0x73B7B8: retn    4
