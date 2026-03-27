0x6D1480: mov     eax, [esp+arg_4]
0x6D1484: push    ebx
0x6D1485: push    ebp
0x6D1486: push    edi
0x6D1487: mov     edi, [esp+0Ch+arg_0]
0x6D148B: push    eax
0x6D148C: push    edi
0x6D148D: mov     ebx, ecx
0x6D148F: call    sub_6D0530
0x6D1494: mov     cx, [ebx+3Ch]
0x6D1498: mov     [edi+3Ch], cx
0x6D149C: mov     eax, [ebx+50h]
0x6D149F: test    eax, eax
0x6D14A1: jz      short loc_6D14B3
0x6D14A3: cmp     dword ptr [edi+30h], 0
0x6D14A7: mov     ecx, edi
0x6D14A9: setnz   dl
0x6D14AC: push    edx
0x6D14AD: push    eax
0x6D14AE: call    sub_6D11F0
0x6D14B3: cmp     byte ptr ds:0B3CE18h, 0
0x6D14BA: jz      short loc_6D14C4
0x6D14BC: mov     byte ptr [ebx+5Ah], 1
0x6D14C0: mov     byte ptr [edi+5Ah], 1
0x6D14C4: mov     eax, [ebx]
0x6D14C6: mov     edx, [eax+74h]
0x6D14C9: mov     ecx, ebx
0x6D14CB: xor     ebp, ebp
0x6D14CD: call    edx
0x6D14CF: test    ax, ax
0x6D14D2: jbe     short loc_6D151A
0x6D14D4: push    esi
0x6D14D5: mov     ecx, [ebx+54h]
0x6D14D8: movzx   eax, bp
0x6D14DB: mov     ecx, [ecx+eax*4]
0x6D14DE: test    ecx, ecx
0x6D14E0: push    ebp
0x6D14E1: jz      short loc_6D14FA
0x6D14E3: mov     edx, [esp+14h+arg_4]
0x6D14E7: mov     esi, [edi]
0x6D14E9: push    edx
0x6D14EA: add     esi, 84h ; '„'
0x6D14F0: call    sub_700710
0x6D14F5: push    eax
0x6D14F6: mov     eax, [esi]
0x6D14F8: jmp     short loc_6D1504
0x6D14FA: mov     edx, [edi]
0x6D14FC: mov     eax, [edx+84h]
0x6D1502: push    0
0x6D1504: mov     ecx, edi
0x6D1506: call    eax
0x6D1508: mov     edx, [ebx]
0x6D150A: mov     eax, [edx+74h]
0x6D150D: mov     ecx, ebx
0x6D150F: add     ebp, 1
0x6D1512: call    eax
0x6D1514: cmp     bp, ax
0x6D1517: jb      short loc_6D14D5
0x6D1519: pop     esi
0x6D151A: pop     edi
0x6D151B: pop     ebp
0x6D151C: pop     ebx
0x6D151D: retn    8
