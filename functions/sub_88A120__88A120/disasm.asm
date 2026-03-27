0x88A120: push    esi
0x88A121: mov     esi, ecx
0x88A123: mov     eax, [esi+44h]
0x88A126: test    eax, eax
0x88A128: jbe     loc_88A1E8
0x88A12E: cmp     dword ptr [esi+2Ch], 0
0x88A132: jnz     loc_88A1E8
0x88A138: cmp     eax, 0C8h ; 'È'
0x88A13D: jb      short loc_88A146
0x88A13F: mov     dword ptr [esi+44h], 0C8h ; 'È'
0x88A146: mov     eax, [esi]
0x88A148: mov     edx, [eax+58h]
0x88A14B: push    ebx
0x88A14C: call    edx
0x88A14E: mov     ebx, eax
0x88A150: test    ebx, ebx
0x88A152: jz      loc_88A1E7
0x88A158: push    edi
0x88A159: xor     edi, edi
0x88A15B: cmp     [esi+44h], edi
0x88A15E: jbe     short loc_88A1C9
0x88A160: mov     eax, [esi+40h]
0x88A163: cmp     dword ptr [eax+edi*4], 0
0x88A167: lea     eax, [eax+edi*4]
0x88A16A: jz      short loc_88A196
0x88A16C: mov     eax, [eax]
0x88A16E: cmp     dword ptr [eax+8], 0
0x88A172: jnz     short loc_88A196
0x88A174: mov     ecx, [eax+10h]
0x88A177: test    ecx, ecx
0x88A179: jz      short loc_88A181
0x88A17B: cmp     dword ptr [ecx+54h], 0
0x88A17F: jz      short loc_88A196
0x88A181: mov     ecx, [eax+14h]
0x88A184: test    ecx, ecx
0x88A186: jz      short loc_88A18E
0x88A188: cmp     dword ptr [ecx+54h], 0
0x88A18C: jz      short loc_88A196
0x88A18E: push    eax
0x88A18F: mov     ecx, ebx
0x88A191: call    sub_8988A0
0x88A196: mov     ecx, [esi+40h]
0x88A199: cmp     dword ptr [ecx+edi*4], 0
0x88A19D: lea     eax, [ecx+edi*4]
0x88A1A0: jz      short loc_88A1C1
0x88A1A2: mov     ecx, [eax]
0x88A1A4: cmp     word ptr [ecx+4], 0
0x88A1A9: jz      short loc_88A1C1
0x88A1AB: add     word ptr [ecx+6], 0FFFFh
0x88A1B0: movzx   eax, word ptr [ecx+6]
0x88A1B4: test    ax, ax
0x88A1B7: jnz     short loc_88A1C1
0x88A1B9: mov     edx, [ecx]
0x88A1BB: mov     eax, [edx]
0x88A1BD: push    1
0x88A1BF: call    eax
0x88A1C1: add     edi, 1
0x88A1C4: cmp     edi, [esi+44h]
0x88A1C7: jb      short loc_88A160
0x88A1C9: mov     ecx, [esi+44h]
0x88A1CC: mov     edx, [esi+40h]
0x88A1CF: add     ecx, ecx
0x88A1D1: add     ecx, ecx
0x88A1D3: push    ecx
0x88A1D4: push    0
0x88A1D6: push    edx
0x88A1D7: call    __memset
0x88A1DC: add     esp, 0Ch
0x88A1DF: mov     dword ptr [esi+44h], 0
0x88A1E6: pop     edi
0x88A1E7: pop     ebx
0x88A1E8: pop     esi
0x88A1E9: retn
