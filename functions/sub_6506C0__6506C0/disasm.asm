0x6506C0: push    esi
0x6506C1: mov     esi, ecx
0x6506C3: cmp     byte ptr [esi+0D0h], 0
0x6506CA: push    edi; int
0x6506CB: mov     edi, [esp+8+arg_0]
0x6506CF: jnz     short loc_6506E4
0x6506D1: mov     eax, [esi]
0x6506D3: fldz
0x6506D5: mov     edx, [eax+194h]
0x6506DB: fstp    dword ptr [esi+0B8h]
0x6506E1: push    edi
0x6506E2: call    edx
0x6506E4: cmp     dword ptr [esi+2Ch], 0
0x6506E8: jnz     short loc_6506F7
0x6506EA: mov     eax, [esi]
0x6506EC: mov     edx, [eax+558h]
0x6506F2: push    edi
0x6506F3: mov     ecx, esi
0x6506F5: call    edx
0x6506F7: mov     ecx, [esi+2Ch]
0x6506FA: test    ecx, ecx
0x6506FC: jz      short loc_650749
0x6506FE: mov     eax, [ecx]
0x650700: mov     edx, [eax+170h]
0x650706: push    0; int
0x650708: push    offset ??_R0?AVTESObjectDOOR@@@8; struct TypeDescriptor *
0x65070D: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x650712: push    0; int
0x650714: call    edx
0x650716: push    eax; void *
0x650717: call    OblivionDynamicCast
0x65071C: add     esp, 14h
0x65071F: test    eax, eax
0x650721: jz      short loc_650749
0x650723: mov     ecx, [esi+2Ch]
0x650726: call    sub_4D7740
0x65072B: test    eax, eax
0x65072D: jz      short loc_65073A
0x65072F: mov     ecx, eax
0x650731: call    sub_428E70
0x650736: test    al, al
0x650738: jnz     short loc_650749
0x65073A: mov     eax, [esi]
0x65073C: mov     edx, [eax+188h]
0x650742: push    1
0x650744: push    edi
0x650745: mov     ecx, esi
0x650747: call    edx
0x650749: mov     eax, [edi]
0x65074B: mov     edx, [eax+164h]
0x650751: mov     ecx, edi
0x650753: call    edx
0x650755: test    eax, eax
0x650757: jz      short loc_65077C
0x650759: mov     ecx, eax
0x65075B: call    sub_472EA0
0x650760: test    al, al
0x650762: jz      short loc_65077C
0x650764: mov     ecx, [edi+58h]
0x650767: mov     eax, [ecx]
0x650769: mov     edx, [eax+8]
0x65076C: call    edx
0x65076E: test    eax, eax
0x650770: jnz     short loc_65077C
0x650772: mov     eax, [esi]
0x650774: mov     edx, [eax+48h]
0x650777: push    edi
0x650778: mov     ecx, esi
0x65077A: call    edx
0x65077C: fld     dword ptr ds:0B33E9Ch
0x650782: fadd    dword ptr [esi+0B8h]
0x650788: fstp    [esp+8+arg_0]
0x65078C: fld     [esp+8+arg_0]
0x650790: fst     dword ptr [esi+0B8h]
0x650796: fcomp   qword ptr ds:0A3AA50h
0x65079C: fnstsw  ax
0x65079E: test    ah, 1
0x6507A1: jnz     short loc_6507B2
0x6507A3: mov     ecx, edi; int
0x6507A5: call    sub_5EAE70
0x6507AA: fldz
0x6507AC: fstp    dword ptr [esi+0B8h]
0x6507B2: pop     edi
0x6507B3: pop     esi
0x6507B4: retn    4
