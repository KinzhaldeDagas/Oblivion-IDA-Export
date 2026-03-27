0x503B00: push    ecx
0x503B01: mov     ecx, [esp+4+l]
0x503B05: mov     edx, [esp+4+arg_10]
0x503B09: push    esi
0x503B0A: mov     esi, [esp+8+a4]
0x503B0E: lea     eax, [esp+8+var_4]
0x503B12: push    eax; UInt16
0x503B13: mov     eax, [esp+0Ch+arg_C]
0x503B17: push    ecx; l
0x503B18: mov     ecx, [esp+10h+a3]
0x503B1C: push    edx; a6
0x503B1D: mov     edx, [esp+14h+arg_4]
0x503B21: push    eax; a5
0x503B22: mov     eax, [esp+18h+a1]
0x503B26: push    esi; a4
0x503B27: push    ecx; a3
0x503B28: push    edx; a2
0x503B29: push    eax; a1
0x503B2A: mov     dword ptr [esp+28h+var_4], 0
0x503B32: call    Script_ExtractArgs
0x503B37: add     esp, 20h
0x503B3A: test    al, al
0x503B3C: jnz     short loc_503B41
0x503B3E: pop     esi
0x503B3F: pop     ecx
0x503B40: retn
0x503B41: mov     ecx, [esp+8+arg_18]
0x503B45: mov     edx, dword ptr [esp+8+var_4]
0x503B49: push    ecx
0x503B4A: push    0
0x503B4C: push    edx
0x503B4D: push    esi
0x503B4E: call    sub_4F5010
0x503B53: add     esp, 10h
0x503B56: pop     esi
0x503B57: pop     ecx
0x503B58: retn
