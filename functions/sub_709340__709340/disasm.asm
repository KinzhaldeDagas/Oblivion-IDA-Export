0x709340: fld1
0x709342: fcom    dword ptr [ecx]
0x709344: fnstsw  ax
0x709346: test    ah, 5
0x709349: jp      short loc_70934D
0x70934B: fst     dword ptr [ecx]
0x70934D: fcom    dword ptr [ecx+4]
0x709350: fnstsw  ax
0x709352: test    ah, 5
0x709355: jp      short loc_70935A
0x709357: fst     dword ptr [ecx+4]
0x70935A: fcom    dword ptr [ecx+8]
0x70935D: fnstsw  ax
0x70935F: test    ah, 5
0x709362: jp      short loc_709368
0x709364: fstp    dword ptr [ecx+8]
0x709367: retn
0x709368: fstp    st
0x70936A: retn
