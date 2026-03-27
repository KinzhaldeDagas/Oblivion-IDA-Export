0x50EA30: push    ecx
0x50EA31: mov     ecx, [esp+4+l]
0x50EA35: mov     edx, [esp+4+arg_10]
0x50EA39: lea     eax, [esp+4+var_4]
0x50EA3C: push    eax; UInt16
0x50EA3D: mov     eax, [esp+8+arg_C]
0x50EA41: push    ecx; l
0x50EA42: mov     ecx, [esp+0Ch+a4]
0x50EA46: push    edx; a6
0x50EA47: mov     edx, [esp+10h+a3]
0x50EA4B: push    eax; a5
0x50EA4C: mov     eax, [esp+14h+arg_4]
0x50EA50: push    ecx; a4
0x50EA51: mov     ecx, [esp+18h+a1]
0x50EA55: push    edx; a3
0x50EA56: push    eax; a2
0x50EA57: push    ecx; a1
0x50EA58: call    Script_ExtractArgs
0x50EA5D: add     esp, 20h
0x50EA60: test    al, al
0x50EA62: jnz     short loc_50EA66
0x50EA64: pop     ecx
0x50EA65: retn
0x50EA66: cmp     dword ptr [esp+4+var_4], 0
0x50EA6A: mov     eax, ds:0B333C4h
0x50EA6F: setnz   dl
0x50EA72: mov     [eax+116h], dl
0x50EA78: cmp     byte ptr ds:0B361ACh, 0
0x50EA7F: jz      short loc_50EAA8
0x50EA81: mov     ecx, ds:0B333C4h
0x50EA87: cmp     byte ptr [ecx+116h], 0
0x50EA8E: mov     eax, offset aIs; "is"
0x50EA93: jnz     short loc_50EA9A
0x50EA95: mov     eax, offset aIsNot; "is not"
0x50EA9A: push    eax
0x50EA9B: push    offset aThePlayerSInTh; "The player %s in the SE world"
0x50EAA0: call    Interface_ConsolePrint
0x50EAA5: add     esp, 8
0x50EAA8: mov     al, 1
0x50EAAA: pop     ecx
0x50EAAB: retn
