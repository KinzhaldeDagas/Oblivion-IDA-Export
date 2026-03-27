0x6F8810: push    ebx
0x6F8811: mov     ebx, [esp+4+Src]
0x6F8815: push    ebp
0x6F8816: mov     ebp, [esp+8+DstSize]
0x6F881A: push    esi
0x6F881B: push    edi; MaxCount
0x6F881C: mov     edi, [esp+10h+arg_4]
0x6F8820: mov     esi, edi
0x6F8822: sub     esi, ebx
0x6F8824: cmp     ebp, esi
0x6F8826: jnb     short loc_6F882D
0x6F8828: call    __invalid_parameter_noinfo
0x6F882D: mov     eax, [esp+10h+Dst]
0x6F8831: push    esi; Src
0x6F8832: push    ebx; Src
0x6F8833: push    ebp; DstSize
0x6F8834: push    eax; Dst
0x6F8835: call    _memcpy_s
0x6F883A: add     esp, 10h
0x6F883D: mov     eax, edi
0x6F883F: pop     edi
0x6F8840: pop     esi
0x6F8841: pop     ebp
0x6F8842: pop     ebx
0x6F8843: retn    10h
