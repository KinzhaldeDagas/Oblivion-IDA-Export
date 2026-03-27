0x918D60: push    ebp
0x918D61: push    esi
0x918D62: push    edi
0x918D63: mov     edi, ecx
0x918D65: lea     ebp, [edi+20h]
0x918D68: mov     ecx, ebp
0x918D6A: call    sub_948CE0
0x918D6F: push    0Fh
0x918D71: mov     ecx, ebp
0x918D73: call    sub_948CB0
0x918D78: mov     eax, [edi+1Ch]
0x918D7B: mov     ecx, [eax+60h]
0x918D7E: xor     esi, esi
0x918D80: test    ecx, ecx
0x918D82: jle     short loc_918DA9
0x918D84: push    ebx
0x918D85: lea     ebx, [edi+28h]
0x918D88: mov     eax, [eax+5Ch]
0x918D8B: mov     ecx, [eax+esi*4]
0x918D8E: mov     edx, [ebx]
0x918D90: push    ecx
0x918D91: push    4
0x918D93: push    offset aWorld; "World"
0x918D98: mov     ecx, ebx
0x918D9A: call    dword ptr [edx+8]
0x918D9D: mov     eax, [edi+1Ch]
0x918DA0: mov     ecx, [eax+60h]
0x918DA3: inc     esi
0x918DA4: cmp     esi, ecx
0x918DA6: jl      short loc_918D88
0x918DA8: pop     ebx
0x918DA9: mov     ecx, ebp
0x918DAB: call    sub_948CD0
0x918DB0: mov     eax, [ebp+10h]
0x918DB3: test    eax, eax
0x918DB5: jle     short loc_918DE7
0x918DB7: mov     eax, [ebp+0Ch]
0x918DBA: test    eax, eax
0x918DBC: jz      short loc_918DE7
0x918DBE: mov     ecx, [ebp+10h]
0x918DC1: test    ecx, ecx
0x918DC3: mov     eax, [edi+30h]
0x918DC6: jle     short loc_918DDB
0x918DC8: mov     ebp, [ebp+0Ch]
0x918DCB: mov     ecx, [edi+10h]
0x918DCE: mov     edx, [ecx]
0x918DD0: push    eax
0x918DD1: push    ebp
0x918DD2: call    dword ptr [edx+2Ch]
0x918DD5: pop     edi
0x918DD6: pop     esi
0x918DD7: pop     ebp
0x918DD8: retn    4
0x918DDB: mov     ecx, [edi+10h]
0x918DDE: mov     edx, [ecx]
0x918DE0: xor     ebp, ebp
0x918DE2: push    eax
0x918DE3: push    ebp
0x918DE4: call    dword ptr [edx+2Ch]
0x918DE7: pop     edi
0x918DE8: pop     esi
0x918DE9: pop     ebp
0x918DEA: retn    4
