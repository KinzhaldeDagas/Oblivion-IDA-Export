0x9137B0: push    esi
0x9137B1: push    edi
0x9137B2: mov     edi, ecx
0x9137B4: mov     ecx, [edi+8]
0x9137B7: mov     esi, [edi+4]
0x9137BA: dec     ecx
0x9137BB: add     esi, 1Ch
0x9137BE: mov     [edi+8], ecx
0x9137C1: mov     eax, [esi+8]
0x9137C4: mov     ecx, [esi+4]
0x9137C7: and     eax, 3FFFFFFFh
0x9137CC: cmp     ecx, eax
0x9137CE: jnz     short loc_9137DB
0x9137D0: push    4
0x9137D2: push    esi
0x9137D3: call    sub_8A6EE0
0x9137D8: add     esp, 8
0x9137DB: mov     ecx, [esi+4]
0x9137DE: mov     edx, [esi]
0x9137E0: mov     dword ptr [edx+ecx*4], 17h
0x9137E7: inc     dword ptr [esi+4]
0x9137EA: mov     eax, [edi+4]
0x9137ED: mov     esi, [eax+8]
0x9137F0: mov     edx, [eax+4]
0x9137F3: mov     ecx, [eax+0Ch]
0x9137F6: add     esi, 4
0x9137F9: add     edx, 30h ; '0'
0x9137FC: inc     ecx
0x9137FD: pop     edi
0x9137FE: mov     [eax+8], esi
0x913801: mov     [eax+4], edx
0x913804: mov     [eax+0Ch], ecx
0x913807: pop     esi
0x913808: retn
