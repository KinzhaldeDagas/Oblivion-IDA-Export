0x98FE3D: push    ebp
0x98FE3E: mov     ebp, esp
0x98FE40: sub     esp, 10h
0x98FE43: push    ebx
0x98FE44: push    esi
0x98FE45: push    edi; Src
0x98FE46: push    [ebp+arg_14]; struct localeinfo_struct *
0x98FE49: lea     ecx, [ebp+var_10]; this
0x98FE4C: mov     ebx, eax
0x98FE4E: call    ??0_LocaleUpdate@@QAE@PAUlocaleinfo_struct@@@Z
0x98FE53: xor     esi, esi
0x98FE55: cmp     ebx, esi
0x98FE57: jnz     short loc_98FE84
0x98FE59: call    __errno
0x98FE5E: push    16h
0x98FE60: pop     edi
0x98FE61: push    esi
0x98FE62: push    esi
0x98FE63: push    esi
0x98FE64: push    esi
0x98FE65: push    esi
0x98FE66: mov     [eax], edi
0x98FE68: call    __invalid_parameter
0x98FE6D: add     esp, 14h
0x98FE70: cmp     [ebp+var_4], 0
0x98FE74: jz      short loc_98FE7D
0x98FE76: mov     eax, [ebp+var_8]
0x98FE79: and     dword ptr [eax+70h], 0FFFFFFFDh
0x98FE7D: mov     eax, edi
0x98FE7F: jmp     loc_98FFA5
0x98FE84: cmp     [ebp+arg_0], esi
0x98FE87: jbe     short loc_98FE59
0x98FE89: cmp     [ebp+arg_4], esi
0x98FE8C: jle     short loc_98FE93
0x98FE8E: mov     eax, [ebp+arg_4]
0x98FE91: jmp     short loc_98FE95
0x98FE93: xor     eax, eax
0x98FE95: add     eax, 9
0x98FE98: cmp     [ebp+arg_0], eax
0x98FE9B: ja      short loc_98FEA6
0x98FE9D: call    __errno
0x98FEA2: push    22h ; '"'
0x98FEA4: jmp     short loc_98FE60
0x98FEA6: cmp     [ebp+arg_10], 0
0x98FEAA: jz      short loc_98FECA
0x98FEAC: mov     edx, [ebp+arg_C]
0x98FEAF: xor     eax, eax
0x98FEB1: cmp     [ebp+arg_4], esi
0x98FEB4: setnle  al
0x98FEB7: xor     ecx, ecx
0x98FEB9: cmp     dword ptr [edx], 2Dh ; '-'
0x98FEBC: setz    cl
0x98FEBF: mov     edi, eax
0x98FEC1: add     ecx, ebx
0x98FEC3: mov     eax, ecx
0x98FEC5: call    __shift
0x98FECA: mov     edi, [ebp+arg_C]
0x98FECD: cmp     dword ptr [edi], 2Dh ; '-'
0x98FED0: mov     esi, ebx
0x98FED2: jnz     short loc_98FEDA
0x98FED4: mov     byte ptr [ebx], 2Dh ; '-'
0x98FED7: lea     esi, [ebx+1]
0x98FEDA: cmp     [ebp+arg_4], 0
0x98FEDE: jle     short loc_98FEF8
0x98FEE0: lea     eax, [esi+1]
0x98FEE3: mov     cl, [eax]
0x98FEE5: mov     [esi], cl
0x98FEE7: mov     esi, eax
0x98FEE9: mov     eax, [ebp+var_10]
0x98FEEC: mov     eax, [eax+0BCh]
0x98FEF2: mov     eax, [eax]
0x98FEF4: mov     al, [eax]
0x98FEF6: mov     [esi], al
0x98FEF8: xor     eax, eax
0x98FEFA: cmp     [ebp+arg_10], al
0x98FEFD: setz    al
0x98FF00: add     eax, [ebp+arg_4]
0x98FF03: add     esi, eax
0x98FF05: cmp     [ebp+arg_0], 0FFFFFFFFh
0x98FF09: jnz     short loc_98FF10
0x98FF0B: or      ebx, 0FFFFFFFFh
0x98FF0E: jmp     short loc_98FF15
0x98FF10: sub     ebx, esi
0x98FF12: add     ebx, [ebp+arg_0]
0x98FF15: push    offset aE000
0x98FF1A: push    ebx; SizeInBytes
0x98FF1B: push    esi; Dst
0x98FF1C: call    _strcpy_s
0x98FF21: add     esp, 0Ch
0x98FF24: xor     ebx, ebx
0x98FF26: test    eax, eax
0x98FF28: jz      short loc_98FF37
0x98FF2A: push    ebx
0x98FF2B: push    ebx
0x98FF2C: push    ebx
0x98FF2D: push    ebx
0x98FF2E: push    ebx
0x98FF2F: call    __invoke_watson
0x98FF34: add     esp, 14h
0x98FF37: cmp     [ebp+arg_8], ebx
0x98FF3A: lea     ecx, [esi+2]
0x98FF3D: jz      short loc_98FF42
0x98FF3F: mov     byte ptr [esi], 45h ; 'E'
0x98FF42: mov     eax, [edi+0Ch]
0x98FF45: inc     esi
0x98FF46: cmp     byte ptr [eax], 30h ; '0'
0x98FF49: jz      short loc_98FF79
0x98FF4B: mov     eax, [edi+4]
0x98FF4E: dec     eax
0x98FF4F: jns     short loc_98FF56
0x98FF51: neg     eax
0x98FF53: mov     byte ptr [esi], 2Dh ; '-'
0x98FF56: inc     esi
0x98FF57: cmp     eax, 64h ; 'd'
0x98FF5A: jl      short loc_98FF66
0x98FF5C: cdq
0x98FF5D: push    64h ; 'd'
0x98FF5F: pop     edi
0x98FF60: idiv    edi
0x98FF62: add     [esi], al
0x98FF64: mov     eax, edx
0x98FF66: inc     esi
0x98FF67: cmp     eax, 0Ah
0x98FF6A: jl      short loc_98FF76
0x98FF6C: cdq
0x98FF6D: push    0Ah
0x98FF6F: pop     edi
0x98FF70: idiv    edi
0x98FF72: add     [esi], al
0x98FF74: mov     eax, edx
0x98FF76: add     [esi+1], al
0x98FF79: test    byte_BAA7BC, 1
0x98FF80: jz      short loc_98FF96
0x98FF82: cmp     byte ptr [ecx], 30h ; '0'
0x98FF85: jnz     short loc_98FF96
0x98FF87: push    3
0x98FF89: lea     eax, [ecx+1]
0x98FF8C: push    eax
0x98FF8D: push    ecx
0x98FF8E: call    unknown_libname_16
0x98FF93: add     esp, 0Ch
0x98FF96: cmp     [ebp+var_4], 0
0x98FF9A: jz      short loc_98FFA3
0x98FF9C: mov     eax, [ebp+var_8]
0x98FF9F: and     dword ptr [eax+70h], 0FFFFFFFDh
0x98FFA3: xor     eax, eax
0x98FFA5: pop     edi
0x98FFA6: pop     esi
0x98FFA7: pop     ebx
0x98FFA8: leave
0x98FFA9: retn
