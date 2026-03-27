0x4F78B0: fldz
0x4F78B2: push    esi
0x4F78B3: mov     esi, [esp+4+arg_C]
0x4F78B7: fstp    qword ptr [esi]
0x4F78B9: push    edi
0x4F78BA: mov     edi, [esp+8+arg_0]
0x4F78BE: test    edi, edi
0x4F78C0: jz      loc_4F7A49
0x4F78C6: mov     eax, [edi]
0x4F78C8: mov     edx, [eax+190h]
0x4F78CE: mov     ecx, edi
0x4F78D0: call    edx
0x4F78D2: test    al, al
0x4F78D4: jz      loc_4F7A49
0x4F78DA: cmp     dword ptr [edi+58h], 0
0x4F78DE: jz      loc_4F7A49
0x4F78E4: mov     ecx, edi
0x4F78E6: call    sub_5E0380
0x4F78EB: test    eax, eax
0x4F78ED: jz      loc_4F7A49
0x4F78F3: mov     ecx, edi
0x4F78F5: call    sub_5E0380
0x4F78FA: movsx   eax, byte ptr [eax+20h]
0x4F78FE: cmp     eax, 20h; switch 33 cases
0x4F7901: ja      def_4F7907
0x4F7907: jmp     ds:jpt_4F7907[eax*4]; switch jump
0x4F790E: fldz; jumptable 004F7907 case 0
0x4F7910: jmp     loc_4F7A47
0x4F7915: fld1; jumptable 004F7907 case 1
0x4F7917: jmp     loc_4F7A47
0x4F791C: fld     qword ptr ds:0A3D0C0h; jumptable 004F7907 case 2
0x4F7922: jmp     loc_4F7A47
0x4F7927: fld     qword ptr ds:0A30E48h; jumptable 004F7907 case 3
0x4F792D: jmp     loc_4F7A47
0x4F7932: fld     qword ptr ds:0A3C800h; jumptable 004F7907 case 4
0x4F7938: jmp     loc_4F7A47
0x4F793D: fld     qword ptr ds:0A3F3F0h; jumptable 004F7907 case 12
0x4F7943: jmp     loc_4F7A47
0x4F7948: fld     qword ptr ds:0A3F3A0h; jumptable 004F7907 case 18
0x4F794E: jmp     loc_4F7A47
0x4F7953: fld     qword ptr ds:0A49318h; jumptable 004F7907 case 14
0x4F7959: jmp     loc_4F7A47
0x4F795E: fld     qword ptr ds:0A49310h; jumptable 004F7907 case 15
0x4F7964: jmp     loc_4F7A47
0x4F7969: fld     qword ptr ds:0A45EB0h; jumptable 004F7907 case 19
0x4F796F: jmp     loc_4F7A47
0x4F7974: fld     qword ptr ds:0A3F3E8h; jumptable 004F7907 case 16
0x4F797A: jmp     loc_4F7A47
0x4F797F: fld     qword ptr ds:0A49308h; jumptable 004F7907 case 17
0x4F7985: jmp     loc_4F7A47
0x4F798A: fld     qword ptr ds:0A2F910h; jumptable 004F7907 case 20
0x4F7990: jmp     loc_4F7A47
0x4F7995: fld     qword ptr ds:0A49300h; jumptable 004F7907 case 5
0x4F799B: jmp     loc_4F7A47
0x4F79A0: fld     qword ptr ds:0A492F8h; jumptable 004F7907 case 6
0x4F79A6: jmp     loc_4F7A47
0x4F79AB: fld     qword ptr ds:0A492F0h; jumptable 004F7907 case 7
0x4F79B1: jmp     loc_4F7A47
0x4F79B6: fld     qword ptr ds:0A492E8h; jumptable 004F7907 case 8
0x4F79BC: jmp     loc_4F7A47
0x4F79C1: fld     qword ptr ds:0A492E0h; jumptable 004F7907 case 9
0x4F79C7: jmp     short loc_4F7A47
0x4F79C9: fld     qword ptr ds:0A492D8h; jumptable 004F7907 case 10
0x4F79CF: jmp     short loc_4F7A47
0x4F79D1: fld     qword ptr ds:0A492D0h; jumptable 004F7907 case 11
0x4F79D7: jmp     short loc_4F7A47
0x4F79D9: fld     qword ptr ds:0A46E48h; jumptable 004F7907 case 13
0x4F79DF: jmp     short loc_4F7A47
0x4F79E1: fld     qword ptr ds:0A492C8h; jumptable 004F7907 case 21
0x4F79E7: jmp     short loc_4F7A47
0x4F79E9: fld     qword ptr ds:0A492C0h; jumptable 004F7907 case 22
0x4F79EF: jmp     short loc_4F7A47
0x4F79F1: fld     qword ptr ds:0A492B8h; jumptable 004F7907 case 23
0x4F79F7: jmp     short loc_4F7A47
0x4F79F9: fld     qword ptr ds:0A2F920h; jumptable 004F7907 case 24
0x4F79FF: jmp     short loc_4F7A47
0x4F7A01: fld     qword ptr ds:0A492B0h; jumptable 004F7907 case 25
0x4F7A07: jmp     short loc_4F7A47
0x4F7A09: fld     qword ptr ds:0A492A8h; jumptable 004F7907 case 26
0x4F7A0F: jmp     short loc_4F7A47
0x4F7A11: fld     qword ptr ds:0A492A0h; jumptable 004F7907 case 27
0x4F7A17: jmp     short loc_4F7A47
0x4F7A19: fld     qword ptr ds:0A49298h; jumptable 004F7907 case 28
0x4F7A1F: jmp     short loc_4F7A47
0x4F7A21: fld     qword ptr ds:0A49290h; jumptable 004F7907 case 29
0x4F7A27: jmp     short loc_4F7A47
0x4F7A29: fld     qword ptr ds:0A3AA50h; jumptable 004F7907 case 30
0x4F7A2F: jmp     short loc_4F7A47
0x4F7A31: fld     qword ptr ds:0A49288h; jumptable 004F7907 case 31
0x4F7A37: jmp     short loc_4F7A47
0x4F7A39: fld     qword ptr ds:0A46970h; jumptable 004F7907 case 32
0x4F7A3F: jmp     short loc_4F7A47
