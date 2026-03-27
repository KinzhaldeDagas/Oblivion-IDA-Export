0x984012: mov     eax, dword ptr [esp+X+6]
0x984016: mov     ecx, 7FF8h
0x98401B: and     eax, ecx
0x98401D: cmp     ax, 7FF0h
0x984021: jnz     short loc_984034
0x984023: test    dword ptr [esp+X+4], 7FFFFh
0x98402B: jnz     short loc_984039
0x98402D: cmp     dword ptr [esp+X], 0
0x984032: jnz     short loc_984039
0x984034: cmp     ax, cx
0x984037: jnz     short loc_98403D
0x984039: xor     eax, eax
0x98403B: inc     eax
0x98403C: retn
0x98403D: xor     eax, eax
0x98403F: retn
