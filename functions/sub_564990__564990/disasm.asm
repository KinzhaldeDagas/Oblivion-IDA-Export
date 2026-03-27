0x564990: push    ebx
0x564991: mov     ebx, [esp+4+a2]
0x564995: test    ebx, ebx
0x564997: push    edi
0x564998: mov     edi, ecx
0x56499A: jz      short loc_564A1A
0x56499C: mov     eax, [edi]
0x56499E: mov     edx, [eax+0A8h]
0x5649A4: push    esi
0x5649A5: call    edx
0x5649A7: mov     esi, eax
0x5649A9: test    esi, esi
0x5649AB: jz      short loc_564A19
0x5649AD: push    offset aBillboard; "Billboard"
0x5649B2: mov     ecx, ebx
0x5649B4: call    NiObjectNET_SetName
0x5649B9: mov     eax, [edi+0E8h]
0x5649BF: add     edi, 0E8h ; 'è'
0x5649C5: test    eax, eax
0x5649C7: jz      short loc_564A02
0x5649C9: mov     edx, [esi]
0x5649CB: mov     edx, [edx+88h]
0x5649D1: push    ebp
0x5649D2: push    eax
0x5649D3: lea     eax, [esp+14h+a2]
0x5649D7: push    eax
0x5649D8: mov     ecx, esi
0x5649DA: call    edx
0x5649DC: mov     ebp, [esp+10h+a2]
0x5649E0: test    ebp, ebp
0x5649E2: jz      short loc_564A01
0x5649E4: lea     eax, [ebp+4]
0x5649E7: push    eax; lpAddend
0x5649E8: call    dword ptr ds:0A2807Ch
0x5649EE: test    eax, eax
0x5649F0: jnz     short loc_564A01
0x5649F2: test    ebp, ebp
0x5649F4: jz      short loc_564A01
0x5649F6: mov     edx, [ebp+0]
0x5649F9: mov     eax, [edx]
0x5649FB: push    1
0x5649FD: mov     ecx, ebp
0x5649FF: call    eax
0x564A01: pop     ebp
0x564A02: mov     edx, [esi]
0x564A04: mov     eax, [edx+84h]
0x564A0A: push    1
0x564A0C: push    ebx
0x564A0D: mov     ecx, esi
0x564A0F: call    eax
0x564A11: push    ebx; a2
0x564A12: mov     ecx, edi; this
0x564A14: call    NiSmartPointer_Set??
0x564A19: pop     esi
0x564A1A: pop     edi
0x564A1B: pop     ebx
0x564A1C: retn    4
