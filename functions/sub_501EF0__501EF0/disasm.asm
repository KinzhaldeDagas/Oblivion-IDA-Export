0x501EF0: push    ecx
0x501EF1: mov     ecx, [esp+4+l]
0x501EF5: mov     edx, [esp+4+arg_10]
0x501EF9: push    esi
0x501EFA: mov     esi, [esp+8+a4]
0x501EFE: lea     eax, [esp+8+var_4]
0x501F02: push    eax; UInt16
0x501F03: mov     eax, [esp+0Ch+arg_C]
0x501F07: push    ecx; l
0x501F08: mov     ecx, [esp+10h+a3]
0x501F0C: push    edx; a6
0x501F0D: mov     edx, [esp+14h+arg_4]
0x501F11: push    eax; a5
0x501F12: mov     eax, [esp+18h+a1]
0x501F16: push    esi; a4
0x501F17: push    ecx; a3
0x501F18: push    edx; a2
0x501F19: push    eax; a1
0x501F1A: mov     dword ptr [esp+28h+var_4], 0
0x501F22: call    Script_ExtractArgs
0x501F27: add     esp, 20h
0x501F2A: test    al, al
0x501F2C: jnz     short loc_501F31
0x501F2E: pop     esi
0x501F2F: pop     ecx
0x501F30: retn
0x501F31: mov     ecx, [esp+8+arg_18]
0x501F35: mov     edx, dword ptr [esp+8+var_4]
0x501F39: push    ecx
0x501F3A: push    0
0x501F3C: push    edx
0x501F3D: push    esi
0x501F3E: call    PlayerCharacter_RayCastTo
0x501F43: add     esp, 10h
0x501F46: pop     esi
0x501F47: pop     ecx
0x501F48: retn
