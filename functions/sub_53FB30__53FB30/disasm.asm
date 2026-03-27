0x53FB30: mov     ecx, ds:0B365C4h
0x53FB36: test    ecx, ecx
0x53FB38: jz      short loc_53FB42
0x53FB3A: mov     eax, [ecx]
0x53FB3C: mov     edx, [eax]
0x53FB3E: push    1
0x53FB40: call    edx
0x53FB42: mov     dword ptr ds:0B365C4h, 0
0x53FB4C: retn
