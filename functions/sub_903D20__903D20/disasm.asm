0x903D20: push    esi
0x903D21: mov     esi, ecx
0x903D23: cmp     dword ptr [esi+1Ch], 1Ah
0x903D27: jnz     short loc_903D39
0x903D29: mov     edx, [esi+10h]
0x903D2C: mov     ecx, [esi+14h]
0x903D2F: mov     eax, [ecx]
0x903D31: push    edx
0x903D32: mov     edx, [esi+0Ch]
0x903D35: push    edx
0x903D36: call    dword ptr [eax+20h]
0x903D39: cmp     dword ptr [esi+20h], 1Ah
0x903D3D: jnz     short loc_903D4F
0x903D3F: mov     edx, [esi+0Ch]
0x903D42: mov     ecx, [esi+18h]
0x903D45: mov     eax, [ecx]
0x903D47: push    edx
0x903D48: mov     edx, [esi+10h]
0x903D4B: push    edx
0x903D4C: call    dword ptr [eax+20h]
0x903D4F: mov     eax, [esi]
0x903D51: push    1
0x903D53: mov     ecx, esi
0x903D55: call    dword ptr [eax]
0x903D57: pop     esi
0x903D58: retn
