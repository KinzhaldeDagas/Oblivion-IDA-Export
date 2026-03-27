0x48F390: sub     esp, 8
0x48F393: mov     ecx, [ecx]
0x48F395: test    ecx, ecx
0x48F397: mov     [esp+8+var_8], ecx
0x48F39A: jz      loc_48F447
0x48F3A0: push    ebx
0x48F3A1: push    ebp
0x48F3A2: push    esi
0x48F3A3: push    edi
0x48F3A4: jmp     short loc_48F3AA
0x48F3A6: mov     ecx, [esp+18h+var_8]
0x48F3AA: mov     edi, [ecx]
0x48F3AC: test    edi, edi
0x48F3AE: jz      loc_48F443
0x48F3B4: mov     eax, [edi+8]
0x48F3B7: movzx   eax, byte ptr [eax+4]
0x48F3BB: cmp     eax, 14h
0x48F3BE: jz      short loc_48F3C5
0x48F3C0: cmp     eax, 21h ; '!'
0x48F3C3: jnz     short loc_48F434
0x48F3C5: mov     ebx, [edi]
0x48F3C7: test    ebx, ebx
0x48F3C9: jz      short loc_48F434
0x48F3CB: jmp     short loc_48F3D0
0x48F3CD: align 10h
0x48F3D0: mov     esi, [ebx]
0x48F3D2: mov     ecx, ds:0B333C4h
0x48F3D8: mov     ebp, [edi+8]
0x48F3DB: push    0; int
0x48F3DD: add     ecx, 44h ; 'D'; this
0x48F3E0: push    esi; int
0x48F3E1: call    ExtraDataList_GetContainerChanges
0x48F3E6: push    eax; int
0x48F3E7: push    ebp
0x48F3E8: call    TESHealthForm_GetHealthForForm
0x48F3ED: test    eax, eax
0x48F3EF: mov     [esp+28h+var_4], eax
0x48F3F3: fild    [esp+28h+var_4]
0x48F3F7: jge     short loc_48F3FF
0x48F3F9: fadd    dword ptr ds:0A2FC78h
0x48F3FF: mov     ecx, edi
0x48F401: fstp    [esp+28h+var_28]; float
0x48F404: call    sub_488830
0x48F409: test    esi, esi
0x48F40B: jz      short loc_48F429
0x48F40D: cmp     dword ptr [esi+4], 0
0x48F411: jnz     short loc_48F429
0x48F413: mov     ecx, [edi]
0x48F415: push    esi
0x48F416: call    BSSimpleList_Remove
0x48F41B: mov     edx, [esi]
0x48F41D: mov     eax, [edx]
0x48F41F: push    1
0x48F421: mov     ecx, esi
0x48F423: call    eax
0x48F425: mov     ebx, [edi]
0x48F427: jmp     short loc_48F42C
0x48F429: mov     ebx, [ebx+4]
0x48F42C: test    ebx, ebx
0x48F42E: jnz     short loc_48F3D0
0x48F430: mov     ecx, [esp+18h+var_8]
0x48F434: mov     ecx, [ecx+4]
0x48F437: test    ecx, ecx
0x48F439: mov     [esp+18h+var_8], ecx
0x48F43D: jnz     loc_48F3A6
0x48F443: pop     edi
0x48F444: pop     esi
0x48F445: pop     ebp
0x48F446: pop     ebx
0x48F447: add     esp, 8
0x48F44A: retn
