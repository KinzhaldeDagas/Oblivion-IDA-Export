0x403070: mov     eax, [esp+arg_0]
0x403074: mov     edx, [esp+arg_4]
0x403078: lea     eax, [eax+eax*4]
0x40307B: lea     eax, [edx+eax*8]
0x40307E: mov     ecx, [ecx+eax*4+50h]
0x403082: cmp     cx, 0FFFFh
0x403087: jnz     short loc_40308F
0x403089: or      eax, 0FFFFFFFFh
0x40308C: retn    8
0x40308F: mov     eax, 7482296Bh
0x403094: imul    ecx
0x403096: sar     edx, 0Bh
0x403099: mov     ecx, edx
0x40309B: shr     ecx, 1Fh
0x40309E: lea     eax, [edx+ecx+20h]
0x4030A2: retn    8
