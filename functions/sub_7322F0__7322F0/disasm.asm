0x7322F0: push    esi
0x7322F1: push    offset stru_B40080; lpCriticalSection
0x7322F6: mov     esi, ecx
0x7322F8: call    dword ptr ds:0A2806Ch
0x7322FE: call    dword ptr ds:0A2808Ch
0x732304: mov     edx, 1
0x732309: add     ds:0B400FCh, edx
0x73230F: xor     ecx, ecx
0x732311: cmp     ds:0B40000h, ecx
0x732317: mov     ds:0B400F8h, eax
0x73231C: jnz     short loc_732324
0x73231E: mov     ds:0B40000h, esi
0x732324: mov     eax, ds:0B40004h
0x732329: cmp     eax, ecx
0x73232B: jz      short loc_73233A
0x73232D: mov     [eax+20h], esi
0x732330: mov     eax, ds:0B40004h
0x732335: mov     [esi+1Ch], eax
0x732338: jmp     short loc_73233D
0x73233A: mov     [esi+1Ch], ecx
0x73233D: mov     ds:0B40004h, esi
0x732343: mov     [esi+20h], ecx
0x732346: sub     ds:0B400FCh, edx
0x73234C: pop     esi
0x73234D: jnz     short loc_732355
0x73234F: mov     ds:0B400F8h, ecx
0x732355: push    offset stru_B40080; lpCriticalSection
0x73235A: call    dword ptr ds:0A28074h
0x732360: retn
