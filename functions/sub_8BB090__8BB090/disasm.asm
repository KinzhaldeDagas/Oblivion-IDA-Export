0x8BB090: mov     ecx, ds:0BA7D98h
0x8BB096: mov     eax, [ecx]
0x8BB098: push    esi
0x8BB099: push    17h
0x8BB09B: push    14h
0x8BB09D: call    dword ptr [eax+10h]
0x8BB0A0: mov     ecx, [esp+4+Filename]
0x8BB0A4: push    ecx; Filename
0x8BB0A5: mov     ecx, eax
0x8BB0A7: mov     word ptr [eax+4], 14h
0x8BB0AD: call    sub_8BB120
0x8BB0B2: mov     esi, eax
0x8BB0B4: mov     edx, [esi]
0x8BB0B6: lea     eax, [esp+4+Filename]
0x8BB0BA: push    eax
0x8BB0BB: mov     ecx, esi
0x8BB0BD: call    dword ptr [edx+14h]
0x8BB0C0: cmp     byte ptr [eax], 0
0x8BB0C3: jnz     short loc_8BB10B
0x8BB0C5: mov     ecx, ds:0BA7D98h
0x8BB0CB: mov     edx, [ecx]
0x8BB0CD: push    edi
0x8BB0CE: push    17h
0x8BB0D0: push    24h ; '$'
0x8BB0D2: call    dword ptr [edx+10h]
0x8BB0D5: push    1000h
0x8BB0DA: push    esi
0x8BB0DB: mov     ecx, eax
0x8BB0DD: mov     word ptr [eax+4], 24h ; '$'
0x8BB0E3: call    sub_8F5BC0
0x8BB0E8: cmp     word ptr [esi+4], 0
0x8BB0ED: mov     edi, eax
0x8BB0EF: jz      short loc_8BB104
0x8BB0F1: dec     word ptr [esi+6]
0x8BB0F5: cmp     word ptr [esi+6], 0
0x8BB0FA: jnz     short loc_8BB104
0x8BB0FC: mov     eax, [esi]
0x8BB0FE: push    1
0x8BB100: mov     ecx, esi
0x8BB102: call    dword ptr [eax]
0x8BB104: mov     eax, edi
0x8BB106: pop     edi
0x8BB107: pop     esi
0x8BB108: retn    4
0x8BB10B: mov     eax, esi
0x8BB10D: pop     esi
0x8BB10E: retn    4
