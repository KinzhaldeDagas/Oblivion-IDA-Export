0x50BE00: sub     esp, 8
0x50BE03: mov     edx, [esp+8+l]
0x50BE07: lea     eax, [esp+8+var_4]
0x50BE0B: push    eax
0x50BE0C: mov     eax, [esp+0Ch+arg_10]
0x50BE10: lea     ecx, [esp+0Ch+var_8]
0x50BE14: push    ecx; UInt16
0x50BE15: mov     ecx, [esp+10h+arg_C]
0x50BE19: push    edx; l
0x50BE1A: mov     edx, [esp+14h+a4]
0x50BE1E: push    eax; a6
0x50BE1F: mov     eax, [esp+18h+a3]
0x50BE23: push    ecx; a5
0x50BE24: mov     ecx, [esp+1Ch+arg_4]
0x50BE28: push    edx; a4
0x50BE29: mov     edx, [esp+20h+a1]
0x50BE2D: push    eax; a3
0x50BE2E: push    ecx; a2
0x50BE2F: push    edx; a1
0x50BE30: mov     dword ptr [esp+2Ch+var_8], 0
0x50BE38: mov     [esp+2Ch+var_4], 0
0x50BE40: call    Script_ExtractArgs
0x50BE45: add     esp, 24h
0x50BE48: test    al, al
0x50BE4A: jnz     short loc_50BE50
0x50BE4C: add     esp, 8
0x50BE4F: retn
0x50BE50: cmp     [esp+8+var_4], 0
0x50BE55: mov     eax, dword ptr [esp+8+var_8]
0x50BE58: push    4
0x50BE5A: mov     ecx, eax
0x50BE5C: jz      short loc_50BE6F
0x50BE5E: or      byte ptr [eax+34h], 10h
0x50BE62: mov     eax, [ecx]
0x50BE64: mov     edx, [eax+40h]
0x50BE67: call    edx
0x50BE69: mov     al, 1
0x50BE6B: add     esp, 8
0x50BE6E: retn
0x50BE6F: and     byte ptr [eax+34h], 0EFh
0x50BE73: mov     eax, [ecx]
0x50BE75: mov     edx, [eax+40h]
0x50BE78: call    edx
0x50BE7A: mov     al, 1
0x50BE7C: add     esp, 8
0x50BE7F: retn
