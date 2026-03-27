0x9A08BA: push    ebp
0x9A08BB: mov     ebp, esp
0x9A08BD: sub     esp, 18h
0x9A08C0: push    ebx
0x9A08C1: push    esi
0x9A08C2: push    edi
0x9A08C3: xor     ebx, ebx
0x9A08C5: push    1; dwMoveMethod
0x9A08C7: push    ebx; int
0x9A08C8: push    ebx; int
0x9A08C9: push    [ebp+arg_0]; int
0x9A08CC: mov     [ebp+var_10], ebx
0x9A08CF: mov     [ebp+var_C], ebx
0x9A08D2: call    __lseeki64_nolock
0x9A08D7: mov     [ebp+var_18], eax
0x9A08DA: and     eax, edx
0x9A08DC: add     esp, 10h
0x9A08DF: cmp     eax, 0FFFFFFFFh
0x9A08E2: mov     [ebp+var_14], edx
0x9A08E5: jz      short loc_9A0940
0x9A08E7: push    2; dwMoveMethod
0x9A08E9: push    ebx; int
0x9A08EA: push    ebx; int
0x9A08EB: push    [ebp+arg_0]; int
0x9A08EE: call    __lseeki64_nolock
0x9A08F3: mov     ecx, eax
0x9A08F5: and     ecx, edx
0x9A08F7: add     esp, 10h
0x9A08FA: cmp     ecx, 0FFFFFFFFh
0x9A08FD: jz      short loc_9A0940
0x9A08FF: mov     esi, [ebp+arg_4]
0x9A0902: mov     edi, [ebp+arg_8]
0x9A0905: sub     esi, eax
0x9A0907: sbb     edi, edx
0x9A0909: js      loc_9A09D5
0x9A090F: jg      short loc_9A0919
0x9A0911: cmp     esi, ebx
0x9A0913: jbe     loc_9A09D5
0x9A0919: mov     ebx, 1000h
0x9A091E: push    ebx; dwBytes
0x9A091F: push    8; dwFlags
0x9A0921: call    ds:GetProcessHeap
0x9A0927: push    eax; hHeap
0x9A0928: call    ds:HeapAlloc
0x9A092E: test    eax, eax
0x9A0930: mov     [ebp+lpMem], eax
0x9A0933: jnz     short loc_9A094C
0x9A0935: call    __errno
0x9A093A: mov     dword ptr [eax], 0Ch
0x9A0940: call    __errno
0x9A0945: mov     eax, [eax]
0x9A0947: pop     edi
0x9A0948: pop     esi
0x9A0949: pop     ebx
0x9A094A: leave
0x9A094B: retn
0x9A094C: push    8000h
0x9A0951: push    [ebp+arg_0]
0x9A0954: call    __setmode_nolock
0x9A0959: pop     ecx
0x9A095A: pop     ecx
0x9A095B: mov     [ebp+var_8], eax
0x9A095E: test    edi, edi
0x9A0960: jl      short loc_9A096C
0x9A0962: jg      short loc_9A0968
0x9A0964: cmp     esi, ebx
0x9A0966: jb      short loc_9A096C
0x9A0968: mov     eax, ebx
0x9A096A: jmp     short loc_9A096E
0x9A096C: mov     eax, esi
0x9A096E: push    eax; nNumberOfBytesToWrite
0x9A096F: push    [ebp+lpMem]; int
0x9A0972: push    [ebp+arg_0]; int
0x9A0975: call    __write_nolock
0x9A097A: add     esp, 0Ch
0x9A097D: cmp     eax, 0FFFFFFFFh
0x9A0980: jz      short loc_9A09B8
0x9A0982: cdq
0x9A0983: sub     esi, eax
0x9A0985: sbb     edi, edx
0x9A0987: js      short loc_9A098F
0x9A0989: jg      short loc_9A095E
0x9A098B: test    esi, esi
0x9A098D: ja      short loc_9A095E
0x9A098F: mov     esi, [ebp+var_10]
0x9A0992: push    [ebp+var_8]
0x9A0995: push    [ebp+arg_0]
0x9A0998: call    __setmode_nolock
0x9A099D: pop     ecx
0x9A099E: pop     ecx
0x9A099F: push    [ebp+lpMem]; lpMem
0x9A09A2: push    0; dwFlags
0x9A09A4: call    ds:GetProcessHeap
0x9A09AA: push    eax; hHeap
0x9A09AB: call    ds:HeapFree
0x9A09B1: xor     ebx, ebx
0x9A09B3: jmp     loc_9A0A3E
0x9A09B8: call    ___doserrno
0x9A09BD: cmp     dword ptr [eax], 5
0x9A09C0: jnz     short loc_9A09CD
0x9A09C2: call    __errno
0x9A09C7: mov     dword ptr [eax], 0Dh
0x9A09CD: or      esi, 0FFFFFFFFh
0x9A09D0: mov     [ebp+var_C], esi
0x9A09D3: jmp     short loc_9A0992
0x9A09D5: cmp     edi, ebx
0x9A09D7: jg      short loc_9A0A4A
0x9A09D9: jl      short loc_9A09DF
0x9A09DB: cmp     esi, ebx
0x9A09DD: jnb     short loc_9A0A4A
0x9A09DF: push    ebx; dwMoveMethod
0x9A09E0: push    [ebp+arg_8]; int
0x9A09E3: push    [ebp+arg_4]; int
0x9A09E6: push    [ebp+arg_0]; int
0x9A09E9: call    __lseeki64_nolock
0x9A09EE: and     eax, edx
0x9A09F0: add     esp, 10h
0x9A09F3: cmp     eax, 0FFFFFFFFh
0x9A09F6: jz      loc_9A0940
0x9A09FC: push    [ebp+arg_0]; int
0x9A09FF: call    __get_osfhandle
0x9A0A04: pop     ecx
0x9A0A05: push    eax; hFile
0x9A0A06: call    ds:SetEndOfFile
0x9A0A0C: neg     eax
0x9A0A0E: sbb     eax, eax
0x9A0A10: neg     eax
0x9A0A12: dec     eax
0x9A0A13: cdq
0x9A0A14: mov     [ebp+var_10], eax
0x9A0A17: and     eax, edx
0x9A0A19: cmp     eax, 0FFFFFFFFh
0x9A0A1C: mov     [ebp+var_C], edx
0x9A0A1F: jnz     short loc_9A0A4A
0x9A0A21: call    __errno
0x9A0A26: mov     dword ptr [eax], 0Dh
0x9A0A2C: call    ___doserrno
0x9A0A31: mov     esi, eax
0x9A0A33: call    ds:GetLastError
0x9A0A39: mov     [esi], eax
0x9A0A3B: mov     esi, [ebp+var_10]
0x9A0A3E: and     esi, [ebp+var_C]
0x9A0A41: cmp     esi, 0FFFFFFFFh
0x9A0A44: jz      loc_9A0940
0x9A0A4A: push    ebx; dwMoveMethod
0x9A0A4B: push    [ebp+var_14]; int
0x9A0A4E: push    [ebp+var_18]; int
0x9A0A51: push    [ebp+arg_0]; int
0x9A0A54: call    __lseeki64_nolock
0x9A0A59: and     eax, edx
0x9A0A5B: add     esp, 10h
0x9A0A5E: cmp     eax, 0FFFFFFFFh
0x9A0A61: jz      loc_9A0940
0x9A0A67: xor     eax, eax
0x9A0A69: jmp     loc_9A0947
