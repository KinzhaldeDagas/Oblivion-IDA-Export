0x548330: sub     esp, 8
0x548333: push    esi
0x548334: mov     esi, [esp+0Ch+arg_0]
0x548338: push    esi
0x548339: call    Calc_MasteryFromSkill
0x54833E: mov     ecx, eax
0x548340: add     esp, 4
0x548343: cmp     ecx, 4
0x548346: jl      short loc_54834F
0x548348: xor     al, al
0x54834A: pop     esi
0x54834B: add     esp, 8
0x54834E: retn
0x54834F: mov     eax, [esp+0Ch+arg_4]
0x548353: push    eax
0x548354: push    esi
0x548355: call    Calc_LuckModifiedSkill
0x54835A: fmul    dword ptr ds:0B379C0h
0x548360: add     esp, 8
0x548363: cmp     ecx, 1
0x548366: fadd    dword ptr ds:0B379B8h
0x54836C: fstp    [esp+0Ch+var_8]
0x548370: jl      short loc_548380
0x548372: fld     dword ptr ds:0B379C8h
0x548378: fmul    [esp+0Ch+var_8]
0x54837C: fstp    [esp+0Ch+var_8]
0x548380: push    0; Seed
0x548382: call    GetRandomLargeInteger?
0x548387: cdq
0x548388: mov     ecx, 64h ; 'd'
0x54838D: idiv    ecx
0x54838F: add     esp, 4
0x548392: mov     [esp+0Ch+var_4], edx
0x548396: fild    [esp+0Ch+var_4]
0x54839A: fld     [esp+0Ch+var_8]
0x54839E: fcompp
0x5483A0: fnstsw  ax
0x5483A2: test    ah, 41h
0x5483A5: jnz     short loc_5483B1
0x5483A7: mov     eax, 1
0x5483AC: pop     esi
0x5483AD: add     esp, 8
0x5483B0: retn
0x5483B1: xor     eax, eax
0x5483B3: pop     esi
0x5483B4: add     esp, 8
0x5483B7: retn
