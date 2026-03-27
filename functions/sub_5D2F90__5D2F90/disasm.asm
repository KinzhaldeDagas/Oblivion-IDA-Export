0x5D2F90: sub     esp, 0Ch
0x5D2F93: push    ebx
0x5D2F94: mov     ebx, ecx
0x5D2F96: push    esi; a3
0x5D2F97: mov     esi, [ebx+48h]
0x5D2F9A: test    esi, esi
0x5D2F9C: push    edi; a3
0x5D2F9D: mov     edi, [ebx+38h]
0x5D2FA0: jz      loc_5D3056
0x5D2FA6: push    0FB5h
0x5D2FAB: mov     ecx, esi
0x5D2FAD: call    Tile_GetFloat
0x5D2FB2: call    Double_To_SInt32
0x5D2FB7: push    1; arg1
0x5D2FB9: push    0; canCreate
0x5D2FBB: mov     dword ptr [esp+20h+var_8], eax
0x5D2FBF: call    InterfaceManager_GetSingleton
0x5D2FC4: fld     dword ptr [eax+38h]
0x5D2FC7: call    Double_To_SInt32
0x5D2FCC: mov     ecx, eax
0x5D2FCE: mov     eax, 77777777h
0x5D2FD3: imul    ecx
0x5D2FD5: sub     edx, ecx
0x5D2FD7: sar     edx, 6
0x5D2FDA: mov     eax, edx
0x5D2FDC: shr     eax, 1Fh
0x5D2FDF: add     eax, edx
0x5D2FE1: mov     [esp+20h+var_C], eax
0x5D2FE5: add     esp, 4
0x5D2FE8: mov     ecx, edi; this
0x5D2FEA: fild    [esp+1Ch+var_C]
0x5D2FEE: fstp    [esp+1Ch+a2]; a3
0x5D2FF1: push    0FB7h; a2
0x5D2FF6: call    Tile_SetFloat
0x5D2FFB: fldz
0x5D2FFD: push    ecx
0x5D2FFE: fstp    [esp+1Ch+a2]; a3
0x5D3001: push    0FB7h; a2
0x5D3006: mov     ecx, edi; this
0x5D3008: call    Tile_SetFloat
0x5D300D: fild    dword ptr [esp+18h+var_8]
0x5D3011: push    0FB5h
0x5D3016: mov     ecx, esi
0x5D3018: fstp    [esp+1Ch+var_8]
0x5D301C: call    Tile_GetFloat
0x5D3021: fld     [esp+18h+var_8]
0x5D3025: fucompp
0x5D3027: fnstsw  ax
0x5D3029: test    ah, 44h
0x5D302C: jnp     short loc_5D3056
0x5D302E: mov     eax, [esp+18h+arg_4]
0x5D3032: mov     ecx, [esp+1Ch]
0x5D3036: mov     edx, [ebx]
0x5D3038: mov     edx, [edx+14h]
0x5D303B: push    eax
0x5D303C: push    ecx
0x5D303D: mov     ecx, ebx
0x5D303F: call    edx
0x5D3041: push    0
0x5D3043: push    1; arg1
0x5D3045: push    0; canCreate
0x5D3047: call    InterfaceManager_GetSingleton
0x5D304C: add     esp, 8
0x5D304F: mov     ecx, eax
0x5D3051: call    sub_57D730
0x5D3056: pop     edi
0x5D3057: pop     esi
0x5D3058: pop     ebx
0x5D3059: add     esp, 0Ch
0x5D305C: retn    8
