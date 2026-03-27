0x5E1F90: push    ebx
0x5E1F91: push    esi
0x5E1F92: mov     esi, ecx
0x5E1F94: mov     eax, [esi]
0x5E1F96: mov     edx, [eax+170h]
0x5E1F9C: push    edi
0x5E1F9D: xor     ebx, ebx
0x5E1F9F: call    edx
0x5E1FA1: mov     edi, eax
0x5E1FA3: test    edi, edi
0x5E1FA5: jz      short loc_5E1FB9
0x5E1FA7: mov     eax, [esi]
0x5E1FA9: mov     edx, [eax+190h]
0x5E1FAF: mov     ecx, esi
0x5E1FB1: call    edx
0x5E1FB3: test    al, al
0x5E1FB5: jz      short loc_5E1FB9
0x5E1FB7: mov     ebx, edi
0x5E1FB9: lea     ecx, [ebx+68h]
0x5E1FBC: call    TESAIForm_GetEnergy
0x5E1FC1: pop     edi
0x5E1FC2: pop     esi
0x5E1FC3: movzx   eax, al
0x5E1FC6: pop     ebx
0x5E1FC7: retn
