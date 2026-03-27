0x45E3D0: sub     esp, 118h
0x45E3D6: mov     eax, ds:0B30AACh
0x45E3DB: xor     eax, esp
0x45E3DD: mov     [esp+118h+var_4], eax
0x45E3E4: push    ebx
0x45E3E5: mov     ebx, [esp+11Ch+arg_0]
0x45E3EC: push    ebp
0x45E3ED: push    esi
0x45E3EE: mov     ebp, ecx
0x45E3F0: mov     eax, [ebp+74h]
0x45E3F3: push    edi
0x45E3F4: xor     edi, edi
0x45E3F6: xor     ecx, ecx
0x45E3F8: cmp     [eax+0Ch], edi
0x45E3FB: jbe     short loc_45E40E
0x45E3FD: lea     ecx, [ecx+0]
0x45E400: mov     edx, [eax+4]
0x45E403: mov     [edx+ecx*4], edi
0x45E406: add     ecx, 1
0x45E409: cmp     ecx, [eax+0Ch]
0x45E40C: jb      short loc_45E400
0x45E40E: mov     [eax+0Ch], edi
0x45E411: mov     [eax+10h], edi
0x45E414: mov     eax, [ebp+78h]
0x45E417: xor     ecx, ecx
0x45E419: cmp     [eax+0Ch], edi
0x45E41C: jbe     short loc_45E42E
0x45E41E: mov     edi, edi
0x45E420: mov     edx, [eax+4]
0x45E423: mov     [edx+ecx*4], edi
0x45E426: add     ecx, 1
0x45E429: cmp     ecx, [eax+0Ch]
0x45E42C: jb      short loc_45E420
0x45E42E: mov     [eax+0Ch], edi
0x45E431: mov     [eax+10h], edi
0x45E434: mov     edx, [ebx+4]
0x45E437: push    1
0x45E439: lea     eax, [esp+12Ch+var_118]
0x45E43D: push    eax
0x45E43E: push    4
0x45E440: lea     ecx, [esp+134h+var_10C]
0x45E444: push    ecx
0x45E445: push    ebx
0x45E446: mov     [esp+13Ch+var_118], 1
0x45E44E: call    edx
0x45E450: add     esp, 14h
0x45E453: cmp     [esp+128h+var_10C], edi
0x45E457: jbe     loc_45E524
0x45E45D: lea     ecx, [ecx+0]
0x45E460: mov     edx, [ebx+4]
0x45E463: push    1
0x45E465: lea     eax, [esp+12Ch+var_114]
0x45E469: push    eax
0x45E46A: push    4
0x45E46C: lea     ecx, [esp+134h+var_118]
0x45E470: push    ecx
0x45E471: push    ebx
0x45E472: mov     [esp+13Ch+var_114], 1
0x45E47A: call    edx
0x45E47C: mov     ecx, [esp+13Ch+var_118]
0x45E480: mov     edx, [ebp+4Ch]
0x45E483: mov     eax, ecx
0x45E485: add     esp, 14h
0x45E488: shr     eax, 18h
0x45E48B: test    edx, edx
0x45E48D: jz      short loc_45E4B7
0x45E48F: cmp     al, 0FFh
0x45E491: jz      short loc_45E4B7
0x45E493: cmp     al, [ebp+48h]
0x45E496: jnb     short loc_45E4B3
0x45E498: movzx   eax, al
0x45E49B: mov     dl, [eax+edx]
0x45E49E: cmp     dl, 0FFh
0x45E4A1: jz      short loc_45E4B3
0x45E4A3: movzx   eax, dl
0x45E4A6: shl     eax, 18h
0x45E4A9: and     ecx, 0FFFFFFh
0x45E4AF: add     eax, ecx
0x45E4B1: jmp     short loc_45E4B9
0x45E4B3: xor     eax, eax
0x45E4B5: jmp     short loc_45E4B9
0x45E4B7: mov     eax, ecx
0x45E4B9: mov     esi, [ebp+74h]
0x45E4BC: mov     [esp+128h+var_118], eax
0x45E4C0: cmp     edi, [esi+8]
0x45E4C3: jb      short loc_45E4D2
0x45E4C5: mov     ecx, [esi+14h]
0x45E4C8: add     ecx, edi
0x45E4CA: push    ecx
0x45E4CB: mov     ecx, esi
0x45E4CD: call    sub_452910
0x45E4D2: cmp     edi, [esi+0Ch]
0x45E4D5: jb      short loc_45E4EA
0x45E4D7: lea     edx, [edi+1]
0x45E4DA: mov     [esi+0Ch], edx
0x45E4DD: cmp     [esp+128h+var_118], 0
0x45E4E2: jz      short loc_45E50D
0x45E4E4: add     dword ptr [esi+10h], 1
0x45E4E8: jmp     short loc_45E50D
0x45E4EA: cmp     [esp+128h+var_118], 0
0x45E4EF: jz      short loc_45E500
0x45E4F1: mov     eax, [esi+4]
0x45E4F4: cmp     dword ptr [eax+edi*4], 0
0x45E4F8: jnz     short loc_45E50D
0x45E4FA: add     dword ptr [esi+10h], 1
0x45E4FE: jmp     short loc_45E50D
0x45E500: mov     ecx, [esi+4]
0x45E503: cmp     dword ptr [ecx+edi*4], 0
0x45E507: jz      short loc_45E50D
0x45E509: add     dword ptr [esi+10h], 0FFFFFFFFh
0x45E50D: mov     edx, [esi+4]
0x45E510: mov     eax, [esp+128h+var_118]
0x45E514: mov     [edx+edi*4], eax
0x45E517: add     edi, 1
0x45E51A: cmp     edi, [esp+128h+var_10C]
0x45E51E: jb      loc_45E460
0x45E524: mov     eax, [ebx+4]
0x45E527: push    1
0x45E529: lea     ecx, [esp+12Ch+var_114]
0x45E52D: push    ecx
0x45E52E: push    4
0x45E530: lea     edx, [esp+134h+var_110]
0x45E534: push    edx
0x45E535: push    ebx
0x45E536: mov     [esp+13Ch+var_114], 1
0x45E53E: call    eax
0x45E540: xor     edi, edi
0x45E542: add     esp, 14h
0x45E545: cmp     [esp+128h+var_110], edi
0x45E549: jbe     loc_45E614
0x45E54F: nop
0x45E550: mov     eax, [ebx+4]
0x45E553: push    1
0x45E555: lea     ecx, [esp+12Ch+var_114]
0x45E559: push    ecx
0x45E55A: push    4
0x45E55C: lea     edx, [esp+134h+var_118]
0x45E560: push    edx
0x45E561: push    ebx
0x45E562: mov     [esp+13Ch+var_114], 1
0x45E56A: call    eax
0x45E56C: mov     ecx, [esp+13Ch+var_118]
0x45E570: mov     edx, [ebp+4Ch]
0x45E573: mov     eax, ecx
0x45E575: add     esp, 14h
0x45E578: shr     eax, 18h
0x45E57B: test    edx, edx
0x45E57D: jz      short loc_45E5A7
0x45E57F: cmp     al, 0FFh
0x45E581: jz      short loc_45E5A7
0x45E583: cmp     al, [ebp+48h]
0x45E586: jnb     short loc_45E5A3
0x45E588: movzx   eax, al
0x45E58B: mov     dl, [eax+edx]
0x45E58E: cmp     dl, 0FFh
0x45E591: jz      short loc_45E5A3
0x45E593: movzx   eax, dl
0x45E596: shl     eax, 18h
0x45E599: and     ecx, 0FFFFFFh
0x45E59F: add     eax, ecx
0x45E5A1: jmp     short loc_45E5A9
0x45E5A3: xor     eax, eax
0x45E5A5: jmp     short loc_45E5A9
0x45E5A7: mov     eax, ecx
0x45E5A9: mov     esi, [ebp+78h]
0x45E5AC: mov     [esp+128h+var_118], eax
0x45E5B0: cmp     edi, [esi+8]
0x45E5B3: jb      short loc_45E5C2
0x45E5B5: mov     ecx, [esi+14h]
0x45E5B8: add     ecx, edi
0x45E5BA: push    ecx
0x45E5BB: mov     ecx, esi
0x45E5BD: call    sub_452910
0x45E5C2: cmp     edi, [esi+0Ch]
0x45E5C5: jb      short loc_45E5DA
0x45E5C7: lea     edx, [edi+1]
0x45E5CA: mov     [esi+0Ch], edx
0x45E5CD: cmp     [esp+128h+var_118], 0
0x45E5D2: jz      short loc_45E5FD
0x45E5D4: add     dword ptr [esi+10h], 1
0x45E5D8: jmp     short loc_45E5FD
0x45E5DA: cmp     [esp+128h+var_118], 0
0x45E5DF: jz      short loc_45E5F0
0x45E5E1: mov     eax, [esi+4]
0x45E5E4: cmp     dword ptr [eax+edi*4], 0
0x45E5E8: jnz     short loc_45E5FD
0x45E5EA: add     dword ptr [esi+10h], 1
0x45E5EE: jmp     short loc_45E5FD
0x45E5F0: mov     ecx, [esi+4]
0x45E5F3: cmp     dword ptr [ecx+edi*4], 0
0x45E5F7: jz      short loc_45E5FD
0x45E5F9: add     dword ptr [esi+10h], 0FFFFFFFFh
0x45E5FD: mov     edx, [esi+4]
0x45E600: mov     eax, [esp+128h+var_118]
0x45E604: mov     [edx+edi*4], eax
0x45E607: add     edi, 1
0x45E60A: cmp     edi, [esp+128h+var_110]
0x45E60E: jb      loc_45E550
0x45E614: cmp     dword ptr [ebp+40h], 0
0x45E618: jz      short loc_45E67A
0x45E61A: mov     ecx, [esp+128h+var_10C]
0x45E61E: push    ecx
0x45E61F: lea     edx, [esp+12Ch+var_108]
0x45E623: push    offset aNumericIdArray; "Numeric ID Array(%i)"
0x45E628: push    edx
0x45E629: call    __sprintf
0x45E62E: mov     ecx, [esp+134h+var_10C]
0x45E632: add     esp, 0Ch
0x45E635: lea     eax, [esp+128h+var_108]
0x45E639: lea     edx, ds:4[ecx*4]
0x45E640: mov     ecx, [ebp+40h]
0x45E643: push    eax
0x45E644: push    edx
0x45E645: call    sub_4531B0
0x45E64A: mov     eax, [esp+128h+var_110]
0x45E64E: push    eax
0x45E64F: lea     ecx, [esp+12Ch+var_108]
0x45E653: push    offset aWorldspaceIdAr; "WorldSpace ID Array(%i)"
0x45E658: push    ecx
0x45E659: call    __sprintf
0x45E65E: mov     eax, [esp+134h+var_110]
0x45E662: add     esp, 0Ch
0x45E665: lea     edx, [esp+128h+var_108]
0x45E669: lea     ecx, ds:4[eax*4]
0x45E670: push    edx
0x45E671: push    ecx
0x45E672: mov     ecx, [ebp+40h]
0x45E675: call    sub_4531B0
0x45E67A: mov     ecx, [esp+128h+var_4]
0x45E681: pop     edi
0x45E682: pop     esi
0x45E683: pop     ebp
0x45E684: pop     ebx
0x45E685: xor     ecx, esp
0x45E687: call    @__security_check_cookie@4; __security_check_cookie(x)
0x45E68C: add     esp, 118h
0x45E692: retn    4
