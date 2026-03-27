0x596980: push    esi
0x596981: mov     esi, ecx
0x596983: mov     eax, [esi]
0x596985: mov     edx, [eax+34h]
0x596988: push    edi
0x596989: call    edx
0x59698B: mov     edi, eax
0x59698D: call    sub_578FE0
0x596992: cmp     eax, edi
0x596994: jnz     short loc_5969F6
0x596996: mov     eax, [esp+8+arg_0]
0x59699A: sub     eax, 9
0x59699D: jz      short loc_5969D1
0x59699F: sub     eax, 1
0x5969A2: jz      short loc_5969BD
0x5969A4: sub     eax, 1
0x5969A7: jnz     short loc_5969F6
0x5969A9: mov     eax, [esi]
0x5969AB: mov     edx, [eax+0Ch]
0x5969AE: push    0
0x5969B0: push    5
0x5969B2: mov     ecx, esi
0x5969B4: call    edx
0x5969B6: pop     edi
0x5969B7: mov     al, 1
0x5969B9: pop     esi
0x5969BA: retn    8
0x5969BD: mov     eax, [esi]
0x5969BF: mov     edx, [eax+0Ch]
0x5969C2: push    0
0x5969C4: push    4
0x5969C6: mov     ecx, esi
0x5969C8: call    edx
0x5969CA: pop     edi
0x5969CB: mov     al, 1
0x5969CD: pop     esi
0x5969CE: retn    8
0x5969D1: push    0; arg1
0x5969D3: push    0; canCreate
0x5969D5: call    InterfaceManager_GetSingleton
0x5969DA: mov     eax, [eax+88h]
0x5969E0: mov     edx, [esi]
0x5969E2: mov     edx, [edx+0Ch]
0x5969E5: add     esp, 8
0x5969E8: push    eax
0x5969E9: push    63h ; 'c'
0x5969EB: mov     ecx, esi
0x5969ED: call    edx
0x5969EF: pop     edi
0x5969F0: mov     al, 1
0x5969F2: pop     esi
0x5969F3: retn    8
0x5969F6: pop     edi
0x5969F7: xor     al, al
0x5969F9: pop     esi
0x5969FA: retn    8
