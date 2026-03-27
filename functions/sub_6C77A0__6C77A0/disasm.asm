0x6C77A0: push    esi
0x6C77A1: mov     esi, [esp+4+a2]
0x6C77A5: push    edi
0x6C77A6: push    esi; a2
0x6C77A7: mov     edi, ecx
0x6C77A9: call    sub_700650
0x6C77AE: test    al, al
0x6C77B0: jnz     short loc_6C77B7
0x6C77B2: pop     edi
0x6C77B3: pop     esi
0x6C77B4: retn    4
0x6C77B7: push    ebp
0x6C77B8: xor     ebp, ebp
0x6C77BA: cmp     [edi+0Ch], ebp
0x6C77BD: jbe     short loc_6C780F
0x6C77BF: push    ebx
0x6C77C0: xor     ebx, ebx
0x6C77C2: mov     esi, [edi+14h]
0x6C77C5: mov     ecx, [esi+ebx]
0x6C77C8: add     esi, ebx
0x6C77CA: test    ecx, ecx
0x6C77CC: jz      short loc_6C77DA
0x6C77CE: mov     eax, [ecx]
0x6C77D0: mov     edx, [esp+10h+a2]
0x6C77D4: mov     eax, [eax+24h]
0x6C77D7: push    edx
0x6C77D8: call    eax
0x6C77DA: mov     ecx, [esi+4]
0x6C77DD: test    ecx, ecx
0x6C77DF: jz      short loc_6C77ED
0x6C77E1: mov     edx, [ecx]
0x6C77E3: mov     eax, [esp+10h+a2]
0x6C77E7: mov     edx, [edx+24h]
0x6C77EA: push    eax
0x6C77EB: call    edx
0x6C77ED: mov     eax, [edi+18h]
0x6C77F0: mov     ecx, [ebx+eax]
0x6C77F3: mov     edx, [ecx]
0x6C77F5: mov     eax, [esp+10h+a2]
0x6C77F9: mov     edx, [edx+24h]
0x6C77FC: push    eax
0x6C77FD: call    edx
0x6C77FF: add     ebp, 1
0x6C7802: add     ebx, 10h
0x6C7805: cmp     ebp, [edi+0Ch]
0x6C7808: jb      short loc_6C77C2
0x6C780A: mov     esi, [esp+10h+a2]
0x6C780E: pop     ebx
0x6C780F: mov     ecx, [edi+20h]
0x6C7812: test    ecx, ecx
0x6C7814: pop     ebp
0x6C7815: jz      short loc_6C781F
0x6C7817: mov     eax, [ecx]
0x6C7819: mov     edx, [eax+24h]
0x6C781C: push    esi
0x6C781D: call    edx
0x6C781F: mov     edi, [edi+64h]
0x6C7822: test    edi, edi
0x6C7824: jz      short loc_6C7830
0x6C7826: mov     eax, [edi]
0x6C7828: mov     edx, [eax+24h]
0x6C782B: push    esi
0x6C782C: mov     ecx, edi
0x6C782E: call    edx
0x6C7830: pop     edi
0x6C7831: mov     al, 1
0x6C7833: pop     esi
0x6C7834: retn    4
