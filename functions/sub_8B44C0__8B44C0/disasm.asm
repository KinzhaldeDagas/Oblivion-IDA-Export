0x8B44C0: push    ebx
0x8B44C1: mov     ebx, large fs:2Ch
0x8B44C8: push    esi
0x8B44C9: mov     esi, ecx
0x8B44CB: mov     eax, [esi+14h]
0x8B44CE: test    eax, eax
0x8B44D0: push    edi
0x8B44D1: mov     edi, ds:0BA9DE4h
0x8B44D7: js      short loc_8B4503
0x8B44D9: mov     ecx, [ebx+edi*4]
0x8B44DC: mov     ecx, [ecx+19Ch]
0x8B44E2: test    ecx, ecx
0x8B44E4: jnz     short loc_8B44EC
0x8B44E6: mov     ecx, ds:0BA7D9Ch
0x8B44EC: and     eax, 3FFFFFFFh
0x8B44F1: lea     edx, [eax+eax*2]
0x8B44F4: mov     eax, [esi+0Ch]
0x8B44F7: push    14h
0x8B44F9: shl     edx, 2
0x8B44FC: push    edx
0x8B44FD: push    eax
0x8B44FE: call    sub_8A75D0
0x8B4503: mov     eax, [esi+8]
0x8B4506: test    eax, eax
0x8B4508: js      short loc_8B4530
0x8B450A: mov     ecx, [ebx+edi*4]
0x8B450D: mov     ecx, [ecx+19Ch]
0x8B4513: test    ecx, ecx
0x8B4515: jnz     short loc_8B451D
0x8B4517: mov     ecx, ds:0BA7D9Ch
0x8B451D: mov     edx, [esi]
0x8B451F: and     eax, 3FFFFFFFh
0x8B4524: push    14h
0x8B4526: shl     eax, 4
0x8B4529: push    eax
0x8B452A: push    edx
0x8B452B: call    sub_8A75D0
0x8B4530: pop     edi
0x8B4531: pop     esi
0x8B4532: pop     ebx
0x8B4533: retn
