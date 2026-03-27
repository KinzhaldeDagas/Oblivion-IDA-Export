0x471560: fld     [esp+arg_0]
0x471564: push    esi
0x471565: sub     esp, 8
0x471568: fstp    [esp+0Ch+X]; X
0x47156B: mov     esi, ecx
0x47156D: call    __isnan
0x471572: add     esp, 8
0x471575: test    eax, eax
0x471577: jnz     short loc_471596
0x471579: fld     [esp+4+arg_0]
0x47157D: sub     esp, 8
0x471580: fstp    [esp+0Ch+X]; X
0x471583: call    __finite
0x471588: add     esp, 8
0x47158B: test    eax, eax
0x47158D: jz      short loc_471596
0x47158F: fld     [esp+4+arg_0]
0x471593: fstp    dword ptr [esi+1Ch]
0x471596: pop     esi
0x471597: retn    4
