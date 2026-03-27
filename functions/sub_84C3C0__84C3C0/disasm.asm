0x84C3C0: push    0FFFFFFFFh
0x84C3C2: push    offset SEH_879360
0x84C3C7: mov     eax, large fs:0
0x84C3CD: push    eax
0x84C3CE: push    ecx
0x84C3CF: push    ebx
0x84C3D0: push    ebp
0x84C3D1: push    esi
0x84C3D2: push    edi
0x84C3D3: mov     eax, ds:0B30AACh
0x84C3D8: xor     eax, esp
0x84C3DA: push    eax
0x84C3DB: lea     eax, [esp+24h+var_C]
0x84C3DF: mov     large fs:0, eax
0x84C3E5: mov     [esp+24h+var_10], ecx
0x84C3E9: mov     eax, [esp+24h+arg_8]
0x84C3ED: mov     eax, [eax+10h]
0x84C3F0: mov     edi, ds:0B45634h
0x84C3F6: push    eax
0x84C3F7: call    sub_848C40
0x84C3FC: mov     ecx, [edi+24h]
0x84C3FF: mov     ebx, [esp+24h+arg_C]
0x84C403: mov     esi, [ecx]
0x84C405: mov     edx, [ebx]
0x84C407: mov     eax, [edx+88h]
0x84C40D: push    0
0x84C40F: mov     ecx, ebx
0x84C411: mov     [esp+28h+arg_8], esi
0x84C415: call    eax
0x84C417: mov     esi, [esi+4]
0x84C41A: mov     ebp, eax
0x84C41C: cmp     esi, ebp
0x84C41E: jz      short loc_84C457
0x84C420: test    esi, esi
0x84C422: jz      short loc_84C440
0x84C424: lea     ecx, [esi+4]
0x84C427: push    ecx; lpAddend
0x84C428: call    dword ptr ds:0A2807Ch
0x84C42E: test    eax, eax
0x84C430: jnz     short loc_84C440
0x84C432: test    esi, esi
0x84C434: jz      short loc_84C440
0x84C436: mov     edx, [esi]
0x84C438: mov     eax, [edx]
0x84C43A: push    1
0x84C43C: mov     ecx, esi
0x84C43E: call    eax
0x84C440: test    ebp, ebp
0x84C442: mov     esi, [esp+24h+arg_8]
0x84C446: mov     [esi+4], ebp
0x84C449: jz      short loc_84C45B
0x84C44B: add     ebp, 4
0x84C44E: push    ebp; lpAddend
0x84C44F: call    dword ptr ds:0A28078h
0x84C455: jmp     short loc_84C45B
0x84C457: mov     esi, [esp+24h+arg_8]
0x84C45B: test    esi, esi
0x84C45D: jz      short loc_84C479
0x84C45F: cmp     byte ptr ds:0B42CDDh, 0
0x84C466: jz      short loc_84C479
0x84C468: mov     edx, [ebx]
0x84C46A: mov     eax, [edx+78h]
0x84C46D: mov     ecx, ebx
0x84C46F: call    eax
0x84C471: push    eax
0x84C472: mov     ecx, esi
0x84C474: call    sub_7715E0
0x84C479: mov     ecx, [edi+24h]
0x84C47C: mov     esi, [ecx+4]
0x84C47F: mov     edx, [ebx]
0x84C481: mov     eax, [edx+8Ch]
0x84C487: push    0
0x84C489: mov     ecx, ebx
0x84C48B: mov     [esp+28h+arg_8], esi
0x84C48F: call    eax
0x84C491: test    eax, eax
0x84C493: jz      short loc_84C4A7
0x84C495: mov     edx, [ebx]
0x84C497: mov     eax, [edx+8Ch]
0x84C49D: push    0
0x84C49F: mov     ecx, ebx
0x84C4A1: call    eax
0x84C4A3: mov     ebp, eax
0x84C4A5: jmp     short loc_84C4BC
0x84C4A7: test    dword ptr [ebx+1Ch], 80h
0x84C4AE: mov     ebp, ds:0B430F0h
0x84C4B4: ja      short loc_84C4BC
0x84C4B6: mov     ebp, ds:0B430DCh
0x84C4BC: mov     esi, [esi+4]
0x84C4BF: cmp     esi, ebp
0x84C4C1: jz      short loc_84C4FA
0x84C4C3: test    esi, esi
0x84C4C5: jz      short loc_84C4E3
0x84C4C7: lea     ecx, [esi+4]
0x84C4CA: push    ecx; lpAddend
0x84C4CB: call    dword ptr ds:0A2807Ch
0x84C4D1: test    eax, eax
0x84C4D3: jnz     short loc_84C4E3
0x84C4D5: test    esi, esi
0x84C4D7: jz      short loc_84C4E3
0x84C4D9: mov     edx, [esi]
0x84C4DB: mov     eax, [edx]
0x84C4DD: push    1
0x84C4DF: mov     ecx, esi
0x84C4E1: call    eax
0x84C4E3: test    ebp, ebp
0x84C4E5: mov     esi, [esp+24h+arg_8]
0x84C4E9: mov     [esi+4], ebp
0x84C4EC: jz      short loc_84C4FE
0x84C4EE: add     ebp, 4
0x84C4F1: push    ebp; lpAddend
0x84C4F2: call    dword ptr ds:0A28078h
0x84C4F8: jmp     short loc_84C4FE
0x84C4FA: mov     esi, [esp+24h+arg_8]
0x84C4FE: test    esi, esi
0x84C500: jz      short loc_84C51C
0x84C502: cmp     byte ptr ds:0B42CDDh, 0
0x84C509: jz      short loc_84C51C
0x84C50B: mov     edx, [ebx]
0x84C50D: mov     eax, [edx+78h]
0x84C510: mov     ecx, ebx
0x84C512: call    eax
0x84C514: push    eax
0x84C515: mov     ecx, esi
0x84C517: call    sub_7715E0
0x84C51C: mov     ebx, 1
0x84C521: add     [edi+60h], ebx
0x84C524: mov     [esp+24h+arg_8], edi
0x84C528: mov     esi, [esp+24h+var_10]
0x84C52C: mov     edx, [esi+38h]
0x84C52F: lea     ecx, [esp+24h+arg_8]
0x84C533: push    ecx
0x84C534: push    edx
0x84C535: lea     ecx, [esi+40h]
0x84C538: mov     [esp+2Ch+var_4], 0
0x84C540: call    sub_76CE40
0x84C545: or      eax, 0FFFFFFFFh
0x84C548: add     [edi+60h], eax
0x84C54B: mov     [esp+24h+var_4], eax
0x84C54F: jnz     short loc_84C558
0x84C551: mov     ecx, edi
0x84C553: call    sub_7604D0
0x84C558: add     [esi+38h], ebx
0x84C55B: mov     ecx, [esp+24h+var_C]
0x84C55F: mov     large fs:0, ecx
0x84C566: pop     ecx
0x84C567: pop     edi
0x84C568: pop     esi
0x84C569: pop     ebp
0x84C56A: pop     ebx
0x84C56B: add     esp, 10h
0x84C56E: retn    10h
