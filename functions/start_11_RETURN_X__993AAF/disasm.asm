0x993AAF: movlpd  xmm0, [esp+arg_0]
0x993AB5: xorpd   xmm6, xmm6
0x993AB9: sub     esp, 10h
0x993ABC: movsd   xmm7, xmm0
0x993AC0: pextrw  edx, xmm0, 3
0x993AC5: and     edx, 7FF0h
0x993ACB: sub     edx, 10h
0x993ACE: cmp     edx, 7FE0h
0x993AD4: jb      short start_11___RETURN_X2
0x993AD6: addsd   xmm6, xmm0
0x993ADA: orpd    xmm0, xmm6
0x993ADE: mulsd   xmm7, xmm0
