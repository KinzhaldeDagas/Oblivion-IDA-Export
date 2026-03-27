0x990798: push    ebp
0x990799: mov     ebp, esp
0x99079B: sub     esp, 18h
0x99079E: fld     ds:dbl_AA5030
0x9907A4: fstp    [ebp+var_10]
0x9907A7: fld     ds:dbl_AA5028
0x9907AD: fstp    [ebp+var_18]
0x9907B0: fld     [ebp+var_18]
0x9907B3: fdiv    [ebp+var_10]
0x9907B6: fmul    [ebp+var_10]
0x9907B9: fsubr   [ebp+var_18]
0x9907BC: fstp    [ebp+var_8]
0x9907BF: fld1
0x9907C1: fcomp   [ebp+var_8]
0x9907C4: fnstsw  ax
0x9907C6: test    ah, 5
0x9907C9: jp      short loc_9907D0
0x9907CB: xor     eax, eax
0x9907CD: inc     eax
0x9907CE: leave
0x9907CF: retn
0x9907D0: xor     eax, eax
0x9907D2: leave
0x9907D3: retn
