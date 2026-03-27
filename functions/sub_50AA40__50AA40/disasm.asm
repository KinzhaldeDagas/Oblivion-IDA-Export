0x50AA40: push    ecx
0x50AA41: mov     ecx, [esp+4+l]
0x50AA45: mov     edx, [esp+4+arg_10]
0x50AA49: lea     eax, [esp+4+var_4]
0x50AA4C: push    eax; UInt16
0x50AA4D: mov     eax, [esp+8+arg_C]
0x50AA51: push    ecx; l
0x50AA52: mov     ecx, [esp+0Ch+a4]
0x50AA56: push    edx; a6
0x50AA57: mov     edx, [esp+10h+a3]
0x50AA5B: push    eax; a5
0x50AA5C: mov     eax, [esp+14h+arg_4]
0x50AA60: push    ecx; a4
0x50AA61: mov     ecx, [esp+18h+a1]
0x50AA65: push    edx; a3
0x50AA66: push    eax; a2
0x50AA67: push    ecx; a1
0x50AA68: mov     dword ptr [esp+24h+var_4], 0
0x50AA70: call    Script_ExtractArgs
0x50AA75: add     esp, 20h
0x50AA78: test    al, al
0x50AA7A: jnz     short loc_50AA7E
0x50AA7C: pop     ecx
0x50AA7D: retn
0x50AA7E: cmp     dword ptr [esp+4+var_4], 0
0x50AA82: mov     eax, ds:0B333C4h
0x50AA87: setnle  dl
0x50AA8A: mov     [eax+200h], dl
0x50AA90: mov     al, 1
0x50AA92: pop     ecx
0x50AA93: retn
