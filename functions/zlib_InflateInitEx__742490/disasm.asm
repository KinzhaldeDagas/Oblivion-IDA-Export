0x742490: mov     eax, [esp+a3]
0x742494: mov     ecx, [esp+a2]
0x742498: mov     edx, [esp+a1]
0x74249C: push    eax; int
0x74249D: push    ecx; _BYTE *
0x74249E: push    0Fh; signed int
0x7424A0: push    edx; _DWORD *
0x7424A1: call    zlib_InflateInit2
0x7424A6: add     esp, 10h
0x7424A9: retn
