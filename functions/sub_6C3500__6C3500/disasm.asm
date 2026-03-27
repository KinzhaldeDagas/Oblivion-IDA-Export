0x6C3500: fld     dword ptr ds:0A7DEB4h
0x6C3506: push    esi
0x6C3507: fchs
0x6C3509: push    edi
0x6C350A: fstp    dword ptr [ecx]
0x6C350C: lea     edi, [ecx+44h]
0x6C350F: fld     dword ptr ds:0A7DEB4h
0x6C3515: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x6C351A: fchs
0x6C351C: fstp    dword ptr [ecx+4]
0x6C351F: fld     dword ptr ds:0A7DEB4h
0x6C3525: fchs
0x6C3527: fstp    dword ptr [ecx+14h]
0x6C352A: fld     dword ptr ds:0A7DEB4h
0x6C3530: fchs
0x6C3532: fstp    dword ptr [ecx+20h]
0x6C3535: fld     dword ptr ds:0A7DEB4h
0x6C353B: fchs
0x6C353D: fstp    dword ptr [ecx+24h]
0x6C3540: fld     dword ptr ds:0A7DEB4h
0x6C3546: fchs
0x6C3548: fstp    dword ptr [ecx+34h]
0x6C354B: fld     dword ptr ds:0A7DEB4h
0x6C3551: fchs
0x6C3553: fstp    dword ptr [ecx+40h]
0x6C3556: mov     ecx, 9
0x6C355B: rep movsd
0x6C355D: pop     edi
0x6C355E: pop     esi
0x6C355F: retn
