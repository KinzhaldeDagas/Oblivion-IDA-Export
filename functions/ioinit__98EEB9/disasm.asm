0x98EEB9: push    54h
0x98EEBB: push    offset stru_AFFF08
0x98EEC0: call    __SEH_prolog4
0x98EEC5: xor     edi, edi
0x98EEC7: mov     [ebp+ms_exc.registration.TryLevel], edi
0x98EECA: lea     eax, [ebp+StartupInfo]
0x98EECD: push    eax; lpStartupInfo
0x98EECE: call    ds:GetStartupInfoA
0x98EED4: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x98EEDB: push    28h ; '('
0x98EEDD: push    20h ; ' '
0x98EEDF: pop     esi
0x98EEE0: push    esi
0x98EEE1: call    unknown_libname_74
0x98EEE6: pop     ecx
0x98EEE7: pop     ecx
0x98EEE8: cmp     eax, edi
0x98EEEA: jz      loc_98F0F0
0x98EEF0: mov     dword_BAAAC0, eax
0x98EEF5: mov     uNumber, esi
0x98EEFB: lea     ecx, [eax+500h]
0x98EF01: jmp     short loc_98EF2C
0x98EF03: mov     byte ptr [eax+4], 0
0x98EF07: or      dword ptr [eax], 0FFFFFFFFh
0x98EF0A: mov     byte ptr [eax+5], 0Ah
0x98EF0E: mov     [eax+8], edi
0x98EF11: mov     byte ptr [eax+24h], 0
0x98EF15: mov     byte ptr [eax+25h], 0Ah
0x98EF19: mov     byte ptr [eax+26h], 0Ah
0x98EF1D: add     eax, 28h ; '('
0x98EF20: mov     ecx, dword_BAAAC0
0x98EF26: add     ecx, 500h
0x98EF2C: cmp     eax, ecx
0x98EF2E: jb      short loc_98EF03
0x98EF30: cmp     [ebp+StartupInfo.cbReserved2], di
0x98EF34: jz      loc_98F037
0x98EF3A: mov     eax, [ebp+StartupInfo.lpReserved2]
0x98EF3D: cmp     eax, edi
0x98EF3F: jz      loc_98F037
0x98EF45: mov     edi, [eax]
0x98EF47: lea     ebx, [eax+4]
0x98EF4A: lea     eax, [ebx+edi]
0x98EF4D: mov     [ebp+var_1C], eax
0x98EF50: mov     eax, 800h
0x98EF55: cmp     edi, eax
0x98EF57: jl      short loc_98EF5B
0x98EF59: mov     edi, eax
0x98EF5B: xor     esi, esi
0x98EF5D: inc     esi
0x98EF5E: jmp     short loc_98EFB2
0x98EF60: push    28h ; '('
0x98EF62: push    20h ; ' '
0x98EF64: call    unknown_libname_74
0x98EF69: pop     ecx
0x98EF6A: pop     ecx
0x98EF6B: test    eax, eax
0x98EF6D: jz      short loc_98EFBC
0x98EF6F: lea     ecx, ds:0BAAAC0h[esi*4]
0x98EF76: mov     [ecx], eax
0x98EF78: add     uNumber, 20h ; ' '
0x98EF7F: lea     edx, [eax+500h]
0x98EF85: jmp     short loc_98EFAD
0x98EF87: mov     byte ptr [eax+4], 0
0x98EF8B: or      dword ptr [eax], 0FFFFFFFFh
0x98EF8E: mov     byte ptr [eax+5], 0Ah
0x98EF92: and     dword ptr [eax+8], 0
0x98EF96: and     byte ptr [eax+24h], 80h
0x98EF9A: mov     byte ptr [eax+25h], 0Ah
0x98EF9E: mov     byte ptr [eax+26h], 0Ah
0x98EFA2: add     eax, 28h ; '('
0x98EFA5: mov     edx, [ecx]
0x98EFA7: add     edx, 500h
0x98EFAD: cmp     eax, edx
0x98EFAF: jb      short loc_98EF87
0x98EFB1: inc     esi
0x98EFB2: cmp     uNumber, edi
0x98EFB8: jl      short loc_98EF60
0x98EFBA: jmp     short loc_98EFC2
0x98EFBC: mov     edi, uNumber
0x98EFC2: and     [ebp+var_20], 0
0x98EFC6: test    edi, edi
0x98EFC8: jle     short loc_98F037
0x98EFCA: mov     eax, [ebp+var_1C]
0x98EFCD: mov     ecx, [eax]
0x98EFCF: cmp     ecx, 0FFFFFFFFh
0x98EFD2: jz      short loc_98F02A
0x98EFD4: cmp     ecx, 0FFFFFFFEh
0x98EFD7: jz      short loc_98F02A
0x98EFD9: mov     al, [ebx]
0x98EFDB: test    al, 1
0x98EFDD: jz      short loc_98F02A
0x98EFDF: test    al, 8
0x98EFE1: jnz     short loc_98EFEE
0x98EFE3: push    ecx; hFile
0x98EFE4: call    ds:GetFileType
0x98EFEA: test    eax, eax
0x98EFEC: jz      short loc_98F02A
0x98EFEE: mov     esi, [ebp+var_20]
0x98EFF1: mov     eax, esi
0x98EFF3: sar     eax, 5
0x98EFF6: and     esi, 1Fh
0x98EFF9: imul    esi, 28h ; '('
0x98EFFC: add     esi, dword_BAAAC0[eax*4]
0x98F003: mov     eax, [ebp+var_1C]
0x98F006: mov     eax, [eax]
0x98F008: mov     [esi], eax
0x98F00A: mov     al, [ebx]
0x98F00C: mov     [esi+4], al
0x98F00F: push    0FA0h
0x98F014: lea     eax, [esi+0Ch]
0x98F017: push    eax
0x98F018: call    ___crtInitCritSecAndSpinCount
0x98F01D: pop     ecx
0x98F01E: pop     ecx
0x98F01F: test    eax, eax
0x98F021: jz      loc_98F0F0
0x98F027: inc     dword ptr [esi+8]
0x98F02A: inc     [ebp+var_20]
0x98F02D: inc     ebx
0x98F02E: add     [ebp+var_1C], 4
0x98F032: cmp     [ebp+var_20], edi
0x98F035: jl      short loc_98EFCA
0x98F037: xor     ebx, ebx
0x98F039: mov     esi, ebx
0x98F03B: imul    esi, 28h ; '('
0x98F03E: add     esi, dword_BAAAC0
0x98F044: mov     eax, [esi]
0x98F046: cmp     eax, 0FFFFFFFFh
0x98F049: jz      short loc_98F056
0x98F04B: cmp     eax, 0FFFFFFFEh
0x98F04E: jz      short loc_98F056
0x98F050: or      byte ptr [esi+4], 80h
0x98F054: jmp     short loc_98F0C8
0x98F056: mov     byte ptr [esi+4], 81h
0x98F05A: test    ebx, ebx
0x98F05C: jnz     short loc_98F063
0x98F05E: push    0FFFFFFF6h
0x98F060: pop     eax
0x98F061: jmp     short loc_98F06D
0x98F063: mov     eax, ebx
0x98F065: dec     eax
0x98F066: neg     eax
0x98F068: sbb     eax, eax
0x98F06A: add     eax, 0FFFFFFF5h
0x98F06D: push    eax; nStdHandle
0x98F06E: call    ds:GetStdHandle
0x98F074: mov     edi, eax
0x98F076: cmp     edi, 0FFFFFFFFh
0x98F079: jz      short loc_98F0BE
0x98F07B: test    edi, edi
0x98F07D: jz      short loc_98F0BE
0x98F07F: push    edi; hFile
0x98F080: call    ds:GetFileType
0x98F086: test    eax, eax
0x98F088: jz      short loc_98F0BE
0x98F08A: mov     [esi], edi
0x98F08C: and     eax, 0FFh
0x98F091: cmp     eax, 2
0x98F094: jnz     short loc_98F09C
0x98F096: or      byte ptr [esi+4], 40h
0x98F09A: jmp     short loc_98F0A5
0x98F09C: cmp     eax, 3
0x98F09F: jnz     short loc_98F0A5
0x98F0A1: or      byte ptr [esi+4], 8
0x98F0A5: push    0FA0h
0x98F0AA: lea     eax, [esi+0Ch]
0x98F0AD: push    eax
0x98F0AE: call    ___crtInitCritSecAndSpinCount
0x98F0B3: pop     ecx
0x98F0B4: pop     ecx
0x98F0B5: test    eax, eax
0x98F0B7: jz      short loc_98F0F0
0x98F0B9: inc     dword ptr [esi+8]
0x98F0BC: jmp     short loc_98F0C8
0x98F0BE: or      byte ptr [esi+4], 40h
0x98F0C2: mov     dword ptr [esi], 0FFFFFFFEh
0x98F0C8: inc     ebx
0x98F0C9: cmp     ebx, 3
0x98F0CC: jl      loc_98F039
0x98F0D2: push    uNumber; uNumber
0x98F0D8: call    ds:SetHandleCount
0x98F0DE: xor     eax, eax
0x98F0E0: jmp     short loc_98F0F3
0x98F0E2: xor     eax, eax
0x98F0E4: inc     eax
0x98F0E5: retn
0x98F0E6: mov     esp, [ebp+ms_exc.old_esp]
0x98F0E9: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x98F0F0: or      eax, 0FFFFFFFFh
0x98F0F3: call    __SEH_epilog4
0x98F0F8: retn
