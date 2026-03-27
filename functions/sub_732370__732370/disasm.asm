0x732370: push    esi
0x732371: push    offset stru_B40080; lpCriticalSection
0x732376: mov     esi, ecx
0x732378: call    dword ptr ds:0A2806Ch
0x73237E: call    dword ptr ds:0A2808Ch
0x732384: mov     ecx, 1
0x732389: add     ds:0B400FCh, ecx
0x73238F: cmp     ds:0B40000h, esi
0x732395: mov     ds:0B400F8h, eax
0x73239A: jnz     short loc_7323A4
0x73239C: mov     eax, [esi+20h]
0x73239F: mov     ds:0B40000h, eax
0x7323A4: cmp     ds:0B40004h, esi
0x7323AA: jnz     short loc_7323B5
0x7323AC: mov     edx, [esi+1Ch]
0x7323AF: mov     ds:0B40004h, edx
0x7323B5: mov     eax, [esi+1Ch]
0x7323B8: test    eax, eax
0x7323BA: jz      short loc_7323C2
0x7323BC: mov     edx, [esi+20h]
0x7323BF: mov     [eax+20h], edx
0x7323C2: mov     eax, [esi+20h]
0x7323C5: test    eax, eax
0x7323C7: jz      short loc_7323CF
0x7323C9: mov     edx, [esi+1Ch]
0x7323CC: mov     [eax+1Ch], edx
0x7323CF: sub     ds:0B400FCh, ecx
0x7323D5: pop     esi
0x7323D6: jnz     short loc_7323E2
0x7323D8: mov     dword ptr ds:0B400F8h, 0
0x7323E2: push    offset stru_B40080; lpCriticalSection
0x7323E7: call    dword ptr ds:0A28074h
0x7323ED: retn
