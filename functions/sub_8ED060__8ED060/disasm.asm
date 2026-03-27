0x8ED060: push    ebx
0x8ED061: push    ebp
0x8ED062: push    esi
0x8ED063: push    edi
0x8ED064: mov     edi, ecx
0x8ED066: mov     ecx, ds:0BA7D98h
0x8ED06C: mov     eax, [ecx]
0x8ED06E: push    2Eh ; '.'
0x8ED070: push    130h
0x8ED075: call    dword ptr [eax+10h]
0x8ED078: mov     esi, eax
0x8ED07A: mov     word ptr [esi+4], 130h
0x8ED080: mov     edx, [edi+14h]
0x8ED083: mov     ebx, [edi+30h]
0x8ED086: lea     ecx, [edi+70h]
0x8ED089: push    ecx
0x8ED08A: push    edx
0x8ED08B: mov     ecx, esi
0x8ED08D: call    sub_8ABC40
0x8ED092: mov     ebp, large fs:2Ch
0x8ED099: mov     dword ptr [esi], offset off_A9AFFC
0x8ED09F: xor     edx, edx
0x8ED0A1: mov     [esi+120h], edx
0x8ED0A7: mov     [esi+124h], edx
0x8ED0AD: mov     dword ptr [esi+128h], 80000000h
0x8ED0B7: mov     [esi+30h], ebx
0x8ED0BA: mov     ecx, [esi+58h]
0x8ED0BD: mov     ebx, [edi+54h]
0x8ED0C0: mov     eax, ecx
0x8ED0C2: and     eax, 3FFFFFFFh
0x8ED0C7: cmp     eax, ebx
0x8ED0C9: mov     ebx, ds:0BA9DE4h
0x8ED0CF: jge     short loc_8ED132
0x8ED0D1: test    ecx, ecx
0x8ED0D3: js      short loc_8ED0FC
0x8ED0D5: mov     ecx, [ebp+ebx*4+0]
0x8ED0D9: mov     ecx, [ecx+19Ch]
0x8ED0DF: cmp     ecx, edx
0x8ED0E1: jnz     short loc_8ED0E9
0x8ED0E3: mov     ecx, ds:0BA7D9Ch
0x8ED0E9: push    14h
0x8ED0EB: lea     edx, ds:0[eax*4]
0x8ED0F2: mov     eax, [esi+50h]
0x8ED0F5: push    edx
0x8ED0F6: push    eax
0x8ED0F7: call    sub_8A75D0
0x8ED0FC: mov     ecx, [ebp+ebx*4+0]
0x8ED100: mov     eax, [ecx+19Ch]
0x8ED106: test    eax, eax
0x8ED108: jnz     short loc_8ED10F
0x8ED10A: mov     eax, ds:0BA7D9Ch
0x8ED10F: mov     edx, [edi+54h]
0x8ED112: push    14h
0x8ED114: shl     edx, 2
0x8ED117: push    edx
0x8ED118: mov     ecx, eax
0x8ED11A: call    sub_8A7560
0x8ED11F: mov     [esi+50h], eax
0x8ED122: mov     eax, [esi+58h]
0x8ED125: mov     ecx, [edi+54h]
0x8ED128: and     eax, 40000000h
0x8ED12D: or      eax, ecx
0x8ED12F: mov     [esi+58h], eax
0x8ED132: mov     ecx, [edi+54h]
0x8ED135: test    ecx, ecx
0x8ED137: mov     eax, [esi+50h]
0x8ED13A: mov     [esi+54h], ecx
0x8ED13D: mov     edx, [edi+50h]
0x8ED140: jle     short loc_8ED156
0x8ED142: sub     edx, eax
0x8ED144: mov     ebp, [edx+eax]
0x8ED147: mov     [eax], ebp
0x8ED149: add     eax, 4
0x8ED14C: dec     ecx
0x8ED14D: jnz     short loc_8ED144
0x8ED14F: mov     ebp, large fs:2Ch
0x8ED156: mov     ecx, [esi+64h]
0x8ED159: mov     edx, [edi+60h]
0x8ED15C: mov     eax, ecx
0x8ED15E: and     eax, 3FFFFFFFh
0x8ED163: cmp     eax, edx
0x8ED165: jge     short loc_8ED1C8
0x8ED167: test    ecx, ecx
0x8ED169: js      short loc_8ED192
0x8ED16B: mov     ecx, [ebp+ebx*4+0]
0x8ED16F: mov     ecx, [ecx+19Ch]
0x8ED175: test    ecx, ecx
0x8ED177: jnz     short loc_8ED17F
0x8ED179: mov     ecx, ds:0BA7D9Ch
0x8ED17F: push    14h
0x8ED181: lea     edx, ds:0[eax*4]
0x8ED188: mov     eax, [esi+5Ch]
0x8ED18B: push    edx
0x8ED18C: push    eax
0x8ED18D: call    sub_8A75D0
0x8ED192: mov     ecx, [ebp+ebx*4+0]
0x8ED196: mov     eax, [ecx+19Ch]
0x8ED19C: test    eax, eax
0x8ED19E: jnz     short loc_8ED1A5
0x8ED1A0: mov     eax, ds:0BA7D9Ch
0x8ED1A5: mov     edx, [edi+60h]
0x8ED1A8: push    14h
0x8ED1AA: shl     edx, 2
0x8ED1AD: push    edx
0x8ED1AE: mov     ecx, eax
0x8ED1B0: call    sub_8A7560
0x8ED1B5: mov     [esi+5Ch], eax
0x8ED1B8: mov     eax, [esi+64h]
0x8ED1BB: mov     ecx, [edi+60h]
0x8ED1BE: and     eax, 40000000h
0x8ED1C3: or      eax, ecx
0x8ED1C5: mov     [esi+64h], eax
0x8ED1C8: mov     ecx, [edi+60h]
0x8ED1CB: test    ecx, ecx
0x8ED1CD: mov     eax, [esi+5Ch]
0x8ED1D0: mov     [esi+60h], ecx
0x8ED1D3: mov     edx, [edi+5Ch]
0x8ED1D6: jle     short loc_8ED1EB
0x8ED1D8: sub     edx, eax
0x8ED1DA: lea     ebx, [ebx+0]
0x8ED1E0: mov     ebx, [edx+eax]
0x8ED1E3: mov     [eax], ebx
0x8ED1E5: add     eax, 4
0x8ED1E8: dec     ecx
0x8ED1E9: jnz     short loc_8ED1E0
0x8ED1EB: push    edi
0x8ED1EC: mov     ecx, esi
0x8ED1EE: call    sub_8A9E50
0x8ED1F3: pop     edi
0x8ED1F4: mov     eax, esi
0x8ED1F6: pop     esi
0x8ED1F7: pop     ebp
0x8ED1F8: pop     ebx
0x8ED1F9: retn
