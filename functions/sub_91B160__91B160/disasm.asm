0x91B160: push    ebx
0x91B161: push    esi
0x91B162: mov     esi, ecx
0x91B164: test    esi, esi
0x91B166: push    edi
0x91B167: jz      short loc_91B16E
0x91B169: lea     eax, [esi+28h]
0x91B16C: jmp     short loc_91B170
0x91B16E: xor     eax, eax
0x91B170: mov     edi, [esp+0Ch+arg_0]
0x91B174: push    eax
0x91B175: mov     eax, [esi+30h]
0x91B178: mov     ecx, [eax+edi*4]
0x91B17B: mov     ecx, [ecx]
0x91B17D: call    sub_8989E0
0x91B182: mov     eax, [esi+30h]
0x91B185: mov     ecx, [eax+edi*4]
0x91B188: mov     ecx, [ecx]
0x91B18A: lea     edx, [esi+2Ch]
0x91B18D: push    edx
0x91B18E: call    sub_898A80
0x91B193: push    edi
0x91B194: mov     ecx, esi
0x91B196: call    sub_91ABA0
0x91B19B: mov     edx, [esi+30h]
0x91B19E: mov     ebx, [edx+edi*4]
0x91B1A1: test    ebx, ebx
0x91B1A3: jz      short loc_91B1F0
0x91B1A5: mov     eax, [ebx+0Ch]
0x91B1A8: test    eax, eax
0x91B1AA: js      short loc_91B1E0
0x91B1AC: mov     ecx, ds:0BA9DE4h
0x91B1B2: mov     edx, large fs:2Ch
0x91B1B9: mov     ecx, [edx+ecx*4]
0x91B1BC: mov     ecx, [ecx+19Ch]
0x91B1C2: test    ecx, ecx
0x91B1C4: jnz     short loc_91B1CC
0x91B1C6: mov     ecx, ds:0BA7D9Ch
0x91B1CC: mov     edx, [ebx+4]
0x91B1CF: and     eax, 3FFFFFFFh
0x91B1D4: push    14h
0x91B1D6: shl     eax, 2
0x91B1D9: push    eax
0x91B1DA: push    edx
0x91B1DB: call    sub_8A75D0
0x91B1E0: mov     ecx, ds:0BA7D98h
0x91B1E6: mov     eax, [ecx]
0x91B1E8: push    32h ; '2'
0x91B1EA: push    10h
0x91B1EC: push    ebx
0x91B1ED: call    dword ptr [eax+14h]
0x91B1F0: mov     eax, [esi+34h]
0x91B1F3: dec     eax
0x91B1F4: mov     [esi+34h], eax
0x91B1F7: mov     esi, [esi+30h]
0x91B1FA: mov     ecx, [esi+eax*4]
0x91B1FD: mov     [esi+edi*4], ecx
0x91B200: pop     edi
0x91B201: pop     esi
0x91B202: pop     ebx
0x91B203: retn    4
