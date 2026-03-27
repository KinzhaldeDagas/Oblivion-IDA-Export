0x8BC0A0: push    esi
0x8BC0A1: mov     esi, ecx
0x8BC0A3: mov     eax, [esi+8]
0x8BC0A6: mov     dword ptr [eax+4], 0
0x8BC0AD: mov     edx, [esi+8]
0x8BC0B0: mov     dword ptr [esi+0Ch], 0
0x8BC0B7: mov     eax, [edx+4]
0x8BC0BA: mov     ecx, [edx+8]
0x8BC0BD: inc     eax
0x8BC0BE: and     ecx, 3FFFFFFFh
0x8BC0C4: cmp     ecx, eax
0x8BC0C6: jge     short loc_8BC0DC
0x8BC0C8: add     ecx, ecx
0x8BC0CA: cmp     eax, ecx
0x8BC0CC: jge     short loc_8BC0D0
0x8BC0CE: mov     eax, ecx
0x8BC0D0: push    1
0x8BC0D2: push    eax
0x8BC0D3: push    edx
0x8BC0D4: call    sub_8A6E40
0x8BC0D9: add     esp, 0Ch
0x8BC0DC: mov     esi, [esi+8]
0x8BC0DF: mov     ecx, [esi+4]
0x8BC0E2: mov     edx, [esi]
0x8BC0E4: mov     byte ptr [ecx+edx], 0
0x8BC0E8: pop     esi
0x8BC0E9: retn
