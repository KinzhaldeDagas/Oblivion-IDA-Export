0x940E30: push    ebx
0x940E31: push    esi
0x940E32: mov     esi, ecx
0x940E34: mov     eax, [esi+24h]
0x940E37: push    edi
0x940E38: xor     edi, edi
0x940E3A: test    eax, eax
0x940E3C: mov     dword ptr [esi], offset off_AA21EC
0x940E42: jle     short loc_940E5E
0x940E44: mov     edx, [esi+20h]
0x940E47: mov     ecx, ds:0BA7D98h
0x940E4D: mov     edx, [edx+edi*4]
0x940E50: mov     eax, [ecx]
0x940E52: push    edx
0x940E53: call    dword ptr [eax+4]
0x940E56: mov     eax, [esi+24h]
0x940E59: inc     edi
0x940E5A: cmp     edi, eax
0x940E5C: jl      short loc_940E44
0x940E5E: lea     ecx, [esi+60h]
0x940E61: call    sub_8B0E60
0x940E66: lea     ecx, [esi+54h]
0x940E69: call    sub_8B0E60
0x940E6E: lea     ecx, [esi+38h]
0x940E71: call    sub_942BB0
0x940E76: lea     ecx, [esi+2Ch]
0x940E79: call    sub_942BB0
0x940E7E: mov     eax, [esi+28h]
0x940E81: test    eax, eax
0x940E83: mov     edi, ds:0BA9DE4h
0x940E89: mov     ebx, large fs:2Ch
0x940E90: js      short loc_940EAF
0x940E92: mov     ecx, [ebx+edi*4]
0x940E95: mov     ecx, [ecx+19Ch]
0x940E9B: and     eax, 3FFFFFFFh
0x940EA0: push    14h
0x940EA2: shl     eax, 2
0x940EA5: push    eax
0x940EA6: mov     eax, [esi+20h]
0x940EA9: push    eax
0x940EAA: call    sub_8A75D0
0x940EAF: lea     ecx, [esi+14h]
0x940EB2: call    sub_8B0E60
0x940EB7: mov     eax, [esi+10h]
0x940EBA: test    eax, eax
0x940EBC: js      short loc_940EDE
0x940EBE: mov     ecx, [ebx+edi*4]
0x940EC1: mov     ecx, [ecx+19Ch]
0x940EC7: and     eax, 3FFFFFFFh
0x940ECC: lea     edx, [eax+eax*2]
0x940ECF: mov     eax, [esi+8]
0x940ED2: push    14h
0x940ED4: shl     edx, 3
0x940ED7: push    edx
0x940ED8: push    eax
0x940ED9: call    sub_8A75D0
0x940EDE: pop     edi
0x940EDF: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x940EE5: pop     esi
0x940EE6: pop     ebx
0x940EE7: retn
