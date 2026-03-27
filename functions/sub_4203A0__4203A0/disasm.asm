0x4203A0: push    40h ; '@'; a2
0x4203A2: call    BaseExtraList_GetExtraData
0x4203A7: test    eax, eax
0x4203A9: jz      short loc_4203AF
0x4203AB: add     eax, 0Ch
0x4203AE: retn
0x4203AF: xor     eax, eax
0x4203B1: retn
