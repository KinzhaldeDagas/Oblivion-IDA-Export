0x4F57A0: mov     ecx, [esp+arg_0]
0x4F57A4: test    ecx, ecx
0x4F57A6: jnz     short loc_4F57AB
0x4F57A8: xor     al, al
0x4F57AA: retn
0x4F57AB: fldz
0x4F57AD: push    esi
0x4F57AE: mov     esi, [esp+4+arg_C]
0x4F57B2: fstp    qword ptr [esi]
0x4F57B4: push    8
0x4F57B6: call    sub_4D8260
0x4F57BB: test    al, al
0x4F57BD: jz      short loc_4F57C3
0x4F57BF: fld1
0x4F57C1: fstp    qword ptr [esi]
0x4F57C3: mov     al, 1
0x4F57C5: pop     esi
0x4F57C6: retn
