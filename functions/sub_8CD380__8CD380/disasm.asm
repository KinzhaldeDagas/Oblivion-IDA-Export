0x8CD380: sub     esp, 4Ch
0x8CD383: mov     ecx, [esp+4Ch+arg_8]
0x8CD387: push    ebp
0x8CD388: push    esi
0x8CD389: mov     esi, [ecx+4]
0x8CD38C: lea     eax, [esp+54h+var_40]
0x8CD390: push    edi
0x8CD391: mov     edi, [esp+58h+arg_4]
0x8CD395: mov     edx, [edi+54h]
0x8CD398: mov     [esp+58h+var_4C], eax
0x8CD39C: mov     eax, 80000010h
0x8CD3A1: xor     ebp, ebp
0x8CD3A3: test    esi, esi
0x8CD3A5: mov     [esp+58h+arg_4], edx
0x8CD3A9: mov     [esp+58h+var_48], 0
0x8CD3B1: mov     [esp+58h+var_44], eax
0x8CD3B5: jle     loc_8CD497
0x8CD3BB: jmp     short loc_8CD3C1
0x8CD3BD: mov     edx, [esp+58h+arg_4]
0x8CD3C1: mov     eax, [esp+58h+arg_8]
0x8CD3C5: mov     ecx, [eax]
0x8CD3C7: mov     esi, [ecx+ebp*4]
0x8CD3CA: mov     eax, [esp+58h+arg_0]
0x8CD3CE: mov     ecx, [eax+30h]
0x8CD3D1: cmp     edx, ecx
0x8CD3D3: push    esi
0x8CD3D4: jz      loc_8CD464
0x8CD3DA: mov     ecx, edx
0x8CD3DC: call    sub_8DE080
0x8CD3E1: cmp     word ptr [esi+4], 0
0x8CD3E6: jz      short loc_8CD3FB
0x8CD3E8: dec     word ptr [esi+6]
0x8CD3EC: cmp     word ptr [esi+6], 0
0x8CD3F1: jnz     short loc_8CD3FB
0x8CD3F3: mov     edx, [esi]
0x8CD3F5: push    1
0x8CD3F7: mov     ecx, esi
0x8CD3F9: call    dword ptr [edx]
0x8CD3FB: lea     ecx, [esp+58h+var_4C]
0x8CD3FF: mov     [esp+58h+var_48], 0
0x8CD407: mov     eax, [esi]
0x8CD409: push    ecx
0x8CD40A: mov     ecx, esi
0x8CD40C: call    dword ptr [eax+0Ch]
0x8CD40F: mov     eax, [esp+58h+var_48]
0x8CD413: xor     esi, esi
0x8CD415: test    eax, eax
0x8CD417: jle     short loc_8CD483
0x8CD419: lea     esp, [esp+0]
0x8CD420: mov     edx, [esp+58h+var_4C]
0x8CD424: mov     eax, [edx+esi*4]
0x8CD427: mov     cl, [eax+91h]
0x8CD42D: test    cl, cl
0x8CD42F: jnz     short loc_8CD459
0x8CD431: cmp     eax, edi
0x8CD433: jz      short loc_8CD459
0x8CD435: test    cl, cl
0x8CD437: jnz     short loc_8CD459
0x8CD439: mov     cl, [edi+91h]
0x8CD43F: test    cl, cl
0x8CD441: jnz     short loc_8CD459
0x8CD443: mov     ecx, [eax+54h]
0x8CD446: cmp     ecx, [edi+54h]
0x8CD449: jz      short loc_8CD459
0x8CD44B: mov     edx, [eax+8]
0x8CD44E: push    edi
0x8CD44F: push    eax
0x8CD450: push    edx
0x8CD451: call    sub_8CD320
0x8CD456: add     esp, 0Ch
0x8CD459: mov     eax, [esp+58h+var_48]
0x8CD45D: inc     esi
0x8CD45E: cmp     esi, eax
0x8CD460: jl      short loc_8CD420
0x8CD462: jmp     short loc_8CD483
0x8CD464: call    sub_8DE080
0x8CD469: cmp     word ptr [esi+4], 0
0x8CD46E: jz      short loc_8CD483
0x8CD470: dec     word ptr [esi+6]
0x8CD474: cmp     word ptr [esi+6], 0
0x8CD479: jnz     short loc_8CD483
0x8CD47B: mov     eax, [esi]
0x8CD47D: push    1
0x8CD47F: mov     ecx, esi
0x8CD481: call    dword ptr [eax]
0x8CD483: mov     ecx, [esp+58h+arg_8]
0x8CD487: mov     eax, [ecx+4]
0x8CD48A: inc     ebp
0x8CD48B: cmp     ebp, eax
0x8CD48D: jl      loc_8CD3BD
0x8CD493: mov     eax, [esp+58h+var_44]
0x8CD497: test    eax, eax
0x8CD499: pop     edi
0x8CD49A: pop     esi
0x8CD49B: pop     ebp
0x8CD49C: js      short loc_8CD4D3
0x8CD49E: mov     ecx, large fs:2Ch
0x8CD4A5: mov     edx, ds:0BA9DE4h
0x8CD4AB: mov     edx, [ecx+edx*4]
0x8CD4AE: mov     ecx, [edx+19Ch]
0x8CD4B4: test    ecx, ecx
0x8CD4B6: jnz     short loc_8CD4BE
0x8CD4B8: mov     ecx, ds:0BA7D9Ch
0x8CD4BE: and     eax, 3FFFFFFFh
0x8CD4C3: push    14h
0x8CD4C5: shl     eax, 2
0x8CD4C8: push    eax
0x8CD4C9: mov     eax, [esp+54h+var_4C]
0x8CD4CD: push    eax
0x8CD4CE: call    sub_8A75D0
0x8CD4D3: add     esp, 4Ch
0x8CD4D6: retn
