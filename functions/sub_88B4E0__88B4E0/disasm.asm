0x88B4E0: push    ebx
0x88B4E1: push    esi
0x88B4E2: mov     esi, ecx
0x88B4E4: mov     eax, [esi]
0x88B4E6: mov     edx, [eax+58h]
0x88B4E9: push    edi
0x88B4EA: xor     bl, bl
0x88B4EC: call    edx
0x88B4EE: test    eax, eax
0x88B4F0: jz      short loc_88B56D
0x88B4F2: mov     edi, [esp+0Ch+arg_0]
0x88B4F6: test    edi, edi
0x88B4F8: jz      short loc_88B56D
0x88B4FA: cmp     dword ptr [esi+20h], 0
0x88B4FE: mov     ebx, 1
0x88B503: jbe     short loc_88B558
0x88B505: mov     ecx, [edi+0Ch]
0x88B508: test    ecx, ecx
0x88B50A: jz      short loc_88B56D
0x88B50C: mov     al, [ecx+10h]
0x88B50F: test    al, 3
0x88B511: jnz     short loc_88B56D
0x88B513: or      al, 2
0x88B515: mov     [ecx+10h], al
0x88B518: cmp     dword ptr [esi+34h], 0C8h ; 'È'
0x88B51F: jb      short loc_88B53D
0x88B521: mov     ecx, esi
0x88B523: call    sub_88A440
0x88B528: mov     ecx, esi
0x88B52A: call    sub_88A3A0
0x88B52F: mov     ecx, esi
0x88B531: call    sub_88A310
0x88B536: mov     ecx, esi
0x88B538: call    sub_88A280
0x88B53D: mov     ecx, edi
0x88B53F: call    sub_8BC720
0x88B544: mov     eax, [esi+34h]
0x88B547: mov     ecx, [esi+30h]
0x88B54A: mov     [ecx+eax*4], edi
0x88B54D: add     [esi+34h], ebx
0x88B550: pop     edi
0x88B551: pop     esi
0x88B552: mov     al, bl
0x88B554: pop     ebx
0x88B555: retn    4
0x88B558: mov     edx, [edi+0Ch]
0x88B55B: test    edx, edx
0x88B55D: jz      short loc_88B56D
0x88B55F: test    byte ptr [edx+10h], 3
0x88B563: jnz     short loc_88B56D
0x88B565: push    edi
0x88B566: mov     ecx, eax
0x88B568: call    sub_899B30
0x88B56D: pop     edi
0x88B56E: pop     esi
0x88B56F: mov     al, bl
0x88B571: pop     ebx
0x88B572: retn    4
