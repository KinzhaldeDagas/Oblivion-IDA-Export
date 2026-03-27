0x747D10: mov     eax, [ecx+1Ch]
0x747D13: mov     ecx, [esp+Count]
0x747D17: mov     edx, [esp+DstBuf]
0x747D1B: push    eax; Count
0x747D1C: push    ecx; Count
0x747D1D: push    1; ElementSize
0x747D1F: push    edx; DstBuf
0x747D20: call    _fread
0x747D25: add     esp, 10h
0x747D28: retn    8
