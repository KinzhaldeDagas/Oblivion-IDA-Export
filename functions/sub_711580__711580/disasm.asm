0x711580: sub     esp, 98h
0x711586: push    esi
0x711587: push    edi
0x711588: mov     edi, ecx
0x71158A: fld     [esp+0A0h+arg_0]
0x711591: fsincos
0x711593: fstp    [esp+0A0h+var_94]
0x711597: fstp    [esp+0A0h+var_98]
0x71159B: fld1
0x71159D: fstp    [esp+0A0h+var_48]
0x7115A1: fldz
0x7115A3: fst     [esp+0A0h+var_44]
0x7115A7: fst     [esp+0A0h+var_40]
0x7115AB: fst     [esp+0A0h+var_3C]
0x7115AF: fld     [esp+0A0h+var_94]
0x7115B3: fst     [esp+0A0h+var_38]
0x7115B7: fld     [esp+0A0h+var_98]
0x7115BB: fst     [esp+0A0h+var_34]
0x7115BF: fxch    st(2)
0x7115C1: fstp    [esp+0A0h+var_30]
0x7115C5: fxch    st(1)
0x7115C7: fchs
0x7115C9: fstp    [esp+0A0h+var_2C]
0x7115CD: fstp    [esp+0A0h+var_28]
0x7115D1: fld     [esp+0A0h+arg_4]
0x7115D8: fsincos
0x7115DA: fstp    [esp+0A0h+var_98]
0x7115DE: fstp    [esp+0A0h+var_94]
0x7115E2: fld     [esp+0A0h+var_98]
0x7115E6: fst     [esp+0A0h+var_90]
0x7115EA: fldz
0x7115EC: fst     [esp+0A0h+var_8C]
0x7115F0: fld     [esp+0A0h+var_94]
0x7115F4: fld     st
0x7115F6: fchs
0x7115F8: fstp    [esp+0A0h+var_88]
0x7115FC: fxch    st(1)
0x7115FE: fst     [esp+0A0h+var_84]
0x711602: fld1
0x711604: fstp    [esp+0A0h+var_80]
0x711608: fst     [esp+0A0h+var_7C]
0x71160C: fstp    [esp+0A0h+var_74]
0x711610: fstp    [esp+0A0h+var_78]
0x711614: fstp    [esp+0A0h+var_70]
0x711618: fld     [esp+0A0h+arg_8]
0x71161F: fsincos
0x711621: fstp    [esp+0A0h+var_98]
0x711625: fstp    [esp+0A0h+var_94]
0x711629: fld     [esp+0A0h+var_98]
0x71162D: lea     eax, [esp+0A0h+var_6C]
0x711631: fst     [esp+0A0h+var_6C]
0x711635: push    eax
0x711636: fld     [esp+0A4h+var_94]
0x71163A: lea     ecx, [esp+0A4h+var_24]
0x711641: fst     [esp+0A4h+var_68]
0x711645: push    ecx
0x711646: fldz
0x711648: lea     ecx, [esp+0A8h+var_90]
0x71164C: fst     [esp+0A8h+var_64]
0x711650: fxch    st(1)
0x711652: fchs
0x711654: fstp    [esp+0A8h+var_60]
0x711658: fxch    st(1)
0x71165A: fstp    [esp+0A8h+var_5C]
0x71165E: fst     [esp+0A8h+var_58]
0x711662: fst     [esp+0A8h+var_54]
0x711666: fstp    [esp+0A8h+var_50]
0x71166A: fld1
0x71166C: fstp    [esp+0A8h+var_4C]
0x711670: call    NiMAtrix33_Multiply
0x711675: push    eax
0x711676: lea     edx, [esp+0A4h+var_90]
0x71167A: push    edx
0x71167B: lea     ecx, [esp+0A8h+var_48]
0x71167F: call    NiMAtrix33_Multiply
0x711684: mov     ecx, 9
0x711689: mov     esi, eax
0x71168B: rep movsd
0x71168D: pop     edi
0x71168E: pop     esi
0x71168F: add     esp, 98h
0x711695: retn    0Ch
