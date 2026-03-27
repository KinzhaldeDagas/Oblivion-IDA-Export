0x7117C0: sub     esp, 98h
0x7117C6: push    esi
0x7117C7: push    edi
0x7117C8: mov     edi, ecx
0x7117CA: fld     [esp+0A0h+arg_4]
0x7117D1: fsincos
0x7117D3: fstp    [esp+0A0h+var_94]
0x7117D7: fstp    [esp+0A0h+var_98]
0x7117DB: fld1
0x7117DD: fstp    [esp+0A0h+var_90]
0x7117E1: fldz
0x7117E3: fst     [esp+0A0h+var_8C]
0x7117E7: fst     [esp+0A0h+var_88]
0x7117EB: fst     [esp+0A0h+var_84]
0x7117EF: fld     [esp+0A0h+var_94]
0x7117F3: fst     [esp+0A0h+var_80]
0x7117F7: fld     [esp+0A0h+var_98]
0x7117FB: fst     [esp+0A0h+var_7C]
0x7117FF: fxch    st(2)
0x711801: fstp    [esp+0A0h+var_78]
0x711805: fxch    st(1)
0x711807: fchs
0x711809: fstp    [esp+0A0h+var_74]
0x71180D: fstp    [esp+0A0h+var_70]
0x711811: fld     [esp+0A0h+arg_8]
0x711818: fsincos
0x71181A: fstp    [esp+0A0h+var_98]
0x71181E: fstp    [esp+0A0h+var_94]
0x711822: fld     [esp+0A0h+var_98]
0x711826: fst     [esp+0A0h+var_6C]
0x71182A: fldz
0x71182C: fst     [esp+0A0h+var_68]
0x711830: fld     [esp+0A0h+var_94]
0x711834: fld     st
0x711836: fchs
0x711838: fstp    [esp+0A0h+var_64]
0x71183C: fxch    st(1)
0x71183E: fst     [esp+0A0h+var_60]
0x711842: fld1
0x711844: fstp    [esp+0A0h+var_5C]
0x711848: fst     [esp+0A0h+var_58]
0x71184C: fstp    [esp+0A0h+var_50]
0x711850: fstp    [esp+0A0h+var_54]
0x711854: fstp    [esp+0A0h+var_4C]
0x711858: fld     [esp+0A0h+arg_0]
0x71185F: fsincos
0x711861: fstp    [esp+0A0h+var_98]
0x711865: fstp    [esp+0A0h+var_94]
0x711869: fld     [esp+0A0h+var_98]
0x71186D: lea     eax, [esp+0A0h+var_6C]
0x711871: fst     [esp+0A0h+var_48]
0x711875: push    eax
0x711876: fld     [esp+0A4h+var_94]
0x71187A: lea     ecx, [esp+0A4h+var_24]
0x711881: fst     [esp+0A4h+var_44]
0x711885: push    ecx
0x711886: fldz
0x711888: lea     ecx, [esp+0A8h+var_90]
0x71188C: fst     [esp+0A8h+var_40]
0x711890: fxch    st(1)
0x711892: fchs
0x711894: fstp    [esp+0A8h+var_3C]
0x711898: fxch    st(1)
0x71189A: fstp    [esp+0A8h+var_38]
0x71189E: fst     [esp+0A8h+var_34]
0x7118A2: fst     [esp+0A8h+var_30]
0x7118A6: fstp    [esp+0A8h+var_2C]
0x7118AA: fld1
0x7118AC: fstp    [esp+0A8h+var_28]
0x7118B3: call    NiMAtrix33_Multiply
0x7118B8: push    eax
0x7118B9: lea     edx, [esp+0A4h+var_90]
0x7118BD: push    edx
0x7118BE: lea     ecx, [esp+0A8h+var_48]
0x7118C2: call    NiMAtrix33_Multiply
0x7118C7: mov     ecx, 9
0x7118CC: mov     esi, eax
0x7118CE: rep movsd
0x7118D0: pop     edi
0x7118D1: pop     esi
0x7118D2: add     esp, 98h
0x7118D8: retn    0Ch
