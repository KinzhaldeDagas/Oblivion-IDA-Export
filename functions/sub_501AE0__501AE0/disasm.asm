0x501AE0: push    ecx
0x501AE1: mov     ecx, [esp+4+l]
0x501AE5: mov     edx, [esp+4+arg_10]
0x501AE9: push    esi
0x501AEA: mov     esi, [esp+8+a4]
0x501AEE: lea     eax, [esp+8+var_1]
0x501AF2: push    eax; UInt16
0x501AF3: mov     eax, [esp+0Ch+arg_C]
0x501AF7: push    ecx; l
0x501AF8: mov     ecx, [esp+10h+a3]
0x501AFC: push    edx; a6
0x501AFD: mov     edx, [esp+14h+arg_4]
0x501B01: push    eax; a5
0x501B02: mov     eax, [esp+18h+a1]
0x501B06: push    esi; a4
0x501B07: push    ecx; a3
0x501B08: push    edx; a2
0x501B09: push    eax; a1
0x501B0A: call    Script_ExtractArgs
0x501B0F: add     esp, 20h
0x501B12: test    al, al
0x501B14: jnz     short loc_501B19
0x501B16: pop     esi
0x501B17: pop     ecx
0x501B18: retn
0x501B19: mov     ecx, [esp+8+arg_18]
0x501B1D: movsx   edx, [esp+8+var_1]
0x501B22: push    ecx
0x501B23: push    0
0x501B25: push    edx
0x501B26: push    esi
0x501B27: call    sub_4F4490
0x501B2C: add     esp, 10h
0x501B2F: pop     esi
0x501B30: pop     ecx
0x501B31: retn
