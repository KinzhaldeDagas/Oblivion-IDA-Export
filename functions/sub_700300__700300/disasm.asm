0x700300: push    ebx
0x700301: mov     ebx, [esp+4+arg_4]
0x700305: push    ebp
0x700306: push    esi
0x700307: mov     esi, [esp+0Ch+arg_0]
0x70030B: push    edi
0x70030C: push    ebx
0x70030D: push    esi
0x70030E: mov     ebp, ecx
0x700310: call    sub_700770
0x700315: mov     eax, [ebx+8]
0x700318: cmp     eax, 1
0x70031B: jnz     short loc_70032A
0x70031D: mov     eax, [ebp+8]
0x700320: push    eax; Src
0x700321: mov     ecx, esi
0x700323: call    NiObjectNET_SetName
0x700328: jmp     short loc_700383
0x70032A: cmp     eax, 2
0x70032D: jnz     short loc_700383
0x70032F: mov     eax, [ebp+8]
0x700332: test    eax, eax
0x700334: jz      short loc_700383
0x700336: lea     edx, [eax+1]
0x700339: lea     esp, [esp+0]
0x700340: mov     cl, [eax]
0x700342: add     eax, 1
0x700345: test    cl, cl
0x700347: jnz     short loc_700340
0x700349: sub     eax, edx
0x70034B: lea     edi, [eax+2]
0x70034E: push    edi; Size
0x70034F: call    FormHeapAlloc
0x700354: mov     ecx, [ebp+8]
0x700357: push    ecx; Src
0x700358: mov     esi, eax
0x70035A: push    edi; SizeInBytes
0x70035B: push    esi; Dst
0x70035C: call    _strcpy_s
0x700361: mov     dl, [ebx+0Ch]
0x700364: mov     ecx, [esp+20h+arg_0]
0x700368: add     esp, 10h
0x70036B: push    esi; Src
0x70036C: mov     [esi+edi-2], dl
0x700370: mov     byte ptr [esi+edi-1], 0
0x700375: call    NiObjectNET_SetName
0x70037A: push    esi
0x70037B: call    FormHeapFree
0x700380: add     esp, 4
0x700383: cmp     word ptr [ebp+14h], 0
0x700388: jz      short loc_700405
0x70038A: push    offset stru_B3F600; lpCriticalSection
0x70038F: call    dword ptr ds:0A2806Ch
0x700395: call    dword ptr ds:0A2808Ch
0x70039B: add     dword ptr ds:0B3F67Ch, 1
0x7003A2: xor     edi, edi
0x7003A4: mov     ds:0B3F678h, eax
0x7003A9: cmp     [ebp+14h], di
0x7003AD: jbe     short loc_7003E7
0x7003AF: nop
0x7003B0: mov     ecx, [ebp+10h]
0x7003B3: movzx   eax, di
0x7003B6: mov     esi, [ecx+eax*4]
0x7003B9: test    esi, esi
0x7003BB: jz      short loc_7003DE
0x7003BD: mov     edx, [esi]
0x7003BF: mov     eax, [edx+50h]
0x7003C2: mov     ecx, esi
0x7003C4: call    eax
0x7003C6: test    al, al
0x7003C8: jz      short loc_7003DE
0x7003CA: mov     edx, [esi]
0x7003CC: mov     eax, [edx+18h]
0x7003CF: push    ebx
0x7003D0: mov     ecx, esi
0x7003D2: call    eax
0x7003D4: mov     ecx, [esp+10h+arg_0]
0x7003D8: push    eax
0x7003D9: call    NiNode_AddNiExtraData
0x7003DE: add     edi, 1
0x7003E1: cmp     di, [ebp+14h]
0x7003E5: jb      short loc_7003B0
0x7003E7: sub     dword ptr ds:0B3F67Ch, 1
0x7003EE: jnz     short loc_7003FA
0x7003F0: mov     dword ptr ds:0B3F678h, 0
0x7003FA: push    offset stru_B3F600; lpCriticalSection
0x7003FF: call    dword ptr ds:0A28074h
0x700405: mov     ecx, [ebp+0Ch]
0x700408: test    ecx, ecx
0x70040A: jz      short loc_700456
0x70040C: mov     edx, [ecx]
0x70040E: mov     eax, [edx+18h]
0x700411: push    ebx
0x700412: call    eax
0x700414: mov     ecx, [esp+10h+arg_0]
0x700418: mov     esi, [ecx+0Ch]
0x70041B: mov     edi, eax
0x70041D: cmp     esi, edi
0x70041F: jz      short loc_700456
0x700421: test    esi, esi
0x700423: jz      short loc_700441
0x700425: lea     edx, [esi+4]
0x700428: push    edx; lpAddend
0x700429: call    dword ptr ds:0A2807Ch
0x70042F: test    eax, eax
0x700431: jnz     short loc_700441
0x700433: test    esi, esi
0x700435: jz      short loc_700441
0x700437: mov     eax, [esi]
0x700439: mov     edx, [eax]
0x70043B: push    1
0x70043D: mov     ecx, esi
0x70043F: call    edx
0x700441: test    edi, edi
0x700443: mov     eax, [esp+10h+arg_0]
0x700447: mov     [eax+0Ch], edi
0x70044A: jz      short loc_700456
0x70044C: add     edi, 4
0x70044F: push    edi; lpAddend
0x700450: call    dword ptr ds:0A28078h
0x700456: pop     edi
0x700457: pop     esi
0x700458: pop     ebp
0x700459: pop     ebx
0x70045A: retn    8
