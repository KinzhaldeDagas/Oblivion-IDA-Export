0x8A5280: mov     eax, [esp+arg_4]
0x8A5284: add     eax, 0FFFFFFFFh; switch 7 cases
0x8A5287: cmp     eax, 6
0x8A528A: ja      def_8A5290
0x8A5290: jmp     ds:jpt_8A5290[eax*4]; switch jump
0x8A5297: push    offset aDynamic; jumptable 008A5290 case 1
0x8A529C: push    offset aMotion; "MOTION"
0x8A52A1: call    TESOutput_PrintLabeledString
0x8A52A6: mov     ecx, [esp+8+arg_0]
0x8A52AA: mov     [esp+8+arg_4], eax
0x8A52AE: add     esp, 8
0x8A52B1: lea     eax, [esp+arg_4]
0x8A52B5: push    eax
0x8A52B6: call    NiTArray_Add
0x8A52BB: retn
0x8A52BC: push    offset aSphere; jumptable 008A5290 cases 2,3
0x8A52C1: push    offset aMotion; "MOTION"
0x8A52C6: call    TESOutput_PrintLabeledString
0x8A52CB: add     esp, 8
0x8A52CE: lea     ecx, [esp+arg_4]
0x8A52D2: push    ecx
0x8A52D3: mov     ecx, [esp+4+arg_0]
0x8A52D7: mov     [esp+4+arg_4], eax
0x8A52DB: call    NiTArray_Add
0x8A52E0: retn
0x8A52E1: push    offset off_A97474; jumptable 008A5290 cases 4,5
0x8A52E6: push    offset aMotion; "MOTION"
0x8A52EB: call    TESOutput_PrintLabeledString
0x8A52F0: mov     ecx, [esp+8+arg_0]
0x8A52F4: add     esp, 8
0x8A52F7: lea     edx, [esp+arg_4]
0x8A52FB: push    edx
0x8A52FC: mov     [esp+4+arg_4], eax
0x8A5300: call    NiTArray_Add
0x8A5305: retn
0x8A5306: push    offset aKeyframed; jumptable 008A5290 case 6
0x8A530B: push    offset aMotion; "MOTION"
0x8A5310: call    TESOutput_PrintLabeledString
0x8A5315: mov     ecx, [esp+8+arg_0]
0x8A5319: mov     [esp+8+arg_4], eax
0x8A531D: add     esp, 8
0x8A5320: lea     eax, [esp+arg_4]
0x8A5324: push    eax
0x8A5325: call    NiTArray_Add
0x8A532A: retn
0x8A532B: push    offset aFixed; jumptable 008A5290 case 7
0x8A5330: push    offset aMotion; "MOTION"
0x8A5335: call    TESOutput_PrintLabeledString
0x8A533A: add     esp, 8
0x8A533D: lea     ecx, [esp+arg_4]
0x8A5341: push    ecx
0x8A5342: mov     ecx, [esp+4+arg_0]
0x8A5346: mov     [esp+4+arg_4], eax
0x8A534A: call    NiTArray_Add
0x8A534F: retn
