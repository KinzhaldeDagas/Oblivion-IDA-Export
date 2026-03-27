0x556800: push    ebx
0x556801: push    ebp
0x556802: push    esi
0x556803: mov     esi, ecx
0x556805: mov     eax, [esi+4]
0x556808: test    eax, eax
0x55680A: push    edi
0x55680B: jnz     short loc_556811
0x55680D: xor     ebx, ebx
0x55680F: jmp     short loc_556826
0x556811: mov     ecx, [esi+8]
0x556814: sub     ecx, eax
0x556816: mov     eax, 2AAAAAABh
0x55681B: imul    ecx
0x55681D: sar     edx, 1
0x55681F: mov     ebx, edx
0x556821: shr     ebx, 1Fh
0x556824: add     ebx, edx
0x556826: xor     edi, edi
0x556828: xor     ebp, ebp
0x55682A: lea     ebx, [ebx+0]
0x556830: mov     eax, [esi+94h]
0x556836: test    eax, eax
0x556838: jz      loc_5568CE
0x55683E: mov     ecx, [esi+98h]
0x556844: sub     ecx, eax
0x556846: mov     eax, 2AAAAAABh
0x55684B: imul    ecx
0x55684D: sar     edx, 3
0x556850: mov     eax, edx
0x556852: shr     eax, 1Fh
0x556855: add     eax, edx
0x556857: cmp     edi, eax
0x556859: jnb     short loc_5568CE
0x55685B: mov     eax, [esi+94h]
0x556861: test    eax, eax
0x556863: jz      short loc_556882
0x556865: mov     ecx, [esi+98h]
0x55686B: sub     ecx, eax
0x55686D: mov     eax, 2AAAAAABh
0x556872: imul    ecx
0x556874: sar     edx, 3
0x556877: mov     eax, edx
0x556879: shr     eax, 1Fh
0x55687C: add     eax, edx
0x55687E: cmp     edi, eax
0x556880: jb      short loc_556887
0x556882: call    __invalid_parameter_noinfo
0x556887: mov     eax, [esi+94h]
0x55688D: cmp     [eax+ebp+1Ch], ebx
0x556891: jnb     short loc_5568C3
0x556893: test    eax, eax
0x556895: jz      short loc_5568B4
0x556897: mov     ecx, [esi+98h]
0x55689D: sub     ecx, eax
0x55689F: mov     eax, 2AAAAAABh
0x5568A4: imul    ecx
0x5568A6: sar     edx, 3
0x5568A9: mov     eax, edx
0x5568AB: shr     eax, 1Fh
0x5568AE: add     eax, edx
0x5568B0: cmp     edi, eax
0x5568B2: jb      short loc_5568B9
0x5568B4: call    __invalid_parameter_noinfo
0x5568B9: mov     ecx, [esi+94h]
0x5568BF: mov     ebx, [ecx+ebp+1Ch]
0x5568C3: add     edi, 1
0x5568C6: add     ebp, 30h ; '0'
0x5568C9: jmp     loc_556830
0x5568CE: pop     edi
0x5568CF: pop     esi
0x5568D0: pop     ebp
0x5568D1: mov     eax, ebx
0x5568D3: pop     ebx
0x5568D4: retn
