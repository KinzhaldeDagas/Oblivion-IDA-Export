0x763090: cmp     dword ptr [ecx+8ACh], 0
0x763097: jz      short loc_7630AD
0x763099: mov     ecx, [ecx+8ACh]
0x76309F: mov     eax, [ecx]
0x7630A1: mov     edx, [eax+88h]
0x7630A7: push    0
0x7630A9: push    0
0x7630AB: call    edx
0x7630AD: push    esi
0x7630AE: mov     esi, [esp+4+arg_0]
0x7630B2: mov     eax, [esi]
0x7630B4: mov     edx, [eax+40h]
0x7630B7: mov     ecx, esi
0x7630B9: call    edx
0x7630BB: test    eax, eax
0x7630BD: jz      short loc_7630C7
0x7630BF: mov     ecx, [eax]
0x7630C1: mov     edx, [ecx+8]
0x7630C4: push    eax
0x7630C5: call    edx
0x7630C7: mov     eax, [esi]
0x7630C9: mov     edx, [eax+44h]
0x7630CC: push    0
0x7630CE: mov     ecx, esi
0x7630D0: call    edx
0x7630D2: pop     esi
0x7630D3: retn    4
