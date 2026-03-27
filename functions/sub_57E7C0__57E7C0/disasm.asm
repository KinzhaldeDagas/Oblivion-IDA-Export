0x57E7C0: push    ebp
0x57E7C1: mov     ebp, esp
0x57E7C3: and     esp, 0FFFFFFF8h
0x57E7C6: mov     eax, ds:0B33398h
0x57E7CB: sub     esp, 30h
0x57E7CE: push    esi
0x57E7CF: push    edi; a3
0x57E7D0: mov     edi, [eax+20h]
0x57E7D3: test    byte ptr [edi], 8
0x57E7D6: mov     esi, ecx
0x57E7D8: jz      short loc_57E7E7
0x57E7DA: cmp     byte ptr ds:0B06C74h, 0
0x57E7E1: jz      loc_57EA19
0x57E7E7: mov     ecx, [esi+1Ch]
0x57E7EA: fld     dword ptr ds:0A379B4h
0x57E7F0: mov     eax, [ecx+24h]
0x57E7F3: and     word ptr [eax+18h], 0FFFEh
0x57E7F9: push    ecx
0x57E7FA: mov     ecx, [esi+1Ch]; this
0x57E7FD: fstp    [esp+3Ch+var_3C]; a3
0x57E800: push    0FA1h; a2
0x57E805: call    Tile_SetFloat
0x57E80A: push    1; a2
0x57E80C: mov     ecx, edi; this
0x57E80E: call    InputGlobals__GetMouseAxisMovement
0x57E813: push    2; a2
0x57E815: mov     ecx, edi; this
0x57E817: mov     dword ptr [esp+3Ch+var_30], eax
0x57E81B: call    InputGlobals__GetMouseAxisMovement
0x57E820: mov     edi, [esi+1Ch]
0x57E823: mov     [esp+14h], eax
0x57E827: mov     eax, [edi+24h]
0x57E82A: mov     edx, [eax+54h]
0x57E82D: mov     ecx, [eax+58h]
0x57E830: mov     [esp+2Ch], edx
0x57E834: mov     edx, [eax+5Ch]
0x57E837: mov     [esp+38h+var_8], ecx
0x57E83B: mov     [esp+38h+var_4], edx
0x57E83F: call    sub_57E330
0x57E844: fsub    qword ptr ds:0A3D0C0h
0x57E84A: fstp    [esp+38h+var_20]
0x57E84E: call    sub_57D7A0
0x57E853: fidiv   dword ptr ds:0B06C4Ch
0x57E859: fimul   dword ptr [esp+38h+var_30]
0x57E85D: fadd    dword ptr [esp+2Ch]
0x57E861: fst     [esp+38h+var_18]
0x57E865: fld     [esp+38h+var_20]
0x57E869: fcom    st(1)
0x57E86B: fnstsw  ax
0x57E86D: test    ah, 5
0x57E870: jp      short loc_57E876
0x57E872: fstp    st(1)
0x57E874: jmp     short loc_57E878
0x57E876: fstp    st
0x57E878: fstp    [esp+38h+var_30]
0x57E87C: call    sub_57E2D0
0x57E881: fsub    qword ptr ds:0A3D0C0h
0x57E887: fld     [esp+38h+var_30]
0x57E88B: fcomp   st(1)
0x57E88D: fnstsw  ax
0x57E88F: test    ah, 5
0x57E892: jnp     short loc_57E8AD
0x57E894: fstp    st
0x57E896: fld     [esp+38h+var_18]
0x57E89A: fld     [esp+38h+var_20]
0x57E89E: fcom    st(1)
0x57E8A0: fnstsw  ax
0x57E8A2: test    ah, 5
0x57E8A5: jp      short loc_57E8AB
0x57E8A7: fstp    st(1)
0x57E8A9: jmp     short loc_57E8AD
0x57E8AB: fstp    st
0x57E8AD: push    0FABh
0x57E8B2: fstp    dword ptr [esp+30h]
0x57E8B6: mov     ecx, edi
0x57E8B8: call    Tile_GetFloat
0x57E8BD: fmul    qword ptr ds:0A68FD0h
0x57E8C3: fstp    [esp+38h+var_8]
0x57E8C7: call    sub_57E3F0
0x57E8CC: fadd    qword ptr ds:0A2F928h
0x57E8D2: fstp    [esp+38h+var_30]
0x57E8D6: fld     [esp+38h+var_4]
0x57E8DA: fstp    [esp+38h+var_18]
0x57E8DE: call    sub_57D7F0
0x57E8E3: fidiv   dword ptr ds:0B06C50h
0x57E8E9: fimul   dword ptr [esp+14h]
0x57E8ED: fsubr   [esp+38h+var_18]
0x57E8F1: fst     [esp+38h+var_18]
0x57E8F5: fld     [esp+38h+var_30]
0x57E8F9: fcom    st(1)
0x57E8FB: fnstsw  ax
0x57E8FD: test    ah, 5
0x57E900: jp      short loc_57E906
0x57E902: fstp    st(1)
0x57E904: jmp     short loc_57E908
0x57E906: fstp    st
0x57E908: fstp    [esp+38h+var_20]
0x57E90C: call    sub_57E390
0x57E911: fadd    qword ptr ds:0A2F928h
0x57E917: fld     [esp+38h+var_20]
0x57E91B: fcomp   st(1)
0x57E91D: fnstsw  ax
0x57E91F: test    ah, 5
0x57E922: jnp     short loc_57E93D
0x57E924: fstp    st
0x57E926: fld     [esp+38h+var_18]
0x57E92A: fld     [esp+38h+var_30]
0x57E92E: fcom    st(1)
0x57E930: fnstsw  ax
0x57E932: test    ah, 5
0x57E935: jp      short loc_57E93B
0x57E937: fstp    st(1)
0x57E939: jmp     short loc_57E93D
0x57E93B: fstp    st
0x57E93D: mov     eax, [esi+1Ch]
0x57E940: fstp    [esp+38h+var_4]
0x57E944: mov     eax, [eax+24h]
0x57E947: mov     ecx, [esp+2Ch]
0x57E94B: mov     edx, [esp+38h+var_8]
0x57E94F: mov     edi, [esp+38h+var_4]
0x57E953: add     eax, 54h ; 'T'
0x57E956: mov     [eax], ecx
0x57E958: mov     [eax+4], edx
0x57E95B: mov     [eax+8], edi
0x57E95E: fld     dword ptr [esi+20h]
0x57E961: fld     dword ptr [esp+2Ch]
0x57E965: fucompp
0x57E967: fnstsw  ax
0x57E969: test    ah, 44h
0x57E96C: jp      short loc_57E982
0x57E96E: fld     dword ptr [esi+28h]
0x57E971: fld     [esp+38h+var_4]
0x57E975: fucompp
0x57E977: fnstsw  ax
0x57E979: test    ah, 44h
0x57E97C: jnp     loc_57EA06
0x57E982: mov     [esi+20h], ecx
0x57E985: mov     [esi+24h], edx
0x57E988: mov     [esi+28h], edi
0x57E98B: mov     byte ptr [esi+0B9h], 1
0x57E992: fild    dword ptr ds:0B06C4Ch
0x57E998: fstp    dword ptr [esp+38h+var_30]
0x57E99C: fld     dword ptr [esp+38h+var_30]
0x57E9A0: fstp    [esp+38h+var_18]
0x57E9A4: call    sub_57D7A0
0x57E9A9: fdivr   [esp+38h+var_18]
0x57E9AD: mov     ecx, [esi+1Ch]
0x57E9B0: push    0FABh
0x57E9B5: fmul    dword ptr [esi+20h]
0x57E9B8: fld     dword ptr [esp+3Ch+var_30]
0x57E9BC: fmul    qword ptr ds:0A2FAA0h
0x57E9C2: faddp   st(1), st
0x57E9C4: fstp    dword ptr [esi+2Ch]
0x57E9C7: call    Tile_GetFloat
0x57E9CC: fmul    qword ptr ds:0A68FD0h
0x57E9D2: fstp    dword ptr [esi+30h]
0x57E9D5: fild    dword ptr ds:0B06C50h
0x57E9DB: fstp    dword ptr [esp+14h]
0x57E9DF: fld     dword ptr [esp+14h]
0x57E9E3: fld     qword ptr ds:0A2FAA0h
0x57E9E9: fmul    st, st(1)
0x57E9EB: fstp    [esp+38h+var_20]
0x57E9EF: fstp    [esp+38h+var_18]
0x57E9F3: call    sub_57D7F0
0x57E9F8: fdivr   [esp+38h+var_18]
0x57E9FC: fmul    dword ptr [esi+28h]
0x57E9FF: fsubr   [esp+38h+var_20]
0x57EA03: fstp    dword ptr [esi+34h]
0x57EA06: fldz
0x57EA08: push    1; a3
0x57EA0A: push    ecx
0x57EA0B: fstp    [esp+40h+a2]; a2
0x57EA0E: mov     ecx, [esi+1Ch]
0x57EA11: mov     ecx, [ecx+24h]; this
0x57EA14: call    NiAVObject_UpdateNiAVObject
0x57EA19: pop     edi
0x57EA1A: pop     esi
0x57EA1B: mov     esp, ebp
0x57EA1D: pop     ebp
0x57EA1E: retn
