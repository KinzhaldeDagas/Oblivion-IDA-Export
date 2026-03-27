0x4FD060: lea     eax, [ecx+44h]
0x4FD063: test    eax, eax
0x4FD065: jz      short loc_4FD080
0x4FD067: mov     edx, [eax]
0x4FD069: test    edx, edx
0x4FD06B: jz      short loc_4FD080
0x4FD06D: cmp     dword ptr [edx+8], 0
0x4FD071: mov     eax, [eax+4]
0x4FD074: jnz     short loc_4FD07C
0x4FD076: cmp     dword ptr [edx+0Ch], 0
0x4FD07A: jz      short loc_4FD083
0x4FD07C: test    eax, eax
0x4FD07E: jnz     short loc_4FD067
0x4FD080: mov     al, 1
0x4FD082: retn
0x4FD083: mov     eax, [edx]
0x4FD085: push    eax; ArgList
0x4FD086: push    offset aUnknownRefer_1; "Unknown referenced object '%s'."
0x4FD08B: push    ecx; int
0x4FD08C: call    sub_4FCE30
0x4FD091: add     esp, 0Ch
0x4FD094: xor     al, al
0x4FD096: retn
