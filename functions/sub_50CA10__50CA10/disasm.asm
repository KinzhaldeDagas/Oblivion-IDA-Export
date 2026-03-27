0x50CA10: push    ecx
0x50CA11: mov     ecx, [esp+4+l]
0x50CA15: mov     edx, [esp+4+arg_10]
0x50CA19: lea     eax, [esp+4+var_4]
0x50CA1C: push    eax; UInt16
0x50CA1D: mov     eax, [esp+8+arg_C]
0x50CA21: push    ecx; l
0x50CA22: mov     ecx, [esp+0Ch+a4]
0x50CA26: push    edx; a6
0x50CA27: mov     edx, [esp+10h+a3]
0x50CA2B: push    eax; a5
0x50CA2C: mov     eax, [esp+14h+arg_4]
0x50CA30: push    ecx; a4
0x50CA31: mov     ecx, [esp+18h+a1]
0x50CA35: push    edx; a3
0x50CA36: push    eax; a2
0x50CA37: push    ecx; a1
0x50CA38: mov     dword ptr [esp+24h+var_4], 0
0x50CA40: call    Script_ExtractArgs
0x50CA45: add     esp, 20h
0x50CA48: test    al, al
0x50CA4A: jnz     short loc_50CA4E
0x50CA4C: pop     ecx
0x50CA4D: retn
0x50CA4E: mov     edx, dword ptr [esp+4+var_4]
0x50CA51: mov     eax, ds:0B333C4h
0x50CA56: mov     [eax+6F4h], edx
0x50CA5C: cmp     byte ptr ds:0B361ACh, 0
0x50CA63: jz      short loc_50CA83
0x50CA65: mov     ecx, ds:0B333C4h
0x50CA6B: mov     edx, [ecx]
0x50CA6D: mov     eax, [edx+204h]
0x50CA73: call    eax
0x50CA75: push    eax
0x50CA76: push    offset aPlayerFameIsD; "Player Fame is %d "
0x50CA7B: call    Interface_ConsolePrint
0x50CA80: add     esp, 8
0x50CA83: mov     al, 1
0x50CA85: pop     ecx
0x50CA86: retn
