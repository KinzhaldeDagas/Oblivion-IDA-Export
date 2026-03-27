0x98D5B8: push    ecx
0x98D5B9: push    ebx
0x98D5BA: mov     ebx, [esp+8+arg_0]
0x98D5BE: push    esi
0x98D5BF: push    edi
0x98D5C0: xor     esi, esi
0x98D5C2: xor     edi, edi
0x98D5C4: cmp     ebx, dword_B311E8[edi*8]
0x98D5CB: jz      short loc_98D5D3
0x98D5CD: inc     edi
0x98D5CE: cmp     edi, 17h
0x98D5D1: jl      short loc_98D5C4
0x98D5D3: cmp     edi, 17h
0x98D5D6: jnb     loc_98D753
0x98D5DC: push    ebp; Src
0x98D5DD: push    3; Mode
0x98D5DF: call    __set_error_mode
0x98D5E4: cmp     eax, 1
0x98D5E7: pop     ecx
0x98D5E8: jz      loc_98D71F
0x98D5EE: push    3; Mode
0x98D5F0: call    __set_error_mode
0x98D5F5: test    eax, eax
0x98D5F7: pop     ecx
0x98D5F8: jnz     short loc_98D607
0x98D5FA: cmp     dword_B30DA8, 1
0x98D601: jz      loc_98D71F
0x98D607: cmp     ebx, 0FCh ; 'ü'
0x98D60D: jz      loc_98D752
0x98D613: push    offset aRuntimeErrorPr
0x98D618: mov     ebx, 314h
0x98D61D: push    ebx; SizeInBytes
0x98D61E: mov     ebp, offset Dst
0x98D623: push    ebp; Dst
0x98D624: call    _strcpy_s
0x98D629: add     esp, 0Ch
0x98D62C: test    eax, eax
0x98D62E: jz      short loc_98D63D
0x98D630: push    esi
0x98D631: push    esi
0x98D632: push    esi
0x98D633: push    esi
0x98D634: push    esi
0x98D635: call    __invoke_watson
0x98D63A: add     esp, 14h
0x98D63D: push    104h; nSize
0x98D642: mov     esi, offset Filename
0x98D647: push    esi; lpFilename
0x98D648: push    0; hModule
0x98D64A: mov     byte_BAA3CD, 0
0x98D651: call    ds:GetModuleFileNameA
0x98D657: test    eax, eax
0x98D659: jnz     short loc_98D681
0x98D65B: push    offset aProgramNameUnk
0x98D660: push    2FBh; SizeInBytes
0x98D665: push    esi; Dst
0x98D666: call    _strcpy_s
0x98D66B: add     esp, 0Ch
0x98D66E: test    eax, eax
0x98D670: jz      short loc_98D681
0x98D672: xor     eax, eax
0x98D674: push    eax
0x98D675: push    eax
0x98D676: push    eax
0x98D677: push    eax
0x98D678: push    eax
0x98D679: call    __invoke_watson
0x98D67E: add     esp, 14h
0x98D681: push    esi; Str
0x98D682: call    _strlen
0x98D687: inc     eax
0x98D688: cmp     eax, 3Ch ; '<'
0x98D68B: pop     ecx
0x98D68C: jbe     short loc_98D6C6
0x98D68E: push    esi; MaxCount
0x98D68F: call    _strlen
0x98D694: sub     esi, 3Bh ; ';'
0x98D697: add     eax, esi
0x98D699: push    3; Src
0x98D69B: mov     ecx, offset dword_BAA5C4
0x98D6A0: push    offset a___
0x98D6A5: sub     ecx, eax
0x98D6A7: push    ecx; SizeInBytes
0x98D6A8: push    eax; Dst
0x98D6A9: call    _strncpy_s
0x98D6AE: add     esp, 14h
0x98D6B1: test    eax, eax
0x98D6B3: jz      short loc_98D6C6
0x98D6B5: xor     esi, esi
0x98D6B7: push    esi
0x98D6B8: push    esi
0x98D6B9: push    esi
0x98D6BA: push    esi
0x98D6BB: push    esi
0x98D6BC: call    __invoke_watson
0x98D6C1: add     esp, 14h
0x98D6C4: jmp     short loc_98D6C8
0x98D6C6: xor     esi, esi
0x98D6C8: push    offset asc_A68A2C
0x98D6CD: push    ebx; SizeInBytes
0x98D6CE: push    ebp; Dst
0x98D6CF: call    _strcat_s
0x98D6D4: add     esp, 0Ch
0x98D6D7: test    eax, eax
0x98D6D9: jz      short loc_98D6E8
0x98D6DB: push    esi
0x98D6DC: push    esi
0x98D6DD: push    esi
0x98D6DE: push    esi
0x98D6DF: push    esi
0x98D6E0: call    __invoke_watson
0x98D6E5: add     esp, 14h
0x98D6E8: push    off_B311EC[edi*8]; Src
0x98D6EF: push    ebx; SizeInBytes
0x98D6F0: push    ebp; Dst
0x98D6F1: call    _strcat_s
0x98D6F6: add     esp, 0Ch
0x98D6F9: test    eax, eax
0x98D6FB: jz      short loc_98D70A
0x98D6FD: push    esi
0x98D6FE: push    esi
0x98D6FF: push    esi
0x98D700: push    esi
0x98D701: push    esi
0x98D702: call    __invoke_watson
0x98D707: add     esp, 14h
0x98D70A: push    12010h
0x98D70F: push    offset aMicrosoftVisua
0x98D714: push    ebp
0x98D715: call    sub_99CB44
0x98D71A: add     esp, 0Ch
0x98D71D: jmp     short loc_98D752
0x98D71F: push    0FFFFFFF4h; nStdHandle
0x98D721: call    ds:GetStdHandle
0x98D727: mov     ebp, eax
0x98D729: cmp     ebp, esi
0x98D72B: jz      short loc_98D752
0x98D72D: cmp     ebp, 0FFFFFFFFh
0x98D730: jz      short loc_98D752
0x98D732: push    0; lpOverlapped
0x98D734: lea     eax, [esp+18h+NumberOfBytesWritten]
0x98D738: push    eax; lpNumberOfBytesWritten
0x98D739: lea     esi, ds:0B311ECh[edi*8]
0x98D740: push    dword ptr [esi]; Str
0x98D742: call    _strlen
0x98D747: pop     ecx
0x98D748: push    eax; nNumberOfBytesToWrite
0x98D749: push    dword ptr [esi]; lpBuffer
0x98D74B: push    ebp; hFile
0x98D74C: call    ds:WriteFile
0x98D752: pop     ebp
0x98D753: pop     edi
0x98D754: pop     esi
0x98D755: pop     ebx
0x98D756: pop     ecx
0x98D757: retn
