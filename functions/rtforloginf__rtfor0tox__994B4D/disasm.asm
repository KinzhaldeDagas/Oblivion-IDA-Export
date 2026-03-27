0x994B4D: call    _isintTOS
0x994B52: fstp    st
0x994B54: fstp    st
0x994B56: or      cl, cl
0x994B58: jnz     short _rtforloginf____rtfor0toneg
0x994B5A: fldz
0x994B5C: cmp     eax, 1
0x994B5F: jnz     short _rtforloginf___zerotoxdone
0x994B61: or      ch, ch
0x994B63: jz      short _rtforloginf___zerotoxdone
0x994B65: fchs
