0x8D87E0: push    esi
0x8D87E1: mov     esi, ecx
0x8D87E3: lea     eax, [esi+10h]
0x8D87E6: push    eax; lpCriticalSection
0x8D87E7: call    dword ptr ds:0A28068h
0x8D87ED: mov     eax, [esi+8]
0x8D87F0: test    eax, eax
0x8D87F2: js      short loc_8D882A
0x8D87F4: mov     ecx, ds:0BA9DE4h
0x8D87FA: mov     edx, large fs:2Ch
0x8D8801: mov     ecx, [edx+ecx*4]
0x8D8804: mov     ecx, [ecx+19Ch]
0x8D880A: test    ecx, ecx
0x8D880C: jnz     short loc_8D8814
0x8D880E: mov     ecx, ds:0BA7D9Ch
0x8D8814: and     eax, 3FFFFFFFh
0x8D8819: lea     edx, [eax+eax*4]
0x8D881C: mov     eax, [esi]
0x8D881E: push    14h
0x8D8820: shl     edx, 2
0x8D8823: push    edx
0x8D8824: push    eax
0x8D8825: call    sub_8A75D0
0x8D882A: pop     esi
0x8D882B: retn
