0x584D10: mov     eax, [esp+Str2]
0x584D14: mov     ecx, [esp+Str1]
0x584D18: push    eax; right
0x584D19: push    ecx; left
0x584D1A: call    CRT_StricmpLocaleDispatch
0x584D1F: add     esp, 8
0x584D22: neg     eax
0x584D24: sbb     eax, eax
0x584D26: add     eax, 1
0x584D29: retn    8
