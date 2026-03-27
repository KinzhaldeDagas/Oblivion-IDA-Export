0x8AA8A0: push    ebx
0x8AA8A1: push    ebp
0x8AA8A2: mov     ebp, [esp+8+arg_0]
0x8AA8A6: push    ebp
0x8AA8A7: mov     ebx, ecx
0x8AA8A9: call    sub_715820
0x8AA8AE: test    al, al
0x8AA8B0: jz      short loc_8AA913
0x8AA8B2: mov     eax, [ebx+50h]
0x8AA8B5: cmp     eax, [ebp+50h]
0x8AA8B8: push    edi
0x8AA8B9: setz    al
0x8AA8BC: xor     edi, edi
0x8AA8BE: test    al, al
0x8AA8C0: jz      short loc_8AA912
0x8AA8C2: push    esi
0x8AA8C3: xor     esi, esi
0x8AA8C5: cmp     edi, [ebx+50h]
0x8AA8C8: jnb     short loc_8AA911
0x8AA8CA: mov     edx, [ebx+44h]
0x8AA8CD: mov     ecx, [ebp+44h]
0x8AA8D0: fld     dword ptr [edx+esi]
0x8AA8D3: fld     dword ptr [ecx+esi]
0x8AA8D6: add     edx, esi
0x8AA8D8: add     ecx, esi
0x8AA8DA: fucompp
0x8AA8DC: fnstsw  ax
0x8AA8DE: test    ah, 44h
0x8AA8E1: jp      short loc_8AA905
0x8AA8E3: fld     dword ptr [edx+4]
0x8AA8E6: fld     dword ptr [ecx+4]
0x8AA8E9: fucompp
0x8AA8EB: fnstsw  ax
0x8AA8ED: test    ah, 44h
0x8AA8F0: jp      short loc_8AA905
0x8AA8F2: fld     dword ptr [edx+8]
0x8AA8F5: fld     dword ptr [ecx+8]
0x8AA8F8: fucompp
0x8AA8FA: fnstsw  ax
0x8AA8FC: test    ah, 44h
0x8AA8FF: jp      short loc_8AA905
0x8AA901: mov     al, 1
0x8AA903: jmp     short loc_8AA907
0x8AA905: xor     al, al
0x8AA907: add     edi, 1
0x8AA90A: add     esi, 0Ch
0x8AA90D: test    al, al
0x8AA90F: jnz     short loc_8AA8C5
0x8AA911: pop     esi
0x8AA912: pop     edi
0x8AA913: pop     ebp
0x8AA914: pop     ebx
0x8AA915: retn    4
