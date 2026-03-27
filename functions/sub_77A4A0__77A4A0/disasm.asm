0x77A4A0: push    ebx
0x77A4A1: mov     ebx, ecx
0x77A4A3: cmp     dword ptr [ebx+14h], 0
0x77A4A7: jz      short loc_77A4E6
0x77A4A9: push    edi
0x77A4AA: xor     edi, edi
0x77A4AC: cmp     [ebx+38h], edi
0x77A4AF: jbe     short loc_77A4E1
0x77A4B1: push    esi
0x77A4B2: mov     eax, [ebx+44h]
0x77A4B5: mov     esi, [eax+edi*4]
0x77A4B8: test    esi, esi
0x77A4BA: jz      short loc_77A4D8
0x77A4BC: mov     ecx, [esi+44h]
0x77A4BF: test    ecx, ecx
0x77A4C1: jz      short loc_77A4CA
0x77A4C3: mov     edx, [ecx]
0x77A4C5: mov     eax, [edx+44h]
0x77A4C8: call    eax
0x77A4CA: mov     ecx, [esi+58h]
0x77A4CD: test    ecx, ecx
0x77A4CF: jz      short loc_77A4D8
0x77A4D1: mov     edx, [ecx]
0x77A4D3: mov     eax, [edx+5Ch]
0x77A4D6: call    eax
0x77A4D8: add     edi, 1
0x77A4DB: cmp     edi, [ebx+38h]
0x77A4DE: jb      short loc_77A4B2
0x77A4E0: pop     esi
0x77A4E1: mov     byte ptr [ebx+1Ch], 1
0x77A4E5: pop     edi
0x77A4E6: pop     ebx
0x77A4E7: retn
