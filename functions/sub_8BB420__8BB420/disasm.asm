0x8BB420: sub     esp, 0Ch
0x8BB423: push    ebp
0x8BB424: push    esi
0x8BB425: mov     esi, ds:0BA8188h
0x8BB42B: xor     ebp, ebp
0x8BB42D: cmp     esi, ebp
0x8BB42F: mov     eax, 80000000h
0x8BB434: push    edi
0x8BB435: mov     edi, offset dword_BA8188
0x8BB43A: mov     [esp+18h+var_C], ebp
0x8BB43E: mov     [esp+18h+var_8], ebp
0x8BB442: mov     [esp+18h+var_4], eax
0x8BB446: jz      short loc_8BB4AF
0x8BB448: mov     eax, [esi+8]
0x8BB44B: cmp     [eax], ebp
0x8BB44D: jnz     short loc_8BB45E
0x8BB44F: call    dword ptr [esi]
0x8BB451: cmp     eax, ebp
0x8BB453: jz      loc_8BB4EF
0x8BB459: mov     ecx, [esi+8]
0x8BB45C: mov     [ecx], eax
0x8BB45E: lea     edi, [esi+4]
0x8BB461: mov     esi, [edi]
0x8BB463: cmp     esi, ebp
0x8BB465: jnz     short loc_8BB448
0x8BB467: push    ebx
0x8BB468: mov     ebx, [esp+1Ch+var_8]
0x8BB46C: cmp     ebx, ebp
0x8BB46E: jz      short loc_8BB4AA
0x8BB470: dec     ebx
0x8BB471: cmp     ebx, ebp
0x8BB473: jl      short loc_8BB4A2
0x8BB475: mov     ecx, [esp+1Ch+var_C]
0x8BB479: mov     esi, [ecx+ebx*4]
0x8BB47C: call    dword ptr [esi]
0x8BB47E: cmp     eax, ebp
0x8BB480: jz      short loc_8BB49F
0x8BB482: mov     edx, [esi+8]
0x8BB485: mov     [edx], eax
0x8BB487: mov     [edi], esi
0x8BB489: mov     eax, [esp+1Ch+var_8]
0x8BB48D: mov     ecx, [esp+1Ch+var_C]
0x8BB491: dec     eax
0x8BB492: mov     [esp+1Ch+var_8], eax
0x8BB496: mov     eax, [ecx+eax*4]
0x8BB499: lea     edi, [esi+4]
0x8BB49C: mov     [ecx+ebx*4], eax
0x8BB49F: dec     ebx
0x8BB4A0: jns     short loc_8BB475
0x8BB4A2: mov     ebx, [esp+1Ch+var_8]
0x8BB4A6: cmp     ebx, ebp
0x8BB4A8: jnz     short loc_8BB470
0x8BB4AA: mov     eax, [esp+1Ch+var_4]
0x8BB4AE: pop     ebx
0x8BB4AF: test    eax, eax
0x8BB4B1: js      short loc_8BB4E8
0x8BB4B3: mov     ecx, ds:0BA9DE4h
0x8BB4B9: mov     edx, large fs:2Ch
0x8BB4C0: mov     ecx, [edx+ecx*4]
0x8BB4C3: mov     ecx, [ecx+19Ch]
0x8BB4C9: cmp     ecx, ebp
0x8BB4CB: jnz     short loc_8BB4D3
0x8BB4CD: mov     ecx, ds:0BA7D9Ch
0x8BB4D3: mov     edx, [esp+18h+var_C]
0x8BB4D7: and     eax, 3FFFFFFFh
0x8BB4DC: push    14h
0x8BB4DE: shl     eax, 2
0x8BB4E1: push    eax
0x8BB4E2: push    edx
0x8BB4E3: call    sub_8A75D0
0x8BB4E8: pop     edi
0x8BB4E9: pop     esi
0x8BB4EA: pop     ebp
0x8BB4EB: add     esp, 0Ch
0x8BB4EE: retn
0x8BB4EF: mov     edx, [esp+18h+var_4]
0x8BB4F3: mov     eax, [esp+18h+var_8]
0x8BB4F7: and     edx, 3FFFFFFFh
0x8BB4FD: cmp     eax, edx
0x8BB4FF: jnz     short loc_8BB510
0x8BB501: lea     eax, [esp+18h+var_C]
0x8BB505: push    4
0x8BB507: push    eax
0x8BB508: call    sub_8A6EE0
0x8BB50D: add     esp, 8
0x8BB510: mov     edx, [esp+18h+var_8]
0x8BB514: mov     ecx, [esp+18h+var_C]
0x8BB518: mov     [ecx+edx*4], esi
0x8BB51B: inc     [esp+18h+var_8]
0x8BB51F: mov     eax, [edi]
0x8BB521: mov     esi, [esi+4]
0x8BB524: mov     [eax+4], ebp
0x8BB527: mov     [edi], esi
0x8BB529: jmp     loc_8BB463
