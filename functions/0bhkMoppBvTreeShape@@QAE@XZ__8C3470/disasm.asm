0x8C3470: push    0FFFFFFFFh
0x8C3472: push    offset ??0bhkNiTriStripsShape@@QAE@XZ_SEH
0x8C3477: mov     eax, large fs:0
0x8C347D: push    eax
0x8C347E: push    ecx
0x8C347F: push    ebx
0x8C3480: push    ebp
0x8C3481: push    esi
0x8C3482: push    edi
0x8C3483: mov     eax, ds:0B30AACh
0x8C3488: xor     eax, esp
0x8C348A: push    eax
0x8C348B: lea     eax, [esp+24h+var_C]
0x8C348F: mov     large fs:0, eax
0x8C3495: mov     edi, ecx
0x8C3497: push    offset stru_BA7C80; lpCriticalSection
0x8C349C: call    dword ptr ds:0A2806Ch
0x8C34A2: call    dword ptr ds:0A2808Ch
0x8C34A8: mov     ebp, 1
0x8C34AD: add     ds:0BA7CFCh, ebp
0x8C34B3: push    14h; Size
0x8C34B5: mov     ds:0BA7CF8h, eax
0x8C34BA: call    FormHeapAlloc
0x8C34BF: mov     esi, eax
0x8C34C1: add     esp, 4
0x8C34C4: mov     [esp+24h+var_10], esi
0x8C34C8: xor     ebx, ebx
0x8C34CA: cmp     esi, ebx
0x8C34CC: mov     [esp+24h+var_4], ebx
0x8C34D0: jz      short loc_8C3505
0x8C34D2: mov     ecx, esi; this
0x8C34D4: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8C34D9: mov     dword ptr [esi], offset ??_7bhkShape@@6B@; const bhkShape::`vftable'
0x8C34DF: mov     [esi+0Ch], ebx
0x8C34E2: mov     [esi+10h], ebx
0x8C34E5: add     ds:0BA7D70h, ebp
0x8C34EB: mov     dword ptr [esi], offset ??_7bhkBvTreeShape@@6B@; const bhkBvTreeShape::`vftable'
0x8C34F1: add     ds:0BA7F98h, ebp
0x8C34F7: mov     dword ptr [esi], offset ??_7bhkMoppBvTreeShape@@6B@; const bhkMoppBvTreeShape::`vftable'
0x8C34FD: add     ds:0BA80F4h, ebp
0x8C3503: jmp     short loc_8C3507
0x8C3505: xor     esi, esi
0x8C3507: mov     ecx, [esp+24h+arg_0]
0x8C350B: mov     eax, [edi]
0x8C350D: mov     edx, [eax+80h]
0x8C3513: push    ecx
0x8C3514: push    esi
0x8C3515: mov     ecx, edi
0x8C3517: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x8C351F: call    edx
0x8C3521: sub     ds:0BA7CFCh, ebp
0x8C3527: jnz     short loc_8C352F
0x8C3529: mov     ds:0BA7CF8h, ebx
0x8C352F: push    offset stru_BA7C80; lpCriticalSection
0x8C3534: call    dword ptr ds:0A28074h
0x8C353A: mov     eax, esi
0x8C353C: mov     ecx, dword ptr [esp+24h+var_C]
0x8C3540: mov     large fs:0, ecx
0x8C3547: pop     ecx
0x8C3548: pop     edi
0x8C3549: pop     esi
0x8C354A: pop     ebp
0x8C354B: pop     ebx
0x8C354C: add     esp, 10h
0x8C354F: retn    4
