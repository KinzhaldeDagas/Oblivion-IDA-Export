0x5065B0: sub     esp, 1Ch
0x5065B3: lea     eax, [esp+1Ch+var_14]
0x5065B7: push    eax
0x5065B8: mov     eax, [esp+20h+l]
0x5065BC: lea     ecx, [esp+20h+var_18]
0x5065C0: push    ecx
0x5065C1: mov     ecx, [esp+24h+arg_10]
0x5065C5: lea     edx, [esp+24h+var_1C]
0x5065C9: push    edx; UInt16
0x5065CA: mov     edx, [esp+28h+arg_C]
0x5065CE: push    eax; l
0x5065CF: mov     eax, [esp+2Ch+a4]
0x5065D3: push    ecx; a6
0x5065D4: mov     ecx, [esp+30h+a3]
0x5065D8: push    edx; a5
0x5065D9: mov     edx, [esp+34h+arg_4]
0x5065DD: push    eax; a4
0x5065DE: mov     eax, [esp+38h+a1]
0x5065E2: push    ecx; a3
0x5065E3: push    edx; a2
0x5065E4: push    eax; a1
0x5065E5: call    Script_ExtractArgs
0x5065EA: add     esp, 28h
0x5065ED: test    al, al
0x5065EF: jnz     short loc_5065F5
0x5065F1: add     esp, 1Ch
0x5065F4: retn
0x5065F5: mov     edx, dword ptr [esp+1Ch+var_1C]
0x5065F8: test    edx, edx
0x5065FA: jl      short loc_506673
0x5065FC: mov     ecx, [esp+1Ch+var_18]
0x506600: test    ecx, ecx
0x506602: jl      short loc_506673
0x506604: mov     eax, [esp+1Ch+var_14]
0x506608: test    eax, eax
0x50660A: jl      short loc_506673
0x50660C: cmp     edx, 0FFh
0x506612: jg      short loc_506673
0x506614: cmp     ecx, 0FFh
0x50661A: jg      short loc_506673
0x50661C: cmp     eax, 0FFh
0x506621: jg      short loc_506673
0x506623: fild    dword ptr [esp+1Ch+var_1C]
0x506626: fld     qword ptr ds:0A3DDD8h
0x50662C: fdiv    st(1), st
0x50662E: fxch    st(1)
0x506630: fstp    [esp+1Ch+var_10]
0x506634: fild    [esp+1Ch+var_18]
0x506638: mov     ecx, [esp+1Ch+var_10]
0x50663C: mov     ds:0B45E24h, ecx
0x506642: fdiv    st, st(1)
0x506644: fstp    [esp+1Ch+var_C]
0x506648: mov     edx, [esp+1Ch+var_C]
0x50664C: mov     ds:0B45E28h, edx
0x506652: fidivr  [esp+1Ch+var_14]
0x506656: fstp    [esp+1Ch+var_8]
0x50665A: fld1
0x50665C: mov     eax, [esp+1Ch+var_8]
0x506660: fstp    [esp+1Ch+var_4]
0x506664: mov     ds:0B45E2Ch, eax
0x506669: mov     ecx, [esp+1Ch+var_4]
0x50666D: mov     ds:0B45E30h, ecx
0x506673: mov     al, 1
0x506675: add     esp, 1Ch
0x506678: retn
