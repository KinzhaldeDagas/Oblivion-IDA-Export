0x68E672: push    esi
0x68E673: fld     [esp+4+arg_0]
0x68E677: mov     esi, ecx
0x68E679: fcom    st(1)
0x68E67B: fnstsw  ax
0x68E67D: fstp    st(1)
0x68E67F: test    ah, 41h
0x68E682: jnz     ActiveEffect_Base_ProcessEffect___TestTerminate_
0x68E688: cmp     byte ptr [esi+11h], 0
0x68E68C: jnz     ActiveEffect_Base_ProcessEffect___TestTerminate_
0x68E692: cmp     byte ptr [esi+10h], 0
0x68E696: jnz     ActiveEffect_Base_ProcessEffect___TestUpdate
