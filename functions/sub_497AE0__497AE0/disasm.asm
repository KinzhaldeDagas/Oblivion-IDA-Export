0x497AE0: fld     dword ptr ds:0B06C2Ch
0x497AE6: fld     [esp+arg_0]
0x497AEA: fld     st
0x497AEC: fucomp  st(2)
0x497AEE: fnstsw  ax
0x497AF0: fstp    st(1)
0x497AF2: test    ah, 44h
0x497AF5: jnp     short loc_497B10
0x497AF7: fldz
0x497AF9: fcomp   st(1)
0x497AFB: fnstsw  ax
0x497AFD: test    ah, 5
0x497B00: jp      short loc_497B10
0x497B02: fstp    dword ptr ds:0B06C2Ch
0x497B08: mov     byte ptr ds:0B34FA4h, 1
0x497B0F: retn
0x497B10: fstp    st
0x497B12: retn
