0x40C1B0: push    ebx
0x40C1B1: push    esi
0x40C1B2: mov     ebx, ecx
0x40C1B4: movzx   esi, word ptr [ebx+0AA2h]
0x40C1BB: movzx   eax, word ptr [ebx+0AA0h]
0x40C1C2: cmp     esi, eax
0x40C1C4: push    edi
0x40C1C5: lea     edi, [ebx+0A98h]
0x40C1CB: jb      short loc_40C1DB
0x40C1CD: movzx   ecx, word ptr [edi+0Eh]
0x40C1D1: add     ecx, esi
0x40C1D3: push    ecx
0x40C1D4: mov     ecx, edi
0x40C1D6: call    NiTArray_SetSize
0x40C1DB: lea     edx, [esp+0Ch+arg_0]
0x40C1DF: push    edx
0x40C1E0: push    esi
0x40C1E1: mov     ecx, edi
0x40C1E3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x40C1E8: movzx   eax, word ptr [ebx+0AB0h]
0x40C1EF: cmp     esi, eax
0x40C1F1: lea     edi, [ebx+0AA8h]
0x40C1F7: jb      short loc_40C207
0x40C1F9: movzx   ecx, word ptr [edi+0Eh]
0x40C1FD: add     ecx, esi
0x40C1FF: push    ecx
0x40C200: mov     ecx, edi
0x40C202: call    NiTArray_SetSize
0x40C207: lea     edx, [esp+0Ch+arg_4]
0x40C20B: push    edx
0x40C20C: push    esi
0x40C20D: mov     ecx, edi
0x40C20F: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x40C214: pop     edi
0x40C215: mov     eax, esi
0x40C217: pop     esi
0x40C218: pop     ebx
0x40C219: retn    8
