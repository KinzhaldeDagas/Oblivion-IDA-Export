0x4354A0: push    esi
0x4354A1: mov     esi, ecx
0x4354A3: mov     ecx, [esi+20h]
0x4354A6: test    ecx, ecx
0x4354A8: jz      short loc_4354D6
0x4354AA: call    sub_4D6FD0
0x4354AF: test    al, al
0x4354B1: jz      short loc_4354D6
0x4354B3: mov     ecx, [esi+20h]
0x4354B6: mov     eax, [ecx]
0x4354B8: mov     edx, [eax+154h]
0x4354BE: call    edx
0x4354C0: test    eax, eax
0x4354C2: jnz     short loc_4354D6
0x4354C4: call    sub_57BAC0
0x4354C9: test    al, al
0x4354CB: jnz     short loc_4354D6
0x4354CD: mov     eax, [esi]
0x4354CF: mov     edx, [eax+30h]
0x4354D2: mov     ecx, esi
0x4354D4: call    edx
0x4354D6: mov     eax, [esi]
0x4354D8: mov     edx, [eax+2Ch]
0x4354DB: mov     ecx, esi
0x4354DD: call    edx
0x4354DF: mov     eax, [esi]
0x4354E1: mov     edx, [eax+28h]
0x4354E4: mov     dword ptr [esi+0Ch], 5
0x4354EB: mov     ecx, esi
0x4354ED: pop     esi
0x4354EE: jmp     edx
