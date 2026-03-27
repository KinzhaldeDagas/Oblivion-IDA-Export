0x9928B1: push    ebp
0x9928B2: mov     ebp, esp
0x9928B4: push    ecx
0x9928B5: push    ecx
0x9928B6: mov     eax, [ebp+arg_8]
0x9928B9: fld     [ebp+arg_0]
0x9928BC: mov     ecx, dword ptr [ebp+arg_0+6]
0x9928BF: fstp    [ebp+var_8]
0x9928C2: add     eax, 3FEh
0x9928C7: shl     eax, 4
0x9928CA: and     ecx, 0FFFF800Fh
0x9928D0: or      eax, ecx
0x9928D2: mov     word ptr [ebp+var_8+6], ax
0x9928D6: fld     [ebp+var_8]
0x9928D9: leave
0x9928DA: retn
