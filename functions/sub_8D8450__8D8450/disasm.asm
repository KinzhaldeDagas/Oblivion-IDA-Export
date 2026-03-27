0x8D8450: push    esi
0x8D8451: mov     esi, ecx
0x8D8453: mov     ecx, ds:0BA7D98h
0x8D8459: mov     eax, [ecx]
0x8D845B: push    1Eh
0x8D845D: push    8
0x8D845F: call    dword ptr [eax+10h]
0x8D8462: mov     word ptr [eax+4], 8
0x8D8468: mov     word ptr [eax+6], 1
0x8D846E: mov     dword ptr [eax], offset off_A9A24C
0x8D8474: mov     [esi+100h], eax
0x8D847A: lea     eax, [esi+8]
0x8D847D: mov     ecx, 8
0x8D8482: jmp     short loc_8D8490
0x8D8484: db 8Dh, 0A4h, 24h, 4 dup(0)
0x8D848B: jmp     short loc_8D8490
0x8D848D: align 10h
0x8D8490: mov     edx, [esi+100h]
0x8D8496: mov     [eax-8], edx
0x8D8499: mov     edx, [esi+100h]
0x8D849F: mov     [eax-4], edx
0x8D84A2: mov     edx, [esi+100h]
0x8D84A8: mov     [eax], edx
0x8D84AA: mov     edx, [esi+100h]
0x8D84B0: mov     [eax+4], edx
0x8D84B3: mov     edx, [esi+100h]
0x8D84B9: mov     [eax+8], edx
0x8D84BC: mov     edx, [esi+100h]
0x8D84C2: mov     [eax+0Ch], edx
0x8D84C5: mov     edx, [esi+100h]
0x8D84CB: mov     [eax+10h], edx
0x8D84CE: mov     edx, [esi+100h]
0x8D84D4: mov     [eax+14h], edx
0x8D84D7: add     eax, 20h ; ' '
0x8D84DA: dec     ecx
0x8D84DB: jnz     short loc_8D8490
0x8D84DD: mov     eax, esi
0x8D84DF: pop     esi
0x8D84E0: retn
