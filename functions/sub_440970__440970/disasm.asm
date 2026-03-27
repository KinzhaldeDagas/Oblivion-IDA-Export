0x440970: sub     esp, 8
0x440973: push    ebx
0x440974: push    ebp
0x440975: mov     ebp, [esp+10h+arg_0]
0x440979: fld     dword ptr [ebp+0]
0x44097C: push    esi
0x44097D: fstp    [esp+14h+var_8]
0x440981: push    edi
0x440982: mov     esi, ecx
0x440984: fld     [esp+18h+var_8]
0x440988: fistp   [esp+18h+arg_0]
0x44098C: fld     dword ptr [ebp+4]
0x44098F: mov     edx, [esp+18h+arg_0]
0x440993: fstp    [esp+18h+var_4]
0x440997: fld     [esp+18h+var_4]
0x44099B: fistp   [esp+18h+var_8]
0x44099F: mov     ecx, [esp+18h+var_8]
0x4409A3: mov     eax, edx
0x4409A5: and     eax, 80000FFFh
0x4409AA: jns     short loc_4409B3
0x4409AC: dec     eax
0x4409AD: or      eax, 0FFFFF000h
0x4409B2: inc     eax
0x4409B3: jnz     short loc_4409C8
0x4409B5: fld     dword ptr [ebp+0]
0x4409B8: fild    [esp+18h+arg_0]
0x4409BC: fcompp
0x4409BE: fnstsw  ax
0x4409C0: test    ah, 41h
0x4409C3: jnz     short loc_4409C8
0x4409C5: add     edx, 0FFFFFFFFh
0x4409C8: mov     eax, ecx
0x4409CA: and     eax, 80000FFFh
0x4409CF: jns     short loc_4409D8
0x4409D1: dec     eax
0x4409D2: or      eax, 0FFFFF000h
0x4409D7: inc     eax
0x4409D8: jnz     short loc_4409ED
0x4409DA: fld     dword ptr [ebp+4]
0x4409DD: fild    [esp+18h+var_8]
0x4409E1: fcompp
0x4409E3: fnstsw  ax
0x4409E5: test    ah, 41h
0x4409E8: jnz     short loc_4409ED
0x4409EA: add     ecx, 0FFFFFFFFh
0x4409ED: mov     edi, edx
0x4409EF: and     edi, 8000007Fh
0x4409F5: jns     short loc_4409FC
0x4409F7: dec     edi
0x4409F8: or      edi, 0FFFFFF80h
0x4409FB: inc     edi
0x4409FC: mov     eax, edx
0x4409FE: sub     eax, edi
0x440A00: mov     ebx, ecx
0x440A02: and     ebx, 8000007Fh
0x440A08: mov     [esp+18h+arg_0], eax
0x440A0C: jns     short loc_440A13
0x440A0E: dec     ebx
0x440A0F: or      ebx, 0FFFFFF80h
0x440A12: inc     ebx
0x440A13: mov     edi, ecx
0x440A15: sub     edi, ebx
0x440A17: cmp     eax, ds:0B05198h
0x440A1D: mov     [esp+18h+var_4], edi
0x440A21: jnz     short loc_440A32
0x440A23: mov     eax, ds:0B33A5Ch
0x440A28: pop     edi
0x440A29: pop     esi
0x440A2A: pop     ebp
0x440A2B: pop     ebx
0x440A2C: add     esp, 8
0x440A2F: retn    4
0x440A32: sar     ecx, 0Ch
0x440A35: mov     ebx, ecx
0x440A37: mov     ecx, [esi+30h]; this
0x440A3A: sar     edx, 0Ch
0x440A3D: test    ecx, ecx
0x440A3F: mov     edi, edx
0x440A41: jz      short loc_440A58
0x440A43: call    TESObjectCELL_GetXCoordinate
0x440A48: cmp     eax, edi
0x440A4A: jnz     short loc_440A58
0x440A4C: mov     ecx, [esi+30h]; this
0x440A4F: call    TESObjectCELL_GetYCoordinate
0x440A54: cmp     eax, ebx
0x440A56: jz      short loc_440A64
0x440A58: push    ebx; a3
0x440A59: push    edi; a2
0x440A5A: mov     ecx, esi; this
0x440A5C: call    TES_GetCellFromCoords
0x440A61: mov     [esi+30h], eax
0x440A64: mov     ecx, [esi+30h]; this
0x440A67: test    ecx, ecx
0x440A69: jz      short loc_440AAB
0x440A6B: call    TESObjectCELL_IsInterior
0x440A70: test    al, al
0x440A72: jnz     short loc_440AAB
0x440A74: mov     ecx, [esi+30h]; this
0x440A77: call    sub_4CE3C0
0x440A7C: push    ebp
0x440A7D: mov     ecx, eax
0x440A7F: call    sub_4C5AA0
0x440A84: test    eax, eax
0x440A86: jz      short loc_440AAD
0x440A88: mov     ecx, [esp+18h+arg_0]
0x440A8C: mov     edx, [esp+18h+var_4]
0x440A90: pop     edi
0x440A91: pop     esi
0x440A92: pop     ebp
0x440A93: mov     ds:0B33A5Ch, eax
0x440A98: mov     ds:0B05198h, ecx
0x440A9E: mov     ds:0B05194h, edx
0x440AA4: pop     ebx
0x440AA5: add     esp, 8
0x440AA8: retn    4
0x440AAB: xor     eax, eax
0x440AAD: pop     edi
0x440AAE: pop     esi
0x440AAF: pop     ebp
0x440AB0: pop     ebx
0x440AB1: add     esp, 8
0x440AB4: retn    4
