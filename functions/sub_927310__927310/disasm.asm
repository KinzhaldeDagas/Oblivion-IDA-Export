0x927310: push    esi
0x927311: push    edi
0x927312: mov     edi, [esp+8+arg_0]
0x927316: cmp     dword ptr [edi+4], 1
0x92731A: mov     esi, ecx
0x92731C: jnz     short loc_927329
0x92731E: mov     eax, [esp+8+arg_4]
0x927322: mov     ecx, [eax+4]
0x927325: test    ecx, ecx
0x927327: jz      short loc_927330
0x927329: pop     edi
0x92732A: xor     eax, eax
0x92732C: pop     esi
0x92732D: retn    8
0x927330: mov     ecx, ds:0BA7D98h
0x927336: mov     edx, [ecx]
0x927338: push    26h ; '&'
0x92733A: push    50h ; 'P'
0x92733C: call    dword ptr [edx+10h]
0x92733F: mov     word ptr [eax+4], 50h ; 'P'
0x927345: mov     ecx, [esi+44h]
0x927348: mov     edx, [esi+40h]
0x92734B: push    ecx
0x92734C: push    edx
0x92734D: lea     ecx, [esi+30h]
0x927350: push    ecx
0x927351: mov     ecx, [edi]
0x927353: lea     edx, [esi+20h]
0x927356: push    edx
0x927357: mov     edx, [ecx]
0x927359: push    edx
0x92735A: mov     ecx, eax
0x92735C: call    sub_926E80
0x927361: mov     ecx, [esi+10h]
0x927364: pop     edi
0x927365: mov     [eax+10h], ecx
0x927368: pop     esi
0x927369: retn    8
