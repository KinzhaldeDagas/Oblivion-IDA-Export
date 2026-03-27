0x7F3470: push    0FFFFFFFFh
0x7F3472: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x7F3477: mov     eax, large fs:0
0x7F347D: push    eax
0x7F347E: push    ecx
0x7F347F: push    ebx
0x7F3480: push    esi
0x7F3481: push    edi
0x7F3482: mov     eax, ds:0B30AACh
0x7F3487: xor     eax, esp
0x7F3489: push    eax
0x7F348A: lea     eax, [esp+20h+var_C]
0x7F348E: mov     large fs:0, eax
0x7F3494: mov     ebx, ecx
0x7F3496: mov     eax, [ebx+34h]
0x7F3499: test    eax, eax
0x7F349B: jnz     short loc_7F3510
0x7F349D: push    10h; Size
0x7F349F: call    FormHeapAlloc
0x7F34A4: add     esp, 4
0x7F34A7: mov     [esp+20h+var_10], eax
0x7F34AB: test    eax, eax
0x7F34AD: mov     [esp+20h+var_4], 0
0x7F34B5: jz      short loc_7F34D4
0x7F34B7: mov     ecx, [esp+20h+arg_0]
0x7F34BB: push    0
0x7F34BD: push    0
0x7F34BF: push    1
0x7F34C1: push    17Fh
0x7F34C6: push    ecx
0x7F34C7: push    eax
0x7F34C8: call    sub_7E2370
0x7F34CD: add     esp, 18h
0x7F34D0: mov     edi, eax
0x7F34D2: jmp     short loc_7F34D6
0x7F34D4: xor     edi, edi
0x7F34D6: mov     edx, [ebx+28h]
0x7F34D9: mov     eax, [edx+4]
0x7F34DC: lea     esi, [ebx+28h]
0x7F34DF: mov     ecx, esi
0x7F34E1: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7F34E9: call    eax
0x7F34EB: mov     [eax+8], edi
0x7F34EE: mov     dword ptr [eax+4], 0
0x7F34F5: mov     ecx, [esi+4]
0x7F34F8: mov     [eax], ecx
0x7F34FA: mov     ecx, [esi+4]
0x7F34FD: test    ecx, ecx
0x7F34FF: jz      short loc_7F3506
0x7F3501: mov     [ecx+4], eax
0x7F3504: jmp     short loc_7F3509
0x7F3506: mov     [esi+8], eax
0x7F3509: add     dword ptr [esi+0Ch], 1
0x7F350D: mov     [esi+4], eax
0x7F3510: lea     eax, [ebx+28h]
0x7F3513: mov     ecx, [esp+20h+var_C]
0x7F3517: mov     large fs:0, ecx
0x7F351E: pop     ecx
0x7F351F: pop     edi
0x7F3520: pop     esi
0x7F3521: pop     ebx
0x7F3522: add     esp, 10h
0x7F3525: retn    10h
