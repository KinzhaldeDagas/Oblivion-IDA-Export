0x754C80: push    0B0h ; '°'; Size
0x754C85: call    FormHeapAlloc
0x754C8A: add     esp, 4
0x754C8D: test    eax, eax
0x754C8F: jz      short loc_754CAB
0x754C91: fld1
0x754C93: push    ecx
0x754C94: fst     [esp+4+var_4]; float
0x754C97: push    0; int
0x754C99: push    0; int
0x754C9B: push    0; char
0x754C9D: push    0; char
0x754C9F: push    ecx
0x754CA0: mov     ecx, eax
0x754CA2: fstp    [esp+18h+var_18]; float
0x754CA5: call    sub_754B20
0x754CAA: retn
0x754CAB: xor     eax, eax
0x754CAD: retn
