0x8BB160: push    esi
0x8BB161: mov     esi, ecx
0x8BB163: mov     eax, [esi]
0x8BB165: call    dword ptr [eax+28h]
0x8BB168: xor     ecx, ecx
0x8BB16A: cmp     eax, 0FFFFFFFFh
0x8BB16D: setz    cl
0x8BB170: mov     [esi+8], eax
0x8BB173: pop     esi
0x8BB174: mov     eax, ecx
0x8BB176: retn    4
