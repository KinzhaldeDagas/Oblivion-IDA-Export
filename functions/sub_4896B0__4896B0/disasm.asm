0x4896B0: push    0FFFFFFFFh
0x4896B2: push    offset SEH_6CED50
0x4896B7: mov     eax, large fs:0
0x4896BD: push    eax
0x4896BE: sub     esp, 8
0x4896C1: push    ebx
0x4896C2: push    ebp
0x4896C3: push    esi
0x4896C4: push    edi
0x4896C5: mov     eax, ds:0B30AACh
0x4896CA: xor     eax, esp
0x4896CC: push    eax
0x4896CD: lea     eax, [esp+28h+var_C]
0x4896D1: mov     large fs:0, eax
0x4896D7: mov     eax, [ecx]
0x4896D9: xor     ebx, ebx
0x4896DB: cmp     eax, ebx
0x4896DD: mov     dl, 1
0x4896DF: jz      short loc_489703
0x4896E1: cmp     dl, bl
0x4896E3: jz      loc_48978A
0x4896E9: mov     ecx, [eax]
0x4896EB: cmp     ecx, ebx
0x4896ED: jz      short loc_4896FC
0x4896EF: mov     esi, [esp+28h+arg_0]
0x4896F3: cmp     [ecx+8], esi
0x4896F6: jnz     short loc_4896FC
0x4896F8: xor     dl, dl
0x4896FA: jmp     short loc_4896FF
0x4896FC: mov     eax, [eax+4]
0x4896FF: cmp     eax, ebx
0x489701: jnz     short loc_4896E1
0x489703: xor     eax, eax
0x489705: xor     edi, edi
0x489707: cmp     eax, ebx
0x489709: jz      loc_489808
0x48970F: mov     eax, [eax]
0x489711: cmp     eax, ebx
0x489713: mov     [esp+28h+var_14], eax
0x489717: jz      loc_489808
0x48971D: cmp     edi, ebx
0x48971F: jnz     loc_489808
0x489725: mov     eax, [esp+28h+var_14]
0x489729: mov     ebp, [eax]
0x48972B: cmp     ebp, ebx
0x48972D: jz      loc_4897F5
0x489733: mov     ecx, ebp
0x489735: call    sub_422C40
0x48973A: movsx   ecx, al
0x48973D: cmp     ecx, [esp+28h+arg_4]
0x489741: jnz     loc_4897F5
0x489747: push    0Ch; Size
0x489749: call    FormHeapAlloc
0x48974E: mov     esi, eax
0x489750: add     esp, 4
0x489753: mov     [esp+28h+var_10], esi
0x489757: cmp     esi, ebx
0x489759: mov     [esp+28h+var_4], ebx
0x48975D: jz      short loc_4897A2
0x48975F: mov     ecx, ebp
0x489761: call    ExtraDataList_GetExtraCount
0x489766: mov     edx, [esp+28h+arg_0]
0x48976A: push    8; Size
0x48976C: movsx   edi, ax
0x48976F: mov     [esi+8], edx
0x489772: call    FormHeapAlloc
0x489777: add     esp, 4
0x48977A: cmp     eax, ebx
0x48977C: jz      short loc_489799
0x48977E: mov     [eax], ebx
0x489780: mov     [eax+4], ebx
0x489783: mov     [esi], eax
0x489785: mov     [esi+4], edi
0x489788: jmp     short loc_4897A4
0x48978A: cmp     eax, ebx
0x48978C: jz      loc_489703
0x489792: mov     eax, [eax]
0x489794: jmp     loc_489705
0x489799: xor     eax, eax
0x48979B: mov     [esi], eax
0x48979D: mov     [esi+4], edi
0x4897A0: jmp     short loc_4897A4
0x4897A2: xor     esi, esi
0x4897A4: cmp     [esi], ebx
0x4897A6: mov     [esp+28h+var_4], 0FFFFFFFFh
0x4897AE: mov     edi, esi
0x4897B0: jnz     short loc_4897CB
0x4897B2: push    8; Size
0x4897B4: call    FormHeapAlloc
0x4897B9: add     esp, 4
0x4897BC: cmp     eax, ebx
0x4897BE: jz      short loc_4897C7
0x4897C0: mov     [eax], ebx
0x4897C2: mov     [eax+4], ebx
0x4897C5: jmp     short loc_4897C9
0x4897C7: xor     eax, eax
0x4897C9: mov     [esi], eax
0x4897CB: mov     esi, [esi]
0x4897CD: cmp     [esi], ebx
0x4897CF: jz      short loc_4897F3
0x4897D1: push    8; Size
0x4897D3: call    FormHeapAlloc
0x4897D8: add     esp, 4
0x4897DB: cmp     eax, ebx
0x4897DD: jz      short loc_4897E8
0x4897DF: mov     ecx, [esi]
0x4897E1: mov     [eax], ecx
0x4897E3: mov     [eax+4], ebx
0x4897E6: jmp     short loc_4897EA
0x4897E8: xor     eax, eax
0x4897EA: mov     edx, [esi+4]
0x4897ED: mov     [eax+4], edx
0x4897F0: mov     [esi+4], eax
0x4897F3: mov     [esi], ebp
0x4897F5: mov     eax, [esp+28h+var_14]
0x4897F9: mov     eax, [eax+4]
0x4897FC: cmp     eax, ebx
0x4897FE: mov     [esp+28h+var_14], eax
0x489802: jnz     loc_48971D
0x489808: mov     eax, edi
0x48980A: mov     ecx, [esp+28h+var_C]
0x48980E: mov     large fs:0, ecx
0x489815: pop     ecx
0x489816: pop     edi
0x489817: pop     esi
0x489818: pop     ebp
0x489819: pop     ebx
0x48981A: add     esp, 14h
0x48981D: retn    8
