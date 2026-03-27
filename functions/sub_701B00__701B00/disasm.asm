0x701B00: push    esi
0x701B01: push    offset stru_B3F780; lpCriticalSection
0x701B06: mov     esi, ecx
0x701B08: call    dword ptr ds:0A2806Ch
0x701B0E: call    dword ptr ds:0A2808Ch
0x701B14: mov     edx, 1
0x701B19: add     ds:0B3F7FCh, edx
0x701B1F: xor     ecx, ecx
0x701B21: cmp     ds:0B3F700h, ecx
0x701B27: mov     ds:0B3F7F8h, eax
0x701B2C: jnz     short loc_701B34
0x701B2E: mov     ds:0B3F700h, esi
0x701B34: mov     eax, ds:0B3F704h
0x701B39: cmp     eax, ecx
0x701B3B: jz      short loc_701B4A
0x701B3D: mov     [eax+2Ch], esi
0x701B40: mov     eax, ds:0B3F704h
0x701B45: mov     [esi+28h], eax
0x701B48: jmp     short loc_701B4D
0x701B4A: mov     [esi+28h], ecx
0x701B4D: mov     ds:0B3F704h, esi
0x701B53: mov     [esi+2Ch], ecx
0x701B56: sub     ds:0B3F7FCh, edx
0x701B5C: pop     esi
0x701B5D: jnz     short loc_701B65
0x701B5F: mov     ds:0B3F7F8h, ecx
0x701B65: push    offset stru_B3F780; lpCriticalSection
0x701B6A: call    dword ptr ds:0A28074h
0x701B70: retn
