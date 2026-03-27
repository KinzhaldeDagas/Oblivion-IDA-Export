0x4F76B0: fldz
0x4F76B2: push    esi
0x4F76B3: mov     esi, [esp+4+arg_0]
0x4F76B7: test    esi, esi
0x4F76B9: push    edi
0x4F76BA: mov     edi, [esp+8+arg_C]
0x4F76BE: fstp    qword ptr [edi]
0x4F76C0: jz      short def_4F7708; jumptable 004F7708 default case, cases 1,2
0x4F76C2: mov     eax, [esi]
0x4F76C4: mov     edx, [eax+190h]
0x4F76CA: mov     ecx, esi
0x4F76CC: call    edx
0x4F76CE: test    al, al
0x4F76D0: jz      short def_4F7708; jumptable 004F7708 default case, cases 1,2
0x4F76D2: mov     esi, [esi+58h]
0x4F76D5: push    0; int
0x4F76D7: push    offset ??_R0?AVMiddleHighProcess@@@8; struct TypeDescriptor *
0x4F76DC: push    offset ??_R0?AVBaseProcess@@@8; struct _s_RTTICompleteObjectLocator *
0x4F76E1: push    0; int
0x4F76E3: push    esi; void *
0x4F76E4: call    OblivionDynamicCast
0x4F76E9: add     esp, 14h
0x4F76EC: test    eax, eax
0x4F76EE: jz      short def_4F7708; jumptable 004F7708 default case, cases 1,2
0x4F76F0: mov     edx, [eax]
0x4F76F2: mov     ecx, eax
0x4F76F4: mov     eax, [edx+2E4h]
0x4F76FA: call    eax
0x4F76FC: cmp     eax, 6; switch 7 cases
0x4F76FF: ja      short def_4F7708; jumptable 004F7708 default case, cases 1,2
0x4F7701: movzx   ecx, ds:byte_4F7748[eax]
0x4F7708: jmp     ds:jpt_4F7708[ecx*4]; switch jump
0x4F770F: fldz; jumptable 004F7708 cases 0,5,6
0x4F7711: jmp     short loc_4F7715
0x4F7713: fld1; jumptable 004F7708 cases 3,4
0x4F7715: fstp    qword ptr [edi]
0x4F7717: cmp     byte ptr ds:0B361ACh, 0; jumptable 004F7708 default case, cases 1,2
0x4F771E: jz      short loc_4F7735
0x4F7720: fld     qword ptr [edi]
0x4F7722: sub     esp, 8
0x4F7725: fstp    [esp+10h+var_10]
0x4F7728: push    offset aGetKnockedStat; "Get Knocked State >> %0.2f"
0x4F772D: call    Interface_ConsolePrint
0x4F7732: add     esp, 0Ch
0x4F7735: pop     edi
0x4F7736: mov     al, 1
0x4F7738: pop     esi
0x4F7739: retn
