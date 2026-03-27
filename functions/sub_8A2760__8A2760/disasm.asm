0x8A2760: mov     ecx, [esp+arg_0]
0x8A2764: fld     dword ptr [ecx+10h]
0x8A2767: fld     dword ptr ds:0B258F4h
0x8A276D: fucompp
0x8A276F: fnstsw  ax
0x8A2771: test    ah, 44h
0x8A2774: jp      short loc_8A27A2
0x8A2776: fld     dword ptr [ecx+14h]
0x8A2779: fld     dword ptr ds:0B258F8h
0x8A277F: fucompp
0x8A2781: fnstsw  ax
0x8A2783: test    ah, 44h
0x8A2786: jp      short loc_8A27A2
0x8A2788: fld     dword ptr [ecx+18h]
0x8A278B: fld     dword ptr ds:0B258FCh
0x8A2791: fucompp
0x8A2793: fnstsw  ax
0x8A2795: test    ah, 44h
0x8A2798: jp      short loc_8A27A2
0x8A279A: mov     eax, 1
0x8A279F: retn    4
0x8A27A2: xor     eax, eax
0x8A27A4: retn    4
