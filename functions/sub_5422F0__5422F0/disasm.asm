0x5422F0: push    ecx
0x5422F1: push    ebp
0x5422F2: push    esi
0x5422F3: mov     esi, ecx
0x5422F5: mov     ecx, [esi+0Ch]
0x5422F8: xor     ebp, ebp
0x5422FA: cmp     ecx, ebp
0x5422FC: jz      loc_542581
0x542302: test    byte ptr [esi+0FCh], 1
0x542309: push    edi
0x54230A: jnz     short loc_542372
0x54230C: cmp     [esi+18h], ebp
0x54230F: jz      short loc_542372
0x542311: fld     dword ptr [esi+0D0h]
0x542317: mov     [esp+10h+var_4], 18h
0x54231F: fld     dword ptr [esi+0D4h]
0x542325: fcompp
0x542327: fnstsw  ax
0x542329: test    ah, 41h
0x54232C: jz      short loc_542332
0x54232E: mov     [esp+10h+var_4], ebp
0x542332: movzx   eax, byte ptr [ecx+54h]
0x542336: fild    [esp+10h+var_4]
0x54233A: mov     edx, 0FFh
0x54233F: sub     edx, eax
0x542341: fadd    dword ptr [esi+0D0h]
0x542347: imul    edx, 16h
0x54234A: fsub    dword ptr [esi+0D4h]
0x542350: mov     [esp+10h+var_4], edx
0x542354: fild    [esp+10h+var_4]
0x542358: fmul    qword ptr ds:0A3F398h
0x54235E: fadd    qword ptr ds:0A2F928h
0x542364: fcompp
0x542366: fnstsw  ax
0x542368: test    ah, 5
0x54236B: jp      short loc_5423D2
0x54236D: cmp     [esi+14h], ebp
0x542370: jnz     short loc_5423D2
0x542372: add     ecx, 30h ; '0'
0x542375: call    sub_4EECE0
0x54237A: cmp     eax, ebp
0x54237C: mov     [esi+18h], eax
0x54237F: jnz     short loc_5423A6
0x542381: push    ebp; int
0x542382: push    offset ??_R0?AVTESWeather@@@8; struct TypeDescriptor *
0x542387: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x54238C: push    ebp; int
0x54238D: push    15Eh; a1
0x542392: call    TESForm_LookupByFormID
0x542397: add     esp, 4
0x54239A: push    eax; void *
0x54239B: call    OblivionDynamicCast
0x5423A0: add     esp, 14h
0x5423A3: mov     [esi+18h], eax
0x5423A6: mov     eax, ds:0B33A98h
0x5423AB: mov     eax, [eax+0BCh]
0x5423B1: cmp     eax, ebp
0x5423B3: jz      short loc_5423D2
0x5423B5: lea     edi, [eax+4]
0x5423B8: cmp     edi, ebp
0x5423BA: jz      short loc_5423D2
0x5423BC: lea     esp, [esp+0]
0x5423C0: mov     ecx, [edi]
0x5423C2: cmp     ecx, ebp
0x5423C4: jz      short loc_5423D2
0x5423C6: call    sub_4A2E90
0x5423CB: mov     edi, [edi+4]
0x5423CE: cmp     edi, ebp
0x5423D0: jnz     short loc_5423C0
0x5423D2: cmp     [esi+1Ch], ebp
0x5423D5: push    ebx
0x5423D6: setz    bl
0x5423D9: cmp     [esi+10h], ebp
0x5423DC: jz      short loc_5423FE
0x5423DE: mov     ecx, ds:0B33B00h
0x5423E4: call    sub_45A500
0x5423E9: test    al, al
0x5423EB: jz      short loc_5423FE
0x5423ED: mov     ecx, ds:0B33B00h
0x5423F3: mov     edx, [ecx+18h]
0x5423F6: shr     edx, 4
0x5423F9: test    dl, 1
0x5423FC: jz      short loc_542428
0x5423FE: test    bl, bl
0x542400: jz      short loc_542428
0x542402: mov     eax, ds:0B333C4h
0x542407: mov     eax, [eax+6E8h]
0x54240D: cmp     eax, ebp
0x54240F: mov     edi, [esi+18h]
0x542412: jz      short loc_54242B
0x542414: mov     eax, [eax+24h]
0x542417: cmp     eax, ebp
0x542419: jz      short loc_54242B
0x54241B: cmp     dword ptr [esi+0DCh], 2
0x542422: jz      short loc_54242B
0x542424: mov     edi, eax
0x542426: jmp     short loc_54242B
0x542428: mov     edi, [esi+1Ch]
0x54242B: cmp     edi, ebp
0x54242D: pop     ebx
0x54242E: jz      short loc_542490
0x542430: cmp     [esi+14h], ebp
0x542433: mov     cl, 10h
0x542435: jz      short loc_54243F
0x542437: test    [esi+0FCh], cl
0x54243D: jz      short loc_542490
0x54243F: mov     eax, [esi+10h]
0x542442: cmp     edi, eax
0x542444: jz      short loc_542490
0x542446: test    [esi+0FCh], cl
0x54244C: jz      short loc_54245F
0x54244E: mov     ecx, [esi+38h]
0x542451: cmp     ecx, ebp
0x542453: mov     [esi+14h], ebp
0x542456: jz      short loc_542462
0x542458: call    sub_53D6C0
0x54245D: jmp     short loc_542462
0x54245F: mov     [esi+14h], eax
0x542462: mov     [esi+10h], edi
0x542465: mov     ecx, ds:0B33B00h
0x54246B: call    sub_45A500
0x542470: test    al, al
0x542472: jnz     short loc_542480
0x542474: fld     dword ptr [esi+0D0h]
0x54247A: fstp    dword ptr [esi+0D4h]
0x542480: mov     ecx, esi
0x542482: call    sub_540850
0x542487: or      dword ptr [esi+0FCh], 1
0x54248E: jmp     short loc_542497
0x542490: and     dword ptr [esi+0FCh], 0FFFFFFFEh
0x542497: mov     ecx, [esi+10h]
0x54249A: fld1
0x54249C: cmp     ecx, ebp
0x54249E: pop     edi
0x54249F: jnz     short loc_5424A5
0x5424A1: fldz
0x5424A3: jmp     short loc_542511
0x5424A5: cmp     [esi+14h], ebp
0x5424A8: jnz     short loc_5424B2
0x5424AA: fst     dword ptr [esi+0D8h]
0x5424B0: jmp     short loc_542517
0x5424B2: fld     dword ptr [esi+0D0h]
0x5424B8: mov     [esp+0Ch+var_4], 18h
0x5424C0: fld     dword ptr [esi+0D4h]
0x5424C6: fcompp
0x5424C8: fnstsw  ax
0x5424CA: test    ah, 41h
0x5424CD: jz      short loc_5424D3
0x5424CF: mov     [esp+0Ch+var_4], ebp
0x5424D3: fild    [esp+0Ch+var_4]
0x5424D7: movzx   ecx, byte ptr [ecx+4Bh]
0x5424DB: mov     [esp+0Ch+var_4], ecx
0x5424DF: fadd    dword ptr [esi+0D0h]
0x5424E5: fsub    dword ptr [esi+0D4h]
0x5424EB: fld     dword ptr ds:0B36628h
0x5424F1: fld     dword ptr ds:0B36630h
0x5424F7: fld     st
0x5424F9: fsubp   st(2), st
0x5424FB: fild    [esp+0Ch+var_4]
0x5424FF: fmul    qword ptr ds:0A3F398h
0x542505: fmulp   st(2), st
0x542507: faddp   st(1), st
0x542509: fstp    [esp+0Ch+var_4]
0x54250D: fdiv    [esp+0Ch+var_4]
0x542511: fstp    dword ptr [esi+0D8h]
0x542517: test    byte ptr [esi+0FCh], 8
0x54251E: jz      short loc_542546
0x542520: fld     dword ptr [esi+0D8h]
0x542526: fsub    dword ptr [esi+0F4h]
0x54252C: fld     dword ptr ds:0B36638h
0x542532: fadd    qword ptr ds:0A2F928h
0x542538: fmulp   st(1), st
0x54253A: fadd    dword ptr [esi+0F4h]
0x542540: fstp    dword ptr [esi+0D8h]
0x542546: cmp     [esi+14h], ebp
0x542549: jz      short loc_542556
0x54254B: mov     ecx, esi
0x54254D: fstp    st
0x54254F: call    sub_540850
0x542554: fld1
0x542556: fcom    dword ptr [esi+0D8h]
0x54255C: fnstsw  ax
0x54255E: test    ah, 5
0x542561: jp      short loc_54257F
0x542563: and     dword ptr [esi+0FCh], 0FFFFFFF7h
0x54256A: fstp    dword ptr [esi+0D8h]
0x542570: fldz
0x542572: mov     [esi+14h], ebp
0x542575: fstp    dword ptr [esi+0F4h]
0x54257B: pop     esi
0x54257C: pop     ebp
0x54257D: pop     ecx
0x54257E: retn
0x54257F: fstp    st
0x542581: pop     esi
0x542582: pop     ebp
0x542583: pop     ecx
0x542584: retn
