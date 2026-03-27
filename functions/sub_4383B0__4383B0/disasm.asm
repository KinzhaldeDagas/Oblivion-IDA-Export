0x4383B0: push    0FFFFFFFFh
0x4383B2: push    offset SEH_4383B0
0x4383B7: mov     eax, large fs:0
0x4383BD: push    eax
0x4383BE: push    ecx
0x4383BF: push    ebx
0x4383C0: push    ebp
0x4383C1: push    esi
0x4383C2: push    edi
0x4383C3: mov     eax, ___security_cookie
0x4383C8: xor     eax, esp
0x4383CA: push    eax
0x4383CB: lea     eax, [esp+24h+var_C]
0x4383CF: mov     large fs:0, eax
0x4383D5: mov     ebp, ecx
0x4383D7: mov     ecx, [ebp+4]
0x4383DA: mov     eax, [ecx]
0x4383DC: mov     edi, [esp+24h+arg_0]
0x4383E0: mov     eax, [eax+4]
0x4383E3: lea     edx, [esp+24h+arg_0]
0x4383E7: push    edx
0x4383E8: push    edi
0x4383E9: call    eax
0x4383EB: test    al, al
0x4383ED: jz      short loc_4383F8
0x4383EF: mov     eax, [esp+24h+arg_0]
0x4383F3: jmp     loc_4384C6
0x4383F8: push    38h ; '8'; Size
0x4383FA: call    FormHeapAlloc
0x4383FF: mov     esi, eax
0x438401: add     esp, 4
0x438404: mov     [esp+24h+var_10], esi
0x438408: test    esi, esi
0x43840A: mov     ebx, [esp+24h+arg_4]
0x43840E: mov     [esp+24h+var_4], 0
0x438416: jz      short loc_438437
0x438418: mov     ecx, [esp+24h+arg_8]
0x43841C: push    ecx
0x43841D: push    edi
0x43841E: mov     ecx, esi
0x438420: call    sub_4377D0
0x438425: mov     edx, [esp+24h+arg_C]
0x438429: mov     dword ptr [esi], offset ??_7QueuedAnimIdle@@6B@; const QueuedAnimIdle::`vftable'
0x43842F: mov     [esi+30h], edx
0x438432: mov     [esi+34h], ebx
0x438435: jmp     short loc_438439
0x438437: xor     esi, esi
0x438439: test    esi, esi
0x43843B: mov     edi, ds:InterlockedIncrement
0x438441: mov     [esp+24h+arg_4], esi
0x438445: jz      short loc_43844D
0x438447: lea     eax, [esi+8]
0x43844A: push    eax; lpAddend
0x43844B: call    edi ; InterlockedIncrement
0x43844D: test    esi, esi
0x43844F: push    0
0x438451: push    ecx
0x438452: mov     eax, esp
0x438454: mov     [esp+2Ch+var_4], 1
0x43845C: mov     [esp+2Ch+arg_8], esp
0x438460: mov     [eax], esi
0x438462: jz      short loc_43846A
0x438464: lea     ecx, [esi+8]
0x438467: push    ecx; lpAddend
0x438468: call    edi ; InterlockedIncrement
0x43846A: mov     ecx, [ebp+0Ch]
0x43846D: mov     edx, [ecx]
0x43846F: mov     eax, [edx+0Ch]
0x438472: push    ebx
0x438473: call    eax
0x438475: test    al, al
0x438477: mov     edi, ds:InterlockedDecrement
0x43847D: jz      short loc_43848A
0x43847F: mov     edx, [esi]
0x438481: mov     eax, [edx+20h]
0x438484: mov     ecx, esi
0x438486: call    eax
0x438488: jmp     short loc_4384A4
0x43848A: test    esi, esi
0x43848C: jz      short loc_4384A4
0x43848E: lea     ecx, [esi+8]
0x438491: push    ecx; lpAddend
0x438492: call    edi ; InterlockedDecrement
0x438494: test    eax, eax
0x438496: jnz     short loc_4384A2
0x438498: mov     edx, [esi]
0x43849A: mov     eax, [edx]
0x43849C: push    1
0x43849E: mov     ecx, esi
0x4384A0: call    eax
0x4384A2: xor     esi, esi
0x4384A4: test    esi, esi
0x4384A6: mov     [esp+24h+var_4], 0FFFFFFFFh
0x4384AE: jz      short loc_4384C4
0x4384B0: lea     ecx, [esi+8]
0x4384B3: push    ecx; lpAddend
0x4384B4: call    edi ; InterlockedDecrement
0x4384B6: test    eax, eax
0x4384B8: jnz     short loc_4384C4
0x4384BA: mov     edx, [esi]
0x4384BC: mov     eax, [edx]
0x4384BE: push    1
0x4384C0: mov     ecx, esi
0x4384C2: call    eax
0x4384C4: xor     eax, eax
0x4384C6: mov     ecx, [esp+24h+var_C]
0x4384CA: mov     large fs:0, ecx
0x4384D1: pop     ecx
0x4384D2: pop     edi
0x4384D3: pop     esi
0x4384D4: pop     ebp
0x4384D5: pop     ebx
0x4384D6: add     esp, 10h
0x4384D9: retn    10h
