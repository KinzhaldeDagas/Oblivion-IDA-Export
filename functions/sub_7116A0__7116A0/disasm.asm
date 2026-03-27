0x7116A0: sub     esp, 98h
0x7116A6: push    esi
0x7116A7: push    edi
0x7116A8: mov     edi, ecx
0x7116AA: fld     [esp+0A0h+arg_0]
0x7116B1: fsincos
0x7116B3: fstp    [esp+0A0h+var_94]
0x7116B7: fstp    [esp+0A0h+var_98]
0x7116BB: fld1
0x7116BD: fstp    [esp+0A0h+var_48]
0x7116C1: fldz
0x7116C3: fst     [esp+0A0h+var_44]
0x7116C7: fst     [esp+0A0h+var_40]
0x7116CB: fst     [esp+0A0h+var_3C]
0x7116CF: fld     [esp+0A0h+var_94]
0x7116D3: fst     [esp+0A0h+var_38]
0x7116D7: fld     [esp+0A0h+var_98]
0x7116DB: fst     [esp+0A0h+var_34]
0x7116DF: fxch    st(2)
0x7116E1: fstp    [esp+0A0h+var_30]
0x7116E5: fxch    st(1)
0x7116E7: fchs
0x7116E9: fstp    [esp+0A0h+var_2C]
0x7116ED: fstp    [esp+0A0h+var_28]
0x7116F1: fld     [esp+0A0h+arg_8]
0x7116F8: fsincos
0x7116FA: fstp    [esp+0A0h+var_98]
0x7116FE: fstp    [esp+0A0h+var_94]
0x711702: fld     [esp+0A0h+var_98]
0x711706: fst     [esp+0A0h+var_6C]
0x71170A: fldz
0x71170C: fst     [esp+0A0h+var_68]
0x711710: fld     [esp+0A0h+var_94]
0x711714: fld     st
0x711716: fchs
0x711718: fstp    [esp+0A0h+var_64]
0x71171C: fxch    st(1)
0x71171E: fst     [esp+0A0h+var_60]
0x711722: fld1
0x711724: fstp    [esp+0A0h+var_5C]
0x711728: fst     [esp+0A0h+var_58]
0x71172C: fstp    [esp+0A0h+var_50]
0x711730: fstp    [esp+0A0h+var_54]
0x711734: fstp    [esp+0A0h+var_4C]
0x711738: fld     [esp+0A0h+arg_4]
0x71173F: fsincos
0x711741: fstp    [esp+0A0h+var_98]
0x711745: fstp    [esp+0A0h+var_94]
0x711749: fld     [esp+0A0h+var_98]
0x71174D: lea     eax, [esp+0A0h+var_6C]
0x711751: fst     [esp+0A0h+var_90]
0x711755: push    eax
0x711756: fld     [esp+0A4h+var_94]
0x71175A: lea     ecx, [esp+0A4h+var_24]
0x711761: fst     [esp+0A4h+var_8C]
0x711765: push    ecx
0x711766: fldz
0x711768: lea     ecx, [esp+0A8h+var_90]
0x71176C: fst     [esp+0A8h+var_88]
0x711770: fxch    st(1)
0x711772: fchs
0x711774: fstp    [esp+0A8h+var_84]
0x711778: fxch    st(1)
0x71177A: fstp    [esp+0A8h+var_80]
0x71177E: fst     [esp+0A8h+var_7C]
0x711782: fst     [esp+0A8h+var_78]
0x711786: fstp    [esp+0A8h+var_74]
0x71178A: fld1
0x71178C: fstp    [esp+0A8h+var_70]
0x711790: call    NiMAtrix33_Multiply
0x711795: push    eax
0x711796: lea     edx, [esp+0A4h+var_90]
0x71179A: push    edx
0x71179B: lea     ecx, [esp+0A8h+var_48]
0x71179F: call    NiMAtrix33_Multiply
0x7117A4: mov     ecx, 9
0x7117A9: mov     esi, eax
0x7117AB: rep movsd
0x7117AD: pop     edi
0x7117AE: pop     esi
0x7117AF: add     esp, 98h
0x7117B5: retn    0Ch
