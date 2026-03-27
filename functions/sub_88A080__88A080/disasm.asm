0x88A080: push    esi
0x88A081: mov     esi, ecx
0x88A083: mov     eax, [esi+3Ch]
0x88A086: test    eax, eax
0x88A088: jbe     loc_88A11E
0x88A08E: cmp     eax, 64h ; 'd'
0x88A091: jb      short loc_88A09A
0x88A093: mov     dword ptr [esi+3Ch], 64h ; 'd'
0x88A09A: mov     eax, [esi]
0x88A09C: mov     edx, [eax+58h]
0x88A09F: push    ebx
0x88A0A0: call    edx
0x88A0A2: mov     ebx, eax
0x88A0A4: test    ebx, ebx
0x88A0A6: jz      short loc_88A11D
0x88A0A8: push    edi
0x88A0A9: xor     edi, edi
0x88A0AB: cmp     [esi+3Ch], edi
0x88A0AE: jbe     short loc_88A0FF
0x88A0B0: mov     eax, [esi+38h]
0x88A0B3: cmp     dword ptr [eax+edi*4], 0
0x88A0B7: lea     eax, [eax+edi*4]
0x88A0BA: jz      short loc_88A0CC
0x88A0BC: mov     eax, [eax]
0x88A0BE: cmp     dword ptr [eax+8], 0
0x88A0C2: jnz     short loc_88A0CC
0x88A0C4: push    eax
0x88A0C5: mov     ecx, ebx
0x88A0C7: call    sub_89BAE0
0x88A0CC: mov     ecx, [esi+38h]
0x88A0CF: cmp     dword ptr [ecx+edi*4], 0
0x88A0D3: lea     eax, [ecx+edi*4]
0x88A0D6: jz      short loc_88A0F7
0x88A0D8: mov     ecx, [eax]
0x88A0DA: cmp     word ptr [ecx+4], 0
0x88A0DF: jz      short loc_88A0F7
0x88A0E1: add     word ptr [ecx+6], 0FFFFh
0x88A0E6: movzx   eax, word ptr [ecx+6]
0x88A0EA: test    ax, ax
0x88A0ED: jnz     short loc_88A0F7
0x88A0EF: mov     edx, [ecx]
0x88A0F1: mov     eax, [edx]
0x88A0F3: push    1
0x88A0F5: call    eax
0x88A0F7: add     edi, 1
0x88A0FA: cmp     edi, [esi+3Ch]
0x88A0FD: jb      short loc_88A0B0
0x88A0FF: mov     ecx, [esi+3Ch]
0x88A102: mov     edx, [esi+38h]
0x88A105: add     ecx, ecx
0x88A107: add     ecx, ecx
0x88A109: push    ecx
0x88A10A: push    0
0x88A10C: push    edx
0x88A10D: call    __memset
0x88A112: add     esp, 0Ch
0x88A115: mov     dword ptr [esi+3Ch], 0
0x88A11C: pop     edi
0x88A11D: pop     ebx
0x88A11E: pop     esi
0x88A11F: retn
