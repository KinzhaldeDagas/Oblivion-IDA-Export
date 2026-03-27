0x936460: push    ebx
0x936461: push    esi
0x936462: mov     esi, ecx
0x936464: mov     bl, [esi+21h]
0x936467: cmp     bl, 8
0x93646A: jbe     short loc_936474
0x93646C: pop     esi
0x93646D: or      eax, 0FFFFFFFFh
0x936470: pop     ebx
0x936471: retn    0Ch
0x936474: push    edi
0x936475: mov     edi, [esp+0Ch+arg_8]
0x936479: push    edi
0x93647A: lea     eax, [esp+10h+arg_8]
0x93647E: push    eax
0x93647F: mov     ecx, esi
0x936481: call    sub_9363E0
0x936486: cmp     byte ptr [eax], 0
0x936489: jnz     short loc_9364A6
0x93648B: movzx   eax, bl
0x93648E: cmp     eax, 8
0x936491: jge     short loc_9364A6
0x936493: mov     ecx, [edi]
0x936495: mov     [esi+eax*4], ecx
0x936498: mov     cl, [esi+21h]
0x93649B: inc     cl
0x93649D: pop     edi
0x93649E: mov     [esi+21h], cl
0x9364A1: pop     esi
0x9364A2: pop     ebx
0x9364A3: retn    0Ch
0x9364A6: pop     edi
0x9364A7: pop     esi
0x9364A8: or      eax, 0FFFFFFFFh
0x9364AB: pop     ebx
0x9364AC: retn    0Ch
