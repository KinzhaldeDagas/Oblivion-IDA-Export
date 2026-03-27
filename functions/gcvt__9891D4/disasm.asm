0x9891D4: push    [esp+NumOfDigits]; NumOfDigits
0x9891D8: fld     [esp+4+Val]
0x9891DC: push    ecx; Val
0x9891DD: push    ecx
0x9891DE: fstp    [esp+0Ch+var_C]; Val
0x9891E1: push    0FFFFFFFFh; Size
0x9891E3: push    [esp+10h+DstBuf]; DstBuf
0x9891E7: call    __gcvt_s
0x9891EC: add     esp, 14h
0x9891EF: neg     eax
0x9891F1: sbb     eax, eax
0x9891F3: not     eax
0x9891F5: and     eax, [esp+DstBuf]
0x9891F9: retn
