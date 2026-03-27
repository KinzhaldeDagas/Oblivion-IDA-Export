0x6AB420: sub     esp, 8
0x6AB423: cmp     byte ptr ds:0B16180h, 0
0x6AB42A: push    esi
0x6AB42B: mov     esi, ecx
0x6AB42D: jz      loc_6AB4F5
0x6AB433: test    byte ptr [esi+0DCh], 1
0x6AB43A: jz      loc_6AB4F5
0x6AB440: mov     eax, [esi+70h]
0x6AB443: mov     ecx, [eax]
0x6AB445: lea     edx, [esp+0Ch+var_8]
0x6AB449: push    edx
0x6AB44A: push    offset CLSID_IMediaControl
0x6AB44F: push    eax
0x6AB450: mov     eax, [ecx]
0x6AB452: call    eax
0x6AB454: test    eax, eax
0x6AB456: jl      loc_6AB4F5
0x6AB45C: mov     eax, [esi+70h]
0x6AB45F: mov     ecx, [eax]
0x6AB461: lea     edx, [esp+0Ch+var_4]
0x6AB465: push    edx
0x6AB466: push    offset CLSID_IMediaPosition
0x6AB46B: push    eax
0x6AB46C: mov     eax, [ecx]
0x6AB46E: call    eax
0x6AB470: test    eax, eax
0x6AB472: jl      short loc_6AB488
0x6AB474: mov     eax, [esp+0Ch+var_4]
0x6AB478: fldz
0x6AB47A: mov     ecx, [eax]
0x6AB47C: mov     edx, [ecx+20h]
0x6AB47F: sub     esp, 8
0x6AB482: fstp    qword ptr [esp+14h+var_14]
0x6AB485: push    eax
0x6AB486: call    edx
0x6AB488: mov     eax, [esp+0Ch+var_4]
0x6AB48C: mov     ecx, [eax]
0x6AB48E: mov     edx, [ecx+8]
0x6AB491: push    edi
0x6AB492: push    eax
0x6AB493: call    edx
0x6AB495: mov     eax, [esp+0Ch+var_4]
0x6AB499: mov     ecx, [eax]
0x6AB49B: mov     edx, [ecx+1Ch]
0x6AB49E: push    eax
0x6AB49F: call    edx
0x6AB4A1: test    byte ptr [esi+0DCh], 4
0x6AB4A8: mov     edi, eax
0x6AB4AA: jz      short loc_6AB4B8
0x6AB4AC: mov     eax, [esp+0Ch+var_4]
0x6AB4B0: mov     ecx, [eax]
0x6AB4B2: mov     edx, [ecx+20h]
0x6AB4B5: push    eax
0x6AB4B6: call    edx
0x6AB4B8: mov     eax, [esp+0Ch+var_4]
0x6AB4BC: mov     ecx, [eax]
0x6AB4BE: mov     edx, [ecx+8]
0x6AB4C1: push    eax
0x6AB4C2: call    edx
0x6AB4C4: test    edi, edi
0x6AB4C6: pop     edi
0x6AB4C7: jl      short loc_6AB4D0
0x6AB4C9: or      dword ptr [esi+0DCh], 2
0x6AB4D0: mov     eax, [esi+0DCh]
0x6AB4D6: test    al, 1
0x6AB4D8: jz      short loc_6AB4F5
0x6AB4DA: test    al, 8
0x6AB4DC: jz      short loc_6AB4E2
0x6AB4DE: test    al, 10h
0x6AB4E0: jnz     short loc_6AB4F5
0x6AB4E2: fld     dword ptr [esi+2F0h]
0x6AB4E8: push    0; int
0x6AB4EA: push    ecx
0x6AB4EB: mov     ecx, esi
0x6AB4ED: fstp    [esp+14h+var_14]; float
0x6AB4F0: call    SoundManager_SetMusicVolume
0x6AB4F5: pop     esi
0x6AB4F6: add     esp, 8
0x6AB4F9: retn
