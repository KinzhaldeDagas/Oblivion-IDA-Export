0x980FDF: push    ebp
0x980FE0: mov     ebp, esp
0x980FE2: push    ecx
0x980FE3: push    ebx
0x980FE4: cld
0x980FE5: mov     eax, [ebp+TargetFrame]
0x980FE8: mov     ecx, [eax+8]
0x980FEB: xor     ecx, [ebp+TargetFrame]
0x980FEE: call    @__security_check_cookie@4
0x980FF3: mov     eax, [ebp+ExceptionRecord]
0x980FF6: mov     eax, [eax+4]
0x980FF9: and     eax, 66h
0x980FFC: jz      short loc_98100F
0x980FFE: mov     eax, [ebp+TargetFrame]
0x981001: mov     dword ptr [eax+24h], 1
0x981008: xor     eax, eax
0x98100A: inc     eax
0x98100B: jmp     short loc_981079
0x98100D: jmp     short loc_981079
0x98100F: push    1
0x981011: mov     eax, [ebp+TargetFrame]
0x981014: push    dword ptr [eax+18h]
0x981017: mov     eax, [ebp+TargetFrame]
0x98101A: push    dword ptr [eax+14h]
0x98101D: mov     eax, [ebp+TargetFrame]
0x981020: push    dword ptr [eax+0Ch]
0x981023: push    0
0x981025: push    [ebp+arg_8]
0x981028: mov     eax, [ebp+TargetFrame]
0x98102B: push    dword ptr [eax+10h]
0x98102E: push    [ebp+ExceptionRecord]
0x981031: call    ___InternalCxxFrameHandler
0x981036: add     esp, 20h
0x981039: mov     eax, [ebp+TargetFrame]
0x98103C: cmp     dword ptr [eax+24h], 0
0x981040: jnz     short loc_98104D
0x981042: push    [ebp+ExceptionRecord]; ExceptionRecord
0x981045: push    [ebp+TargetFrame]; TargetFrame
0x981048: call    unknown_libname_8
0x98104D: push    0
0x98104F: push    0
0x981051: push    0
0x981053: push    0
0x981055: push    0
0x981057: lea     eax, [ebp+var_4]
0x98105A: push    eax
0x98105B: push    123h
0x981060: call    unknown_libname_10
0x981065: add     esp, 1Ch
0x981068: mov     eax, [ebp+var_4]
0x98106B: mov     ebx, [ebp+TargetFrame]
0x98106E: mov     esp, [ebx+1Ch]
0x981071: mov     ebp, [ebx+20h]
0x981074: jmp     eax
0x981076: xor     eax, eax
0x981078: inc     eax
0x981079: pop     ebx
0x98107A: leave
0x98107B: retn
