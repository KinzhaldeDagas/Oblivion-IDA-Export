0x470FC0: mov     eax, [esp+arg_0]
0x470FC4: push    esi
0x470FC5: push    edi
0x470FC6: mov     edi, eax
0x470FC8: sub     eax, 5
0x470FCB: mov     esi, ecx
0x470FCD: jz      short loc_470FD6
0x470FCF: sub     eax, 1
0x470FD2: jz      short loc_470FF6
0x470FD4: jmp     short loc_47101D
0x470FD6: fld     [esp+8+arg_4]
0x470FDA: push    ecx
0x470FDB: fstp    [esp+0Ch+var_C]; float
0x470FDE: push    4; int
0x470FE0: call    sub_470FC0
0x470FE5: fld     [esp+8+arg_4]
0x470FE9: push    ecx
0x470FEA: fstp    [esp+0Ch+var_C]; float
0x470FED: push    0; int
0x470FEF: mov     ecx, esi
0x470FF1: call    sub_470FC0
0x470FF6: fld     [esp+8+arg_4]
0x470FFA: push    ecx
0x470FFB: fstp    [esp+0Ch+var_C]; float
0x470FFE: push    1; int
0x471000: mov     ecx, esi
0x471002: call    sub_470FC0
0x471007: fld     [esp+8+arg_4]
0x47100B: push    ecx
0x47100C: fstp    [esp+0Ch+var_C]; float
0x47100F: push    2; int
0x471011: mov     ecx, esi
0x471013: call    sub_470FC0
0x471018: mov     edi, 3
0x47101D: mov     ecx, [esi+98h]
0x471023: test    ecx, ecx
0x471025: jz      short loc_471088
0x471027: cmp     edi, 5
0x47102A: jge     short loc_471088
0x47102C: mov     eax, [esi+edi*4+0A0h]
0x471033: test    eax, eax
0x471035: jz      short loc_471088
0x471037: cmp     dword ptr [eax+44h], 0
0x47103B: jz      short loc_471088
0x47103D: mov     eax, [eax+58h]
0x471040: test    eax, eax
0x471042: jz      short loc_471052
0x471044: fld     [esp+8+arg_4]
0x471048: push    ecx
0x471049: fstp    [esp+0Ch+var_C]; float
0x47104C: push    eax; int
0x47104D: call    sub_470B50
0x471052: mov     eax, [esi+edi*4+0A0h]
0x471059: cmp     dword ptr [eax+44h], 5
0x47105D: jnz     short loc_471072
0x47105F: fld     [esp+8+arg_4]
0x471063: push    ecx
0x471064: mov     ecx, [esi+98h]
0x47106A: fstp    [esp+0Ch+var_C]; float
0x47106D: call    sub_6C4480
0x471072: fld     [esp+8+arg_4]
0x471076: push    0; char
0x471078: push    ecx
0x471079: mov     ecx, [esi+edi*4+0A0h]
0x471080: fstp    [esp+10h+var_10]; float
0x471083: call    sub_6C9CB0
0x471088: mov     dword ptr [esi+edi*4+0A0h], 0
0x471093: mov     eax, 0FFh
0x471098: mov     [esi+edi*2+3Ch], ax
0x47109D: mov     [esi+edi*2+70h], ax
0x4710A2: mov     dword ptr [esi+edi*4+48h], 0FFFFFFFFh
0x4710AA: pop     edi
0x4710AB: pop     esi
0x4710AC: retn    8
