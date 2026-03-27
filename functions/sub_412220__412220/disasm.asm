0x412220: mov     edx, ecx
0x412222: mov     ecx, [esp+arg_4]
0x412226: shl     ecx, 4
0x412229: add     ecx, [esp+arg_0]
0x41222D: push    esi
0x41222E: mov     eax, ecx
0x412230: shr     eax, 5
0x412233: mov     esi, eax
0x412235: shl     esi, 5
0x412238: sub     ecx, esi
0x41223A: mov     esi, 1
0x41223F: shl     esi, cl
0x412241: test    [edx+eax*4+4], esi
0x412245: pop     esi
0x412246: setnz   al
0x412249: retn    8
