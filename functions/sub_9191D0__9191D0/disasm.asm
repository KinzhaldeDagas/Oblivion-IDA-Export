0x9191D0: mov     eax, [esp+arg_0]
0x9191D4: push    ebx
0x9191D5: push    esi
0x9191D6: push    edi
0x9191D7: push    eax
0x9191D8: mov     esi, ecx
0x9191DA: call    sub_9491F0
0x9191DF: mov     dword ptr [esi+28h], offset off_A9D2B4
0x9191E6: mov     dword ptr [esi], offset off_A9D2EC
0x9191EC: mov     dword ptr [esi+8], offset off_A9D2D4
0x9191F3: mov     dword ptr [esi+20h], offset off_A9D84C
0x9191FA: mov     dword ptr [esi+28h], offset off_A9D2C8
0x919201: lea     ebx, [esi+28h]
0x919204: mov     al, 1
0x919206: mov     [esi+2Ch], al
0x919209: mov     [esi+2Dh], al
0x91920C: xor     edi, edi
0x91920E: mov     eax, 80000000h
0x919213: mov     [esi+30h], edi
0x919216: mov     [esi+34h], edi
0x919219: mov     [esi+38h], eax
0x91921C: mov     [esi+3Ch], edi
0x91921F: mov     [esi+40h], edi
0x919222: mov     [esi+44h], eax
0x919225: mov     eax, [esi+24h]
0x919228: cmp     eax, edi
0x91922A: jz      short loc_91924B
0x91922C: cmp     [eax+60h], edi
0x91922F: jle     short loc_91924B
0x919231: mov     ecx, [esi+24h]
0x919234: mov     edx, [ecx+5Ch]
0x919237: mov     ecx, [edx+edi*4]
0x91923A: push    ebx
0x91923B: call    sub_899D20
0x919240: mov     eax, [esi+24h]
0x919243: mov     ecx, [eax+60h]
0x919246: inc     edi
0x919247: cmp     edi, ecx
0x919249: jl      short loc_919231
0x91924B: pop     edi
0x91924C: mov     eax, esi
0x91924E: pop     esi
0x91924F: pop     ebx
0x919250: retn    4
