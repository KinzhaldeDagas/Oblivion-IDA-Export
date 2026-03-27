0x502B20: push    ecx
0x502B21: mov     ecx, [esp+4+l]
0x502B25: mov     edx, [esp+4+arg_10]
0x502B29: lea     eax, [esp+4+var_4]
0x502B2C: push    eax; UInt16
0x502B2D: mov     eax, [esp+8+arg_C]
0x502B31: push    ecx; l
0x502B32: mov     ecx, [esp+0Ch+a4]
0x502B36: push    edx; a6
0x502B37: mov     edx, [esp+10h+a3]
0x502B3B: push    eax; a5
0x502B3C: mov     eax, [esp+14h+arg_4]
0x502B40: push    ecx; a4
0x502B41: mov     ecx, [esp+18h+a1]
0x502B45: push    edx; a3
0x502B46: push    eax; a2
0x502B47: push    ecx; a1
0x502B48: mov     dword ptr [esp+24h+var_4], 0
0x502B50: call    Script_ExtractArgs
0x502B55: add     esp, 20h
0x502B58: test    al, al
0x502B5A: jnz     short loc_502B5E
0x502B5C: pop     ecx
0x502B5D: retn
0x502B5E: mov     edx, [esp+4+arg_18]
0x502B62: mov     eax, dword ptr [esp+4+var_4]
0x502B65: push    edx
0x502B66: push    0
0x502B68: push    eax
0x502B69: push    0
0x502B6B: call    sub_4F4B10
0x502B70: add     esp, 10h
0x502B73: pop     ecx
0x502B74: retn
