0x576670: push    0FFFFFFFFh
0x576672: push    offset SEH_576670
0x576677: mov     eax, large fs:0
0x57667D: push    eax
0x57667E: sub     esp, 50h
0x576681: push    ebx
0x576682: push    ebp
0x576683: push    esi
0x576684: push    edi
0x576685: mov     eax, ds:0B30AACh
0x57668A: xor     eax, esp
0x57668C: push    eax
0x57668D: lea     eax, [esp+70h+var_C]
0x576691: mov     large fs:0, eax
0x576697: mov     edi, ecx
0x576699: mov     eax, [esp+70h+arg_0]
0x57669D: mov     eax, [eax]
0x57669F: xor     ebx, ebx
0x5766A1: push    ebx; a3
0x5766A2: push    eax; a2
0x5766A3: lea     ecx, [esp+78h+var_5C]; this
0x5766A7: mov     [esp+78h+var_5C.m_data], ebx
0x5766AB: mov     [esp+78h+var_5C.m_dataLen], bx
0x5766B0: mov     [esp+78h+var_5C.m_bufLen], bx
0x5766B5: call    BSStringT_Set
0x5766BA: mov     esi, [esp+70h+arg_8]
0x5766BE: cmp     [esi], ebx
0x5766C0: mov     [esp+70h+var_4], ebx
0x5766C4: jnz     short loc_5766CC
0x5766C6: mov     dword ptr [esi], 7FFFFFFFh
0x5766CC: mov     eax, [esp+70h+arg_10]
0x5766D3: cmp     eax, ebx
0x5766D5: jnz     short loc_5766DC
0x5766D7: mov     eax, 7FFFFFFFh
0x5766DC: cmp     dword ptr [edi+8], 3
0x5766E0: mov     [esp+70h+arg_8], ebx
0x5766E4: jnz     short loc_5766EE
0x5766E6: mov     [esp+70h+arg_8], 6
0x5766EE: mov     ecx, [esp+70h+arg_18]
0x5766F5: mov     edx, [esp+70h+arg_C]
0x5766FC: mov     ebp, [esp+70h+arg_4]
0x576700: push    ecx
0x576701: mov     ecx, [ebp+0]
0x576704: push    eax
0x576705: mov     eax, [esi]
0x576707: push    edx
0x576708: push    eax
0x576709: push    ecx
0x57670A: lea     ecx, [esp+84h+a2]
0x57670E: call    sub_575610
0x576713: lea     edx, [esp+70h+a2]
0x576717: push    edx
0x576718: lea     eax, [esp+74h+var_5C]
0x57671C: push    eax
0x57671D: mov     ecx, edi
0x57671F: mov     byte ptr [esp+78h+var_4], 1
0x576724: call    sub_575B40
0x576729: mov     ecx, [esp+70h+a2]
0x57672D: push    ebx; a3
0x57672E: push    ecx; a2
0x57672F: lea     ecx, [esp+78h+var_5C]; this
0x576733: call    BSStringT_Set
0x576738: mov     edx, [esp+70h+var_2C]
0x57673C: mov     eax, [esp+70h+var_28]
0x576740: mov     [ebp+0], edx
0x576743: mov     [esi], eax
0x576745: mov     eax, [esp+70h+arg_14]
0x57674C: xor     esi, esi
0x57674E: cmp     eax, 4
0x576751: mov     [esp+70h+arg_0], ebx
0x576755: jnz     short loc_576763
0x576757: mov     ecx, [esp+70h+var_14]
0x57675B: neg     ecx
0x57675D: mov     [esp+70h+arg_0], ecx
0x576761: jmp     short loc_57677D
0x576763: cmp     eax, 2
0x576766: jnz     short loc_57677D
0x576768: push    ebx
0x576769: lea     ecx, [esp+74h+a2]
0x57676D: call    sub_573D20
0x576772: cdq
0x576773: sub     eax, edx
0x576775: sar     eax, 1
0x576777: neg     eax
0x576779: mov     [esp+70h+arg_0], eax
0x57677D: cmp     byte ptr [esp+70h+arg_20], 0
0x576785: fild    [esp+70h+arg_0]
0x576789: fstp    [esp+70h+var_40]
0x57678D: fldz
0x57678F: fst     [esp+70h+var_38]
0x576793: fstp    [esp+70h+var_3C]
0x576797: jz      short loc_5767AF
0x576799: fld     dword ptr [edi+2Ch]
0x57679C: mov     edx, [edi+38h]
0x57679F: fsub    dword ptr [edx]
0x5767A1: fadd    st, st
0x5767A3: fiadd   [esp+70h+arg_8]
0x5767A7: fldz
0x5767A9: fsubrp  st(1), st
0x5767AB: fstp    [esp+70h+var_38]
0x5767AF: mov     eax, [esp+70h+arg_1C]
0x5767B6: mov     ecx, [esp+70h+var_1C]
0x5767BA: push    eax
0x5767BB: push    ecx
0x5767BC: mov     ecx, edi
0x5767BE: call    sub_574200
0x5767C3: fldz
0x5767C5: fst     dword ptr [esp+70h+var_4C]
0x5767C9: mov     ebp, eax
0x5767CB: mov     edx, dword ptr [esp+70h+var_4C]
0x5767CF: fst     dword ptr [esp+70h+var_4C+4]
0x5767D3: fld     [esp+70h+var_38]
0x5767D7: mov     eax, dword ptr [esp+70h+var_4C+4]
0x5767DB: mov     [ebp+54h], edx
0x5767DE: fstp    [esp+70h+var_44]
0x5767E2: mov     ecx, [esp+70h+var_44]
0x5767E6: mov     [ebp+58h], eax
0x5767E9: mov     [esp+70h+arg_20], ebx
0x5767F0: mov     [esp+70h+arg_0], ebx
0x5767F4: mov     ebx, [esp+70h+var_5C.m_data]
0x5767F8: mov     [ebp+5Ch], ecx
0x5767FB: cmp     byte ptr [ebx], 0
0x5767FE: jz      loc_5769CF
0x576804: fld     [esp+70h+var_40]
0x576808: mov     eax, ebx
0x57680A: fld     st
0x57680C: fst     [esp+70h+var_54]
0x576810: fstp    [esp+70h+var_4C]
0x576814: jmp     short loc_57681A
0x576816: fldz
0x576818: fxch    st(1)
0x57681A: mov     bl, [eax]
0x57681C: cmp     bl, byte ptr [esp+70h+arg_18]
0x576823: jnz     loc_5768D9
0x576829: mov     eax, [esp+70h+arg_14]
0x576830: fstp    st
0x576832: add     esi, 1
0x576835: fstp    [esp+70h+var_40]
0x576839: cmp     eax, 4
0x57683C: jnz     short loc_576883
0x57683E: xor     ecx, ecx
0x576840: test    esi, esi
0x576842: lea     eax, [esp+70h+var_14]
0x576846: jle     short loc_57685A
0x576848: test    eax, eax
0x57684A: jz      short loc_57686E
0x57684C: mov     eax, [eax+4]
0x57684F: add     ecx, 1
0x576852: cmp     ecx, esi
0x576854: jl      short loc_576848
0x576856: test    eax, eax
0x576858: jz      short loc_57686E
0x57685A: mov     eax, [eax]
0x57685C: neg     eax
0x57685E: mov     [esp+70h+arg_10], eax
0x576865: fild    [esp+70h+arg_10]
0x57686C: jmp     short loc_5768C0
0x57686E: or      eax, 0FFFFFFFFh
0x576871: neg     eax
0x576873: mov     [esp+70h+arg_10], eax
0x57687A: fild    [esp+70h+arg_10]
0x576881: jmp     short loc_5768C0
0x576883: cmp     eax, 2
0x576886: jnz     short loc_5768C4
0x576888: xor     ecx, ecx
0x57688A: test    esi, esi
0x57688C: lea     eax, [esp+70h+var_14]
0x576890: jle     short loc_5768A4
0x576892: test    eax, eax
0x576894: jz      short loc_5768A8
0x576896: mov     eax, [eax+4]
0x576899: add     ecx, 1
0x57689C: cmp     ecx, esi
0x57689E: jl      short loc_576892
0x5768A0: test    eax, eax
0x5768A2: jz      short loc_5768A8
0x5768A4: mov     eax, [eax]
0x5768A6: jmp     short loc_5768AB
0x5768A8: or      eax, 0FFFFFFFFh
0x5768AB: cdq
0x5768AC: sub     eax, edx
0x5768AE: sar     eax, 1
0x5768B0: neg     eax
0x5768B2: mov     [esp+70h+arg_10], eax
0x5768B9: fild    [esp+70h+arg_10]
0x5768C0: fstp    [esp+70h+var_40]
0x5768C4: fld     [esp+70h+var_38]
0x5768C8: mov     edx, [edi+38h]
0x5768CB: fild    [esp+70h+arg_8]
0x5768CF: fadd    dword ptr [edx]
0x5768D1: fsubp   st(1), st
0x5768D3: fstp    [esp+70h+var_38]
0x5768D7: jmp     short loc_576919
0x5768D9: cmp     bl, 9
0x5768DC: fstp    st(1)
0x5768DE: jnz     short loc_576917
0x5768E0: fld     qword ptr ds:0A68950h
0x5768E6: call    unknown_libname_14
0x5768EB: fstp    [esp+70h+arg_10]
0x5768F2: fld     [esp+70h+arg_10]
0x5768F9: fstp    [esp+70h+arg_10]
0x576900: fld     [esp+70h+arg_10]
0x576907: fsubr   qword ptr ds:0A68950h
0x57690D: fadd    [esp+70h+var_54]
0x576911: fstp    [esp+70h+var_40]
0x576915: jmp     short loc_576919
0x576917: fstp    st
0x576919: mov     al, bl
0x57691B: movzx   ecx, al
0x57691E: add     ecx, 0FFFFFF6Fh; switch 4 cases
0x576924: cmp     ecx, 3
0x576927: ja      short def_576929
0x576929: jmp     ds:jpt_576929[ecx*4]; switch jump
0x576930: mov     al, 27h ; '''; jumptable 00576929 cases 145,146
0x576932: jmp     short def_576929
0x576934: mov     al, 22h ; '"'; jumptable 00576929 cases 147,148
