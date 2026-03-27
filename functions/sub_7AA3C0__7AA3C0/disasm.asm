0x7AA3C0: push    ebp
0x7AA3C1: mov     ebp, [esp+4+arg_0]
0x7AA3C5: push    edi
0x7AA3C6: mov     edi, ecx
0x7AA3C8: cmp     ebp, [edi+223Ch]
0x7AA3CE: jnz     short loc_7AA3DB
0x7AA3D0: mov     al, [edi+2240h]
0x7AA3D6: pop     edi
0x7AA3D7: pop     ebp
0x7AA3D8: retn    8
0x7AA3DB: mov     eax, [edi+2230h]
0x7AA3E1: push    ebx
0x7AA3E2: xor     ebx, ebx
0x7AA3E4: cmp     eax, ebx
0x7AA3E6: push    esi
0x7AA3E7: jz      short loc_7AA405
0x7AA3E9: lea     esp, [esp+0]
0x7AA3F0: mov     esi, [eax+8]
0x7AA3F3: cmp     esi, ebx
0x7AA3F5: lea     ecx, [eax+8]
0x7AA3F8: mov     eax, [eax]
0x7AA3FA: jz      short loc_7AA401
0x7AA3FC: cmp     [esi+10h], ebp
0x7AA3FF: jz      short loc_7AA40E
0x7AA401: cmp     eax, ebx
0x7AA403: jnz     short loc_7AA3F0
0x7AA405: pop     esi
0x7AA406: pop     ebx
0x7AA407: pop     edi
0x7AA408: xor     al, al
0x7AA40A: pop     ebp
0x7AA40B: retn    8
0x7AA40E: cmp     [esi+19h], bl
0x7AA411: jz      short loc_7AA485
0x7AA413: cmp     [esp+10h+arg_4], bl
0x7AA417: jz      short loc_7AA480
0x7AA419: cmp     ds:0B42CDEh, bl
0x7AA41F: jz      short loc_7AA46B
0x7AA421: cmp     [esi+14h], ebx
0x7AA424: jz      short loc_7AA46B
0x7AA426: mov     eax, [esi+14h]
0x7AA429: mov     ecx, [eax]
0x7AA42B: push    1
0x7AA42D: push    4
0x7AA42F: lea     edx, [esp+18h+arg_4]
0x7AA433: push    edx
0x7AA434: push    eax
0x7AA435: mov     eax, [ecx+1Ch]
0x7AA438: call    eax
0x7AA43A: add     dword ptr ds:0B42CACh, 1
0x7AA441: cmp     eax, 1
0x7AA444: jz      short loc_7AA426
0x7AA446: cmp     eax, ebx
0x7AA448: jnz     short loc_7AA45B
0x7AA44A: mov     eax, dword ptr [esp+10h+arg_4]
0x7AA44E: cmp     eax, ebx
0x7AA450: setz    cl
0x7AA453: mov     [esi+18h], cl
0x7AA456: mov     [esi+1Ch], eax
0x7AA459: jmp     short loc_7AA47D
0x7AA45B: mov     eax, [esi+14h]
0x7AA45E: mov     edx, [eax]
0x7AA460: push    eax
0x7AA461: mov     eax, [edx+8]
0x7AA464: call    eax
0x7AA466: mov     [esi+14h], ebx
0x7AA469: jmp     short loc_7AA473
0x7AA46B: cmp     ds:0B42CDFh, bl
0x7AA471: jz      short loc_7AA47D
0x7AA473: mov     dword ptr [esi+1Ch], 0F423Fh
0x7AA47A: mov     [esi+18h], bl
0x7AA47D: mov     [esi+19h], bl
0x7AA480: cmp     [esi+19h], bl
0x7AA483: jnz     short loc_7AA494
0x7AA485: mov     [edi+223Ch], ebp
0x7AA48B: mov     cl, [esi+18h]
0x7AA48E: mov     [edi+2240h], cl
0x7AA494: mov     al, [esi+18h]
0x7AA497: pop     esi
0x7AA498: pop     ebx
0x7AA499: pop     edi
0x7AA49A: pop     ebp
0x7AA49B: retn    8
