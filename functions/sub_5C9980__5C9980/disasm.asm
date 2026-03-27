0x5C9980: push    0FFFFFFFFh
0x5C9982: push    offset SEH_5C9980
0x5C9987: mov     eax, large fs:0
0x5C998D: push    eax
0x5C998E: sub     esp, 0Ch
0x5C9991: push    ebx
0x5C9992: push    esi
0x5C9993: mov     eax, ds:0B30AACh
0x5C9998: xor     eax, esp
0x5C999A: push    eax
0x5C999B: lea     eax, [esp+24h+var_C]
0x5C999F: mov     large fs:0, eax
0x5C99A5: mov     esi, ecx
0x5C99A7: call    sub_5C3E10
0x5C99AC: test    al, al
0x5C99AE: jz      loc_5C9A9C
0x5C99B4: mov     eax, ds:0B38F90h
0x5C99B9: push    0FAEh
0x5C99BE: sub     esp, 8
0x5C99C1: mov     ecx, esp; this
0x5C99C3: xor     ebx, ebx
0x5C99C5: mov     [esp+30h+var_18], esp
0x5C99C9: push    ebx; a3
0x5C99CA: push    eax; a2
0x5C99CB: mov     [ecx], ebx
0x5C99CD: mov     [ecx+4], bx
0x5C99D1: mov     [ecx+6], bx
0x5C99D5: call    BSStringT_Set
0x5C99DA: mov     eax, ds:0B38F70h
0x5C99DF: sub     esp, 8
0x5C99E2: mov     ecx, esp; this
0x5C99E4: mov     dword ptr [esp+38h+var_14], esp
0x5C99E8: push    ebx; a3
0x5C99E9: push    eax; a2
0x5C99EA: mov     [esp+40h+var_4], ebx
0x5C99EE: mov     [ecx], ebx
0x5C99F0: mov     [ecx+4], bx
0x5C99F4: mov     [ecx+6], bx
0x5C99F8: call    BSStringT_Set
0x5C99FD: mov     ecx, esi
0x5C99FF: mov     [esp+38h+var_4], 0FFFFFFFFh
0x5C9A07: call    sub_5C3440
0x5C9A0C: fild    dword ptr [esi+87Ch]
0x5C9A12: mov     ecx, eax
0x5C9A14: fstp    [esp+28h+var_14]
0x5C9A18: call    Tile_GetFloat
0x5C9A1D: fcomp   [esp+24h+var_14]
0x5C9A21: fnstsw  ax
0x5C9A23: test    ah, 44h
0x5C9A26: jnp     short loc_5C9A8F
0x5C9A28: fild    dword ptr [esi+87Ch]
0x5C9A2E: mov     eax, ds:0B38F90h
0x5C9A33: sub     esp, 0Ch
0x5C9A36: mov     ecx, esp; this
0x5C9A38: fstp    [esp+30h+var_28]; float
0x5C9A3C: mov     dword ptr [esp+30h+var_14], esp
0x5C9A40: push    ebx; a3
0x5C9A41: push    eax; a2
0x5C9A42: mov     [ecx], ebx
0x5C9A44: mov     [ecx+4], bx
0x5C9A48: mov     [ecx+6], bx
0x5C9A4C: call    BSStringT_Set
0x5C9A51: mov     eax, ds:0B38F70h
0x5C9A56: sub     esp, 8
0x5C9A59: mov     ecx, esp; this
0x5C9A5B: mov     [esp+38h+var_18], esp
0x5C9A5F: push    ebx; a3
0x5C9A60: push    eax; a2
0x5C9A61: mov     [esp+40h+var_4], 1
0x5C9A69: mov     [ecx], ebx
0x5C9A6B: mov     [ecx+4], bx
0x5C9A6F: mov     [ecx+6], bx
0x5C9A73: call    BSStringT_Set
0x5C9A78: mov     ecx, esi
0x5C9A7A: mov     [esp+38h+var_4], 0FFFFFFFFh
0x5C9A82: call    sub_5C3440
0x5C9A87: push    eax; int
0x5C9A88: mov     ecx, esi
0x5C9A8A: call    sub_5C2B50
0x5C9A8F: cmp     [esp+24h+arg_0], bl
0x5C9A93: jz      short loc_5C9A9C
0x5C9A95: mov     ecx, esi
0x5C9A97: call    sub_5C91E0
0x5C9A9C: mov     ecx, [esp+24h+var_C]
0x5C9AA0: mov     large fs:0, ecx
0x5C9AA7: pop     ecx
0x5C9AA8: pop     esi
0x5C9AA9: pop     ebx
0x5C9AAA: add     esp, 18h
0x5C9AAD: retn    4
