0x65A450: push    esi
0x65A451: mov     esi, ecx
0x65A453: cmp     dword ptr [esi+58h], 0
0x65A457: jz      short def_65A487; jumptable 0065A487 default case, cases 6-8
0x65A459: mov     eax, [esi]
0x65A45B: mov     edx, [eax+19Ch]
0x65A461: call    edx
0x65A463: test    al, al
0x65A465: jnz     loc_65A53D
0x65A46B: mov     ecx, [esi+58h]
0x65A46E: mov     eax, [ecx]
0x65A470: mov     edx, [eax+36Ch]
0x65A476: call    edx
0x65A478: add     eax, 0FFFFFFFCh; switch 7 cases
0x65A47B: cmp     eax, 6
0x65A47E: ja      short def_65A487; jumptable 0065A487 default case, cases 6-8
0x65A480: movzx   eax, ds:byte_65A54C[eax]
0x65A487: jmp     ds:jpt_65A487[eax*4]; switch jump
0x65A48E: mov     ecx, [esi+58h]; jumptable 0065A487 cases 4,5,9,10
0x65A491: mov     edx, [ecx]
0x65A493: mov     eax, [edx+378h]
0x65A499: call    eax
0x65A49B: test    eax, eax
0x65A49D: jz      short def_65A487; jumptable 0065A487 default case, cases 6-8
0x65A49F: push    0; int
0x65A4A1: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x65A4A6: push    offset ??_R0?AVMobileObject@@@8; struct _s_RTTICompleteObjectLocator *
0x65A4AB: push    0; int
0x65A4AD: push    esi; void *
0x65A4AE: call    OblivionDynamicCast
0x65A4B3: add     esp, 14h
0x65A4B6: test    eax, eax
0x65A4B8: jz      short def_65A487; jumptable 0065A487 default case, cases 6-8
0x65A4BA: mov     edx, [eax]
0x65A4BC: mov     ecx, eax
0x65A4BE: mov     eax, [edx+380h]
0x65A4C4: call    eax
0x65A4C6: test    eax, eax
0x65A4C8: jz      short loc_65A53D
0x65A4CA: fldz; jumptable 0065A487 default case, cases 6-8
0x65A4CC: fld     [esp+4+arg_0]
0x65A4D0: fcom    st(1)
0x65A4D2: fnstsw  ax
0x65A4D4: fstp    st(1)
0x65A4D6: test    ah, 5
0x65A4D9: fld     qword ptr ds:0A3D5B0h
0x65A4DF: jp      short loc_65A50B
0x65A4E1: fadd    st(1), st
0x65A4E3: fxch    st(1)
0x65A4E5: fstp    [esp+4+arg_0]
0x65A4E9: fld     [esp+4+arg_0]
0x65A4ED: fxch    st(1)
0x65A4EF: call    unknown_libname_14
0x65A4F4: fstp    [esp+4+arg_0]
0x65A4F8: fld     [esp+4+arg_0]
0x65A4FC: push    ecx
0x65A4FD: mov     ecx, esi
0x65A4FF: fstp    [esp+8+var_8]; float
0x65A502: call    sub_4D8A10
0x65A507: pop     esi
0x65A508: retn    4
0x65A50B: fcom    st(1)
0x65A50D: fnstsw  ax
0x65A50F: test    ah, 5
0x65A512: jp      short loc_65A530
0x65A514: call    unknown_libname_14
0x65A519: fstp    [esp+4+arg_0]
0x65A51D: fld     [esp+4+arg_0]
0x65A521: push    ecx
0x65A522: mov     ecx, esi
0x65A524: fstp    [esp+8+var_8]; float
0x65A527: call    sub_4D8A10
0x65A52C: pop     esi
0x65A52D: retn    4
0x65A530: push    ecx
0x65A531: fstp    st
0x65A533: mov     ecx, esi
0x65A535: fstp    [esp+8+var_8]; float
0x65A538: call    sub_4D8A10
0x65A53D: pop     esi
0x65A53E: retn    4
