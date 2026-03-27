0x7118E0: sub     esp, 98h
0x7118E6: push    esi
0x7118E7: push    edi
0x7118E8: mov     edi, ecx
0x7118EA: fld     [esp+0A0h+arg_8]
0x7118F1: fsincos
0x7118F3: fstp    [esp+0A0h+var_94]
0x7118F7: fstp    [esp+0A0h+var_98]
0x7118FB: fld1
0x7118FD: fstp    [esp+0A0h+var_6C]
0x711901: fldz
0x711903: fst     [esp+0A0h+var_68]
0x711907: fst     [esp+0A0h+var_64]
0x71190B: fst     [esp+0A0h+var_60]
0x71190F: fld     [esp+0A0h+var_94]
0x711913: fst     [esp+0A0h+var_5C]
0x711917: fld     [esp+0A0h+var_98]
0x71191B: fst     [esp+0A0h+var_58]
0x71191F: fxch    st(2)
0x711921: fstp    [esp+0A0h+var_54]
0x711925: fxch    st(1)
0x711927: fchs
0x711929: fstp    [esp+0A0h+var_50]
0x71192D: fstp    [esp+0A0h+var_4C]
0x711931: fld     [esp+0A0h+arg_4]
0x711938: fsincos
0x71193A: fstp    [esp+0A0h+var_98]
0x71193E: fstp    [esp+0A0h+var_94]
0x711942: fld     [esp+0A0h+var_98]
0x711946: fst     [esp+0A0h+var_90]
0x71194A: fldz
0x71194C: fst     [esp+0A0h+var_8C]
0x711950: fld     [esp+0A0h+var_94]
0x711954: fld     st
0x711956: fchs
0x711958: fstp    [esp+0A0h+var_88]
0x71195C: fxch    st(1)
0x71195E: fst     [esp+0A0h+var_84]
0x711962: fld1
0x711964: fstp    [esp+0A0h+var_80]
0x711968: fst     [esp+0A0h+var_7C]
0x71196C: fstp    [esp+0A0h+var_74]
0x711970: fstp    [esp+0A0h+var_78]
0x711974: fstp    [esp+0A0h+var_70]
0x711978: fld     [esp+0A0h+arg_0]
0x71197F: fsincos
0x711981: fstp    [esp+0A0h+var_98]
0x711985: fstp    [esp+0A0h+var_94]
0x711989: fld     [esp+0A0h+var_98]
0x71198D: lea     eax, [esp+0A0h+var_6C]
0x711991: fst     [esp+0A0h+var_48]
0x711995: push    eax
0x711996: fld     [esp+0A4h+var_94]
0x71199A: lea     ecx, [esp+0A4h+var_24]
0x7119A1: fst     [esp+0A4h+var_44]
0x7119A5: push    ecx
0x7119A6: fldz
0x7119A8: lea     ecx, [esp+0A8h+var_90]
0x7119AC: fst     [esp+0A8h+var_40]
0x7119B0: fxch    st(1)
0x7119B2: fchs
0x7119B4: fstp    [esp+0A8h+var_3C]
0x7119B8: fxch    st(1)
0x7119BA: fstp    [esp+0A8h+var_38]
0x7119BE: fst     [esp+0A8h+var_34]
0x7119C2: fst     [esp+0A8h+var_30]
0x7119C6: fstp    [esp+0A8h+var_2C]
0x7119CA: fld1
0x7119CC: fstp    [esp+0A8h+var_28]
0x7119D3: call    NiMAtrix33_Multiply
0x7119D8: push    eax
0x7119D9: lea     edx, [esp+0A4h+var_90]
0x7119DD: push    edx
0x7119DE: lea     ecx, [esp+0A8h+var_48]
0x7119E2: call    NiMAtrix33_Multiply
0x7119E7: mov     ecx, 9
0x7119EC: mov     esi, eax
0x7119EE: rep movsd
0x7119F0: pop     edi
0x7119F1: pop     esi
0x7119F2: add     esp, 98h
0x7119F8: retn    0Ch
