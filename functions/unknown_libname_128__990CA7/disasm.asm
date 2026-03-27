0x990CA7: fstp    tbyte ptr [ebp-9Eh]
0x990CAD: fld     tbyte ptr [ebp-9Eh]
0x990CB3: test    byte ptr [ebp-97h], 40h
0x990CBA: jz      short _snan2
0x990CBC: fxch    st(1)
0x990CBE: fstp    tbyte ptr [ebp-9Eh]
0x990CC4: fld     tbyte ptr [ebp-9Eh]
0x990CCA: test    byte ptr [ebp-97h], 40h
0x990CD1: jz      short _snan2
0x990CD3: mov     byte ptr [ebp-90h], 7
0x990CDA: jmp     short _nan2ret
0x990CDC: mov     byte ptr [ebp-90h], 1
0x990CE3: faddp   st(1), st
0x990CE5: retn
