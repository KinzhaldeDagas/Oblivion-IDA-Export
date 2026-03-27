0x98BC19: mov     eax, [esp+arg_0]
0x98BC1D: mov     ecx, offset off_B30E28
0x98BC22: cmp     eax, ecx
0x98BC24: jb      short loc_98BC3D
0x98BC26: cmp     eax, offset stru_B31088
0x98BC2B: ja      short loc_98BC3D
0x98BC2D: sub     eax, ecx
0x98BC2F: sar     eax, 5
0x98BC32: add     eax, 10h
0x98BC35: push    eax
0x98BC36: call    __unlock
0x98BC3B: pop     ecx
0x98BC3C: retn
0x98BC3D: add     eax, 20h ; ' '
0x98BC40: push    eax; lpCriticalSection
0x98BC41: call    ds:LeaveCriticalSection
0x98BC47: retn
