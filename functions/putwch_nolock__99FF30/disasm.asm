0x99FF30: push    ebp
0x99FF31: mov     ebp, esp
0x99FF33: sub     esp, 10h
0x99FF36: mov     eax, ___security_cookie
0x99FF3B: xor     eax, ebp
0x99FF3D: mov     [ebp+var_4], eax
0x99FF40: push    esi
0x99FF41: xor     esi, esi
0x99FF43: cmp     dword_B323DC, esi
0x99FF49: jz      short loc_99FF99
0x99FF4B: cmp     hConsoleOutput, 0FFFFFFFEh
0x99FF52: jnz     short loc_99FF59
0x99FF54: call    ___initconout
0x99FF59: mov     eax, hConsoleOutput
0x99FF5E: cmp     eax, 0FFFFFFFFh
0x99FF61: jnz     short loc_99FF69
0x99FF63: or      ax, 0FFFFh
0x99FF67: jmp     short loc_99FFD9
0x99FF69: push    esi; lpReserved
0x99FF6A: lea     ecx, [ebp+NumberOfCharsWritten]
0x99FF6D: push    ecx; lpNumberOfCharsWritten
0x99FF6E: push    1; nNumberOfCharsToWrite
0x99FF70: lea     ecx, [ebp+Buffer]
0x99FF73: push    ecx; lpBuffer
0x99FF74: push    eax; hConsoleOutput
0x99FF75: call    ds:WriteConsoleW
0x99FF7B: test    eax, eax
0x99FF7D: jnz     short loc_99FFE6
0x99FF7F: cmp     dword_B323DC, 2
0x99FF86: jnz     short loc_99FF63
0x99FF88: call    ds:GetLastError
0x99FF8E: cmp     eax, 78h ; 'x'
0x99FF91: jnz     short loc_99FF63
0x99FF93: mov     dword_B323DC, esi
0x99FF99: push    esi; lpUsedDefaultChar
0x99FF9A: push    esi; lpDefaultChar
0x99FF9B: push    5; cbMultiByte
0x99FF9D: lea     eax, [ebp+MultiByteStr]
0x99FFA0: push    eax; lpMultiByteStr
0x99FFA1: push    1; cchWideChar
0x99FFA3: lea     eax, [ebp+Buffer]
0x99FFA6: push    eax; lpWideCharStr
0x99FFA7: push    esi; dwFlags
0x99FFA8: call    ds:GetConsoleOutputCP
0x99FFAE: push    eax; CodePage
0x99FFAF: call    ds:WideCharToMultiByte
0x99FFB5: mov     ecx, hConsoleOutput
0x99FFBB: cmp     ecx, 0FFFFFFFFh
0x99FFBE: jz      short loc_99FF63
0x99FFC0: push    esi; lpReserved
0x99FFC1: lea     edx, [ebp+NumberOfCharsWritten]
0x99FFC4: push    edx; lpNumberOfCharsWritten
0x99FFC5: push    eax; nNumberOfCharsToWrite
0x99FFC6: lea     eax, [ebp+MultiByteStr]
0x99FFC9: push    eax; lpBuffer
0x99FFCA: push    ecx; hConsoleOutput
0x99FFCB: call    ds:WriteConsoleA
0x99FFD1: test    eax, eax
0x99FFD3: jz      short loc_99FF63
0x99FFD5: mov     ax, [ebp+Buffer]
0x99FFD9: mov     ecx, [ebp+var_4]
0x99FFDC: xor     ecx, ebp
0x99FFDE: pop     esi
0x99FFDF: call    @__security_check_cookie@4
0x99FFE4: leave
0x99FFE5: retn
0x99FFE6: mov     dword_B323DC, 1
0x99FFF0: jmp     short loc_99FFD5
