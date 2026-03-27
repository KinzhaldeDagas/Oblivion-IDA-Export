0x500570: mov     ecx, [esp+l]
0x500574: fldz
0x500576: mov     edx, [esp+arg_10]
0x50057A: push    esi
0x50057B: mov     esi, [esp+4+arg_18]
0x50057F: push    edi
0x500580: fstp    qword ptr [esi]
0x500582: mov     edi, [esp+8+a4]
0x500586: lea     eax, [esp+8+arg_18]
0x50058A: push    eax; UInt16
0x50058B: mov     eax, [esp+0Ch+arg_C]
0x50058F: push    ecx; l
0x500590: mov     ecx, [esp+10h+a3]
0x500594: push    edx; a6
0x500595: mov     edx, [esp+14h+arg_4]
0x500599: push    eax; a5
0x50059A: mov     eax, [esp+18h+a1]
0x50059E: push    edi; a4
0x50059F: push    ecx; a3
0x5005A0: push    edx; a2
0x5005A1: push    eax; a1
0x5005A2: mov     [esp+28h+arg_18], 0
0x5005AA: call    Script_ExtractArgs
0x5005AF: add     esp, 20h
0x5005B2: test    al, al
0x5005B4: jnz     short loc_5005B9
0x5005B6: pop     edi
0x5005B7: pop     esi
0x5005B8: retn
0x5005B9: mov     eax, [esp+8+arg_18]
0x5005BD: test    eax, eax
0x5005BF: jnz     short loc_5005D5
0x5005C1: mov     ecx, ds:0B333C4h
0x5005C7: mov     edx, [ecx]
0x5005C9: mov     eax, [edx+170h]
0x5005CF: call    eax
0x5005D1: mov     [esp+8+arg_18], eax
0x5005D5: push    esi
0x5005D6: push    0
0x5005D8: push    eax
0x5005D9: push    edi
0x5005DA: call    sub_4F8AD0
0x5005DF: add     esp, 10h
0x5005E2: pop     edi
0x5005E3: mov     al, 1
0x5005E5: pop     esi
0x5005E6: retn
