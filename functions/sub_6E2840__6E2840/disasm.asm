0x6E2840: sub     esp, 0Ch
0x6E2843: push    ebx
0x6E2844: push    esi
0x6E2845: mov     esi, [esp+14h+arg_0]
0x6E2849: test    esi, esi
0x6E284B: push    edi
0x6E284C: mov     edi, ecx
0x6E284E: jnz     short loc_6E2854
0x6E2850: xor     ebx, ebx
0x6E2852: jmp     short loc_6E2879
0x6E2854: mov     eax, [esi]
0x6E2856: mov     edx, [eax+4]
0x6E2859: mov     ecx, esi
0x6E285B: call    edx
0x6E285D: test    eax, eax
0x6E285F: jz      short loc_6E286F
0x6E2861: cmp     eax, offset dword_B3DCF0
0x6E2866: jz      short loc_6E28D8
0x6E2868: mov     eax, [eax+4]
0x6E286B: test    eax, eax
0x6E286D: jnz     short loc_6E2861
0x6E286F: xor     al, al
0x6E2871: neg     al
0x6E2873: sbb     eax, eax
0x6E2875: and     eax, esi
0x6E2877: mov     ebx, eax
0x6E2879: mov     esi, [edi+44h]
0x6E287C: mov     eax, [edi+48h]
0x6E287F: push    eax
0x6E2880: mov     ecx, esi
0x6E2882: call    sub_7300B0
0x6E2887: fstp    [esp+18h+var_C]
0x6E288B: mov     ecx, [edi+48h]
0x6E288E: add     ecx, 1
0x6E2891: push    ecx
0x6E2892: mov     ecx, esi
0x6E2894: call    sub_7300B0
0x6E2899: fstp    [esp+18h+var_8]
0x6E289D: mov     edx, [edi+48h]
0x6E28A0: add     edx, 2
0x6E28A3: push    edx
0x6E28A4: mov     ecx, esi
0x6E28A6: call    sub_7300B0
0x6E28AB: fstp    [esp+18h+var_4]
0x6E28AF: mov     ecx, [esp+18h+var_C]
0x6E28B3: mov     edx, [esp+18h+var_8]
0x6E28B7: sub     esp, 0Ch
0x6E28BA: mov     eax, esp
0x6E28BC: mov     [eax], ecx
0x6E28BE: mov     ecx, [esp+24h+var_4]
0x6E28C2: mov     [eax+4], edx
0x6E28C5: mov     [eax+8], ecx
0x6E28C8: mov     ecx, ebx
0x6E28CA: call    sub_6DA440
0x6E28CF: pop     edi
0x6E28D0: pop     esi
0x6E28D1: pop     ebx
0x6E28D2: add     esp, 0Ch
0x6E28D5: retn    8
0x6E28D8: mov     al, 1
0x6E28DA: jmp     short loc_6E2871
