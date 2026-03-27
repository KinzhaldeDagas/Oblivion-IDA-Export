0x982FFC: push    ebp
0x982FFD: mov     ebp, esp
0x982FFF: push    ecx
0x983000: mov     eax, [eax+10h]
0x983003: push    ebx
0x983004: mov     ebx, [eax+8]
0x983007: push    esi
0x983008: xor     esi, esi
0x98300A: test    ebx, ebx
0x98300C: push    edi
0x98300D: mov     edi, [eax+0Ch]
0x983010: jbe     short loc_983039
0x983012: mov     eax, [edi+esi*4]
0x983015: mov     ecx, [ebp+arg_4]
0x983018: mov     [ebp+var_4], eax
0x98301B: mov     eax, [eax]
0x98301D: cmp     eax, ecx
0x98301F: jz      short loc_983065
0x983021: add     ecx, 8
0x983024: push    ecx; Str2
0x983025: add     eax, 8
0x983028: push    eax; Str1
0x983029: call    _strcmp
0x98302E: test    eax, eax
0x983030: pop     ecx
0x983031: pop     ecx
0x983032: jz      short loc_983065
0x983034: inc     esi
0x983035: cmp     esi, ebx
0x983037: jb      short loc_983012
0x983039: xor     eax, eax
0x98303B: pop     edi
0x98303C: pop     esi
0x98303D: pop     ebx
0x98303E: leave
0x98303F: retn
0x983040: mov     eax, [edi+esi*4]
0x983043: test    byte ptr [eax+14h], 4
0x983047: jnz     short loc_983039
0x983049: mov     eax, [eax]
0x98304B: mov     ecx, [ebp+arg_0]
0x98304E: cmp     eax, ecx
0x983050: jz      short loc_98306C
0x983052: add     ecx, 8
0x983055: push    ecx; Str2
0x983056: add     eax, 8
0x983059: push    eax; Str1
0x98305A: call    _strcmp
0x98305F: test    eax, eax
0x983061: pop     ecx
0x983062: pop     ecx
0x983063: jz      short loc_98306C
0x983065: inc     esi
0x983066: cmp     esi, ebx
0x983068: jb      short loc_983040
0x98306A: jmp     short loc_983039
0x98306C: mov     eax, [ebp+var_4]
0x98306F: jmp     short loc_98303B
