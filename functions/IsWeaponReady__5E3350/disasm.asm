0x5E3350: push    esi
0x5E3351: mov     esi, ecx
0x5E3353: mov     eax, [esi]
0x5E3355: mov     edx, [eax+1A0h]
0x5E335B: call    edx
0x5E335D: test    al, al
0x5E335F: jnz     short loc_5E33A6
0x5E3361: mov     eax, [esi]
0x5E3363: mov     edx, [eax+198h]
0x5E3369: push    0
0x5E336B: mov     ecx, esi
0x5E336D: call    edx
0x5E336F: test    al, al
0x5E3371: jnz     short loc_5E33A6
0x5E3373: mov     eax, [esi]
0x5E3375: mov     edx, [eax+19Ch]
0x5E337B: mov     ecx, esi
0x5E337D: call    edx
0x5E337F: test    al, al
0x5E3381: jnz     short loc_5E33A6
0x5E3383: mov     eax, [esi+0B0h]
0x5E3389: cmp     eax, 5
0x5E338C: jz      short loc_5E33A6
0x5E338E: cmp     eax, 3
0x5E3391: jz      short loc_5E33A6
0x5E3393: mov     eax, [esi]
0x5E3395: mov     edx, [eax+18Ch]
0x5E339B: mov     ecx, esi
0x5E339D: call    edx
0x5E339F: test    eax, eax
0x5E33A1: setz    al
0x5E33A4: pop     esi
0x5E33A5: retn
0x5E33A6: xor     al, al
0x5E33A8: pop     esi
0x5E33A9: retn
