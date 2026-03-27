0x50BF00: sub     esp, 8
0x50BF03: mov     edx, [esp+8+l]
0x50BF07: lea     eax, [esp+8+var_4]
0x50BF0B: push    eax
0x50BF0C: mov     eax, [esp+0Ch+arg_10]
0x50BF10: lea     ecx, [esp+0Ch+var_8]
0x50BF14: push    ecx; UInt16
0x50BF15: mov     ecx, [esp+10h+arg_C]
0x50BF19: push    edx; l
0x50BF1A: mov     edx, [esp+14h+a4]
0x50BF1E: push    eax; a6
0x50BF1F: mov     eax, [esp+18h+a3]
0x50BF23: push    ecx; a5
0x50BF24: mov     ecx, [esp+1Ch+arg_4]
0x50BF28: push    edx; a4
0x50BF29: mov     edx, [esp+20h+a1]
0x50BF2D: push    eax; a3
0x50BF2E: push    ecx; a2
0x50BF2F: push    edx; a1
0x50BF30: mov     dword ptr [esp+2Ch+var_8], 0
0x50BF38: mov     [esp+2Ch+var_4], 0
0x50BF40: call    Script_ExtractArgs
0x50BF45: add     esp, 24h
0x50BF48: test    al, al
0x50BF4A: jnz     short loc_50BF50
0x50BF4C: add     esp, 8
0x50BF4F: retn
0x50BF50: cmp     [esp+8+var_4], 0
0x50BF55: mov     eax, dword ptr [esp+8+var_8]
0x50BF58: push    4
0x50BF5A: mov     ecx, eax
0x50BF5C: jz      short loc_50BF6F
0x50BF5E: or      byte ptr [eax+34h], 80h
0x50BF62: mov     eax, [ecx]
0x50BF64: mov     edx, [eax+40h]
0x50BF67: call    edx
0x50BF69: mov     al, 1
0x50BF6B: add     esp, 8
0x50BF6E: retn
0x50BF6F: and     byte ptr [eax+34h], 7Fh
0x50BF73: mov     eax, [ecx]
0x50BF75: mov     edx, [eax+40h]
0x50BF78: call    edx
0x50BF7A: mov     al, 1
0x50BF7C: add     esp, 8
0x50BF7F: retn
