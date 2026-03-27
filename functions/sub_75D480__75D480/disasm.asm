0x75D480: push    esi
0x75D481: push    edi
0x75D482: mov     edi, [esp+8+arg_0]
0x75D486: push    edi
0x75D487: mov     esi, ecx
0x75D489: call    sub_75E600
0x75D48E: test    al, al
0x75D490: jz      short loc_75D4CE
0x75D492: mov     eax, [esi+40h]
0x75D495: lea     ecx, [esp+8+arg_0]
0x75D499: push    ecx
0x75D49A: push    eax
0x75D49B: lea     ecx, [edi+0D4h]
0x75D4A1: call    NiTMap_GetAt
0x75D4A6: test    al, al
0x75D4A8: jz      short loc_75D4CE
0x75D4AA: mov     ecx, [esp+8+arg_0]
0x75D4AE: test    ecx, ecx
0x75D4B0: jz      short loc_75D4CE
0x75D4B2: mov     edx, [ecx]
0x75D4B4: mov     eax, [edx+4]
0x75D4B7: call    eax
0x75D4B9: test    eax, eax
0x75D4BB: jz      short loc_75D4CE
0x75D4BD: lea     ecx, [ecx+0]
0x75D4C0: cmp     eax, offset dword_B41B38
0x75D4C5: jz      short loc_75D4D5
0x75D4C7: mov     eax, [eax+4]
0x75D4CA: test    eax, eax
0x75D4CC: jnz     short loc_75D4C0
0x75D4CE: pop     edi
0x75D4CF: xor     al, al
0x75D4D1: pop     esi
0x75D4D2: retn    4
0x75D4D5: pop     edi
0x75D4D6: mov     al, 1
0x75D4D8: pop     esi
0x75D4D9: retn    4
