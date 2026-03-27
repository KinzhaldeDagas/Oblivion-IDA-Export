0x55E390: sub     esp, 0Ch
0x55E393: cmp     dword ptr ds:0B39E04h, 0
0x55E39A: jnz     short loc_55E3A6
0x55E39C: push    0
0x55E39E: call    sub_55F750
0x55E3A3: add     esp, 4
0x55E3A6: mov     eax, ds:0B39E04h
0x55E3AB: cmp     dword ptr [eax], 0
0x55E3AE: jz      loc_55E64D
0x55E3B4: push    esi
0x55E3B5: push    offset unk_A2F830
0x55E3BA: mov     ecx, offset stru_B39E80
0x55E3BF: call    NiEnterCriticalSection
0x55E3C4: cmp     [esp+10h+arg_0], 0
0x55E3C9: jz      loc_55E556
0x55E3CF: mov     esi, ds:0B39E04h
0x55E3D5: test    esi, esi
0x55E3D7: jnz     short loc_55E3E8
0x55E3D9: push    esi
0x55E3DA: call    sub_55F750
0x55E3DF: mov     esi, ds:0B39E04h
0x55E3E5: add     esp, 4
0x55E3E8: mov     ecx, [esi]
0x55E3EA: call    sub_6A9030
0x55E3EF: test    eax, eax
0x55E3F1: mov     [esp+10h+var_C], eax
0x55E3F5: jz      loc_55E512
0x55E3FB: push    edi
0x55E3FC: lea     esp, [esp+0]
0x55E400: test    esi, esi
0x55E402: jnz     short loc_55E413
0x55E404: push    esi
0x55E405: call    sub_55F750
0x55E40A: mov     esi, ds:0B39E04h
0x55E410: add     esp, 4
0x55E413: lea     ecx, [esp+14h+var_8]
0x55E417: push    ecx
0x55E418: mov     ecx, [esi]
0x55E41A: lea     edx, [esp+18h+var_4]
0x55E41E: push    edx
0x55E41F: lea     eax, [esp+1Ch+var_C]
0x55E423: push    eax
0x55E424: call    sub_452600
0x55E429: mov     esi, [esp+14h+var_8]
0x55E42D: test    esi, esi
0x55E42F: jz      loc_55E500
0x55E435: mov     eax, [esi]
0x55E437: test    eax, eax
0x55E439: jz      short loc_55E46D
0x55E43B: cmp     dword ptr [eax+4], 1
0x55E43F: ja      loc_55E500
0x55E445: mov     edi, eax
0x55E447: test    edi, edi
0x55E449: jz      short loc_55E46D
0x55E44B: lea     ecx, [edi+4]
0x55E44E: push    ecx; lpAddend
0x55E44F: call    dword ptr ds:0A2807Ch
0x55E455: test    eax, eax
0x55E457: jnz     short loc_55E467
0x55E459: test    edi, edi
0x55E45B: jz      short loc_55E467
0x55E45D: mov     edx, [edi]
0x55E45F: mov     eax, [edx]
0x55E461: push    1
0x55E463: mov     ecx, edi
0x55E465: call    eax
0x55E467: mov     dword ptr [esi], 0
0x55E46D: mov     ecx, [esi-4]
0x55E470: push    offset sub_7016A0; void (__thiscall *)(void *)
0x55E475: lea     edi, [esi-4]
0x55E478: push    ecx; int
0x55E479: push    4; unsigned int
0x55E47B: push    esi; void *
0x55E47C: call    $LN21
0x55E481: push    edi
0x55E482: call    FormHeapFree
0x55E487: add     esp, 4
0x55E48A: cmp     dword ptr ds:0B39E04h, 0
0x55E491: mov     [esp+14h+var_8], 0
0x55E499: jnz     short loc_55E4A5
0x55E49B: push    0
0x55E49D: call    sub_55F750
0x55E4A2: add     esp, 4
0x55E4A5: mov     edx, [esp+14h+var_4]
0x55E4A9: mov     eax, ds:0B39E04h
0x55E4AE: mov     ecx, [eax]
0x55E4B0: push    edx
0x55E4B1: call    NiTMap_RemoveAt
0x55E4B6: mov     esi, ds:0B39E04h
0x55E4BC: test    esi, esi
0x55E4BE: jnz     short loc_55E4CF
0x55E4C0: push    esi
0x55E4C1: call    sub_55F750
0x55E4C6: mov     esi, ds:0B39E04h
0x55E4CC: add     esp, 4
0x55E4CF: mov     ecx, [esi]
0x55E4D1: mov     edx, [ecx+4]
0x55E4D4: xor     eax, eax
0x55E4D6: test    edx, edx
0x55E4D8: jbe     short loc_55E4EF
0x55E4DA: mov     edi, [ecx+8]
0x55E4DD: mov     ecx, edi
0x55E4DF: nop
0x55E4E0: cmp     dword ptr [ecx], 0
0x55E4E3: jnz     short loc_55E4F7
0x55E4E5: add     eax, 1
0x55E4E8: add     ecx, 4
0x55E4EB: cmp     eax, edx
0x55E4ED: jb      short loc_55E4E0
0x55E4EF: xor     eax, eax
0x55E4F1: mov     [esp+14h+var_C], eax
0x55E4F5: jmp     short loc_55E506
0x55E4F7: mov     eax, [edi+eax*4]
0x55E4FA: mov     [esp+14h+var_C], eax
0x55E4FE: jmp     short loc_55E506
0x55E500: mov     esi, ds:0B39E04h
0x55E506: cmp     [esp+14h+var_C], 0
0x55E50B: jnz     loc_55E400
0x55E511: pop     edi
0x55E512: test    esi, esi
0x55E514: jnz     short loc_55E525
0x55E516: push    esi
0x55E517: call    sub_55F750
0x55E51C: mov     esi, ds:0B39E04h
0x55E522: add     esp, 4
0x55E525: mov     ecx, [esi]
0x55E527: cmp     dword ptr [ecx+0Ch], 0
0x55E52B: jnz     loc_55E63F
0x55E531: call    NiTMap_Clear
0x55E536: cmp     dword ptr ds:0B39E04h, 0
0x55E53D: jnz     short loc_55E549
0x55E53F: push    0
0x55E541: call    sub_55F750
0x55E546: add     esp, 4
0x55E549: mov     ecx, ds:0B39E04h
0x55E54F: mov     ecx, [ecx]
0x55E551: jmp     loc_55E614
0x55E556: cmp     dword ptr ds:0B39E04h, 0
0x55E55D: jnz     short loc_55E569
0x55E55F: push    0
0x55E561: call    sub_55F750
0x55E566: add     esp, 4
0x55E569: mov     edx, ds:0B39E04h
0x55E56F: mov     ecx, [edx]
0x55E571: call    sub_6A9030
0x55E576: test    eax, eax
0x55E578: mov     [esp+10h+var_8], eax
0x55E57C: jz      short loc_55E5DA
0x55E57E: mov     edi, edi
0x55E580: cmp     dword ptr ds:0B39E04h, 0
0x55E587: jnz     short loc_55E593
0x55E589: push    0
0x55E58B: call    sub_55F750
0x55E590: add     esp, 4
0x55E593: lea     eax, [esp+10h+var_4]
0x55E597: push    eax
0x55E598: mov     eax, ds:0B39E04h
0x55E59D: lea     ecx, [esp+14h+var_C]
0x55E5A1: push    ecx
0x55E5A2: mov     ecx, [eax]
0x55E5A4: lea     edx, [esp+18h+var_8]
0x55E5A8: push    edx
0x55E5A9: call    sub_452600
0x55E5AE: mov     eax, [esp+10h+var_4]
0x55E5B2: test    eax, eax
0x55E5B4: jz      short loc_55E5D3
0x55E5B6: mov     ecx, [eax-4]
0x55E5B9: lea     esi, [eax-4]
0x55E5BC: push    offset sub_7016A0; void (__thiscall *)(void *)
0x55E5C1: push    ecx; int
0x55E5C2: push    4; unsigned int
0x55E5C4: push    eax; void *
0x55E5C5: call    $LN21
0x55E5CA: push    esi
0x55E5CB: call    FormHeapFree
0x55E5D0: add     esp, 4
0x55E5D3: cmp     [esp+10h+var_8], 0
0x55E5D8: jnz     short loc_55E580
0x55E5DA: cmp     dword ptr ds:0B39E04h, 0
0x55E5E1: jnz     short loc_55E5ED
0x55E5E3: push    0
0x55E5E5: call    sub_55F750
0x55E5EA: add     esp, 4
0x55E5ED: mov     edx, ds:0B39E04h
0x55E5F3: mov     ecx, [edx]
0x55E5F5: call    NiTMap_Clear
0x55E5FA: cmp     dword ptr ds:0B39E04h, 0
0x55E601: jnz     short loc_55E60D
0x55E603: push    0
0x55E605: call    sub_55F750
0x55E60A: add     esp, 4
0x55E60D: mov     eax, ds:0B39E04h
0x55E612: mov     ecx, [eax]
0x55E614: test    ecx, ecx
0x55E616: jz      short loc_55E620
0x55E618: mov     edx, [ecx]
0x55E61A: mov     eax, [edx]
0x55E61C: push    1
0x55E61E: call    eax
0x55E620: cmp     dword ptr ds:0B39E04h, 0
0x55E627: jnz     short loc_55E633
0x55E629: push    0
0x55E62B: call    sub_55F750
0x55E630: add     esp, 4
0x55E633: mov     ecx, ds:0B39E04h
0x55E639: mov     dword ptr [ecx], 0
0x55E63F: mov     ecx, offset stru_B39E80; lpCriticalSection
0x55E644: pop     esi
0x55E645: add     esp, 0Ch
0x55E648: jmp     NiLeaveCriticalSection_0
0x55E64D: add     esp, 0Ch
0x55E650: retn
