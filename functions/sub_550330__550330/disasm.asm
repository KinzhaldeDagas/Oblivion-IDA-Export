0x550330: push    ebx
0x550331: mov     ebx, ecx
0x550333: mov     eax, [ebx]
0x550335: mov     ecx, [esp+4+arg_0]
0x550339: cmp     [ecx], eax
0x55033B: push    esi
0x55033C: jnz     loc_55041B
0x550342: mov     esi, [ebx+4]
0x550345: cmp     [ecx+4], esi
0x550348: jnz     loc_55041B
0x55034E: test    eax, eax
0x550350: jz      loc_550414
0x550356: test    esi, esi
0x550358: jz      loc_550414
0x55035E: imul    esi, eax
0x550361: push    edi
0x550362: add     esi, esi
0x550364: push    0
0x550366: add     ecx, 8
0x550369: add     esi, esi
0x55036B: call    sub_54F7A0
0x550370: push    0
0x550372: lea     ecx, [ebx+8]
0x550375: mov     edi, eax
0x550377: call    sub_54F7A0
0x55037C: cmp     esi, 4
0x55037F: jb      short loc_550395
0x550381: mov     ecx, [eax]
0x550383: cmp     ecx, [edi]
0x550385: jnz     short loc_550399
0x550387: sub     esi, 4
0x55038A: add     edi, 4
0x55038D: add     eax, 4
0x550390: cmp     esi, 4
0x550393: jnb     short loc_550381
0x550395: test    esi, esi
0x550397: jz      short loc_550403
0x550399: movzx   edx, byte ptr [edi]
0x55039C: movzx   ecx, byte ptr [eax]
0x55039F: sub     ecx, edx
0x5503A1: jnz     short loc_5503E8
0x5503A3: sub     esi, 1
0x5503A6: add     edi, 1
0x5503A9: add     eax, 1
0x5503AC: test    esi, esi
0x5503AE: jz      short loc_550403
0x5503B0: movzx   edx, byte ptr [edi]
0x5503B3: movzx   ecx, byte ptr [eax]
0x5503B6: sub     ecx, edx
0x5503B8: jnz     short loc_5503E8
0x5503BA: sub     esi, 1
0x5503BD: add     edi, 1
0x5503C0: add     eax, 1
0x5503C3: test    esi, esi
0x5503C5: jz      short loc_550403
0x5503C7: movzx   edx, byte ptr [edi]
0x5503CA: movzx   ecx, byte ptr [eax]
0x5503CD: sub     ecx, edx
0x5503CF: jnz     short loc_5503E8
0x5503D1: sub     esi, 1
0x5503D4: add     edi, 1
0x5503D7: add     eax, 1
0x5503DA: test    esi, esi
0x5503DC: jz      short loc_550403
0x5503DE: movzx   edx, byte ptr [edi]
0x5503E1: movzx   ecx, byte ptr [eax]
0x5503E4: sub     ecx, edx
0x5503E6: jz      short loc_550403
0x5503E8: test    ecx, ecx
0x5503EA: mov     eax, 1
0x5503EF: jg      short loc_550405
0x5503F1: or      eax, 0FFFFFFFFh
0x5503F4: xor     ecx, ecx
0x5503F6: test    eax, eax
0x5503F8: pop     edi
0x5503F9: setz    cl
0x5503FC: pop     esi
0x5503FD: mov     al, cl
0x5503FF: pop     ebx
0x550400: retn    4
0x550403: xor     eax, eax
0x550405: xor     ecx, ecx
0x550407: test    eax, eax
0x550409: pop     edi
0x55040A: setz    cl
0x55040D: pop     esi
0x55040E: mov     al, cl
0x550410: pop     ebx
0x550411: retn    4
0x550414: pop     esi
0x550415: mov     al, 1
0x550417: pop     ebx
0x550418: retn    4
0x55041B: pop     esi
0x55041C: xor     al, al
0x55041E: pop     ebx
0x55041F: retn    4
