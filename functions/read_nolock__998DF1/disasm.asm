0x998DF1: push    ebp
0x998DF2: mov     ebp, esp
0x998DF4: sub     esp, 1Ch
0x998DF7: mov     edx, [ebp+nNumberOfBytesToRead]
0x998DFA: push    esi
0x998DFB: mov     esi, [ebp+arg_0]
0x998DFE: push    0FFFFFFFEh
0x998E00: pop     eax
0x998E01: cmp     esi, eax
0x998E03: mov     [ebp+var_14], eax
0x998E06: mov     [ebp+var_1C], edx
0x998E09: jnz     short loc_998E26
0x998E0B: call    ___doserrno
0x998E10: and     dword ptr [eax], 0
0x998E13: call    __errno
0x998E18: mov     dword ptr [eax], 9
0x998E1E: or      eax, 0FFFFFFFFh
0x998E21: jmp     loc_999390
0x998E26: push    edi
0x998E27: xor     edi, edi
0x998E29: cmp     esi, edi
0x998E2B: jl      short loc_998E35
0x998E2D: cmp     esi, uNumber
0x998E33: jb      short loc_998E5C
0x998E35: call    ___doserrno
0x998E3A: mov     [eax], edi
0x998E3C: call    __errno
0x998E41: push    edi
0x998E42: push    edi
0x998E43: push    edi
0x998E44: push    edi
0x998E45: push    edi
0x998E46: mov     dword ptr [eax], 9
0x998E4C: call    __invalid_parameter
0x998E51: add     esp, 14h
0x998E54: or      eax, 0FFFFFFFFh
0x998E57: jmp     loc_99938F
0x998E5C: mov     eax, esi
0x998E5E: and     esi, 1Fh
0x998E61: imul    esi, 28h ; '('
0x998E64: sar     eax, 5
0x998E67: push    ebx
0x998E68: lea     ebx, ds:0BAAAC0h[eax*4]
0x998E6F: mov     eax, [ebx]
0x998E71: add     eax, esi
0x998E73: mov     cl, [eax+4]
0x998E76: test    cl, 1
0x998E79: jnz     short loc_998E92
0x998E7B: call    ___doserrno
0x998E80: mov     [eax], edi
0x998E82: call    __errno
0x998E87: mov     dword ptr [eax], 9
0x998E8D: jmp     loc_998FD9
0x998E92: cmp     edx, edi
0x998E94: mov     [ebp+var_10], edi
0x998E97: jz      loc_99938C
0x998E9D: test    cl, 2
0x998EA0: jnz     loc_99938C
0x998EA6: mov     ecx, [ebp+lpWideCharStr]
0x998EA9: cmp     ecx, edi
0x998EAB: jz      loc_998FC7
0x998EB1: mov     al, [eax+24h]
0x998EB4: add     al, al
0x998EB6: sar     al, 1
0x998EB8: mov     [ebp+var_2], al
0x998EBB: movsx   eax, al
0x998EBE: dec     eax
0x998EBF: jz      loc_998FBF
0x998EC5: dec     eax
0x998EC6: jnz     short loc_998EDA
0x998EC8: mov     eax, edx
0x998ECA: not     eax
0x998ECC: test    al, 1
0x998ECE: jz      loc_998FC7
0x998ED4: and     edx, 0FFFFFFFEh
0x998ED7: mov     [ebp+nNumberOfBytesToRead], edx
0x998EDA: mov     [ebp+lpBuffer], ecx
0x998EDD: mov     ecx, [ebx]
0x998EDF: mov     eax, [ebp+lpBuffer]
0x998EE2: lea     edi, [esi+ecx]
0x998EE5: test    byte ptr [edi+4], 48h
0x998EE9: jz      short loc_998F61
0x998EEB: mov     cl, [edi+5]
0x998EEE: cmp     cl, 0Ah
0x998EF1: jz      short loc_998F61
0x998EF3: xor     edx, edx
0x998EF5: cmp     [ebp+nNumberOfBytesToRead], edx
0x998EF8: jz      short loc_998F61
0x998EFA: mov     [eax], cl
0x998EFC: mov     ecx, [ebx]
0x998EFE: inc     eax
0x998EFF: dec     [ebp+nNumberOfBytesToRead]
0x998F02: cmp     [ebp+var_2], dl
0x998F05: mov     [ebp+var_10], 1
0x998F0C: mov     byte ptr [esi+ecx+5], 0Ah
0x998F11: jz      short loc_998F61
0x998F13: mov     ecx, [ebx]
0x998F15: mov     cl, [esi+ecx+25h]
0x998F19: cmp     cl, 0Ah
0x998F1C: jz      short loc_998F61
0x998F1E: cmp     [ebp+nNumberOfBytesToRead], edx
0x998F21: jz      short loc_998F61
0x998F23: mov     [eax], cl
0x998F25: mov     ecx, [ebx]
0x998F27: inc     eax
0x998F28: dec     [ebp+nNumberOfBytesToRead]
0x998F2B: cmp     [ebp+var_2], 1
0x998F2F: mov     [ebp+var_10], 2
0x998F36: mov     byte ptr [esi+ecx+25h], 0Ah
0x998F3B: jnz     short loc_998F61
0x998F3D: mov     ecx, [ebx]
0x998F3F: mov     cl, [esi+ecx+26h]
0x998F43: cmp     cl, 0Ah
0x998F46: jz      short loc_998F61
0x998F48: cmp     [ebp+nNumberOfBytesToRead], edx
0x998F4B: jz      short loc_998F61
0x998F4D: mov     [eax], cl
0x998F4F: mov     ecx, [ebx]
0x998F51: inc     eax
0x998F52: dec     [ebp+nNumberOfBytesToRead]
0x998F55: mov     [ebp+var_10], 3
0x998F5C: mov     byte ptr [esi+ecx+26h], 0Ah
0x998F61: push    0; lpOverlapped
0x998F63: lea     ecx, [ebp+NumberOfBytesRead]
0x998F66: push    ecx; lpNumberOfBytesRead
0x998F67: push    [ebp+nNumberOfBytesToRead]; nNumberOfBytesToRead
0x998F6A: push    eax; lpBuffer
0x998F6B: mov     eax, [ebx]
0x998F6D: push    dword ptr [esi+eax]; hFile
0x998F70: call    ds:ReadFile
0x998F76: test    eax, eax
0x998F78: jz      loc_999356
0x998F7E: mov     edi, [ebp+NumberOfBytesRead]
0x998F81: test    edi, edi
0x998F83: jl      loc_999356
0x998F89: cmp     edi, [ebp+nNumberOfBytesToRead]
0x998F8C: ja      loc_999356
0x998F92: mov     eax, [ebx]
0x998F94: add     [ebp+var_10], edi
0x998F97: lea     eax, [esi+eax+4]
0x998F9B: test    byte ptr [eax], 80h
0x998F9E: jz      __read_nolock___$error_return$25326
0x998FA4: cmp     [ebp+var_2], 2
0x998FA8: jz      loc_999220
0x998FAE: test    edi, edi
0x998FB0: jz      short loc_99902B
0x998FB2: mov     ecx, [ebp+lpBuffer]
0x998FB5: cmp     byte ptr [ecx], 0Ah
0x998FB8: jnz     short loc_99902B
0x998FBA: or      byte ptr [eax], 4
0x998FBD: jmp     short loc_99902E
0x998FBF: mov     eax, edx
0x998FC1: not     eax
0x998FC3: test    al, 1
0x998FC5: jnz     short loc_998FE8
0x998FC7: call    ___doserrno
0x998FCC: mov     [eax], edi
0x998FCE: call    __errno
0x998FD3: mov     dword ptr [eax], 16h
0x998FD9: push    edi
0x998FDA: push    edi
0x998FDB: push    edi
0x998FDC: push    edi
0x998FDD: push    edi
0x998FDE: call    __invalid_parameter
0x998FE3: add     esp, 14h
0x998FE6: jmp     short loc_999023
0x998FE8: mov     eax, edx
0x998FEA: push    4
0x998FEC: pop     ecx
0x998FED: shr     eax, 1
0x998FEF: cmp     eax, ecx
0x998FF1: mov     [ebp+nNumberOfBytesToRead], ecx
0x998FF4: jb      short loc_998FF9
0x998FF6: mov     [ebp+nNumberOfBytesToRead], eax
0x998FF9: push    [ebp+nNumberOfBytesToRead]
0x998FFC: call    unknown_libname_72
0x999001: cmp     eax, edi
0x999003: pop     ecx
0x999004: mov     [ebp+lpBuffer], eax
0x999007: jnz     loc_998EDD
0x99900D: call    __errno
0x999012: mov     dword ptr [eax], 0Ch
0x999018: call    ___doserrno
0x99901D: mov     dword ptr [eax], 8
0x999023: or      eax, 0FFFFFFFFh
0x999026: jmp     loc_99938E
0x99902B: and     byte ptr [eax], 0FBh
0x99902E: mov     edi, [ebp+lpBuffer]
0x999031: mov     eax, [ebp+var_10]
0x999034: add     eax, edi
0x999036: cmp     edi, eax
0x999038: mov     [ebp+nNumberOfBytesToRead], edi
0x99903B: mov     [ebp+var_10], eax
0x99903E: jnb     loc_999114
0x999044: mov     ecx, [ebp+nNumberOfBytesToRead]
0x999047: mov     al, [ecx]
0x999049: cmp     al, 1Ah
0x99904B: jz      loc_9990FF
0x999051: cmp     al, 0Dh
0x999053: jz      short loc_999061
0x999055: mov     [edi], al
0x999057: inc     edi
0x999058: inc     ecx
0x999059: mov     [ebp+nNumberOfBytesToRead], ecx
0x99905C: jmp     loc_9990F1
0x999061: mov     eax, [ebp+var_10]
0x999064: dec     eax
0x999065: cmp     ecx, eax
0x999067: jnb     short loc_999080
0x999069: lea     eax, [ecx+1]
0x99906C: cmp     byte ptr [eax], 0Ah
0x99906F: jnz     short loc_99907B
0x999071: inc     ecx
0x999072: inc     ecx
0x999073: mov     [ebp+nNumberOfBytesToRead], ecx
0x999076: mov     byte ptr [edi], 0Ah
0x999079: jmp     short loc_9990F0
0x99907B: mov     [ebp+nNumberOfBytesToRead], eax
0x99907E: jmp     short loc_9990ED
0x999080: inc     [ebp+nNumberOfBytesToRead]
0x999083: push    0; lpOverlapped
0x999085: lea     eax, [ebp+NumberOfBytesRead]
0x999088: push    eax; lpNumberOfBytesRead
0x999089: push    1; nNumberOfBytesToRead
0x99908B: lea     eax, [ebp+Buffer]
0x99908E: push    eax; lpBuffer
0x99908F: mov     eax, [ebx]
0x999091: push    dword ptr [esi+eax]; hFile
0x999094: call    ds:ReadFile
0x99909A: test    eax, eax
0x99909C: jnz     short loc_9990A8
0x99909E: call    ds:GetLastError
0x9990A4: test    eax, eax
0x9990A6: jnz     short loc_9990ED
0x9990A8: cmp     [ebp+NumberOfBytesRead], 0
0x9990AC: jz      short loc_9990ED
0x9990AE: mov     eax, [ebx]
0x9990B0: test    byte ptr [esi+eax+4], 48h
0x9990B5: jz      short loc_9990CB
0x9990B7: cmp     [ebp+Buffer], 0Ah
0x9990BB: jz      short loc_999076
0x9990BD: mov     byte ptr [edi], 0Dh
0x9990C0: mov     eax, [ebx]
0x9990C2: mov     cl, [ebp+Buffer]
0x9990C5: mov     [esi+eax+5], cl
0x9990C9: jmp     short loc_9990F0
0x9990CB: cmp     edi, [ebp+lpBuffer]
0x9990CE: jnz     short loc_9990D6
0x9990D0: cmp     [ebp+Buffer], 0Ah
0x9990D4: jz      short loc_999076
0x9990D6: push    1; dwMoveMethod
0x9990D8: push    0FFFFFFFFh; int
0x9990DA: push    0FFFFFFFFh; int
0x9990DC: push    [ebp+arg_0]; int
0x9990DF: call    __lseeki64_nolock
0x9990E4: add     esp, 10h
0x9990E7: cmp     [ebp+Buffer], 0Ah
0x9990EB: jz      short loc_9990F1
0x9990ED: mov     byte ptr [edi], 0Dh
0x9990F0: inc     edi
0x9990F1: mov     eax, [ebp+var_10]
0x9990F4: cmp     [ebp+nNumberOfBytesToRead], eax
0x9990F7: jb      loc_999044
0x9990FD: jmp     short loc_999114
0x9990FF: mov     eax, [ebx]
0x999101: lea     eax, [esi+eax+4]
0x999105: test    byte ptr [eax], 40h
0x999108: jnz     short loc_99910F
0x99910A: or      byte ptr [eax], 2
0x99910D: jmp     short loc_999114
0x99910F: mov     al, [ecx]
0x999111: mov     [edi], al
0x999113: inc     edi
0x999114: mov     eax, edi
0x999116: sub     eax, [ebp+lpBuffer]
0x999119: cmp     [ebp+var_2], 1
0x99911D: mov     [ebp+var_10], eax
0x999120: jnz     __read_nolock___$error_return$25326
0x999126: test    eax, eax
0x999128: jz      __read_nolock___$error_return$25326
0x99912E: dec     edi
0x99912F: mov     cl, [edi]
0x999131: test    cl, cl
0x999133: js      short loc_99913B
0x999135: inc     edi
0x999136: jmp     loc_9991C1
0x99913B: xor     eax, eax
0x99913D: inc     eax
0x99913E: movzx   ecx, cl
0x999141: jmp     short loc_999152
0x999143: cmp     eax, 4
0x999146: jg      short loc_99915B
0x999148: cmp     edi, [ebp+lpBuffer]
0x99914B: jb      short loc_99915B
0x99914D: dec     edi
0x99914E: movzx   ecx, byte ptr [edi]
0x999151: inc     eax
0x999152: cmp     byte_B31D38[ecx], 0
0x999159: jz      short loc_999143
0x99915B: mov     dl, [edi]
0x99915D: movzx   ecx, dl
0x999160: movsx   ecx, byte_B31D38[ecx]
0x999167: test    ecx, ecx
0x999169: jnz     short loc_999178
0x99916B: call    __errno
0x999170: mov     dword ptr [eax], 2Ah ; '*'
0x999176: jmp     short loc_9991F2
0x999178: inc     ecx
0x999179: cmp     ecx, eax
0x99917B: jnz     short loc_999181
0x99917D: add     edi, eax
0x99917F: jmp     short loc_9991C1
0x999181: mov     ecx, [ebx]
0x999183: add     ecx, esi
0x999185: test    byte ptr [ecx+4], 48h
0x999189: jz      short loc_9991AF
0x99918B: inc     edi
0x99918C: cmp     eax, 2
0x99918F: mov     [ecx+5], dl
0x999192: jl      short loc_99919D
0x999194: mov     dl, [edi]
0x999196: mov     ecx, [ebx]
0x999198: mov     [esi+ecx+25h], dl
0x99919C: inc     edi
0x99919D: cmp     eax, 3
0x9991A0: jnz     short loc_9991AB
0x9991A2: mov     dl, [edi]
0x9991A4: mov     ecx, [ebx]
0x9991A6: mov     [esi+ecx+26h], dl
0x9991AA: inc     edi
0x9991AB: sub     edi, eax
0x9991AD: jmp     short loc_9991C1
0x9991AF: neg     eax
0x9991B1: cdq
0x9991B2: push    1; dwMoveMethod
0x9991B4: push    edx; int
0x9991B5: push    eax; int
0x9991B6: push    [ebp+arg_0]; int
0x9991B9: call    __lseeki64_nolock
0x9991BE: add     esp, 10h
0x9991C1: mov     eax, [ebp+var_1C]
0x9991C4: sub     edi, [ebp+lpBuffer]
0x9991C7: shr     eax, 1
0x9991C9: push    eax; cchWideChar
0x9991CA: push    [ebp+lpWideCharStr]; lpWideCharStr
0x9991CD: push    edi; cbMultiByte
0x9991CE: push    [ebp+lpBuffer]; lpMultiByteStr
0x9991D1: push    0; dwFlags
0x9991D3: push    0FDE9h; CodePage
0x9991D8: call    ds:MultiByteToWideChar
0x9991DE: test    eax, eax
0x9991E0: mov     [ebp+var_10], eax
0x9991E3: jnz     short loc_999219
0x9991E5: call    ds:GetLastError
0x9991EB: push    eax
0x9991EC: call    __dosmaperr
0x9991F1: pop     ecx
0x9991F2: or      [ebp+var_14], 0FFFFFFFFh
