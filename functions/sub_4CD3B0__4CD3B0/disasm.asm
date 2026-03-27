0x4CD3B0: push    0FFFFFFFFh
0x4CD3B2: push    offset SEH_4CD3B0
0x4CD3B7: mov     eax, large fs:0
0x4CD3BD: push    eax
0x4CD3BE: sub     esp, 20h
0x4CD3C1: push    ebx
0x4CD3C2: push    ebp
0x4CD3C3: push    esi
0x4CD3C4: push    edi
0x4CD3C5: mov     eax, ds:0B30AACh
0x4CD3CA: xor     eax, esp
0x4CD3CC: push    eax
0x4CD3CD: lea     eax, [esp+40h+var_C]
0x4CD3D1: mov     large fs:0, eax
0x4CD3D7: mov     ebp, ecx
0x4CD3D9: xor     esi, esi
0x4CD3DB: mov     [esp+40h+var_1C], offset ??_7?$NiTArray@PAVTESObjectREFR@@@@6B@; const NiTArray<TESObjectREFR *>::`vftable'
0x4CD3E3: mov     [esp+40h+var_14], si
0x4CD3E8: mov     [esp+40h+var_E], 1
0x4CD3EF: mov     [esp+40h+var_12], si
0x4CD3F4: mov     [esp+40h+var_10], si
0x4CD3F9: mov     [esp+40h+var_18], esi
0x4CD3FD: push    32h ; '2'
0x4CD3FF: lea     ecx, [esp+44h+var_1C]
0x4CD403: mov     [esp+44h+var_4], esi
0x4CD407: call    NiTArray_SetSize
0x4CD40C: push    ebp; a2
0x4CD40D: mov     ecx, offset stru_B35C80; this
0x4CD412: mov     [esp+44h+var_E], 32h ; '2'
0x4CD419: call    sub_496EA0
0x4CD41E: lea     edi, [ebp+48h]
0x4CD421: cmp     edi, esi
0x4CD423: jz      loc_4CD4C9
0x4CD429: lea     esp, [esp+0]
0x4CD430: mov     eax, [edi+4]
0x4CD433: cmp     eax, esi
0x4CD435: jnz     short loc_4CD43F
0x4CD437: cmp     [edi], esi
0x4CD439: jz      loc_4CD4C9
0x4CD43F: mov     esi, [edi]
0x4CD441: mov     edi, eax
0x4CD443: mov     eax, [esi+8]
0x4CD446: mov     ecx, eax
0x4CD448: mov     bl, 1
0x4CD44A: shr     ecx, 0Eh
0x4CD44D: test    bl, cl
0x4CD44F: mov     [esp+40h+var_24], esi
0x4CD453: jz      short loc_4CD457
0x4CD455: xor     bl, bl
0x4CD457: shr     eax, 5
0x4CD45A: test    al, 1
0x4CD45C: jz      short loc_4CD478
0x4CD45E: push    0; a2
0x4CD460: mov     ecx, esi; this
0x4CD462: call    TESForm_GetOverrideFile
0x4CD467: test    eax, eax
0x4CD469: jz      short loc_4CD478
0x4CD46B: mov     ecx, eax
0x4CD46D: call    TESFile_GetIsMaster
0x4CD472: test    al, al
0x4CD474: jnz     short loc_4CD478
0x4CD476: xor     bl, bl
0x4CD478: push    0FFFFFFFFh; a2
0x4CD47A: mov     ecx, esi; this
0x4CD47C: call    TESForm_GetOverrideFile
0x4CD481: cmp     [esp+40h+a2], eax
0x4CD485: jz      short loc_4CD493
0x4CD487: mov     edx, [esi+8]
0x4CD48A: shr     edx, 1
0x4CD48C: test    dl, 1
0x4CD48F: jnz     short loc_4CD493
0x4CD491: xor     bl, bl
0x4CD493: test    byte ptr [ebp+24h], 1
0x4CD497: jnz     short loc_4CD4AD
0x4CD499: mov     ecx, esi; this
0x4CD49B: call    TESObjectREFR_IsPersistent?
0x4CD4A0: test    al, al
0x4CD4A2: jz      short loc_4CD4AD
0x4CD4A4: test    dword ptr [ebp+8], 400h
0x4CD4AB: jz      short loc_4CD4BF
0x4CD4AD: test    bl, bl
0x4CD4AF: jz      short loc_4CD4BF
0x4CD4B1: lea     eax, [esp+40h+var_24]
0x4CD4B5: push    eax
0x4CD4B6: lea     ecx, [esp+44h+var_1C]
0x4CD4BA: call    sub_4BACA0
0x4CD4BF: xor     esi, esi
0x4CD4C1: test    edi, edi
0x4CD4C3: jnz     loc_4CD430
0x4CD4C9: push    ebp; a2
0x4CD4CA: mov     ecx, offset stru_B35C80; this
0x4CD4CF: call    sub_496F50
0x4CD4D4: lea     ecx, [esp+40h+var_1C]
0x4CD4D8: call    sub_521BE0
0x4CD4DD: movzx   ebp, [esp+40h+var_10]
0x4CD4E2: cmp     ebp, esi
0x4CD4E4: mov     ebx, [esp+40h+var_18]
0x4CD4E8: mov     [esp+40h+var_24], ebp
0x4CD4EC: mov     [esp+40h+var_28], esi
0x4CD4F0: jle     loc_4CD5BA
0x4CD4F6: mov     [esp+40h+var_2C], ebx
0x4CD4FA: mov     esi, [esp+40h+var_28]
0x4CD4FE: mov     ecx, [esp+40h+var_2C]
0x4CD502: mov     edi, [ecx]
0x4CD504: add     esi, 1
0x4CD507: cmp     esi, ebp
0x4CD509: mov     [esp+40h+var_20], esi
0x4CD50D: jge     loc_4CD5A7
0x4CD513: mov     ebp, [ebx+esi*4]
0x4CD516: mov     edx, [ebp+0]
0x4CD519: mov     eax, [edx+34h]
0x4CD51C: push    edi
0x4CD51D: mov     ecx, ebp
0x4CD51F: call    eax
0x4CD521: test    al, al
0x4CD523: jz      short loc_4CD592
0x4CD525: movzx   ecx, [esp+40h+var_12]
0x4CD52A: mov     eax, [esp+40h+var_28]
0x4CD52E: cmp     eax, ecx
0x4CD530: jb      short loc_4CD53C
0x4CD532: add     eax, 1
0x4CD535: mov     [esp+40h+var_12], ax
0x4CD53A: jmp     short loc_4CD545
0x4CD53C: mov     edx, [esp+40h+var_2C]
0x4CD540: cmp     dword ptr [edx], 0
0x4CD543: jnz     short loc_4CD54B
0x4CD545: add     [esp+40h+var_10], 1
0x4CD54B: movzx   ecx, [esp+40h+var_12]
0x4CD550: cmp     esi, ecx
0x4CD552: mov     eax, [esp+40h+var_2C]
0x4CD556: mov     [eax], ebp
0x4CD558: jb      short loc_4CD56E
0x4CD55A: test    edi, edi
0x4CD55C: lea     edx, [esi+1]
0x4CD55F: mov     [esp+40h+var_12], dx
0x4CD564: jz      short loc_4CD58D
0x4CD566: add     [esp+40h+var_10], 1
0x4CD56C: jmp     short loc_4CD58D
0x4CD56E: test    edi, edi
0x4CD570: jz      short loc_4CD580
0x4CD572: cmp     dword ptr [ebx+esi*4], 0
0x4CD576: jnz     short loc_4CD58D
0x4CD578: add     [esp+40h+var_10], 1
0x4CD57E: jmp     short loc_4CD58D
0x4CD580: cmp     dword ptr [ebx+esi*4], 0
0x4CD584: jz      short loc_4CD58D
0x4CD586: add     [esp+40h+var_10], 0FFFFh
0x4CD58D: mov     [ebx+esi*4], edi
0x4CD590: mov     edi, ebp
0x4CD592: add     esi, 1
0x4CD595: cmp     esi, [esp+40h+var_24]
0x4CD599: jl      loc_4CD513
0x4CD59F: mov     ebp, [esp+40h+var_24]
0x4CD5A3: mov     esi, [esp+40h+var_20]
0x4CD5A7: add     [esp+40h+var_2C], 4
0x4CD5AC: cmp     esi, ebp
0x4CD5AE: mov     [esp+40h+var_28], esi
0x4CD5B2: jl      loc_4CD4FA
0x4CD5B8: xor     esi, esi
0x4CD5BA: test    ebp, ebp
0x4CD5BC: jle     short loc_4CD5D8
0x4CD5BE: mov     edi, edi
0x4CD5C0: mov     ecx, [ebx+esi*4]; this
0x4CD5C3: test    ecx, ecx
0x4CD5C5: jz      short loc_4CD5D1
0x4CD5C7: mov     eax, [esp+40h+a2]
0x4CD5CB: push    eax; a2
0x4CD5CC: call    TESForm_SaveFormRecord
0x4CD5D1: add     esi, 1
0x4CD5D4: cmp     esi, ebp
0x4CD5D6: jl      short loc_4CD5C0
0x4CD5D8: push    ebx
0x4CD5D9: call    FormHeapFree
0x4CD5DE: add     esp, 4
0x4CD5E1: mov     ecx, dword ptr [esp+40h+var_C]
0x4CD5E5: mov     large fs:0, ecx
0x4CD5EC: pop     ecx
0x4CD5ED: pop     edi
0x4CD5EE: pop     esi
0x4CD5EF: pop     ebp
0x4CD5F0: pop     ebx
0x4CD5F1: add     esp, 2Ch
0x4CD5F4: retn    4
