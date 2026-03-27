0x595A20: sub     esp, 14h
0x595A23: mov     eax, ds:0B33398h
0x595A28: push    ebx
0x595A29: push    esi
0x595A2A: push    edi
0x595A2B: mov     edi, [eax+24h]
0x595A2E: mov     esi, ecx
0x595A30: mov     ecx, [esi+28h]
0x595A33: push    0FB5h
0x595A38: call    Tile_GetFloat
0x595A3D: call    Double_To_SInt32
0x595A42: mov     ecx, [esi+40h]
0x595A45: push    0FB5h
0x595A4A: mov     [esp+24h+var_14], eax
0x595A4E: call    Tile_GetFloat
0x595A53: call    Double_To_SInt32
0x595A58: mov     ecx, [esi+30h]
0x595A5B: push    0FB5h
0x595A60: mov     [esp+24h+var_8], eax
0x595A64: call    Tile_GetFloat
0x595A69: call    Double_To_SInt32
0x595A6E: mov     ecx, [esi+38h]
0x595A71: push    0FB5h
0x595A76: mov     [esp+24h+var_4], eax
0x595A7A: call    Tile_GetFloat
0x595A7F: call    Double_To_SInt32
0x595A84: mov     ecx, [esi+48h]
0x595A87: push    0FB5h
0x595A8C: mov     [esp+24h+var_C], eax
0x595A90: call    Tile_GetFloat
0x595A95: call    Double_To_SInt32
0x595A9A: fild    [esp+20h+var_14]
0x595A9E: mov     [esp+20h+var_10], eax
0x595AA2: xor     bl, bl
0x595AA4: fstp    [esp+20h+var_14]
0x595AA8: fld     dword ptr [edi+0B8h]
0x595AAE: fld     qword ptr ds:0A309F0h
0x595AB4: fmul    st(1), st
0x595AB6: fld     [esp+20h+var_14]
0x595ABA: fld     st
0x595ABC: fucomp  st(3)
0x595ABE: fnstsw  ax
0x595AC0: fstp    st(2)
0x595AC2: test    ah, 44h
0x595AC5: jnp     short loc_595AD3
0x595AC7: fdivp   st(1), st
0x595AC9: mov     bl, 1
0x595ACB: fstp    dword ptr [edi+0B8h]
0x595AD1: jmp     short loc_595AD7
0x595AD3: fstp    st
0x595AD5: fstp    st
0x595AD7: fild    [esp+20h+var_10]
0x595ADB: mov     ecx, edi
0x595ADD: fstp    [esp+20h+var_10]
0x595AE1: call    sub_6A8E00
0x595AE6: fld     qword ptr ds:0A309F0h
0x595AEC: fmul    st(1), st
0x595AEE: fld     [esp+20h+var_10]
0x595AF2: fld     st
0x595AF4: fucomp  st(3)
0x595AF6: fnstsw  ax
0x595AF8: fstp    st(2)
0x595AFA: test    ah, 44h
0x595AFD: jnp     short loc_595B20
0x595AFF: fdivp   st(1), st
0x595B01: push    1; int
0x595B03: push    ecx
0x595B04: mov     ecx, edi
0x595B06: fstp    [esp+28h+var_10]
0x595B0A: fld     [esp+28h+var_10]
0x595B0E: fstp    [esp+28h+var_28]; float
0x595B11: call    SoundManager_SetMusicVolume
0x595B16: fld     qword ptr ds:0A309F0h
0x595B1C: mov     bl, 1
0x595B1E: jmp     short loc_595B22
0x595B20: fstp    st(1)
0x595B22: fild    [esp+20h+var_C]
0x595B26: fstp    [esp+20h+var_C]
0x595B2A: fld     dword ptr [edi+0C4h]
0x595B30: fmul    st, st(1)
0x595B32: fld     [esp+20h+var_C]
0x595B36: fld     st
0x595B38: fucomp  st(2)
0x595B3A: fnstsw  ax
0x595B3C: fstp    st(1)
0x595B3E: test    ah, 44h
0x595B41: jnp     short loc_595B4F
0x595B43: fdiv    st, st(1)
0x595B45: mov     bl, 1
0x595B47: fstp    dword ptr [edi+0C4h]
0x595B4D: jmp     short loc_595B51
0x595B4F: fstp    st
0x595B51: fild    [esp+20h+var_8]
0x595B55: fstp    [esp+20h+var_8]
0x595B59: fld     dword ptr [edi+0BCh]
0x595B5F: fmul    st, st(1)
0x595B61: fld     [esp+20h+var_8]
0x595B65: fld     st
0x595B67: fucomp  st(2)
0x595B69: fnstsw  ax
0x595B6B: fstp    st(1)
0x595B6D: test    ah, 44h
0x595B70: jnp     short loc_595B7E
0x595B72: fdiv    st, st(1)
0x595B74: mov     bl, 1
0x595B76: fstp    dword ptr [edi+0BCh]
0x595B7C: jmp     short loc_595B80
0x595B7E: fstp    st
0x595B80: fild    [esp+20h+var_4]
0x595B84: fstp    [esp+20h+var_4]
0x595B88: fld     dword ptr [edi+0C0h]
0x595B8E: fmul    st, st(1)
0x595B90: fld     [esp+20h+var_4]
0x595B94: fld     st
0x595B96: fucomp  st(2)
0x595B98: fnstsw  ax
0x595B9A: fstp    st(1)
0x595B9C: test    ah, 44h
0x595B9F: jnp     short loc_595BB6
0x595BA1: fdivrp  st(1), st
0x595BA3: mov     ecx, edi
0x595BA5: fstp    dword ptr [edi+0C0h]
0x595BAB: pop     edi
0x595BAC: pop     esi
0x595BAD: pop     ebx
0x595BAE: add     esp, 14h
0x595BB1: jmp     sub_6AA280
0x595BB6: test    bl, bl
0x595BB8: fstp    st(1)
0x595BBA: fstp    st
0x595BBC: jz      short loc_595BCB
0x595BBE: mov     ecx, edi
0x595BC0: pop     edi
0x595BC1: pop     esi
0x595BC2: pop     ebx
0x595BC3: add     esp, 14h
0x595BC6: jmp     sub_6AA280
0x595BCB: pop     edi
0x595BCC: pop     esi
0x595BCD: pop     ebx
0x595BCE: add     esp, 14h
0x595BD1: retn
