0x5036B0: push    ecx
0x5036B1: mov     ecx, [esp+4+l]
0x5036B5: mov     edx, [esp+4+arg_10]
0x5036B9: push    esi
0x5036BA: mov     esi, [esp+8+a4]
0x5036BE: lea     eax, [esp+8+var_1]
0x5036C2: push    eax; UInt16
0x5036C3: mov     eax, [esp+0Ch+arg_C]
0x5036C7: push    ecx; l
0x5036C8: mov     ecx, [esp+10h+a3]
0x5036CC: push    edx; a6
0x5036CD: mov     edx, [esp+14h+arg_4]
0x5036D1: push    eax; a5
0x5036D2: mov     eax, [esp+18h+a1]
0x5036D6: push    esi; a4
0x5036D7: push    ecx; a3
0x5036D8: push    edx; a2
0x5036D9: push    eax; a1
0x5036DA: call    Script_ExtractArgs
0x5036DF: add     esp, 20h
0x5036E2: test    al, al
0x5036E4: jnz     short loc_5036E9
0x5036E6: pop     esi
0x5036E7: pop     ecx
0x5036E8: retn
0x5036E9: mov     ecx, [esp+8+arg_18]
0x5036ED: movzx   edx, [esp+8+var_1]
0x5036F2: push    ecx
0x5036F3: push    0
0x5036F5: push    edx
0x5036F6: push    esi
0x5036F7: call    sub_4F71D0
0x5036FC: add     esp, 10h
0x5036FF: pop     esi
0x503700: pop     ecx
0x503701: retn
