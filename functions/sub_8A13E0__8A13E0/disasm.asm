0x8A13E0: push    ebx
0x8A13E1: mov     ebx, ecx
0x8A13E3: test    ebx, ebx
0x8A13E5: jz      short loc_8A143E
0x8A13E7: mov     ecx, [ebx+8]
0x8A13EA: test    ecx, ecx
0x8A13EC: jz      short loc_8A143E
0x8A13EE: mov     eax, [ecx]
0x8A13F0: mov     edx, [eax+1Ch]
0x8A13F3: push    edi
0x8A13F4: call    edx
0x8A13F6: mov     edi, eax
0x8A13F8: test    edi, edi
0x8A13FA: jz      short loc_8A143D
0x8A13FC: push    ebp
0x8A13FD: mov     ebp, ds:0A2807Ch
0x8A1403: push    esi
0x8A1404: mov     eax, [ebx+8]
0x8A1407: sub     edi, 1
0x8A140A: test    eax, eax
0x8A140C: jz      short loc_8A141D
0x8A140E: mov     eax, [eax+10h]
0x8A1411: mov     eax, [eax+edi*8]
0x8A1414: test    eax, eax
0x8A1416: jz      short loc_8A141D
0x8A1418: mov     esi, [eax+8]
0x8A141B: jmp     short loc_8A141F
0x8A141D: xor     esi, esi
0x8A141F: test    esi, esi
0x8A1421: jz      short loc_8A1437
0x8A1423: lea     ecx, [esi+4]
0x8A1426: push    ecx; lpAddend
0x8A1427: call    ebp ; InterlockedDecrement
0x8A1429: test    eax, eax
0x8A142B: jnz     short loc_8A1437
0x8A142D: mov     edx, [esi]
0x8A142F: mov     eax, [edx]
0x8A1431: push    1
0x8A1433: mov     ecx, esi
0x8A1435: call    eax
0x8A1437: test    edi, edi
0x8A1439: jnz     short loc_8A1404
0x8A143B: pop     esi
0x8A143C: pop     ebp
0x8A143D: pop     edi
0x8A143E: pop     ebx
0x8A143F: retn
