0x8BC3E0: push    ebx
0x8BC3E1: mov     ebx, [esp+4+arg_4]
0x8BC3E5: mov     eax, [ebx]
0x8BC3E7: push    ebp
0x8BC3E8: push    esi
0x8BC3E9: push    edi
0x8BC3EA: mov     esi, ecx
0x8BC3EC: push    eax
0x8BC3ED: lea     ecx, [esp+14h+arg_4]
0x8BC3F1: push    ecx
0x8BC3F2: mov     ecx, offset unk_BA82B4
0x8BC3F7: call    sub_90D210
0x8BC3FC: cmp     byte ptr [eax], 0
0x8BC3FF: jz      short loc_8BC467
0x8BC401: cmp     dword ptr [ebx], offset unk_BA826C
0x8BC407: jz      short loc_8BC467
0x8BC409: mov     ecx, ds:0BA7D98h
0x8BC40F: mov     ebp, [esp+10h+arg_0]
0x8BC413: mov     edx, [ecx]
0x8BC415: mov     edi, [ebp+0]
0x8BC418: push    24h ; '$'
0x8BC41A: push    50h ; 'P'
0x8BC41C: call    dword ptr [edx+10h]
0x8BC41F: push    edi
0x8BC420: mov     ecx, eax
0x8BC422: mov     word ptr [eax+4], 50h ; 'P'
0x8BC428: call    sub_90D0E0
0x8BC42D: mov     ecx, [esi+8]
0x8BC430: add     esi, 4
0x8BC433: mov     edi, eax
0x8BC435: mov     eax, [esi+8]
0x8BC438: and     eax, 3FFFFFFFh
0x8BC43D: cmp     ecx, eax
0x8BC43F: jnz     short loc_8BC44C
0x8BC441: push    4
0x8BC443: push    esi
0x8BC444: call    sub_8A6EE0
0x8BC449: add     esp, 8
0x8BC44C: mov     ecx, [esi+4]
0x8BC44F: mov     edx, [esi]
0x8BC451: mov     [edx+ecx*4], edi
0x8BC454: inc     dword ptr [esi+4]
0x8BC457: mov     [ebp+0], edi
0x8BC45A: pop     edi
0x8BC45B: pop     esi
0x8BC45C: pop     ebp
0x8BC45D: mov     dword ptr [ebx], offset unk_BA826C
0x8BC463: pop     ebx
0x8BC464: retn    8
0x8BC467: mov     eax, [ebx]
0x8BC469: push    eax
0x8BC46A: lea     ecx, [esp+14h+arg_4]
0x8BC46E: push    ecx
0x8BC46F: mov     ecx, offset unk_BA8218
0x8BC474: call    sub_90D210
0x8BC479: cmp     byte ptr [eax], 0
0x8BC47C: jz      short loc_8BC4E4
0x8BC47E: cmp     dword ptr [ebx], offset unk_BA81F4
0x8BC484: jz      short loc_8BC4E4
0x8BC486: mov     ecx, ds:0BA7D98h
0x8BC48C: mov     ebp, [esp+10h+arg_0]
0x8BC490: mov     edx, [ecx]
0x8BC492: mov     edi, [ebp+0]
0x8BC495: push    24h ; '$'
0x8BC497: push    70h ; 'p'
0x8BC499: call    dword ptr [edx+10h]
0x8BC49C: push    edi
0x8BC49D: mov     ecx, eax
0x8BC49F: mov     word ptr [eax+4], 70h ; 'p'
0x8BC4A5: call    sub_90C460
0x8BC4AA: mov     ecx, [esi+8]
0x8BC4AD: add     esi, 4
0x8BC4B0: mov     edi, eax
0x8BC4B2: mov     eax, [esi+8]
0x8BC4B5: and     eax, 3FFFFFFFh
0x8BC4BA: cmp     ecx, eax
0x8BC4BC: jnz     short loc_8BC4C9
0x8BC4BE: push    4
0x8BC4C0: push    esi
0x8BC4C1: call    sub_8A6EE0
0x8BC4C6: add     esp, 8
0x8BC4C9: mov     ecx, [esi+4]
0x8BC4CC: mov     edx, [esi]
0x8BC4CE: mov     [edx+ecx*4], edi
0x8BC4D1: inc     dword ptr [esi+4]
0x8BC4D4: mov     [ebp+0], edi
0x8BC4D7: pop     edi
0x8BC4D8: pop     esi
0x8BC4D9: pop     ebp
0x8BC4DA: mov     dword ptr [ebx], offset unk_BA81F4
0x8BC4E0: pop     ebx
0x8BC4E1: retn    8
0x8BC4E4: mov     eax, [ebx]
0x8BC4E6: push    eax
0x8BC4E7: lea     ecx, [esp+14h+arg_4]
0x8BC4EB: push    ecx
0x8BC4EC: mov     ecx, offset unk_BA81D0
0x8BC4F1: call    sub_90D210
0x8BC4F6: cmp     byte ptr [eax], 0
0x8BC4F9: jz      short loc_8BC519
0x8BC4FB: mov     edx, [esp+10h+arg_0]
0x8BC4FF: mov     eax, [edx]
0x8BC501: mov     ecx, [eax+8]
0x8BC504: test    ecx, ecx
0x8BC506: jz      short loc_8BC519
0x8BC508: cmp     [ecx+34h], eax
0x8BC50B: jnz     short loc_8BC519
0x8BC50D: mov     dword ptr [edx], 0
0x8BC513: mov     dword ptr [ebx], 0
0x8BC519: pop     edi
0x8BC51A: pop     esi
0x8BC51B: pop     ebp
0x8BC51C: pop     ebx
0x8BC51D: retn    8
