0x701B80: push    esi
0x701B81: push    offset stru_B3F780; lpCriticalSection
0x701B86: mov     esi, ecx
0x701B88: call    dword ptr ds:0A2806Ch
0x701B8E: call    dword ptr ds:0A2808Ch
0x701B94: mov     ecx, 1
0x701B99: add     ds:0B3F7FCh, ecx
0x701B9F: cmp     ds:0B3F700h, esi
0x701BA5: mov     ds:0B3F7F8h, eax
0x701BAA: jnz     short loc_701BB4
0x701BAC: mov     eax, [esi+2Ch]
0x701BAF: mov     ds:0B3F700h, eax
0x701BB4: cmp     ds:0B3F704h, esi
0x701BBA: jnz     short loc_701BC5
0x701BBC: mov     edx, [esi+28h]
0x701BBF: mov     ds:0B3F704h, edx
0x701BC5: mov     eax, [esi+28h]
0x701BC8: test    eax, eax
0x701BCA: jz      short loc_701BD2
0x701BCC: mov     edx, [esi+2Ch]
0x701BCF: mov     [eax+2Ch], edx
0x701BD2: mov     eax, [esi+2Ch]
0x701BD5: test    eax, eax
0x701BD7: jz      short loc_701BDF
0x701BD9: mov     edx, [esi+28h]
0x701BDC: mov     [eax+28h], edx
0x701BDF: sub     ds:0B3F7FCh, ecx
0x701BE5: pop     esi
0x701BE6: jnz     short loc_701BF2
0x701BE8: mov     dword ptr ds:0B3F7F8h, 0
0x701BF2: push    offset stru_B3F780; lpCriticalSection
0x701BF7: call    dword ptr ds:0A28074h
0x701BFD: retn
