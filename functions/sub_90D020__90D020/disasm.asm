0x90D020: push    ebx
0x90D021: push    esi
0x90D022: mov     esi, ecx
0x90D024: mov     eax, [esi+44h]
0x90D027: xor     ebx, ebx
0x90D029: test    eax, eax
0x90D02B: push    edi
0x90D02C: mov     dword ptr [esi], offset off_A9C4D4
0x90D032: jle     short loc_90D05D
0x90D034: mov     eax, [esi+40h]
0x90D037: mov     edi, [eax+ebx*4]
0x90D03A: test    edi, edi
0x90D03C: jz      short loc_90D055
0x90D03E: mov     ecx, edi
0x90D040: call    sub_90C940
0x90D045: mov     ecx, ds:0BA7D98h
0x90D04B: mov     edx, [ecx]
0x90D04D: push    22h ; '"'
0x90D04F: push    48h ; 'H'
0x90D051: push    edi
0x90D052: call    dword ptr [edx+14h]
0x90D055: mov     eax, [esi+44h]
0x90D058: inc     ebx
0x90D059: cmp     ebx, eax
0x90D05B: jl      short loc_90D034
0x90D05D: mov     eax, [esi+48h]
0x90D060: test    eax, eax
0x90D062: mov     edi, ds:0BA9DE4h
0x90D068: mov     ebx, large fs:2Ch
0x90D06F: js      short loc_90D098
0x90D071: mov     ecx, [ebx+edi*4]
0x90D074: mov     ecx, [ecx+19Ch]
0x90D07A: test    ecx, ecx
0x90D07C: jnz     short loc_90D084
0x90D07E: mov     ecx, ds:0BA7D9Ch
0x90D084: mov     edx, [esi+40h]
0x90D087: and     eax, 3FFFFFFFh
0x90D08C: push    14h
0x90D08E: shl     eax, 2
0x90D091: push    eax
0x90D092: push    edx
0x90D093: call    sub_8A75D0
0x90D098: mov     eax, [esi+2Ch]
0x90D09B: test    eax, eax
0x90D09D: js      short loc_90D0C9
0x90D09F: mov     ecx, [ebx+edi*4]
0x90D0A2: mov     ecx, [ecx+19Ch]
0x90D0A8: test    ecx, ecx
0x90D0AA: jnz     short loc_90D0B2
0x90D0AC: mov     ecx, ds:0BA7D9Ch
0x90D0B2: and     eax, 3FFFFFFFh
0x90D0B7: lea     edx, [eax+eax*2]
0x90D0BA: mov     eax, [esi+24h]
0x90D0BD: push    14h
0x90D0BF: shl     edx, 4
0x90D0C2: push    edx
0x90D0C3: push    eax
0x90D0C4: call    sub_8A75D0
0x90D0C9: pop     edi
0x90D0CA: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x90D0D0: pop     esi
0x90D0D1: pop     ebx
0x90D0D2: retn
