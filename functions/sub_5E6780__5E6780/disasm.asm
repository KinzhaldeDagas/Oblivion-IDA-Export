0x5E6780: push    ebx
0x5E6781: push    edi
0x5E6782: mov     edi, ecx
0x5E6784: mov     eax, [edi+58h]
0x5E6787: xor     ebx, ebx
0x5E6789: test    eax, eax
0x5E678B: jz      short loc_5E67F8
0x5E678D: mov     eax, [eax+8]
0x5E6790: test    eax, eax
0x5E6792: jz      short loc_5E67F8
0x5E6794: push    esi
0x5E6795: mov     esi, [eax+28h]
0x5E6798: test    esi, esi
0x5E679A: jz      short loc_5E67F7
0x5E679C: mov     ecx, esi
0x5E679E: call    TargetData__GetTargetType
0x5E67A3: sub     eax, ebx
0x5E67A5: jz      short loc_5E67FD
0x5E67A7: sub     eax, 1
0x5E67AA: jz      short loc_5E67BE
0x5E67AC: sub     eax, 1
0x5E67AF: jnz     short loc_5E67F7
0x5E67B1: mov     ecx, esi
0x5E67B3: call    sub_569E80
0x5E67B8: pop     esi
0x5E67B9: pop     edi
0x5E67BA: mov     eax, ebx
0x5E67BC: pop     ebx
0x5E67BD: retn
0x5E67BE: mov     ecx, esi
0x5E67C0: call    sub_569E70
0x5E67C5: test    eax, eax
0x5E67C7: jz      short loc_5E67F7
0x5E67C9: mov     ecx, esi
0x5E67CB: call    sub_569E70
0x5E67D0: mov     edx, [eax]
0x5E67D2: mov     ecx, eax
0x5E67D4: mov     eax, [edx+0A4h]
0x5E67DA: call    eax
0x5E67DC: test    al, al
0x5E67DE: jz      short loc_5E67F7
0x5E67E0: mov     ecx, esi
0x5E67E2: call    sub_569E70
0x5E67E7: test    eax, eax
0x5E67E9: jz      short loc_5E67F7
0x5E67EB: push    0
0x5E67ED: push    eax
0x5E67EE: mov     ecx, edi
0x5E67F0: call    sub_4D8D70
0x5E67F5: mov     ebx, eax
0x5E67F7: pop     esi
0x5E67F8: pop     edi
0x5E67F9: mov     eax, ebx
0x5E67FB: pop     ebx
0x5E67FC: retn
0x5E67FD: mov     ecx, esi
0x5E67FF: call    sub_569E60
0x5E6804: test    eax, eax
0x5E6806: jz      short loc_5E67F7
0x5E6808: mov     ecx, [eax+0Ch]
0x5E680B: mov     edx, [eax]
0x5E680D: push    ecx
0x5E680E: mov     ecx, eax
0x5E6810: mov     eax, [edx+170h]
0x5E6816: call    eax
0x5E6818: push    eax
0x5E6819: mov     ecx, edi
0x5E681B: call    sub_4D8D70
0x5E6820: pop     esi
0x5E6821: pop     edi
0x5E6822: mov     ebx, eax
0x5E6824: pop     ebx
0x5E6825: retn
