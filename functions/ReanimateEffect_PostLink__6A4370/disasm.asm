0x6A4370: push    ebx
0x6A4371: push    esi
0x6A4372: mov     esi, [esp+8+arg_0]
0x6A4376: push    edi; ArgList
0x6A4377: push    esi
0x6A4378: mov     ebx, ecx
0x6A437A: call    ActiveEffect_Base_PostLink
0x6A437F: mov     eax, [esi]
0x6A4381: mov     edx, [eax+154h]
0x6A4387: mov     ecx, esi
0x6A4389: call    edx
0x6A438B: mov     edi, eax
0x6A438D: test    edi, edi
0x6A438F: jz      loc_6A4418
0x6A4395: mov     ecx, esi
0x6A4397: call    sub_5E12B0
0x6A439C: mov     ecx, eax
0x6A439E: test    ecx, ecx
0x6A43A0: jz      short loc_6A43BC
0x6A43A2: cmp     dword ptr [ebx+3Ch], 28h ; '('
0x6A43A6: mov     eax, [ecx]
0x6A43A8: mov     edx, [eax+9Ch]
0x6A43AE: jge     short loc_6A43B6
0x6A43B0: push    1
0x6A43B2: push    1
0x6A43B4: jmp     short loc_6A43BA
0x6A43B6: push    0
0x6A43B8: push    0
0x6A43BA: call    edx
0x6A43BC: cmp     dword ptr [ebx+3Ch], 1Eh
0x6A43C0: jge     short loc_6A43D1
0x6A43C2: push    0; a4
0x6A43C4: push    1; a3
0x6A43C6: push    1; a2
0x6A43C8: push    edi; a1
0x6A43C9: call    sub_88D070
0x6A43CE: add     esp, 10h
0x6A43D1: mov     eax, [edi]
0x6A43D3: mov     edx, [eax+58h]
0x6A43D6: push    offset aBip01Spine2; "Bip01 Spine2"
0x6A43DB: mov     ecx, edi
0x6A43DD: call    edx
0x6A43DF: test    eax, eax
0x6A43E1: jz      short loc_6A440B
0x6A43E3: push    eax
0x6A43E4: call    sub_47FAC0
0x6A43E9: add     esp, 4
0x6A43EC: test    eax, eax
0x6A43EE: jz      short loc_6A4418
0x6A43F0: mov     ecx, [eax+10h]
0x6A43F3: pop     edi
0x6A43F4: mov     [ebx+38h], ecx
0x6A43F7: mov     eax, [ecx]
0x6A43F9: pop     esi
0x6A43FA: pop     ebx
0x6A43FB: mov     [esp+arg_0], 6
0x6A4403: mov     edx, [eax+9Ch]
0x6A4409: jmp     edx
0x6A440B: push    offset aNoBip01Spine2B; "No Bip01 Spine2 bone for reanimation. N"...
0x6A4410: call    PrintError
0x6A4415: add     esp, 4
0x6A4418: pop     edi
0x6A4419: pop     esi
0x6A441A: pop     ebx
0x6A441B: retn    4
