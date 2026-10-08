0x6ECC90: mov     eax, [esp+arg_0]
0x6ECC94: push    eax
0x6ECC95: call    NiSingleInterpController_RegisterStreamables; Registers base streamables first; on success, invokes interpolator virtual RegisterStreamables (+0x24) when +0x3C is non-null.
0x6ECC9A: test    al, al
0x6ECC9C: setnz   al
0x6ECC9F: retn    4
