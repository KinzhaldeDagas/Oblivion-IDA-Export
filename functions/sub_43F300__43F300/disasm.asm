0x43F300: add     dword ptr [ecx+7Ch], 0FFFFFFFFh
0x43F304: jnz     short loc_43F30D
0x43F306: mov     dword ptr [ecx+78h], 0
0x43F30D: push    ecx; lpCriticalSection
0x43F30E: call    dword ptr ds:0A28074h
0x43F314: retn
