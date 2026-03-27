0x40C280: push    ebx
0x40C281: push    esi
0x40C282: mov     ebx, ecx
0x40C284: movzx   esi, word ptr [ebx+0AC2h]
0x40C28B: movzx   eax, word ptr [ebx+0AC0h]
0x40C292: cmp     esi, eax
0x40C294: push    edi
0x40C295: lea     edi, [ebx+0AB8h]
0x40C29B: jb      short loc_40C2AB
0x40C29D: movzx   ecx, word ptr [edi+0Eh]
0x40C2A1: add     ecx, esi
0x40C2A3: push    ecx
0x40C2A4: mov     ecx, edi
0x40C2A6: call    NiTArray_SetSize
0x40C2AB: lea     edx, [esp+0Ch+arg_0]
0x40C2AF: push    edx
0x40C2B0: push    esi
0x40C2B1: mov     ecx, edi
0x40C2B3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x40C2B8: movzx   eax, word ptr [ebx+0AD0h]
0x40C2BF: cmp     esi, eax
0x40C2C1: lea     edi, [ebx+0AC8h]
0x40C2C7: jb      short loc_40C2D7
0x40C2C9: movzx   ecx, word ptr [edi+0Eh]
0x40C2CD: add     ecx, esi
0x40C2CF: push    ecx
0x40C2D0: mov     ecx, edi
0x40C2D2: call    NiTArray_SetSize
0x40C2D7: lea     edx, [esp+0Ch+arg_4]
0x40C2DB: push    edx
0x40C2DC: push    esi
0x40C2DD: mov     ecx, edi
0x40C2DF: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x40C2E4: pop     edi
0x40C2E5: mov     eax, esi
0x40C2E7: pop     esi
0x40C2E8: pop     ebx
0x40C2E9: retn    8
