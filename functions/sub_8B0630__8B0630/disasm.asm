0x8B0630: push    0FFFFFFFFh
0x8B0632: push    offset ??0bhkNiTriStripsShape@@QAE@XZ_SEH
0x8B0637: mov     eax, large fs:0
0x8B063D: push    eax
0x8B063E: push    ecx
0x8B063F: push    ebx
0x8B0640: push    ebp
0x8B0641: push    esi
0x8B0642: push    edi
0x8B0643: mov     eax, ds:0B30AACh
0x8B0648: xor     eax, esp
0x8B064A: push    eax
0x8B064B: lea     eax, [esp+24h+var_C]
0x8B064F: mov     large fs:0, eax
0x8B0655: mov     edi, ecx
0x8B0657: push    offset stru_BA7C80; lpCriticalSection
0x8B065C: call    dword ptr ds:0A2806Ch
0x8B0662: call    dword ptr ds:0A2808Ch
0x8B0668: mov     ebp, 1
0x8B066D: add     ds:0BA7CFCh, ebp
0x8B0673: push    14h; Size
0x8B0675: mov     ds:0BA7CF8h, eax
0x8B067A: call    FormHeapAlloc
0x8B067F: mov     esi, eax
0x8B0681: add     esp, 4
0x8B0684: mov     [esp+24h+var_10], esi
0x8B0688: xor     ebx, ebx
0x8B068A: cmp     esi, ebx
0x8B068C: mov     [esp+24h+var_4], ebx
0x8B0690: jz      short loc_8B06C5
0x8B0692: mov     ecx, esi; this
0x8B0694: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8B0699: mov     dword ptr [esi], offset ??_7bhkShape@@6B@; const bhkShape::`vftable'
0x8B069F: mov     [esi+0Ch], ebx
0x8B06A2: mov     [esi+10h], ebx
0x8B06A5: add     ds:0BA7D70h, ebp
0x8B06AB: mov     dword ptr [esi], offset ??_7bhkBvTreeShape@@6B@; const bhkBvTreeShape::`vftable'
0x8B06B1: add     ds:0BA7F98h, ebp
0x8B06B7: mov     dword ptr [esi], offset ??_7bhkTriSampledHeightFieldBvTreeShape@@6B@; const bhkTriSampledHeightFieldBvTreeShape::`vftable'
0x8B06BD: add     ds:0BA7FA4h, ebp
0x8B06C3: jmp     short loc_8B06C7
0x8B06C5: xor     esi, esi
0x8B06C7: mov     ecx, [esp+24h+arg_0]
0x8B06CB: mov     eax, [edi]
0x8B06CD: mov     edx, [eax+80h]
0x8B06D3: push    ecx
0x8B06D4: push    esi
0x8B06D5: mov     ecx, edi
0x8B06D7: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x8B06DF: call    edx
0x8B06E1: sub     ds:0BA7CFCh, ebp
0x8B06E7: jnz     short loc_8B06EF
0x8B06E9: mov     ds:0BA7CF8h, ebx
0x8B06EF: push    offset stru_BA7C80; lpCriticalSection
0x8B06F4: call    dword ptr ds:0A28074h
0x8B06FA: mov     eax, esi
0x8B06FC: mov     ecx, dword ptr [esp+24h+var_C]
0x8B0700: mov     large fs:0, ecx
0x8B0707: pop     ecx
0x8B0708: pop     edi
0x8B0709: pop     esi
0x8B070A: pop     ebp
0x8B070B: pop     ebx
0x8B070C: add     esp, 10h
0x8B070F: retn    4
