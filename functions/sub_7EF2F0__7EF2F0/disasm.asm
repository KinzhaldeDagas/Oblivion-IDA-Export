0x7EF2F0: push    0FFFFFFFFh
0x7EF2F2: push    offset SEH_7EF2F0
0x7EF2F7: mov     eax, large fs:0
0x7EF2FD: push    eax
0x7EF2FE: sub     esp, 8
0x7EF301: push    ebx
0x7EF302: push    ebp
0x7EF303: push    esi
0x7EF304: push    edi
0x7EF305: mov     eax, ds:0B30AACh
0x7EF30A: xor     eax, esp
0x7EF30C: push    eax
0x7EF30D: lea     eax, [esp+28h+var_C]
0x7EF311: mov     large fs:0, eax
0x7EF317: xor     ebx, ebx
0x7EF319: mov     [esp+28h+var_10], ebx
0x7EF31D: lea     eax, [esp+28h+var_14]
0x7EF321: push    eax
0x7EF322: mov     [esp+2Ch+var_4], ebx
0x7EF326: call    sub_7606A0
0x7EF32B: add     esp, 4
0x7EF32E: mov     esi, eax
0x7EF330: mov     eax, ds:0B46704h
0x7EF335: cmp     eax, [esi]
0x7EF337: mov     byte ptr [esp+28h+var_4], 1
0x7EF33C: jz      short loc_7EF364
0x7EF33E: test    eax, eax
0x7EF340: jz      short loc_7EF354
0x7EF342: add     dword ptr [eax+60h], 0FFFFFFFFh
0x7EF346: mov     ecx, eax
0x7EF348: add     eax, 60h ; '`'
0x7EF34B: cmp     [eax], ebx
0x7EF34D: jnz     short loc_7EF354
0x7EF34F: call    sub_7604D0
0x7EF354: mov     esi, [esi]
0x7EF356: test    esi, esi
0x7EF358: mov     ds:0B46704h, esi
0x7EF35E: jz      short loc_7EF364
0x7EF360: add     dword ptr [esi+60h], 1
0x7EF364: mov     eax, [esp+28h+var_14]
0x7EF368: test    eax, eax
0x7EF36A: mov     byte ptr [esp+28h+var_4], 0
0x7EF36F: jz      short loc_7EF384
0x7EF371: add     dword ptr [eax+60h], 0FFFFFFFFh
0x7EF375: mov     ecx, eax
0x7EF377: add     eax, 60h ; '`'
0x7EF37A: cmp     dword ptr [eax], 0
0x7EF37D: jnz     short loc_7EF384
0x7EF37F: call    sub_7604D0
0x7EF384: lea     ecx, [esp+28h+var_14]
0x7EF388: push    ecx
0x7EF389: call    sub_772630
0x7EF38E: add     esp, 4
0x7EF391: mov     eax, [eax]
0x7EF393: test    eax, eax
0x7EF395: jz      short loc_7EF3A1
0x7EF397: mov     ebx, eax
0x7EF399: add     dword ptr [ebx+5Ch], 1
0x7EF39D: mov     [esp+28h+var_10], ebx
0x7EF3A1: mov     eax, [esp+28h+var_14]
0x7EF3A5: test    eax, eax
0x7EF3A7: mov     byte ptr [esp+28h+var_4], 0
0x7EF3AC: jz      short loc_7EF3C1
0x7EF3AE: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x7EF3B2: mov     ecx, eax
0x7EF3B4: add     eax, 5Ch ; '\'
0x7EF3B7: cmp     dword ptr [eax], 0
0x7EF3BA: jnz     short loc_7EF3C1
0x7EF3BC: call    sub_772560
0x7EF3C1: push    2
0x7EF3C3: push    3
0x7EF3C5: push    0
0x7EF3C7: push    ebx
0x7EF3C8: call    sub_801110
0x7EF3CD: add     esp, 10h
0x7EF3D0: push    1
0x7EF3D2: mov     ecx, ebx
0x7EF3D4: call    sub_771640
0x7EF3D9: mov     ecx, ds:0B46704h; this
0x7EF3DF: mov     edx, [ecx+14h]
0x7EF3E2: push    ebx; a3
0x7EF3E3: push    edx; a2
0x7EF3E4: call    sub_760010
0x7EF3E9: mov     edi, ds:0B46704h
0x7EF3EF: mov     eax, ds:0B466E0h
0x7EF3F4: mov     esi, [edi+58h]
0x7EF3F7: add     edi, 58h ; 'X'
0x7EF3FA: cmp     esi, eax
0x7EF3FC: mov     ebp, eax
0x7EF3FE: jz      short loc_7EF430
0x7EF400: test    esi, esi
0x7EF402: jz      short loc_7EF420
0x7EF404: lea     eax, [esi+4]
0x7EF407: push    eax; lpAddend
0x7EF408: call    dword ptr ds:0A2807Ch
0x7EF40E: test    eax, eax
0x7EF410: jnz     short loc_7EF420
0x7EF412: test    esi, esi
0x7EF414: jz      short loc_7EF420
0x7EF416: mov     edx, [esi]
0x7EF418: mov     eax, [edx]
0x7EF41A: push    1
0x7EF41C: mov     ecx, esi
0x7EF41E: call    eax
0x7EF420: test    ebp, ebp
0x7EF422: mov     [edi], ebp
0x7EF424: jz      short loc_7EF430
0x7EF426: add     ebp, 4
0x7EF429: push    ebp; lpAddend
0x7EF42A: call    dword ptr ds:0A28078h
0x7EF430: mov     ebp, ds:0B46704h
0x7EF436: mov     eax, ds:0B46708h
0x7EF43B: mov     esi, [ebp+44h]
0x7EF43E: add     ebp, 44h ; 'D'
0x7EF441: cmp     esi, eax
0x7EF443: mov     edi, eax
0x7EF445: jz      short loc_7EF478
0x7EF447: test    esi, esi
0x7EF449: jz      short loc_7EF467
0x7EF44B: lea     ecx, [esi+4]
0x7EF44E: push    ecx; lpAddend
0x7EF44F: call    dword ptr ds:0A2807Ch
0x7EF455: test    eax, eax
0x7EF457: jnz     short loc_7EF467
0x7EF459: test    esi, esi
0x7EF45B: jz      short loc_7EF467
0x7EF45D: mov     edx, [esi]
0x7EF45F: mov     eax, [edx]
0x7EF461: push    1
0x7EF463: mov     ecx, esi
0x7EF465: call    eax
0x7EF467: test    edi, edi
0x7EF469: mov     [ebp+0], edi
0x7EF46C: jz      short loc_7EF478
0x7EF46E: add     edi, 4
0x7EF471: push    edi; lpAddend
0x7EF472: call    dword ptr ds:0A28078h
0x7EF478: mov     esi, ds:0B46704h
0x7EF47E: add     esi, 30h ; '0'
0x7EF481: cmp     dword ptr [esi], 0
0x7EF484: jnz     short loc_7EF48D
0x7EF486: call    sub_772DF0
0x7EF48B: mov     [esi], eax
0x7EF48D: mov     ecx, [esi]
0x7EF48F: push    0
0x7EF491: push    1
0x7EF493: push    7
0x7EF495: call    sub_772CD0
0x7EF49A: mov     esi, ds:0B46704h
0x7EF4A0: add     esi, 30h ; '0'
0x7EF4A3: cmp     dword ptr [esi], 0
0x7EF4A6: jnz     short loc_7EF4AF
0x7EF4A8: call    sub_772DF0
0x7EF4AD: mov     [esi], eax
0x7EF4AF: mov     ecx, [esi]
0x7EF4B1: push    0
0x7EF4B3: push    0
0x7EF4B5: push    0Eh
0x7EF4B7: call    sub_772CD0
0x7EF4BC: mov     esi, ds:0B46704h
0x7EF4C2: add     esi, 30h ; '0'
0x7EF4C5: cmp     dword ptr [esi], 0
0x7EF4C8: jnz     short loc_7EF4D1
0x7EF4CA: call    sub_772DF0
0x7EF4CF: mov     [esi], eax
0x7EF4D1: mov     ecx, [esi]
0x7EF4D3: push    0
0x7EF4D5: push    4
0x7EF4D7: push    17h
0x7EF4D9: call    sub_772CD0
0x7EF4DE: mov     esi, ds:0B46704h
0x7EF4E4: add     esi, 30h ; '0'
0x7EF4E7: cmp     dword ptr [esi], 0
0x7EF4EA: jnz     short loc_7EF4F3
0x7EF4EC: call    sub_772DF0
0x7EF4F1: mov     [esi], eax
0x7EF4F3: mov     ecx, [esi]
0x7EF4F5: push    0
0x7EF4F7: push    1
0x7EF4F9: push    1Bh
0x7EF4FB: call    sub_772CD0
0x7EF500: mov     esi, ds:0B46704h
0x7EF506: add     esi, 30h ; '0'
0x7EF509: cmp     dword ptr [esi], 0
0x7EF50C: jnz     short loc_7EF515
0x7EF50E: call    sub_772DF0
0x7EF513: mov     [esi], eax
0x7EF515: mov     ecx, [esi]
0x7EF517: push    0
0x7EF519: push    5
0x7EF51B: push    13h
0x7EF51D: call    sub_772CD0
0x7EF522: mov     esi, ds:0B46704h
0x7EF528: add     esi, 30h ; '0'
0x7EF52B: cmp     dword ptr [esi], 0
0x7EF52E: jnz     short loc_7EF537
0x7EF530: call    sub_772DF0
0x7EF535: mov     [esi], eax
0x7EF537: mov     ecx, [esi]
0x7EF539: push    0
0x7EF53B: push    6
0x7EF53D: push    14h
0x7EF53F: call    sub_772CD0
0x7EF544: mov     esi, ds:0B46704h
0x7EF54A: add     esi, 30h ; '0'
0x7EF54D: cmp     dword ptr [esi], 0
0x7EF550: jnz     short loc_7EF559
0x7EF552: call    sub_772DF0
0x7EF557: mov     [esi], eax
0x7EF559: mov     ecx, [esi]
0x7EF55B: push    0
0x7EF55D: push    0
0x7EF55F: push    0Fh
0x7EF561: call    sub_772CD0
0x7EF566: mov     esi, ds:0B46704h
0x7EF56C: add     esi, 30h ; '0'
0x7EF56F: cmp     dword ptr [esi], 0
0x7EF572: jnz     short loc_7EF57B
0x7EF574: call    sub_772DF0
0x7EF579: mov     [esi], eax
0x7EF57B: mov     ecx, [esi]
0x7EF57D: push    0
0x7EF57F: push    7
0x7EF581: push    0A8h ; '¨'
0x7EF586: call    sub_772CD0
0x7EF58B: or      eax, 0FFFFFFFFh
0x7EF58E: test    ebx, ebx
0x7EF590: mov     [esp+28h+var_4], eax
0x7EF594: jz      short loc_7EF5A2
0x7EF596: add     [ebx+5Ch], eax
0x7EF599: jnz     short loc_7EF5A2
0x7EF59B: mov     ecx, ebx
0x7EF59D: call    sub_772560
0x7EF5A2: mov     al, 1
0x7EF5A4: mov     ecx, [esp+28h+var_C]
0x7EF5A8: mov     large fs:0, ecx
0x7EF5AF: pop     ecx
0x7EF5B0: pop     edi
0x7EF5B1: pop     esi
0x7EF5B2: pop     ebp
0x7EF5B3: pop     ebx
0x7EF5B4: add     esp, 14h
0x7EF5B7: retn
