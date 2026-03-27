0x98443C: push    ebp
0x98443D: mov     ebp, esp
0x98443F: mov     ecx, [ebp+Ext]
0x984442: neg     ecx
0x984444: sbb     ecx, ecx
0x984446: mov     eax, 100h
0x98444B: and     ecx, eax
0x98444D: push    ecx
0x98444E: push    [ebp+Ext]
0x984451: mov     ecx, [ebp+Filename]
0x984454: neg     ecx
0x984456: sbb     ecx, ecx
0x984458: and     ecx, eax
0x98445A: push    ecx
0x98445B: mov     ecx, [ebp+Dir]
0x98445E: push    [ebp+Filename]
0x984461: neg     ecx
0x984463: sbb     ecx, ecx
0x984465: and     ecx, eax
0x984467: mov     eax, [ebp+Drive]
0x98446A: neg     eax
0x98446C: push    ecx
0x98446D: push    [ebp+Dir]
0x984470: sbb     eax, eax
0x984472: and     eax, 3
0x984475: push    eax
0x984476: push    [ebp+Drive]
0x984479: mov     eax, [ebp+FullPath]
0x98447C: call    __splitpath_helper
0x984481: add     esp, 20h
0x984484: pop     ebp
0x984485: retn
