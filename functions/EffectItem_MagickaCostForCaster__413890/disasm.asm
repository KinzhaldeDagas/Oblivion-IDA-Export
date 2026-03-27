0x413890: push    ecx
0x413891: push    esi
0x413892: push    edi
0x413893: mov     edi, ecx
0x413895: call    EffectItem_MagickaCost
0x41389A: fstp    [esp+0Ch+var_4]
0x41389E: mov     esi, [esp+0Ch+arg_0]
0x4138A2: test    esi, esi
0x4138A4: jz      short loc_4138F4
0x4138A6: mov     eax, [edi+18h]
0x4138A9: test    eax, eax
0x4138AB: jz      short loc_4138B2
0x4138AD: mov     edi, [eax+4]
0x4138B0: jmp     short loc_4138B8
0x4138B2: mov     eax, [edi+1Ch]
0x4138B5: mov     edi, [eax+64h]
0x4138B8: push    ebx
0x4138B9: mov     ebx, [esi]
0x4138BB: mov     edx, ebx
0x4138BD: mov     eax, [edx+284h]
0x4138C3: push    7
0x4138C5: mov     ecx, esi
0x4138C7: call    eax
0x4138C9: push    eax
0x4138CA: push    edi
0x4138CB: call    Magic_GetSkillAVFromSchool
0x4138D0: mov     edx, [ebx+284h]
0x4138D6: add     esp, 4
0x4138D9: push    eax; int
0x4138DA: mov     ecx, esi
0x4138DC: call    edx
0x4138DE: fld     [esp+1Ch+var_C]
0x4138E2: push    eax; int
0x4138E3: push    ecx
0x4138E4: fstp    [esp+24h+var_24]; float
0x4138E7: call    Calc_SkillModifiedMagickaCost
0x4138EC: add     esp, 0Ch
0x4138EF: fstp    [esp+18h+var_C]
0x4138F3: pop     ebx
0x4138F4: fld     [esp+14h+var_C]
0x4138F8: fld     st
0x4138FA: call    Double_To_SInt32
0x4138FF: mov     [esp+14h+var_4], eax
0x413903: fild    [esp+14h+var_4]
0x413907: pop     edi
0x413908: pop     esi
0x413909: fstp    [esp+0Ch+var_4]
0x41390D: fld     [esp+0Ch+var_4]
0x413911: fld     st
0x413913: fsubp   st(2), st
0x413915: fxch    st(1)
0x413917: fcomp   ds:dbl_A2FC68
0x41391D: fnstsw  ax
0x41391F: test    ah, 1
0x413922: jz      short loc_41392A
0x413924: fsub    ds:dbl_A2F928
0x41392A: fstp    [esp+0Ch+var_C]
0x41392D: fld1
0x41392F: fld     [esp+0Ch+var_C]
0x413932: fcom    st(1)
0x413934: fnstsw  ax
0x413936: test    ah, 41h
0x413939: jnz     short loc_413949
0x41393B: fstp    st(1)
0x41393D: fstp    [esp+0Ch+var_4]
0x413941: fld     [esp+0Ch+var_4]
0x413945: pop     ecx
0x413946: retn    4
0x413949: fstp    st
0x41394B: fstp    [esp+0Ch+var_4]
0x41394F: fld     [esp+0Ch+var_4]
0x413953: pop     ecx
0x413954: retn    4
