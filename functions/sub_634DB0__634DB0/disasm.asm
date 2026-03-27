0x634DB0: mov     eax, ds:0B333C4h
0x634DB5: sub     esp, 8
0x634DB8: push    esi
0x634DB9: push    edi
0x634DBA: mov     edi, [esp+10h+arg_0]
0x634DBE: push    0
0x634DC0: mov     esi, ecx
0x634DC2: push    eax
0x634DC3: mov     ecx, edi
0x634DC5: call    TesObjectREF_GetDistance
0x634DCA: fld     dword ptr ds:0B36CC8h
0x634DD0: fcompp
0x634DD2: fnstsw  ax
0x634DD4: test    ah, 5
0x634DD7: jnp     loc_634F58
0x634DDD: mov     edx, [esi]
0x634DDF: mov     eax, [edx+184h]
0x634DE5: push    ebx
0x634DE6: push    ebp
0x634DE7: mov     ecx, esi
0x634DE9: call    eax
0x634DEB: mov     edx, [edi]
0x634DED: mov     ebp, eax
0x634DEF: mov     eax, [edx+164h]
0x634DF5: mov     ecx, edi
0x634DF7: call    eax
0x634DF9: mov     ebx, eax
0x634DFB: test    ebx, ebx
0x634DFD: jz      loc_634F56
0x634E03: mov     ecx, ebx
0x634E05: call    sub_472EA0
0x634E0A: test    al, al
0x634E0C: jz      loc_634F56
0x634E12: mov     ecx, edi
0x634E14: call    sub_5E6FA0
0x634E19: test    al, al
0x634E1B: jnz     loc_634F56
0x634E21: mov     ecx, edi
0x634E23: call    sub_5E0F30
0x634E28: test    al, al
0x634E2A: jnz     loc_634F56
0x634E30: mov     edx, [edi]
0x634E32: mov     eax, [edx+1A0h]
0x634E38: mov     ecx, edi
0x634E3A: call    eax
0x634E3C: test    al, al
0x634E3E: jnz     loc_634F56
0x634E44: push    0
0x634E46: mov     ecx, ebx
0x634E48: call    sub_4706E0
0x634E4D: test    eax, eax
0x634E4F: jz      short loc_634E5D
0x634E51: mov     ecx, [eax+68h]
0x634E54: call    sub_51AF00
0x634E59: test    al, al
0x634E5B: jnz     short loc_634E9A
0x634E5D: cmp     edi, ds:0B333C4h
0x634E63: jz      loc_634F56
0x634E69: test    ebp, ebp
0x634E6B: jz      loc_634F56
0x634E71: mov     ebx, [ebp+18h]
0x634E74: cmp     ebx, 0FFFFFFFFh
0x634E77: jz      loc_634F56
0x634E7D: mov     edx, [esi]
0x634E7F: mov     eax, [edx+180h]
0x634E85: mov     ecx, esi
0x634E87: call    eax
0x634E89: mov     ecx, ds:0B152B0h[ebx*4]
0x634E90: cmp     dword ptr [ecx+eax*4], 1
0x634E94: jnz     loc_634F56
0x634E9A: mov     edx, [esi]
0x634E9C: mov     eax, [edx+220h]
0x634EA2: mov     ecx, esi
0x634EA4: call    eax
0x634EA6: fstp    [esp+14h+arg_4]
0x634EAA: fldz
0x634EAC: fcomp   [esp+14h+arg_4]
0x634EB0: fnstsw  ax
0x634EB2: test    ah, 41h
0x634EB5: jnz     short loc_634F34
0x634EB7: mov     ecx, edi
0x634EB9: call    sub_5E1F90
0x634EBE: push    eax
0x634EBF: call    sub_546770
0x634EC4: fcomp   dword ptr ds:0A2FAA8h
0x634ECA: add     esp, 4
0x634ECD: fnstsw  ax
0x634ECF: test    ah, 44h
0x634ED2: jnp     short loc_634F34
0x634ED4: mov     edx, [esi]
0x634ED6: mov     eax, [edx+48h]
0x634ED9: push    edi
0x634EDA: mov     ecx, esi
0x634EDC: call    eax
0x634EDE: mov     ebx, [esi]
0x634EE0: mov     ecx, edi
0x634EE2: call    sub_5E1F90
0x634EE7: push    eax
0x634EE8: call    sub_546770
0x634EED: fstp    [esp+1Ch+var_C+4]
0x634EF1: push    0; Seed
0x634EF3: call    GetRandomLargeInteger?
0x634EF8: cdq
0x634EF9: mov     ecx, 1388h
0x634EFE: idiv    ecx
0x634F00: add     esp, 4
0x634F03: mov     ecx, esi
0x634F05: mov     [esp+1Ch+arg_0], edx
0x634F09: fild    [esp+1Ch+arg_0]
0x634F0D: mov     edx, [ebx+224h]
0x634F13: fmul    qword ptr ds:0A30E40h
0x634F19: fadd    [esp+1Ch+var_C+4]
0x634F1D: fstp    [esp+1Ch+arg_0]
0x634F21: fld     [esp+1Ch+arg_0]
0x634F25: fstp    [esp+1Ch+var_1C]
0x634F28: call    edx
0x634F2A: pop     ebp
0x634F2B: pop     ebx
0x634F2C: pop     edi
0x634F2D: pop     esi
0x634F2E: add     esp, 8
0x634F31: retn    4
0x634F34: fld     [esp+14h+arg_4]
0x634F38: mov     eax, [esi]
0x634F3A: fsub    dword ptr ds:0B33E9Ch
0x634F40: mov     edx, [eax+224h]
0x634F46: push    ecx
0x634F47: mov     ecx, esi
0x634F49: fstp    [esp+18h+arg_4]
0x634F4D: fld     [esp+18h+arg_4]
0x634F51: fstp    [esp+18h+var_18]
0x634F54: call    edx
0x634F56: pop     ebp
0x634F57: pop     ebx
0x634F58: pop     edi
0x634F59: pop     esi
0x634F5A: add     esp, 8
0x634F5D: retn    4
