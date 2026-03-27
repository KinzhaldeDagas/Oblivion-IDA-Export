0x4D3460: sub     esp, 18h
0x4D3463: push    ebp
0x4D3464: mov     ebp, ecx
0x4D3466: mov     eax, [ebp+8]
0x4D3469: shr     eax, 5
0x4D346C: test    al, 1
0x4D346E: jz      short loc_4D3479
0x4D3470: xor     al, al
0x4D3472: pop     ebp
0x4D3473: add     esp, 18h
0x4D3476: retn    4
0x4D3479: push    ebx
0x4D347A: push    esi
0x4D347B: push    edi
0x4D347C: push    ebp; a2
0x4D347D: mov     ecx, offset stru_B35C80; this
0x4D3482: mov     [esp+2Ch+var_15], 0
0x4D3487: call    sub_496EA0
0x4D348C: mov     ebx, [esp+28h+arg_0]
0x4D3490: mov     ecx, ebx
0x4D3492: call    TESFile_GetIsMaster
0x4D3497: test    al, al
0x4D3499: jnz     short loc_4D34E0
0x4D349B: mov     ecx, [ebp+8]
0x4D349E: shr     ecx, 1
0x4D34A0: test    cl, 1
0x4D34A3: jnz     short loc_4D34E0
0x4D34A5: lea     esi, [ebp+48h]
0x4D34A8: test    esi, esi
0x4D34AA: jz      short loc_4D34E5
0x4D34AC: lea     esp, [esp+0]
0x4D34B0: mov     eax, [esi+4]
0x4D34B3: test    eax, eax
0x4D34B5: jnz     short loc_4D34BB
0x4D34B7: cmp     [esi], eax
0x4D34B9: jz      short loc_4D34E5
0x4D34BB: mov     edi, [esi]
0x4D34BD: push    0FFFFFFFFh; a2
0x4D34BF: mov     ecx, edi; this
0x4D34C1: mov     esi, eax
0x4D34C3: call    TESForm_GetOverrideFile
0x4D34C8: cmp     eax, ebx
0x4D34CA: jz      short loc_4D34E0
0x4D34CC: test    eax, eax
0x4D34CE: jz      short loc_4D34E0
0x4D34D0: mov     edx, [edi+8]
0x4D34D3: shr     edx, 1
0x4D34D5: test    dl, 1
0x4D34D8: jnz     short loc_4D34E0
0x4D34DA: test    esi, esi
0x4D34DC: jnz     short loc_4D34B0
0x4D34DE: jmp     short loc_4D34E5
0x4D34E0: mov     [esp+28h+var_15], 1
0x4D34E5: push    ebp; a2
0x4D34E6: mov     ecx, offset stru_B35C80; this
0x4D34EB: call    sub_496F50
0x4D34F0: cmp     [esp+28h+var_15], 0
0x4D34F5: jnz     short loc_4D3503
0x4D34F7: pop     edi
0x4D34F8: pop     esi
0x4D34F9: pop     ebx
0x4D34FA: xor     al, al
0x4D34FC: pop     ebp
0x4D34FD: add     esp, 18h
0x4D3500: retn    4
0x4D3503: mov     eax, [ebp+0]
0x4D3506: mov     edx, [eax+24h]
0x4D3509: mov     ecx, ebp
0x4D350B: call    edx
0x4D350D: push    ebp
0x4D350E: mov     ecx, ebx
0x4D3510: call    TESFile_WriteFormRecord
0x4D3515: mov     ecx, [ebp+0Ch]
0x4D3518: mov     eax, ds:0B05E20h
0x4D351D: lea     edx, [esp+28h+var_14]
0x4D3521: mov     [esp+28h+var_C], ecx
0x4D3525: xor     esi, esi
0x4D3527: push    edx
0x4D3528: mov     ecx, ebx
0x4D352A: mov     [esp+2Ch+var_14], eax
0x4D352E: mov     [esp+2Ch+var_8], 6
0x4D3536: mov     [esp+2Ch+var_10], esi
0x4D353A: mov     [esp+2Ch+var_4], esi
0x4D353E: call    TESFile_OpenGroupRecord
0x4D3543: mov     ecx, ebx
0x4D3545: call    TESFile_GetIsMaster
0x4D354A: test    al, al
0x4D354C: jz      short loc_4D355A
0x4D354E: push    esi; a2
0x4D354F: mov     ecx, ebp; this
0x4D3551: call    TESForm_GetOverrideFile
0x4D3556: cmp     eax, ebx
0x4D3558: jnz     short loc_4D3562
0x4D355A: push    ebx
0x4D355B: mov     ecx, ebp
0x4D355D: call    sub_4CD3B0
0x4D3562: pop     edi
0x4D3563: pop     esi
0x4D3564: pop     ebx
0x4D3565: mov     al, 1
0x4D3567: pop     ebp
0x4D3568: add     esp, 18h
0x4D356B: retn    4
