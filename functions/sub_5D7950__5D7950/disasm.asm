0x5D7950: push    ebp
0x5D7951: mov     ebp, esp
0x5D7953: and     esp, 0FFFFFFF8h
0x5D7956: sub     esp, 14h
0x5D7959: push    ebx; a3
0x5D795A: push    esi; a3
0x5D795B: mov     esi, [ebp+arg_0]
0x5D795E: cmp     esi, 0Ah
0x5D7961: push    edi; a3
0x5D7962: mov     ebx, ecx
0x5D7964: jz      short loc_5D796F
0x5D7966: cmp     esi, 0Ch
0x5D7969: jnz     loc_5D7B70
0x5D796F: push    1; arg1
0x5D7971: push    0; canCreate
0x5D7973: call    InterfaceManager_GetSingleton
0x5D7978: add     esp, 8
0x5D797B: cmp     esi, 0Ah
0x5D797E: mov     edi, eax
0x5D7980: jnz     short loc_5D7987
0x5D7982: mov     esi, [ebx+38h]
0x5D7985: jmp     short loc_5D798A
0x5D7987: mov     esi, [ebx+40h]
0x5D798A: push    0FB0h
0x5D798F: mov     ecx, esi
0x5D7991: call    Tile_GetFloat
0x5D7996: fstp    [esp+20h+var_8]
0x5D799A: push    0FAFh
0x5D799F: mov     ecx, esi
0x5D79A1: call    Tile_GetFloat
0x5D79A6: fstp    [esp+20h+var_4]
0x5D79AA: call    sub_57D7F0
0x5D79AF: fstp    [esp+20h+var_10]
0x5D79B3: call    sub_57D7F0
0x5D79B8: fmul    qword ptr ds:0A2FAA0h
0x5D79BE: fadd    dword ptr [edi+28h]
0x5D79C1: fsubr   [esp+20h+var_10]
0x5D79C5: call    Double_To_SInt32
0x5D79CA: mov     dword ptr [esp+20h+var_10], eax
0x5D79CE: fild    dword ptr [esp+20h+var_10]
0x5D79D2: mov     ecx, esi
0x5D79D4: fstp    dword ptr [esp+20h+var_10]
0x5D79D8: call    sub_588CF0
0x5D79DD: fsubr   dword ptr [esp+20h+var_10]
0x5D79E1: push    0FCAh
0x5D79E6: mov     ecx, esi
0x5D79E8: fstp    [esp+24h+var_10]
0x5D79EC: call    Tile_GetFloat
0x5D79F1: fdivr   [esp+20h+var_10]
0x5D79F5: fcomp   qword ptr ds:0A2FC68h
0x5D79FB: fnstsw  ax
0x5D79FD: test    ah, 5
0x5D7A00: jnp     short loc_5D7A60
0x5D7A02: call    sub_57D7F0
0x5D7A07: fstp    [esp+20h+var_10]
0x5D7A0B: call    sub_57D7F0
0x5D7A10: fmul    qword ptr ds:0A2FAA0h
0x5D7A16: fadd    dword ptr [edi+28h]
0x5D7A19: fsubr   [esp+20h+var_10]
0x5D7A1D: call    Double_To_SInt32
0x5D7A22: mov     dword ptr [esp+20h+var_10], eax
0x5D7A26: fild    dword ptr [esp+20h+var_10]
0x5D7A2A: mov     ecx, esi
0x5D7A2C: fstp    dword ptr [esp+20h+var_10]
0x5D7A30: call    sub_588CF0
0x5D7A35: fsubr   dword ptr [esp+20h+var_10]
0x5D7A39: push    0FCAh
0x5D7A3E: mov     ecx, esi
0x5D7A40: fstp    [esp+24h+var_10]
0x5D7A44: call    Tile_GetFloat
0x5D7A49: fdivr   [esp+20h+var_10]
0x5D7A4D: fld1
0x5D7A4F: fcom    st(1)
0x5D7A51: fnstsw  ax
0x5D7A53: fstp    st(1)
0x5D7A55: test    ah, 41h
0x5D7A58: jnz     loc_5D7B05
0x5D7A5E: fstp    st
0x5D7A60: call    sub_57D7F0
0x5D7A65: fstp    [esp+20h+var_10]
0x5D7A69: call    sub_57D7F0
0x5D7A6E: fmul    qword ptr ds:0A2FAA0h
0x5D7A74: fadd    dword ptr [edi+28h]
0x5D7A77: fsubr   [esp+20h+var_10]
0x5D7A7B: call    Double_To_SInt32
0x5D7A80: mov     dword ptr [esp+20h+var_10], eax
0x5D7A84: fild    dword ptr [esp+20h+var_10]
0x5D7A88: mov     ecx, esi
0x5D7A8A: fstp    dword ptr [esp+20h+var_10]
0x5D7A8E: call    sub_588CF0
0x5D7A93: fsubr   dword ptr [esp+20h+var_10]
0x5D7A97: push    0FCAh
0x5D7A9C: mov     ecx, esi
0x5D7A9E: fstp    [esp+24h+var_10]
0x5D7AA2: call    Tile_GetFloat
0x5D7AA7: fdivr   [esp+20h+var_10]
0x5D7AAB: fldz
0x5D7AAD: fcom    st(1)
0x5D7AAF: fnstsw  ax
0x5D7AB1: fstp    st(1)
0x5D7AB3: test    ah, 41h
0x5D7AB6: jz      short loc_5D7B05
0x5D7AB8: fstp    st
0x5D7ABA: call    sub_57D7F0
0x5D7ABF: fstp    [esp+20h+var_10]
0x5D7AC3: call    sub_57D7F0
0x5D7AC8: fmul    qword ptr ds:0A2FAA0h
0x5D7ACE: fadd    dword ptr [edi+28h]
0x5D7AD1: fsubr   [esp+20h+var_10]
0x5D7AD5: call    Double_To_SInt32
0x5D7ADA: mov     dword ptr [esp+20h+var_10], eax
0x5D7ADE: fild    dword ptr [esp+20h+var_10]
0x5D7AE2: mov     ecx, esi
0x5D7AE4: fstp    dword ptr [esp+20h+var_10]
0x5D7AE8: call    sub_588CF0
0x5D7AED: fsubr   dword ptr [esp+20h+var_10]
0x5D7AF1: push    0FCAh
0x5D7AF6: mov     ecx, esi
0x5D7AF8: fstp    [esp+24h+var_10]
0x5D7AFC: call    Tile_GetFloat
0x5D7B01: fdivr   [esp+20h+var_10]
0x5D7B05: push    ecx
0x5D7B06: fstp    [esp+24h+var_10]
0x5D7B0A: fld     dword ptr ds:0A6B1F0h
0x5D7B10: mov     ecx, esi; this
0x5D7B12: fstp    [esp+24h+a2]; a3
0x5D7B15: push    0FB3h; a2
0x5D7B1A: call    Tile_SetFloat
0x5D7B1F: fld     [esp+20h+var_8]
0x5D7B23: fld     [esp+20h+var_4]
0x5D7B27: fld     st
0x5D7B29: fsubp   st(2), st
0x5D7B2B: fxch    st(1)
0x5D7B2D: fmul    [esp+20h+var_10]
0x5D7B31: faddp   st(1), st
0x5D7B33: fadd    qword ptr ds:0A2FAA0h
0x5D7B39: fstp    [esp+20h+var_4]
0x5D7B3D: fld     [esp+20h+var_4]
0x5D7B41: call    Double_To_SInt32
0x5D7B46: mov     [esp+20h+var_4], eax
0x5D7B4A: fild    [esp+20h+var_4]
0x5D7B4E: push    ecx
0x5D7B4F: mov     ecx, esi; this
0x5D7B51: fstp    [esp+24h+a2]; a3
0x5D7B54: push    0FB3h; a2
0x5D7B59: call    Tile_SetFloat
0x5D7B5E: fldz
0x5D7B60: push    ecx
0x5D7B61: fstp    [esp+24h+a2]; a3
0x5D7B64: push    0FB3h; a2
0x5D7B69: mov     ecx, esi; this
0x5D7B6B: call    Tile_SetFloat
0x5D7B70: pop     edi
0x5D7B71: pop     esi
0x5D7B72: pop     ebx
0x5D7B73: mov     esp, ebp
0x5D7B75: pop     ebp
0x5D7B76: retn    8
