0x996AF7: jg      short start_14___large_1
0x996AF9: sub     esp, 10h
0x996AFC: shr     ax, 4
0x996B00: cmp     ax, 0CFDh
0x996B04: jnz     short start_14___smallnorm_0
0x996B06: mulsd   xmm0, ds:qword_AAE340
0x996B0E: movlpd  [esp+10h+var_C], xmm0
0x996B14: fld     [esp+10h+var_C]
0x996B18: add     esp, 10h
0x996B1B: retn
