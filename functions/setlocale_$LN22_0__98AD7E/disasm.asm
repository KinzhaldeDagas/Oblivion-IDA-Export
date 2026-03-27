0x98AD7E: push    dword ptr [ebp+8]; int
0x98AD81: mov     ecx, [ebp+0Ch]; Str
0x98AD84: mov     edx, edi
0x98AD86: call    __setlocale_nolock
0x98AD8B: pop     ecx
0x98AD8C: mov     [ebp-20h], eax
0x98AD8F: cmp     eax, ebx
0x98AD91: jz      loc_98AE3B
0x98AD97: cmp     [ebp+0Ch], ebx
0x98AD9A: jz      short loc_98ADB9
0x98AD9C: push    offset aC_1
0x98ADA1: push    dword ptr [ebp+0Ch]; Str1
0x98ADA4: call    _strcmp
0x98ADA9: pop     ecx
0x98ADAA: pop     ecx
0x98ADAB: test    eax, eax
0x98ADAD: jz      short loc_98ADB9
0x98ADAF: mov     dword_BA9E10, 1
0x98ADB9: push    0Ch
0x98ADBB: call    __lock
0x98ADC0: pop     ecx
0x98ADC1: mov     dword ptr [ebp-4], 2
0x98ADC8: lea     ebx, [esi+6Ch]
0x98ADCB: mov     eax, ebx
0x98ADCD: call    __updatetlocinfoEx_nolock
0x98ADD2: push    edi; lpAddend
0x98ADD3: call    ___removelocaleref
0x98ADD8: pop     ecx
0x98ADD9: test    byte ptr [esi+70h], 2
0x98ADDD: jnz     short loc_98AE11
0x98ADDF: test    byte ptr dword_B318B0, 1
0x98ADE6: jnz     short loc_98AE11
0x98ADE8: mov     edi, [ebx]
0x98ADEA: mov     eax, offset off_B31998
0x98ADEF: call    __updatetlocinfoEx_nolock
0x98ADF4: push    18h; Size
0x98ADF6: mov     eax, off_B31998
0x98ADFB: add     eax, 0Ch
0x98ADFE: push    eax; Src
0x98ADFF: push    offset unk_BAA620; Dst
0x98AE04: call    _memcpy
0x98AE09: add     esp, 0Ch
0x98AE0C: call    _sync_legacy_variables_lk
0x98AE11: and     dword ptr [ebp-4], 0
0x98AE15: call    _setlocale___$LN25_0
0x98AE1A: jmp     short _setlocale___$LN26_0
