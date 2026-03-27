0x8F3180: mov     eax, [esp+arg_0]
0x8F3184: test    eax, eax
0x8F3186: jz      short locret_8F31B8
0x8F3188: mov     word ptr [eax+6], 1
0x8F318E: mov     dword ptr [eax], offset off_A9B230
0x8F3194: fld     dword ptr ds:0B2FDC4h
0x8F319A: fcomp   dword ptr ds:0A2FAA8h
0x8F31A0: fnstsw  ax
0x8F31A2: test    ah, 5
0x8F31A5: jp      short locret_8F31B8
0x8F31A7: call    sub_8F22B0
0x8F31AC: fsubr   dword ptr ds:0A2F948h
0x8F31B2: fstp    dword ptr ds:0B2FDC4h
0x8F31B8: retn
