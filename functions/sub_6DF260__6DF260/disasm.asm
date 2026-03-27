0x6DF260: push    esi
0x6DF261: push    edi
0x6DF262: lea     esi, [ecx+38h]
0x6DF265: mov     edi, 3
0x6DF26A: lea     ebx, [ebx+0]
0x6DF270: mov     ecx, [esi]
0x6DF272: test    ecx, ecx
0x6DF274: jz      short loc_6DF292
0x6DF276: fld     [esp+8+arg_4]
0x6DF27A: mov     eax, [ecx]
0x6DF27C: mov     edx, [eax+84h]
0x6DF282: sub     esp, 8
0x6DF285: fstp    [esp+10h+var_C]
0x6DF289: fld     [esp+10h+arg_0]
0x6DF28D: fstp    [esp+10h+var_10]
0x6DF290: call    edx
0x6DF292: add     esi, 4
0x6DF295: sub     edi, 1
0x6DF298: jnz     short loc_6DF270
0x6DF29A: pop     edi
0x6DF29B: pop     esi
0x6DF29C: retn    8
