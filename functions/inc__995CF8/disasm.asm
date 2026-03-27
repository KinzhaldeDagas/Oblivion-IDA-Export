0x995CF8: dec     dword ptr [edx+4]
0x995CFB: js      short loc_995D06
0x995CFD: mov     ecx, [edx]
0x995CFF: movzx   eax, byte ptr [ecx]
0x995D02: inc     ecx
0x995D03: mov     [edx], ecx
0x995D05: retn
0x995D06: push    edx; File
0x995D07: call    __filbuf
0x995D0C: pop     ecx
0x995D0D: retn
