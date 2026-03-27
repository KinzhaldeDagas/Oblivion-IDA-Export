0x4043A0: push    esi
0x4043A1: mov     esi, ecx
0x4043A3: test    byte ptr [esi], 1
0x4043A6: jz      short loc_4043AF
0x4043A8: push    0
0x4043AA: call    sub_404010
0x4043AF: cmp     dword ptr [esi+28h], 0
0x4043B3: jz      short loc_4043CB
0x4043B5: mov     eax, [esi+28h]
0x4043B8: mov     ecx, [eax]
0x4043BA: mov     edx, [ecx+20h]
0x4043BD: push    eax
0x4043BE: call    edx
0x4043C0: mov     eax, [esi+28h]
0x4043C3: mov     ecx, [eax]
0x4043C5: mov     edx, [ecx+8]
0x4043C8: push    eax
0x4043C9: call    edx
0x4043CB: cmp     dword ptr [esi+2Ch], 0
0x4043CF: jz      short loc_4043E7
0x4043D1: mov     eax, [esi+2Ch]
0x4043D4: mov     ecx, [eax]
0x4043D6: mov     edx, [ecx+20h]
0x4043D9: push    eax
0x4043DA: call    edx
0x4043DC: mov     eax, [esi+2Ch]
0x4043DF: mov     ecx, [eax]
0x4043E1: mov     edx, [ecx+8]
0x4043E4: push    eax
0x4043E5: call    edx
0x4043E7: mov     esi, [esi+4]
0x4043EA: mov     eax, [esi]
0x4043EC: mov     ecx, [eax+8]
0x4043EF: push    esi
0x4043F0: call    ecx
0x4043F2: pop     esi
0x4043F3: retn
