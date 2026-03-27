0x812EF0: mov     eax, [esp+arg_0]
0x812EF4: sub     esp, 84h
0x812EFA: cmp     eax, 5; switch 6 cases
0x812EFD: ja      def_812F03
0x812F03: jmp     ds:jpt_812F03[eax*4]; switch jump
0x812F0A: fld     dword ptr ds:0B258DCh; jumptable 00812F03 case 0
0x812F10: lea     eax, [esp+84h+var_78]
0x812F14: fchs
0x812F16: push    eax
0x812F17: fstp    [esp+88h+var_78]
0x812F1B: lea     edx, [esp+88h+var_18]
0x812F1F: fld     dword ptr ds:0B258E0h
0x812F25: push    edx
0x812F26: fchs
0x812F28: fstp    [esp+8Ch+var_74]
0x812F2C: fld     dword ptr ds:0B258E4h
0x812F32: fchs
0x812F34: fstp    [esp+8Ch+var_70]
0x812F38: fld     dword ptr [ecx+88h]
0x812F3E: fsub    dword ptr ds:0B258D0h
0x812F44: fstp    [esp+8Ch+var_18]
0x812F48: fld     dword ptr [ecx+8Ch]
0x812F4E: fsub    dword ptr ds:0B258D4h
0x812F54: fstp    [esp+8Ch+var_14]
0x812F58: fld     dword ptr [ecx+90h]
0x812F5E: fsub    dword ptr ds:0B258D8h
0x812F64: fstp    [esp+8Ch+var_10]
0x812F68: call    sub_70C340
0x812F6D: add     esp, 84h
0x812F73: retn    4
0x812F76: fld     dword ptr ds:0B258DCh; jumptable 00812F03 case 1
0x812F7C: lea     eax, [esp+84h+var_60]
0x812F80: fchs
0x812F82: push    eax
0x812F83: fstp    [esp+88h+var_60]
0x812F87: lea     edx, [esp+88h+var_30]
0x812F8B: fld     dword ptr ds:0B258E0h
0x812F91: push    edx
0x812F92: fchs
0x812F94: fstp    [esp+8Ch+var_5C]
0x812F98: fld     dword ptr ds:0B258E4h
0x812F9E: fchs
0x812FA0: fstp    [esp+8Ch+var_58]
0x812FA4: fld     dword ptr ds:0B258D0h
0x812FAA: fadd    dword ptr [ecx+88h]
0x812FB0: fstp    [esp+8Ch+var_30]
0x812FB4: fld     dword ptr [ecx+8Ch]
0x812FBA: fadd    dword ptr ds:0B258D4h
0x812FC0: fstp    [esp+8Ch+var_2C]
0x812FC4: fld     dword ptr [ecx+90h]
0x812FCA: fadd    dword ptr ds:0B258D8h
0x812FD0: fstp    [esp+8Ch+var_28]
0x812FD4: call    sub_70C340
0x812FD9: add     esp, 84h
0x812FDF: retn    4
0x812FE2: fld     dword ptr [ecx+88h]; jumptable 00812F03 case 2
0x812FE8: push    offset dword_B258E8
0x812FED: fsub    dword ptr ds:0B258DCh
0x812FF3: lea     eax, [esp+88h+var_48]
0x812FF7: push    eax
0x812FF8: fstp    [esp+8Ch+var_48]
0x812FFC: fld     dword ptr [ecx+8Ch]
0x813002: fsub    dword ptr ds:0B258E0h
0x813008: fstp    [esp+8Ch+var_44]
0x81300C: fld     dword ptr [ecx+90h]
0x813012: fsub    dword ptr ds:0B258E4h
0x813018: fstp    [esp+8Ch+var_40]
0x81301C: call    sub_70C340
0x813021: add     esp, 84h
0x813027: retn    4
0x81302A: fld     dword ptr ds:0B258E8h; jumptable 00812F03 case 3
0x813030: lea     edx, [esp+84h+var_84]
0x813033: fchs
0x813035: lea     eax, [esp+84h+var_6C]
0x813039: fstp    [esp+84h+var_84]
0x81303C: push    edx
0x81303D: fld     dword ptr ds:0B258ECh
0x813043: push    eax
0x813044: fchs
0x813046: fstp    [esp+8Ch+var_80]
0x81304A: fld     dword ptr ds:0B258F0h
0x813050: fchs
0x813052: fstp    [esp+8Ch+var_7C]
0x813056: fld     dword ptr [ecx+88h]
0x81305C: fadd    dword ptr ds:0B258DCh
0x813062: fstp    [esp+8Ch+var_6C]
0x813066: fld     dword ptr [ecx+8Ch]
0x81306C: fadd    dword ptr ds:0B258E0h
0x813072: fstp    [esp+8Ch+var_68]
0x813076: fld     dword ptr [ecx+90h]
0x81307C: fadd    dword ptr ds:0B258E4h
0x813082: fstp    [esp+8Ch+var_64]
0x813086: call    sub_70C340
0x81308B: add     esp, 84h
0x813091: retn    4
0x813094: fld     dword ptr ds:0B258DCh; jumptable 00812F03 case 4
0x81309A: lea     edx, [esp+84h+var_54]
0x81309E: fchs
0x8130A0: lea     eax, [esp+84h+var_3C]
0x8130A4: fstp    [esp+84h+var_54]
0x8130A8: push    edx
0x8130A9: fld     dword ptr ds:0B258E0h
0x8130AF: push    eax
0x8130B0: fchs
0x8130B2: fstp    [esp+8Ch+var_50]
0x8130B6: fld     dword ptr ds:0B258E4h
0x8130BC: fchs
0x8130BE: fstp    [esp+8Ch+var_4C]
0x8130C2: fld     dword ptr [ecx+88h]
0x8130C8: fsub    dword ptr ds:0B258E8h
0x8130CE: fstp    [esp+8Ch+var_3C]
0x8130D2: fld     dword ptr [ecx+8Ch]
0x8130D8: fsub    dword ptr ds:0B258ECh
0x8130DE: fstp    [esp+8Ch+var_38]
0x8130E2: fld     dword ptr [ecx+90h]
0x8130E8: fsub    dword ptr ds:0B258F0h
0x8130EE: fstp    [esp+8Ch+var_34]
0x8130F2: call    sub_70C340
0x8130F7: add     esp, 84h
0x8130FD: retn    4
0x813100: fld     dword ptr ds:0B258DCh; jumptable 00812F03 case 5
0x813106: lea     edx, [esp+84h+var_24]
0x81310A: fchs
0x81310C: lea     eax, [esp+84h+var_C]
0x813110: fstp    [esp+84h+var_24]
0x813114: push    edx
0x813115: fld     dword ptr ds:0B258E0h
0x81311B: push    eax
0x81311C: fchs
0x81311E: fstp    [esp+8Ch+var_20]
0x813122: fld     dword ptr ds:0B258E4h
0x813128: fchs
0x81312A: fstp    [esp+8Ch+var_1C]
0x81312E: fld     dword ptr [ecx+88h]
0x813134: fadd    dword ptr ds:0B258E8h
0x81313A: fstp    [esp+8Ch+var_C]
0x813141: fld     dword ptr [ecx+8Ch]
0x813147: fadd    dword ptr ds:0B258ECh
0x81314D: fstp    [esp+8Ch+var_8]
0x813154: fld     dword ptr [ecx+90h]
0x81315A: fadd    dword ptr ds:0B258F0h
0x813160: fstp    [esp+8Ch+var_4]
0x813167: call    sub_70C340
