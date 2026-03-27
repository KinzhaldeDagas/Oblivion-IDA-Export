0x706EC0: push    ecx
0x706EC1: push    esi
0x706EC2: mov     esi, [esp+8+arg_0]
0x706EC6: push    edi
0x706EC7: push    esi
0x706EC8: mov     edi, ecx
0x706ECA: call    sub_700A80
0x706ECF: mov     eax, [esi+220h]
0x706ED5: mov     edx, [eax+8]
0x706ED8: push    1
0x706EDA: lea     ecx, [esp+10h+arg_0]
0x706EDE: push    ecx
0x706EDF: push    2
0x706EE1: add     edi, 18h
0x706EE4: push    edi
0x706EE5: push    eax
0x706EE6: mov     [esp+20h+arg_0], 2
0x706EEE: call    edx
0x706EF0: mov     eax, [esi+0D8h]
0x706EF6: add     esp, 14h
0x706EF9: cmp     eax, 4010005h
0x706EFE: jb      short loc_706F39
0x706F00: cmp     eax, 14010002h
0x706F05: jnb     short loc_706F39
0x706F07: movzx   eax, byte ptr [edi]
0x706F0A: mov     esi, [esi+220h]
0x706F10: push    1
0x706F12: lea     ecx, [esp+10h+arg_0]
0x706F16: push    ecx
0x706F17: shr     eax, 2
0x706F1A: and     eax, 0Fh
0x706F1D: push    4
0x706F1F: lea     edx, [esp+18h+var_4]
0x706F23: push    edx
0x706F24: mov     [esp+1Ch+var_4], eax
0x706F28: mov     eax, [esi+8]
0x706F2B: push    esi
0x706F2C: mov     [esp+20h+arg_0], 4
0x706F34: call    eax
0x706F36: add     esp, 14h
0x706F39: pop     edi
0x706F3A: pop     esi
0x706F3B: pop     ecx
0x706F3C: retn    4
