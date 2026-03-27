0x54A120: push    esi
0x54A121: mov     esi, ecx
0x54A123: fld     dword ptr [esi+1C8h]
0x54A129: fsub    [esp+4+arg_C]
0x54A12D: fstp    [esp+4+arg_C]
0x54A131: fld     [esp+4+arg_C]
0x54A135: fst     dword ptr [esi+1C8h]
0x54A13B: fldz
0x54A13D: fcompp
0x54A13F: fnstsw  ax
0x54A141: test    ah, 1
0x54A144: jnz     def_54A161
0x54A14A: mov     eax, [esp+4+arg_0]
0x54A14E: add     eax, 1; switch 14 cases
0x54A151: cmp     eax, 0Dh
0x54A154: ja      def_54A161
0x54A15A: movzx   eax, ds:byte_54A3A0[eax]
0x54A161: jmp     ds:jpt_54A161[eax*4]; switch jump
0x54A168: fld     dword ptr ds:0A3744Ch; jumptable 0054A161 cases -1,0,5-8
0x54A16E: push    ecx
0x54A16F: fstp    [esp+8+var_8]; float
0x54A172: call    Rand8
0x54A177: add     esp, 4
0x54A17A: sub     esp, 8
0x54A17D: test    al, al
0x54A17F: jz      short loc_54A1B2
0x54A181: fld     dword ptr ds:0A46C30h
0x54A187: fstp    [esp+0Ch+var_8]; float
0x54A18B: fld     dword ptr ds:0A379B4h
0x54A191: fstp    [esp+0Ch+var_C]; float
0x54A194: call    Rand4
0x54A199: fstp    dword ptr [esi+1C8h]
0x54A19F: fldz
0x54A1A1: fst     dword ptr [esi+1CCh]
0x54A1A7: fstp    dword ptr [esi+1D0h]
0x54A1AD: jmp     loc_54A36D
0x54A1B2: fld     dword ptr ds:0A35AA4h
0x54A1B8: fstp    [esp+0Ch+var_8]; float
0x54A1BC: fld     dword ptr ds:0A3D65Ch
0x54A1C2: fstp    [esp+0Ch+var_C]; float
0x54A1C5: call    Rand4
0x54A1CA: fstp    dword ptr [esi+1C8h]
0x54A1D0: fld     dword ptr ds:0A57F50h
0x54A1D6: fstp    [esp+0Ch+var_8]; float
0x54A1DA: fld     dword ptr ds:0A641BCh
0x54A1E0: fstp    [esp+0Ch+var_C]; float
0x54A1E3: call    Rand4
0x54A1E8: fstp    dword ptr [esi+1D0h]
0x54A1EE: fld     dword ptr ds:0A2FAACh
0x54A1F4: fstp    [esp+0Ch+var_8]
0x54A1F8: fld     dword ptr ds:0A641B8h
0x54A1FE: jmp     loc_54A35F
0x54A203: fld     dword ptr ds:0A3744Ch; jumptable 0054A161 cases 2,4,9-12
0x54A209: push    ecx
0x54A20A: fstp    [esp+8+var_8]; float
0x54A20D: call    Rand8
0x54A212: add     esp, 4
0x54A215: sub     esp, 8
0x54A218: test    al, al
0x54A21A: jz      short loc_54A231
0x54A21C: fld     dword ptr ds:0A46B10h
0x54A222: fstp    [esp+0Ch+var_8]
0x54A226: fld     dword ptr ds:0A46C30h
0x54A22C: jmp     loc_54A191
0x54A231: fld     dword ptr ds:0A35AA4h
0x54A237: fstp    [esp+0Ch+var_8]; float
0x54A23B: fld     dword ptr ds:0A3D65Ch
0x54A241: fstp    [esp+0Ch+var_C]; float
0x54A244: call    Rand4
0x54A249: fstp    dword ptr [esi+1C8h]
0x54A24F: fld     dword ptr ds:0A57F50h
0x54A255: fstp    [esp+0Ch+var_8]; float
0x54A259: fld     dword ptr ds:0A641BCh
0x54A25F: fstp    [esp+0Ch+var_C]; float
0x54A262: call    Rand4
0x54A267: fstp    dword ptr [esi+1D0h]
0x54A26D: fld     dword ptr ds:0A3D9A4h
0x54A273: fstp    [esp+0Ch+var_8]
0x54A277: fld     dword ptr ds:0A5AC50h
0x54A27D: jmp     loc_54A35F
0x54A282: fld     dword ptr ds:0A46C30h; jumptable 0054A161 case 3
0x54A288: sub     esp, 8
0x54A28B: fstp    [esp+0Ch+var_8]; float
0x54A28F: fld     dword ptr ds:0A379B4h
0x54A295: fstp    [esp+0Ch+var_C]; float
0x54A298: call    Rand4
0x54A29D: fstp    dword ptr [esi+1C8h]
0x54A2A3: add     esp, 4
0x54A2A6: fld     dword ptr ds:0A3744Ch
0x54A2AC: fstp    [esp+8+var_8]; float
0x54A2AF: call    Rand8
0x54A2B4: add     esp, 4
0x54A2B7: test    al, al
0x54A2B9: jz      short loc_54A2CE
0x54A2BB: fldz
0x54A2BD: fst     dword ptr [esi+1CCh]
0x54A2C3: fstp    dword ptr [esi+1D0h]
0x54A2C9: jmp     def_54A161
0x54A2CE: fld     dword ptr ds:0A641BCh
0x54A2D4: sub     esp, 8
0x54A2D7: fstp    [esp+0Ch+var_8]; float
0x54A2DB: fld     dword ptr ds:0A641B4h
0x54A2E1: fstp    [esp+0Ch+var_C]; float
0x54A2E4: call    Rand4
0x54A2E9: fstp    dword ptr [esi+1D0h]
0x54A2EF: fld     dword ptr ds:0A47E6Ch
0x54A2F5: fstp    [esp+0Ch+var_8]
0x54A2F9: fld     dword ptr ds:0A641B0h
0x54A2FF: jmp     short loc_54A35F
0x54A301: fld     dword ptr ds:0A35AA4h; jumptable 0054A161 case 1
0x54A307: sub     esp, 8
0x54A30A: fstp    [esp+0Ch+var_8]; float
0x54A30E: fld     dword ptr ds:0A3D65Ch
0x54A314: fstp    [esp+0Ch+var_C]; float
0x54A317: call    Rand4
0x54A31C: fstp    dword ptr [esi+1C8h]
0x54A322: add     esp, 4
0x54A325: fldz
0x54A327: fstp    dword ptr [esi+1D0h]
0x54A32D: fld     dword ptr ds:0A3D65Ch
0x54A333: fstp    [esp+8+var_8]; float
0x54A336: call    Rand8
0x54A33B: add     esp, 4
0x54A33E: test    al, al
0x54A340: jz      short loc_54A34C
0x54A342: fldz
0x54A344: fstp    dword ptr [esi+1CCh]
0x54A34A: jmp     short def_54A161
0x54A34C: fld     dword ptr ds:0A3D65Ch
0x54A352: sub     esp, 8
0x54A355: fstp    [esp+0Ch+var_8]; float
0x54A359: fld     dword ptr ds:0A45E4Ch
0x54A35F: fstp    [esp+0Ch+var_C]; float
0x54A362: call    Rand4
0x54A367: fstp    dword ptr [esi+1CCh]
0x54A36D: add     esp, 8
