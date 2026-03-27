0x64F2D0: fld     dword ptr ds:0B36C68h
0x64F2D6: push    ebx
0x64F2D7: fmul    qword ptr ds:0A3C800h
0x64F2DD: push    ebp
0x64F2DE: push    esi
0x64F2DF: push    edi; int
0x64F2E0: mov     ebx, ecx
0x64F2E2: call    Double_To_SInt32
0x64F2E7: cmp     dword ptr [ebx+2Ch], 0
0x64F2EB: mov     edi, [esp+10h+arg_0]
0x64F2EF: mov     ebp, eax
0x64F2F1: jnz     short loc_64F300
0x64F2F3: mov     eax, [ebx]
0x64F2F5: mov     edx, [eax+558h]
0x64F2FB: push    edi
0x64F2FC: mov     ecx, ebx
0x64F2FE: call    edx
0x64F300: mov     eax, [ebx+2Ch]
0x64F303: push    0; int
0x64F305: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x64F30A: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x64F30F: push    0; int
0x64F311: push    eax; void *
0x64F312: call    OblivionDynamicCast
0x64F317: mov     esi, eax
0x64F319: mov     eax, [ebx+2Ch]
0x64F31C: add     esp, 14h
0x64F31F: test    eax, eax
0x64F321: jz      loc_64F3E0
0x64F327: mov     ecx, [eax+8]
0x64F32A: shr     ecx, 0Bh
0x64F32D: test    cl, 1
0x64F330: jnz     loc_64F3E0
0x64F336: test    esi, esi
0x64F338: jz      short loc_64F3A3
0x64F33A: push    0
0x64F33C: push    esi
0x64F33D: mov     ecx, edi
0x64F33F: call    TesObjectREF_GetDistance
0x64F344: fcomp   qword ptr ds:0A529C0h
0x64F34A: fnstsw  ax
0x64F34C: test    ah, 5
0x64F34F: jp      short loc_64F3A3
0x64F351: cmp     dword ptr [esi+58h], 0
0x64F355: jz      short loc_64F3A3
0x64F357: test    ebp, ebp
0x64F359: jz      short loc_64F3B7
0x64F35B: jmp     short loc_64F360
0x64F35D: align 10h
0x64F360: mov     edx, [edi]
0x64F362: mov     eax, [edx+198h]
0x64F368: push    0
0x64F36A: mov     ecx, edi
0x64F36C: call    eax
0x64F36E: test    al, al
0x64F370: jnz     short loc_64F3B7
0x64F372: mov     edx, [edi]
0x64F374: mov     eax, [edx+344h]
0x64F37A: mov     ecx, edi
0x64F37C: call    eax
0x64F37E: mov     edx, [esi]
0x64F380: mov     eax, [edx+198h]
0x64F386: push    0
0x64F388: mov     ecx, esi
0x64F38A: call    eax
0x64F38C: test    al, al
0x64F38E: jnz     short loc_64F39C
0x64F390: mov     edx, [esi]
0x64F392: mov     eax, [edx+344h]
0x64F398: mov     ecx, esi
0x64F39A: call    eax
0x64F39C: sub     ebp, 1
0x64F39F: jnz     short loc_64F360
0x64F3A1: jmp     short loc_64F3B7
0x64F3A3: fld     dword ptr ds:0A71E4Ch
0x64F3A9: push    0
0x64F3AB: push    ecx
0x64F3AC: fstp    [esp+18h+var_18]
0x64F3AF: push    edi
0x64F3B0: mov     ecx, ebx
0x64F3B2: call    sub_64EC50
0x64F3B7: test    esi, esi
0x64F3B9: jz      short loc_64F3F4
0x64F3BB: mov     edx, [esi]
0x64F3BD: mov     eax, [edx+198h]
0x64F3C3: push    0
0x64F3C5: mov     ecx, esi
0x64F3C7: call    eax
0x64F3C9: test    al, al
0x64F3CB: jnz     short loc_64F3F4
0x64F3CD: mov     ecx, [esi+58h]
0x64F3D0: mov     edx, [ecx]
0x64F3D2: mov     eax, [edx+20h]
0x64F3D5: call    eax
0x64F3D7: pop     edi
0x64F3D8: pop     esi
0x64F3D9: pop     ebp
0x64F3DA: xor     al, al
0x64F3DC: pop     ebx
0x64F3DD: retn    8
0x64F3E0: mov     edx, [edi]
0x64F3E2: mov     eax, [edx+340h]
0x64F3E8: push    esi
0x64F3E9: mov     ecx, edi
0x64F3EB: call    eax
0x64F3ED: mov     ecx, edi; int
0x64F3EF: call    sub_5EAE70
0x64F3F4: pop     edi
0x64F3F5: pop     esi
0x64F3F6: pop     ebp
0x64F3F7: xor     al, al
0x64F3F9: pop     ebx
0x64F3FA: retn    8
