0x68A140: cmp     dword ptr [ecx+4], 0
0x68A144: mov     al, 1
0x68A146: jz      short locret_68A150
0x68A148: cmp     dword ptr [ecx+8], 0
0x68A14C: jz      short locret_68A150
0x68A14E: xor     al, al
0x68A150: retn
