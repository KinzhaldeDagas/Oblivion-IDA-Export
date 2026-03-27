0x68E170: push    esi
0x68E171: mov     esi, ecx
0x68E173: mov     eax, [esi+0Ch]
0x68E176: mov     ecx, [eax+1Ch]
0x68E179: mov     ecx, [ecx+58h]
0x68E17C: mov     edx, ecx
0x68E17E: and     edx, 180h
0x68E184: cmp     edx, 180h
0x68E18A: jz      short ActiveEffect_Base_ApplyScalingFactor___Done
0x68E18C: fld1
0x68E18E: fld     [esp+4+arg_0]
0x68E192: fucom   st(1)
0x68E194: fnstsw  ax
0x68E196: fstp    st(1)
0x68E198: test    ah, 44h
0x68E19B: jnp     short ActiveEffect_Base_ApplyScalingFactor___Done_
0x68E19D: shr     ecx, 8
0x68E1A0: test    cl, 1
0x68E1A3: jz      short ActiveEffect_Base_ApplyScalingFactor___ScaleMagnitude
