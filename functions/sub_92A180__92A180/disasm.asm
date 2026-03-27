0x92A180: mov     eax, [ecx+2Ch]
0x92A183: push    esi
0x92A184: lea     esi, [ecx+24h]
0x92A187: mov     ecx, [esi+4]
0x92A18A: and     eax, 3FFFFFFFh
0x92A18F: cmp     ecx, eax
0x92A191: push    edi
0x92A192: jnz     short loc_92A19F
0x92A194: push    30h ; '0'
0x92A196: push    esi
0x92A197: call    sub_8A6EE0
0x92A19C: add     esp, 8
0x92A19F: mov     ecx, [esi+4]
0x92A1A2: mov     edx, [esi]
0x92A1A4: lea     eax, [ecx+ecx*2]
0x92A1A7: shl     eax, 4
0x92A1AA: add     eax, edx
0x92A1AC: inc     ecx
0x92A1AD: mov     [esi+4], ecx
0x92A1B0: mov     esi, [esp+8+arg_0]
0x92A1B4: mov     ecx, 0Ch
0x92A1B9: mov     edi, eax
0x92A1BB: rep movsd
0x92A1BD: mov     ecx, [eax+1Ch]
0x92A1C0: test    ecx, ecx
0x92A1C2: pop     edi
0x92A1C3: pop     esi
0x92A1C4: jnz     short locret_92A1D8
0x92A1C6: mov     ecx, offset stru_BA7A40
0x92A1CB: mov     dword ptr [eax+2Ch], 1
0x92A1D2: mov     [eax+24h], ecx
0x92A1D5: mov     [eax+1Ch], ecx
0x92A1D8: retn    4
