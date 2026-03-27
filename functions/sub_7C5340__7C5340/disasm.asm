0x7C5340: mov     eax, [esp+arg_4]
0x7C5344: push    ebx
0x7C5345: mov     ebx, [esp+4+arg_0]
0x7C5349: push    esi
0x7C534A: push    edi
0x7C534B: push    eax
0x7C534C: push    ebx
0x7C534D: mov     esi, ecx
0x7C534F: call    sub_7E2490
0x7C5354: mov     edi, [ebx+7Ch]
0x7C5357: cmp     edi, [esi+7Ch]
0x7C535A: jz      short loc_7C5390
0x7C535C: test    edi, edi
0x7C535E: jz      short loc_7C537C
0x7C5360: lea     ecx, [edi+4]
0x7C5363: push    ecx; lpAddend
0x7C5364: call    dword ptr ds:0A2807Ch
0x7C536A: test    eax, eax
0x7C536C: jnz     short loc_7C537C
0x7C536E: test    edi, edi
0x7C5370: jz      short loc_7C537C
0x7C5372: mov     edx, [edi]
0x7C5374: mov     eax, [edx]
0x7C5376: push    1
0x7C5378: mov     ecx, edi
0x7C537A: call    eax
0x7C537C: mov     eax, [esi+7Ch]
0x7C537F: test    eax, eax
0x7C5381: mov     [ebx+7Ch], eax
0x7C5384: jz      short loc_7C5390
0x7C5386: add     eax, 4
0x7C5389: push    eax; lpAddend
0x7C538A: call    dword ptr ds:0A28078h
0x7C5390: fld     dword ptr [esi+80h]
0x7C5396: pop     edi
0x7C5397: fstp    dword ptr [ebx+80h]
0x7C539D: mov     ecx, [esi+88h]
0x7C53A3: pop     esi
0x7C53A4: mov     [ebx+88h], ecx
0x7C53AA: pop     ebx
0x7C53AB: retn    8
