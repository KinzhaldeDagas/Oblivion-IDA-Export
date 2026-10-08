0x4141D2: mov     eax, [ebp+1Ch]
0x4141D5: mov     esi, [eax+58h]
0x4141D8: mov     eax, esi
0x4141DA: shr     eax, 8
0x4141DD: test    al, 1
0x4141DF: jz      short loc_4141E5
0x4141E1: xor     ecx, ecx
0x4141E3: jmp     short loc_4141E8
0x4141E5: mov     ecx, [ebp+4]
0x4141E8: mov     ebx, [edi+1Ch]
0x4141EB: mov     edx, [ebx+58h]
0x4141EE: mov     eax, edx
0x4141F0: shr     eax, 8
0x4141F3: test    al, 1
0x4141F5: jz      short loc_4141FB
0x4141F7: xor     eax, eax
0x4141F9: jmp     short loc_4141FE
0x4141FB: mov     eax, [edi+4]
0x4141FE: cmp     ecx, eax
0x414200: jnz     EffectItem_CompareTo___Return_1
0x414206: mov     ecx, esi
0x414208: shr     ecx, 9
0x41420B: test    cl, 1
0x41420E: jnz     short loc_41421B
0x414210: cmp     dword ptr [ebp+10h], 0
0x414214: jz      short loc_41421B
0x414216: mov     ecx, [ebp+8]
0x414219: jmp     short loc_41421D
0x41421B: xor     ecx, ecx
0x41421D: mov     eax, edx
0x41421F: shr     eax, 9
0x414222: test    al, 1
0x414224: jnz     short loc_414231
0x414226: cmp     dword ptr [edi+10h], 0
0x41422A: jz      short loc_414231
0x41422C: mov     eax, [edi+8]
0x41422F: jmp     short loc_414233
0x414231: xor     eax, eax
0x414233: cmp     ecx, eax
0x414235: jnz     short EffectItem_CompareTo___Return_1
0x414237: mov     ecx, esi
0x414239: shr     ecx, 7
0x41423C: test    cl, 1
0x41423F: jz      short loc_414245
0x414241: xor     ecx, ecx
0x414243: jmp     short loc_414248
0x414245: mov     ecx, [ebp+0Ch]
0x414248: shr     edx, 7
0x41424B: test    dl, 1
0x41424E: jz      short loc_414254
0x414250: xor     eax, eax
0x414252: jmp     short loc_414257
0x414254: mov     eax, [edi+0Ch]
0x414257: cmp     ecx, eax
0x414259: jnz     short EffectItem_CompareTo___Return_1
0x41425B: mov     eax, [ebp+10h]
0x41425E: cmp     eax, [edi+10h]
0x414261: jnz     short EffectItem_CompareTo___Return_1
0x414263: mov     eax, [ebp+14h]
0x414266: cmp     eax, [edi+14h]
0x414269: jnz     short EffectItem_CompareTo___Return_1
0x41426B: mov     ecx, [ebx+98h]
0x414271: mov     eax, [ebp+1Ch]
0x414274: mov     eax, [eax+98h]
0x41427A: cmp     ecx, 46464553h
0x414280: setz    dl
0x414283: cmp     eax, 46464553h
0x414288: setz    al
0x41428B: cmp     al, dl
0x41428D: jnz     short EffectItem_CompareTo___Return_1
0x41428F: xor     al, al
0x414291: cmp     ecx, 46464553h
0x414297: jnz     EffectItem_CompareTo___Done
0x41429D: mov     ecx, [ebp+18h]
0x4142A0: test    ecx, ecx
0x4142A2: jz      short loc_4142AF
0x4142A4: mov     esi, [ecx]
0x4142A6: jmp     short loc_4142B1
0x4142AF: xor     esi, esi
0x4142B1: mov     eax, [edi+18h]
0x4142B4: test    eax, eax
0x4142B6: jz      short loc_4142BC
0x4142B8: mov     edx, [eax]
0x4142BA: jmp     short loc_4142BE
0x4142BC: xor     edx, edx
0x4142BE: cmp     esi, edx
0x4142C0: jnz     loc_41437A
0x4142C6: test    ecx, ecx
0x4142C8: jz      short loc_4142CF
0x4142CA: mov     ecx, [ecx+4]
0x4142CD: jmp     short loc_4142D5
0x4142CF: mov     ecx, [ebp+1Ch]
0x4142D2: mov     ecx, [ecx+64h]
0x4142D5: test    eax, eax
0x4142D7: jz      short loc_4142DE
0x4142D9: mov     eax, [eax+4]
0x4142DC: jmp     short loc_4142E1
0x4142DE: mov     eax, [ebx+64h]
0x4142E1: cmp     ecx, eax
0x4142E3: jnz     loc_41437A
0x4142E9: lea     ecx, [esp+arg_1C]
0x4142ED: push    ecx
0x4142EE: mov     ecx, edi
0x4142F0: call    EffectItem_GetName
0x4142F5: mov     esi, eax
0x4142F7: lea     edx, [esp+arg_14]
0x4142FB: push    edx
0x4142FC: mov     ecx, ebp
0x4142FE: mov     [esp+4+arg_2C], 0
0x414306: mov     [esp+4+arg_10], 1
0x41430E: call    EffectItem_GetName
0x414313: mov     ecx, [esi]
0x414315: test    ecx, ecx
0x414317: mov     [esp+arg_10], 3
0x41431F: jz      short loc_414333
0x414321: mov     eax, [eax]
0x414323: test    eax, eax
0x414325: jz      short loc_414333
0x414327: push    ecx; right
0x414328: push    eax; left
0x414329: call    CRT_StricmpLocaleDispatch
0x41432E: add     esp, 8
0x414331: jmp     short loc_41433E
0x414333: xor     eax, eax
0x414335: test    ecx, ecx
0x414337: setz    al
0x41433A: lea     eax, [eax+eax-1]
0x41433E: test    eax, eax
0x414340: jnz     short loc_41437A
0x414342: mov     ecx, ebp
0x414344: call    EffectItem_IsHostile
0x414349: mov     ecx, edi
0x41434B: mov     dl, al
0x41434D: call    EffectItem_IsHostile
0x414352: cmp     dl, al
0x414354: jnz     short loc_41437A
0x414356: mov     eax, [ebp+18h]
0x414359: test    eax, eax
0x41435B: jz      short loc_414362
0x41435D: mov     ecx, [eax+10h]
0x414360: jmp     short loc_414364
0x414362: xor     ecx, ecx
0x414364: mov     eax, [edi+18h]
0x414367: test    eax, eax
0x414369: jz      short loc_414370
0x41436B: mov     eax, [eax+10h]
0x41436E: jmp     short loc_414372
0x414370: xor     eax, eax
0x414372: cmp     ecx, eax
0x414374: jnz     short loc_41437A
0x414376: xor     bl, bl
0x414378: jmp     short loc_41437C
0x41437A: mov     bl, 1
0x41437C: test    byte ptr [esp+arg_10], 2
0x414381: jz      short loc_4143A5
0x414383: mov     eax, [esp+arg_14]
0x414387: and     [esp+arg_10], 0FFFFFFFDh
0x41438C: push    eax
0x41438D: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x414392: add     esp, 4
0x414395: xor     eax, eax
0x414397: mov     [esp+arg_14], eax
0x41439B: mov     [esp+arg_1A], ax
0x4143A0: mov     [esp+arg_18], ax
0x4143A5: test    byte ptr [esp+arg_10], 1
0x4143AA: jz      short loc_4143B9
0x4143AC: mov     ecx, [esp+arg_1C]
0x4143B0: push    ecx
0x4143B1: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4143B6: add     esp, 4
0x4143B9: mov     al, bl
