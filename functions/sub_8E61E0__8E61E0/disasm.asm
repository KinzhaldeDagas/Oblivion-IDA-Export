0x8E61E0: sub     esp, 14h
0x8E61E3: mov     eax, ds:0BA9DE4h
0x8E61E8: push    ebx
0x8E61E9: push    ebp
0x8E61EA: push    esi
0x8E61EB: mov     esi, ecx
0x8E61ED: mov     ecx, large fs:2Ch
0x8E61F4: mov     ebp, [ecx+eax*4]
0x8E61F7: mov     ebx, [esi+44h]
0x8E61FA: mov     ecx, [ebp+19Ch]
0x8E6200: mov     edx, [ecx+20h]
0x8E6203: lea     eax, [ebx+1]
0x8E6206: shl     eax, 4
0x8E6209: and     eax, 0FFFFFFF0h
0x8E620C: push    edi
0x8E620D: lea     edi, [edx+eax]
0x8E6210: cmp     edi, [ecx+2Ch]
0x8E6213: mov     [esp+24h+var_4], ebx
0x8E6217: mov     [esp+24h+var_8], ebp
0x8E621B: ja      short loc_8E6226
0x8E621D: mov     [ecx+20h], edi
0x8E6220: mov     [esp+24h+var_10], edx
0x8E6224: jmp     short loc_8E6230
0x8E6226: mov     edx, [ecx]
0x8E6228: push    eax
0x8E6229: call    dword ptr [edx+0Ch]
0x8E622C: mov     [esp+24h+var_10], eax
0x8E6230: mov     ecx, [ebp+19Ch]
0x8E6236: mov     eax, [ecx+20h]
0x8E6239: mov     ebp, [ecx+2Ch]
0x8E623C: lea     edi, ds:10h[ebx*4]
0x8E6243: and     edi, 0FFFFFFF0h
0x8E6246: lea     edx, [eax+edi]
0x8E6249: cmp     edx, ebp
0x8E624B: ja      short loc_8E6252
0x8E624D: mov     [ecx+20h], edx
0x8E6250: jmp     short loc_8E6258
0x8E6252: mov     eax, [ecx]
0x8E6254: push    edi
0x8E6255: call    dword ptr [eax+0Ch]
0x8E6258: mov     ecx, [esp+24h+var_8]
0x8E625C: mov     ecx, [ecx+19Ch]
0x8E6262: mov     ebp, eax
0x8E6264: mov     eax, [ecx+20h]
0x8E6267: lea     edx, [eax+edi]
0x8E626A: cmp     edx, [ecx+2Ch]
0x8E626D: mov     [esp+24h+var_14], ebp
0x8E6271: ja      short loc_8E6278
0x8E6273: mov     [ecx+20h], edx
0x8E6276: jmp     short loc_8E627E
0x8E6278: mov     edx, [ecx]
0x8E627A: push    edi
0x8E627B: call    dword ptr [edx+0Ch]
0x8E627E: mov     ecx, [esi+44h]
0x8E6281: mov     edi, eax
0x8E6283: xor     eax, eax
0x8E6285: test    ecx, ecx
0x8E6287: mov     [esp+24h+var_C], edi
0x8E628B: jle     short loc_8E62DD
0x8E628D: xor     ecx, ecx
0x8E628F: nop
0x8E6290: mov     edx, [esi+40h]
0x8E6293: mov     ebx, [esp+24h+var_10]
0x8E6297: add     edx, ecx
0x8E6299: mov     ebp, [edx]
0x8E629B: add     ebx, ecx
0x8E629D: mov     [ebx], ebp
0x8E629F: mov     ebp, [edx+4]
0x8E62A2: mov     [ebx+4], ebp
0x8E62A5: mov     ebp, [edx+8]
0x8E62A8: mov     [ebx+8], ebp
0x8E62AB: mov     edx, [edx+0Ch]
0x8E62AE: mov     ebp, [esp+24h+var_14]
0x8E62B2: mov     [ebx+0Ch], edx
0x8E62B5: mov     edx, [esi+40h]
0x8E62B8: movzx   edx, word ptr [ecx+edx+8]
0x8E62BD: mov     ebx, [esi+4Ch]
0x8E62C0: mov     dx, [ebx+edx*4]
0x8E62C4: mov     [ebp+eax*4+0], dx
0x8E62C9: mov     [ebp+eax*4+2], ax
0x8E62CE: mov     edx, [esi+44h]
0x8E62D1: inc     eax
0x8E62D2: add     ecx, 10h
0x8E62D5: cmp     eax, edx
0x8E62D7: jl      short loc_8E6290
0x8E62D9: mov     ebx, [esp+24h+var_4]
0x8E62DD: lea     eax, [ebx-1]
0x8E62E0: cmp     eax, 1
0x8E62E3: mov     byte ptr [esp+24h+var_4], 0
0x8E62E8: jle     short loc_8E62FF
0x8E62EA: mov     ecx, [esp+24h+var_4]
0x8E62EE: push    ecx
0x8E62EF: dec     eax
0x8E62F0: push    eax
0x8E62F1: lea     edx, [ebp+4]
0x8E62F4: push    0
0x8E62F6: push    edx
0x8E62F7: call    sub_8E1200
0x8E62FC: add     esp, 10h
0x8E62FF: mov     eax, [esi+44h]
0x8E6302: xor     ecx, ecx
0x8E6304: test    eax, eax
0x8E6306: jle     short loc_8E6353
0x8E6308: xor     edx, edx
0x8E630A: lea     eax, [ebp+2]
0x8E630D: lea     ecx, [ecx+0]
0x8E6310: movzx   ebx, word ptr [eax]
0x8E6313: mov     [edi+ebx*4], ecx
0x8E6316: movzx   edi, word ptr [eax]
0x8E6319: mov     ebx, [esp+24h+var_10]
0x8E631D: shl     edi, 4
0x8E6320: add     edi, ebx
0x8E6322: mov     ebp, [edi]
0x8E6324: mov     ebx, [esi+40h]
0x8E6327: add     ebx, edx
0x8E6329: mov     [ebx], ebp
0x8E632B: mov     ebp, [edi+4]
0x8E632E: mov     [ebx+4], ebp
0x8E6331: mov     ebp, [edi+8]
0x8E6334: mov     [ebx+8], ebp
0x8E6337: mov     edi, [edi+0Ch]
0x8E633A: mov     [ebx+0Ch], edi
0x8E633D: mov     edi, [esi+44h]
0x8E6340: inc     ecx
0x8E6341: add     eax, 4
0x8E6344: add     edx, 10h
0x8E6347: cmp     ecx, edi
0x8E6349: mov     edi, [esp+24h+var_C]
0x8E634D: jl      short loc_8E6310
0x8E634F: mov     ebp, [esp+24h+var_14]
0x8E6353: mov     eax, [esi+44h]
0x8E6356: mov     ecx, 1
0x8E635B: cmp     eax, ecx
0x8E635D: jle     short loc_8E638C
0x8E635F: mov     ebx, 10h
0x8E6364: mov     eax, [esi+40h]
0x8E6367: lea     edx, [ebx+eax]
0x8E636A: mov     eax, [edx+0Ch]
0x8E636D: test    al, 1
0x8E636F: jnz     short loc_8E6377
0x8E6371: mov     edx, eax
0x8E6373: mov     [edx], ecx
0x8E6375: jmp     short loc_8E6381
0x8E6377: mov     edx, [esi+78h]
0x8E637A: and     eax, 0FFFFFFFEh
0x8E637D: mov     [eax+edx], cx
0x8E6381: mov     eax, [esi+44h]
0x8E6384: inc     ecx
0x8E6385: add     ebx, 10h
0x8E6388: cmp     ecx, eax
0x8E638A: jl      short loc_8E6364
0x8E638C: mov     eax, [esi+70h]
0x8E638F: xor     ebx, ebx
0x8E6391: cmp     eax, ebx
0x8E6393: mov     [esp+24h+var_C], ebx
0x8E6397: jle     short loc_8E63DB
0x8E6399: lea     esp, [esp+0]
0x8E63A0: mov     edx, [esi+78h]
0x8E63A3: mov     eax, [edx+ebx+8]
0x8E63A7: add     edx, ebx
0x8E63A9: dec     eax
0x8E63AA: js      short loc_8E63C8
0x8E63AC: lea     esp, [esp+0]
0x8E63B0: mov     ecx, [edx+4]
0x8E63B3: movzx   ebp, word ptr [ecx+eax*2]
0x8E63B7: mov     bp, [edi+ebp*4]
0x8E63BB: lea     ecx, [ecx+eax*2]
0x8E63BE: dec     eax
0x8E63BF: mov     [ecx], bp
0x8E63C2: jns     short loc_8E63B0
0x8E63C4: mov     ebp, [esp+24h+var_14]
0x8E63C8: mov     eax, [esp+24h+var_C]
0x8E63CC: mov     ecx, [esi+70h]
0x8E63CF: inc     eax
0x8E63D0: add     ebx, 10h
0x8E63D3: cmp     eax, ecx
0x8E63D5: mov     [esp+24h+var_C], eax
0x8E63D9: jl      short loc_8E63A0
0x8E63DB: lea     edx, [esi+50h]
0x8E63DE: mov     esi, 3
0x8E63E3: mov     ebx, [edx]
0x8E63E5: mov     eax, [edx-4]
0x8E63E8: xor     ecx, ecx
0x8E63EA: test    ebx, ebx
0x8E63EC: jle     short loc_8E6405
0x8E63EE: add     eax, 2
0x8E63F1: movzx   ebx, word ptr [eax]
0x8E63F4: mov     bx, [edi+ebx*4]
0x8E63F8: mov     [eax], bx
0x8E63FB: mov     ebx, [edx]
0x8E63FD: inc     ecx
0x8E63FE: add     eax, 4
0x8E6401: cmp     ecx, ebx
0x8E6403: jl      short loc_8E63F1
0x8E6405: add     edx, 0Ch
0x8E6408: dec     esi
0x8E6409: jnz     short loc_8E63E3
0x8E640B: mov     esi, [esp+24h+var_8]
0x8E640F: mov     ecx, [esi+19Ch]
0x8E6415: cmp     edi, [ecx+28h]
0x8E6418: mov     [ecx+20h], edi
0x8E641B: jnz     short loc_8E6423
0x8E641D: mov     edx, [ecx]
0x8E641F: push    edi
0x8E6420: call    dword ptr [edx+10h]
0x8E6423: mov     ecx, [esi+19Ch]
0x8E6429: cmp     ebp, [ecx+28h]
0x8E642C: mov     [ecx+20h], ebp
0x8E642F: jnz     short loc_8E6437
0x8E6431: mov     eax, [ecx]
0x8E6433: push    ebp
0x8E6434: call    dword ptr [eax+10h]
0x8E6437: mov     ecx, [esi+19Ch]
0x8E643D: mov     eax, [esp+24h+var_10]
0x8E6441: cmp     eax, [ecx+28h]
0x8E6444: pop     edi
0x8E6445: pop     esi
0x8E6446: pop     ebp
0x8E6447: mov     [ecx+20h], eax
0x8E644A: pop     ebx
0x8E644B: jnz     short loc_8E6453
0x8E644D: mov     edx, [ecx]
0x8E644F: push    eax
0x8E6450: call    dword ptr [edx+10h]
0x8E6453: add     esp, 14h
0x8E6456: retn
