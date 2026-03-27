0x4F7C00: fldz
0x4F7C02: push    esi
0x4F7C03: mov     esi, [esp+4+arg_C]
0x4F7C07: fstp    qword ptr [esi]
0x4F7C09: push    edi
0x4F7C0A: mov     edi, [esp+8+arg_0]
0x4F7C0E: test    edi, edi
0x4F7C10: jz      loc_4F7E0B
0x4F7C16: mov     eax, [edi]
0x4F7C18: mov     edx, [eax+190h]
0x4F7C1E: mov     ecx, edi
0x4F7C20: call    edx
0x4F7C22: test    al, al
0x4F7C24: jz      loc_4F7E0B
0x4F7C2A: cmp     dword ptr [edi+58h], 0
0x4F7C2E: jz      loc_4F7E0B
0x4F7C34: mov     ecx, edi
0x4F7C36: call    sub_5E0380
0x4F7C3B: test    eax, eax
0x4F7C3D: jz      loc_4F7E0B
0x4F7C43: push    ebx
0x4F7C44: mov     ebx, [edi+58h]
0x4F7C47: mov     ecx, edi
0x4F7C49: call    sub_5E0380
0x4F7C4E: mov     edi, [eax+18h]
0x4F7C51: mov     eax, [ebx]
0x4F7C53: mov     edx, [eax+180h]
0x4F7C59: mov     ecx, ebx
0x4F7C5B: call    edx
0x4F7C5D: mov     ecx, ds:0B152B0h[edi*4]
0x4F7C64: mov     eax, [ecx+eax*4]
0x4F7C67: cmp     eax, 2Ch; switch 45 cases
0x4F7C6A: pop     ebx
0x4F7C6B: ja      def_4F7C71; jumptable 004F7C71 default case, cases 19,21,28,43
0x4F7C71: jmp     ds:jpt_4F7C71[eax*4]; switch jump
0x4F7C78: fldz; jumptable 004F7C71 case 0
0x4F7C7A: jmp     loc_4F7E09
0x4F7C7F: fld1; jumptable 004F7C71 case 2
0x4F7C81: jmp     loc_4F7E09
0x4F7C86: fld     qword ptr ds:0A3D0C0h; jumptable 004F7C71 case 3
0x4F7C8C: jmp     loc_4F7E09
0x4F7C91: fld     qword ptr ds:0A30E48h; jumptable 004F7C71 case 13
0x4F7C97: jmp     loc_4F7E09
0x4F7C9C: fld     qword ptr ds:0A3C800h; jumptable 004F7C71 case 12
0x4F7CA2: jmp     loc_4F7E09
0x4F7CA7: fld     qword ptr ds:0A3F3F0h; jumptable 004F7C71 case 16
0x4F7CAD: jmp     loc_4F7E09
0x4F7CB2: fld     qword ptr ds:0A3F3A0h; jumptable 004F7C71 case 20
0x4F7CB8: jmp     loc_4F7E09
0x4F7CBD: fld     qword ptr ds:0A49318h; jumptable 004F7C71 case 1
0x4F7CC3: jmp     loc_4F7E09
0x4F7CC8: fld     qword ptr ds:0A49310h; jumptable 004F7C71 case 4
0x4F7CCE: jmp     loc_4F7E09
0x4F7CD3: fld     qword ptr ds:0A45EB0h; jumptable 004F7C71 case 18
0x4F7CD9: jmp     loc_4F7E09
0x4F7CDE: fld     qword ptr ds:0A3F3E8h; jumptable 004F7C71 case 5
0x4F7CE4: jmp     loc_4F7E09
0x4F7CE9: fld     qword ptr ds:0A49308h; jumptable 004F7C71 case 6
0x4F7CEF: jmp     loc_4F7E09
0x4F7CF4: fld     qword ptr ds:0A2F910h; jumptable 004F7C71 case 7
0x4F7CFA: jmp     loc_4F7E09
0x4F7CFF: fld     qword ptr ds:0A49300h; jumptable 004F7C71 case 9
0x4F7D05: jmp     loc_4F7E09
0x4F7D0A: fld     qword ptr ds:0A492F8h; jumptable 004F7C71 case 8
0x4F7D10: jmp     loc_4F7E09
0x4F7D15: fld     qword ptr ds:0A492F0h; jumptable 004F7C71 case 15
0x4F7D1B: jmp     loc_4F7E09
0x4F7D20: fld     qword ptr ds:0A492E8h; jumptable 004F7C71 case 10
0x4F7D26: jmp     loc_4F7E09
0x4F7D2B: fld     qword ptr ds:0A492E0h; jumptable 004F7C71 case 44
0x4F7D31: jmp     loc_4F7E09
0x4F7D36: fld     qword ptr ds:0A492D8h; jumptable 004F7C71 case 11
0x4F7D3C: jmp     loc_4F7E09
0x4F7D41: fld     qword ptr ds:0A492D0h; jumptable 004F7C71 case 14
0x4F7D47: jmp     loc_4F7E09
0x4F7D4C: fld     qword ptr ds:0A46E48h; jumptable 004F7C71 case 17
0x4F7D52: jmp     loc_4F7E09
0x4F7D57: fld     qword ptr ds:0A492C8h; jumptable 004F7C71 case 22
0x4F7D5D: jmp     loc_4F7E09
0x4F7D62: fld     qword ptr ds:0A492C0h; jumptable 004F7C71 case 23
0x4F7D68: jmp     loc_4F7E09
0x4F7D6D: fld     qword ptr ds:0A492B8h; jumptable 004F7C71 case 24
0x4F7D73: jmp     loc_4F7E09
0x4F7D78: fld     qword ptr ds:0A2F920h; jumptable 004F7C71 case 25
0x4F7D7E: jmp     loc_4F7E09
0x4F7D83: fld     qword ptr ds:0A492B0h; jumptable 004F7C71 case 26
0x4F7D89: jmp     short loc_4F7E09
0x4F7D8B: fld     qword ptr ds:0A492A8h; jumptable 004F7C71 case 27
0x4F7D91: jmp     short loc_4F7E09
0x4F7D93: fld     qword ptr ds:0A492A0h; jumptable 004F7C71 case 29
0x4F7D99: jmp     short loc_4F7E09
0x4F7D9B: fld     qword ptr ds:0A49298h; jumptable 004F7C71 case 30
0x4F7DA1: jmp     short loc_4F7E09
0x4F7DA3: fld     qword ptr ds:0A49290h; jumptable 004F7C71 case 31
0x4F7DA9: jmp     short loc_4F7E09
0x4F7DAB: fld     qword ptr ds:0A3AA50h; jumptable 004F7C71 case 32
0x4F7DB1: jmp     short loc_4F7E09
0x4F7DB3: fld     qword ptr ds:0A49288h; jumptable 004F7C71 case 33
0x4F7DB9: jmp     short loc_4F7E09
0x4F7DBB: fld     qword ptr ds:0A46970h; jumptable 004F7C71 case 34
0x4F7DC1: jmp     short loc_4F7E09
0x4F7DC3: fld     qword ptr ds:0A49398h; jumptable 004F7C71 case 35
0x4F7DC9: jmp     short loc_4F7E09
0x4F7DCB: fld     qword ptr ds:0A49390h; jumptable 004F7C71 case 36
0x4F7DD1: jmp     short loc_4F7E09
0x4F7DD3: fld     qword ptr ds:0A49388h; jumptable 004F7C71 case 37
0x4F7DD9: jmp     short loc_4F7E09
0x4F7DDB: fld     qword ptr ds:0A49380h; jumptable 004F7C71 case 38
0x4F7DE1: jmp     short loc_4F7E09
0x4F7DE3: fld     qword ptr ds:0A49378h; jumptable 004F7C71 case 39
0x4F7DE9: jmp     short loc_4F7E09
0x4F7DEB: fld     qword ptr ds:0A49370h; jumptable 004F7C71 case 40
0x4F7DF1: jmp     short loc_4F7E09
0x4F7DF3: fld     qword ptr ds:0A49368h; jumptable 004F7C71 case 41
0x4F7DF9: jmp     short loc_4F7E09
0x4F7DFB: fld     qword ptr ds:0A49360h; jumptable 004F7C71 case 42
0x4F7E01: jmp     short loc_4F7E09
0x4F7E03: fld     qword ptr ds:0A3D360h; jumptable 004F7C71 default case, cases 19,21,28,43
0x4F7E09: fstp    qword ptr [esi]
0x4F7E0B: cmp     byte ptr ds:0B361ACh, 0
0x4F7E12: jz      short loc_4F7E29
0x4F7E14: fld     qword ptr [esi]
0x4F7E16: sub     esp, 8
0x4F7E19: fstp    [esp+10h+var_10]
0x4F7E1C: push    offset aProcedure0_2f; "Procedure >> %0.2f"
0x4F7E21: call    Interface_ConsolePrint
0x4F7E26: add     esp, 0Ch
0x4F7E29: pop     edi
0x4F7E2A: mov     al, 1
0x4F7E2C: pop     esi
0x4F7E2D: retn
