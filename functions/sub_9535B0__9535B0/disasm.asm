0x9535B0: sub     esp, 20Ch
0x9535B6: dec     eax; switch 28 cases
0x9535B7: cmp     eax, 1Bh
0x9535BA: ja      short def_9535C3; jumptable 009535C3 default case, cases 19-23,25-28
0x9535BC: movzx   eax, ds:byte_95365C[eax]
0x9535C3: jmp     ds:jpt_9535C3[eax*4]; switch jump
0x9535CA: shr     edx, 2; jumptable 009535C3 cases 12-18
0x9535CD: imul    ecx, edx
0x9535D0: mov     edx, 4
0x9535D5: push    ecx; jumptable 009535C3 cases 1-11,24
0x9535D6: mov     ecx, [esp+210h+arg_4]
0x9535DD: push    edx
0x9535DE: push    ecx
0x9535DF: mov     ecx, [esp+218h+arg_0]
0x9535E6: call    sub_9181D0
0x9535EB: add     esp, 20Ch
0x9535F1: retn
0x9535F2: push    ecx; jumptable 009535C3 default case, cases 19-23,25-28
0x9535F3: mov     eax, esp
0x9535F5: push    200h
0x9535FA: lea     edx, [esp+214h+var_200]
0x9535FE: push    edx
0x9535FF: lea     ecx, [esp+218h+var_20C]
0x953603: mov     byte ptr [eax], 1
0x953606: call    sub_8BBFB0
0x95360B: push    offset aUnknownClassMe; "Unknown class member found during write"...
0x953610: lea     ecx, [esp+210h+var_20C]
0x953614: call    sub_8BBDB0
0x953619: mov     ecx, ds:0BA7FB0h
0x95361F: mov     eax, [ecx]
0x953621: push    0DCh ; 'Ü'
0x953626: push    offset a_CopierHkobjec; ".\\copier\\hkObjectCopier.cpp"
0x95362B: lea     edx, [esp+214h+var_200]
0x95362F: push    edx
0x953630: push    747E1E03h
0x953635: push    3
0x953637: call    dword ptr [eax+8]
0x95363A: lea     ecx, [esp+20Ch+var_20C]
0x95363D: call    sub_8BC000
0x953642: add     esp, 20Ch
0x953648: retn
