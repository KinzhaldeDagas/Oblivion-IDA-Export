0x503390: push    ecx
0x503391: mov     ecx, [esp+4+l]
0x503395: mov     edx, [esp+4+arg_10]
0x503399: push    esi
0x50339A: mov     esi, [esp+8+a4]
0x50339E: lea     eax, [esp+8+var_4]
0x5033A2: push    eax; UInt16
0x5033A3: mov     eax, [esp+0Ch+arg_C]
0x5033A7: push    ecx; l
0x5033A8: mov     ecx, [esp+10h+a3]
0x5033AC: push    edx; a6
0x5033AD: mov     edx, [esp+14h+arg_4]
0x5033B1: push    eax; a5
0x5033B2: mov     eax, [esp+18h+a1]
0x5033B6: push    esi; a4
0x5033B7: push    ecx; a3
0x5033B8: push    edx; a2
0x5033B9: push    eax; a1
0x5033BA: call    Script_ExtractArgs
0x5033BF: add     esp, 20h
0x5033C2: test    al, al
0x5033C4: jnz     short loc_5033C9
0x5033C6: pop     esi
0x5033C7: pop     ecx
0x5033C8: retn
0x5033C9: mov     ecx, [esp+8+arg_18]
0x5033CD: mov     edx, dword ptr [esp+8+var_4]
0x5033D1: push    ecx
0x5033D2: push    0
0x5033D4: push    edx
0x5033D5: push    esi
0x5033D6: call    sub_4F6FC0
0x5033DB: add     esp, 10h
0x5033DE: pop     esi
0x5033DF: pop     ecx
0x5033E0: retn
