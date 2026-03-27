0x6433E0: sub     esp, 0Ch
0x6433E3: fldz
0x6433E5: push    ebx
0x6433E6: push    esi
0x6433E7: fstp    dword ptr [esp+14h+var_C]
0x6433EB: mov     esi, [esp+14h+arg_8]
0x6433EF: test    esi, esi
0x6433F1: push    edi
0x6433F2: mov     edi, [esp+18h+arg_4]
0x6433F6: mov     ebx, ecx
0x6433F8: jz      short loc_64340A
0x6433FA: push    edi
0x6433FB: lea     ecx, [esi+88h]
0x643401: call    AVCollection_GetAV
0x643406: fstp    dword ptr [esp+18h+var_C]
0x64340A: cmp     edi, 0Bh
0x64340D: jnz     short loc_643440
0x64340F: test    esi, esi
0x643411: jz      short loc_643440
0x643413: push    edi
0x643414: lea     ecx, [ebx+70h]
0x643417: call    AVCollection_GetAV
0x64341C: fstp    [esp+18h+var_C+4]
0x643420: mov     ecx, esi
0x643422: call    sub_4D8FB0
0x643427: fadd    dword ptr [esp+18h+var_C]
0x64342B: pop     edi
0x64342C: pop     esi
0x64342D: fadd    [esp+10h+var_C+4]
0x643431: pop     ebx
0x643432: fstp    [esp+0Ch+arg_8]
0x643436: fld     [esp+0Ch+arg_8]
0x64343A: add     esp, 0Ch
0x64343D: retn    0Ch
0x643440: push    edi
0x643441: lea     ecx, [ebx+70h]
0x643444: call    AVCollection_GetAV
0x643449: fstp    [esp+18h+var_C+4]
0x64344D: mov     ecx, [esp+18h+arg_0]
0x643451: mov     eax, [ecx]
0x643453: mov     edx, [eax+12Ch]
0x643459: push    edi
0x64345A: call    edx
0x64345C: fadd    dword ptr [esp+18h+var_C]
0x643460: pop     edi
0x643461: pop     esi
0x643462: fadd    [esp+10h+var_C+4]
0x643466: pop     ebx
0x643467: fstp    [esp+0Ch+arg_8]
0x64346B: fld     [esp+0Ch+arg_8]
0x64346F: add     esp, 0Ch
0x643472: retn    0Ch
