0x723AC0: push    esi
0x723AC1: mov     esi, [esp+4+arg_0]
0x723AC5: push    edi
0x723AC6: push    esi
0x723AC7: mov     edi, ecx
0x723AC9: call    sub_723F30
0x723ACE: test    al, al
0x723AD0: jnz     short loc_723AD9
0x723AD2: pop     edi
0x723AD3: xor     al, al
0x723AD5: pop     esi
0x723AD6: retn    4
0x723AD9: mov     ecx, [edi+0FCh]
0x723ADF: test    ecx, ecx
0x723AE1: mov     esi, [esi+0FCh]
0x723AE7: jz      short loc_723AF1
0x723AE9: test    esi, esi
0x723AEB: jz      short loc_723AD2
0x723AED: test    ecx, ecx
0x723AEF: jnz     short loc_723AF9
0x723AF1: test    esi, esi
0x723AF3: jnz     short loc_723AD2
0x723AF5: test    ecx, ecx
0x723AF7: jz      short loc_723B27
0x723AF9: test    esi, esi
0x723AFB: jz      short loc_723B27
0x723AFD: mov     eax, [ecx]
0x723AFF: mov     edx, [eax+4]
0x723B02: push    ebx
0x723B03: call    edx
0x723B05: mov     ebx, eax
0x723B07: mov     eax, [esi]
0x723B09: mov     edx, [eax+4]
0x723B0C: mov     ecx, esi
0x723B0E: call    edx
0x723B10: cmp     ebx, eax
0x723B12: pop     ebx
0x723B13: jnz     short loc_723B27
0x723B15: mov     ecx, [edi+0FCh]
0x723B1B: mov     eax, [ecx]
0x723B1D: mov     edx, [eax+2Ch]
0x723B20: push    esi
0x723B21: call    edx
0x723B23: test    al, al
0x723B25: jz      short loc_723AD2
0x723B27: pop     edi
0x723B28: mov     al, 1
0x723B2A: pop     esi
0x723B2B: retn    4
