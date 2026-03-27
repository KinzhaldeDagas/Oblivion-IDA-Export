0x501A00: push    ecx
0x501A01: mov     ecx, [esp+4+l]
0x501A05: mov     edx, [esp+4+arg_10]
0x501A09: push    esi
0x501A0A: mov     esi, [esp+8+a4]
0x501A0E: lea     eax, [esp+8+var_4]
0x501A12: push    eax; UInt16
0x501A13: mov     eax, [esp+0Ch+arg_C]
0x501A17: push    ecx; l
0x501A18: mov     ecx, [esp+10h+a3]
0x501A1C: push    edx; a6
0x501A1D: mov     edx, [esp+14h+arg_4]
0x501A21: push    eax; a5
0x501A22: mov     eax, [esp+18h+a1]
0x501A26: push    esi; a4
0x501A27: push    ecx; a3
0x501A28: push    edx; a2
0x501A29: push    eax; a1
0x501A2A: mov     dword ptr [esp+28h+var_4], 0
0x501A32: call    Script_ExtractArgs
0x501A37: add     esp, 20h
0x501A3A: test    al, al
0x501A3C: jnz     short loc_501A41
0x501A3E: pop     esi
0x501A3F: pop     ecx
0x501A40: retn
0x501A41: mov     ecx, [esp+8+arg_18]
0x501A45: mov     edx, dword ptr [esp+8+var_4]
0x501A49: push    ecx
0x501A4A: push    0
0x501A4C: push    edx
0x501A4D: push    esi
0x501A4E: call    sub_4F45D0
0x501A53: add     esp, 10h
0x501A56: pop     esi
0x501A57: pop     ecx
0x501A58: retn
