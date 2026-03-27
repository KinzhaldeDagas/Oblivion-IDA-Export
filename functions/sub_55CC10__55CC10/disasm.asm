0x55CC10: sub     esp, 24h
0x55CC13: push    ebx
0x55CC14: mov     ebx, ecx
0x55CC16: mov     eax, [ebx]
0x55CC18: mov     edx, [eax+0A4h]
0x55CC1E: push    esi
0x55CC1F: mov     esi, [esp+2Ch+arg_0]
0x55CC23: push    edi
0x55CC24: lea     edi, [ebx+0E0h]
0x55CC2A: mov     ecx, 9
0x55CC2F: rep movsd
0x55CC31: lea     ecx, [esp+30h+var_24]
0x55CC35: push    ecx
0x55CC36: mov     ecx, ebx
0x55CC38: mov     byte ptr [ebx+107h], 1
0x55CC3F: call    edx
0x55CC41: lea     edi, [ebx+30h]
0x55CC44: mov     ecx, 9
0x55CC49: mov     esi, eax
0x55CC4B: rep movsd
0x55CC4D: pop     edi
0x55CC4E: pop     esi
0x55CC4F: pop     ebx
0x55CC50: add     esp, 24h
0x55CC53: retn    4
