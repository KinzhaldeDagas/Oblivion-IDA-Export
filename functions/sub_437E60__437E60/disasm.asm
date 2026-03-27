0x437E60: push    ebx
0x437E61: mov     ebx, ecx
0x437E63: mov     ecx, [ebx+20h]
0x437E66: mov     eax, [ecx]
0x437E68: mov     edx, [eax+170h]
0x437E6E: push    edi
0x437E6F: call    edx
0x437E71: push    0
0x437E73: mov     ecx, eax
0x437E75: call    sub_4BA780
0x437E7A: mov     edi, eax
0x437E7C: test    edi, edi
0x437E7E: jz      short loc_437EEC
0x437E80: cmp     word ptr [edi+0B6h], 0
0x437E88: push    esi
0x437E89: ja      short loc_437E8F
0x437E8B: xor     esi, esi
0x437E8D: jmp     short loc_437E97
0x437E8F: mov     eax, [edi+0B0h]
0x437E95: mov     esi, [eax]
0x437E97: mov     eax, [esi+0B4h]
0x437E9D: mov     cx, [eax+2Eh]
0x437EA1: push    1
0x437EA3: push    1
0x437EA5: and     cx, 0FFFh
0x437EAA: or      cx, 4000h
0x437EAF: push    1
0x437EB1: push    esi
0x437EB2: mov     [eax+2Eh], cx
0x437EB6: mov     byte ptr [eax+30h], 11h
0x437EBA: mov     byte ptr [eax+31h], 1Fh
0x437EBE: call    sub_7B8940
0x437EC3: add     esp, 10h
0x437EC6: push    4
0x437EC8: mov     ecx, esi
0x437ECA: call    NiNode_GetNiPropertyByID
0x437ECF: test    eax, eax
0x437ED1: pop     esi
0x437ED2: jz      short loc_437EE2
0x437ED4: or      dword ptr [eax+1Ch], offset loc_402000
0x437EDB: mov     dword ptr [eax+24h], 0
0x437EE2: mov     edx, [ebx]
0x437EE4: mov     eax, [edx+34h]
0x437EE7: push    edi
0x437EE8: mov     ecx, ebx
0x437EEA: call    eax
0x437EEC: pop     edi
0x437EED: pop     ebx
0x437EEE: retn
