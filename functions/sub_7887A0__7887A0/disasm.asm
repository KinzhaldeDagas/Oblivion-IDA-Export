0x7887A0: sub     esp, 30h
0x7887A3: push    esi
0x7887A4: push    edi
0x7887A5: mov     edi, [esp+38h+arg_0]
0x7887A9: push    edi
0x7887AA: mov     esi, ecx
0x7887AC: call    sub_788430
0x7887B1: cmp     byte ptr [edi+0F0h], 0
0x7887B8: jz      loc_788A71
0x7887BE: push    ebx
0x7887BF: movzx   ebx, word ptr [esi+54h]
0x7887C3: test    bx, bx
0x7887C6: jz      loc_788A70
0x7887CC: movzx   eax, byte ptr [esi+44h]
0x7887D0: mov     [esp+3Ch+arg_0], eax
0x7887D4: mov     ecx, ds:0B2B6D8h
0x7887DA: fild    [esp+3Ch+arg_0]
0x7887DE: mov     edx, ds:0B2B6DCh
0x7887E4: fld     dword ptr [edi+0FCh]
0x7887EA: mov     eax, ds:0B2B6E0h
0x7887EF: mov     [esp+3Ch+var_18], ecx
0x7887F3: fsub    st, st(1)
0x7887F5: mov     [esp+3Ch+var_14], edx
0x7887F9: fld     qword ptr ds:0A3DDD8h
0x7887FF: mov     [esp+3Ch+var_10], eax
0x788803: fsubrp  st(2), st
0x788805: fdivrp  st(1), st
0x788807: fstp    [esp+3Ch+var_30]
0x78880B: fld     [esp+3Ch+var_18]
0x78880F: fchs
0x788811: fstp    [esp+3Ch+var_C]
0x788815: fld     [esp+3Ch+var_14]
0x788819: fchs
0x78881B: fstp    [esp+3Ch+var_8]
0x78881F: fld     [esp+3Ch+var_8]
0x788823: fld     [esp+3Ch+var_C]
0x788827: call    sub_98598A
0x78882C: fstp    [esp+3Ch+arg_0]
0x788830: fld     [esp+3Ch+arg_0]
0x788834: fmul    qword ptr ds:0A8BA48h
0x78883A: fstp    [esp+3Ch+arg_0]
0x78883E: fldz
0x788840: fld     [esp+3Ch+arg_0]
0x788844: fcom    st(1)
0x788846: fnstsw  ax
0x788848: fstp    st(1)
0x78884A: test    ah, 5
0x78884D: fld     qword ptr ds:0A56CA0h
0x788853: jp      short loc_788863
0x788855: fadd    st(1), st
0x788857: fxch    st(1)
0x788859: fstp    [esp+3Ch+arg_0]
0x78885D: fld     [esp+3Ch+arg_0]
0x788861: fxch    st(1)
0x788863: fld     dword ptr ds:0A30634h
0x788869: push    ebp
0x78886A: fst     [esp+40h+arg_0]
0x78886E: movzx   ebp, bx
0x788871: fstp    [esp+40h+var_2C]
0x788875: movzx   ebx, bp
0x788878: mov     [esp+40h+var_20], ebx
0x78887C: lea     ecx, [esp+40h+var_24]
0x788880: push    ecx; int
0x788881: fild    [esp+44h+var_20]
0x788885: or      eax, 0FFFFFFFFh
0x788888: lea     edx, [esp+44h+var_28]
0x78888C: push    edx; int
0x78888D: fdivr   qword ptr ds:0A2FAA0h
0x788893: movzx   edx, byte ptr [esi+44h]
0x788897: mov     [esp+48h+var_28], eax
0x78889B: mov     [esp+48h+var_24], eax
0x78889F: lea     eax, [esp+48h+var_2C]
0x7888A3: push    eax; int
0x7888A4: lea     ecx, [esp+4Ch+arg_0]
0x7888A8: push    ecx; int
0x7888A9: sub     esp, 10h
0x7888AC: fstp    [esp+60h+var_20]
0x7888B0: fld     [esp+60h+var_20]
0x7888B4: fst     [esp+60h+var_1C]
0x7888B8: mov     [esp+60h+var_20], edx
0x7888BC: fild    [esp+60h+var_20]
0x7888C0: fstp    [esp+60h+var_54]; float
0x7888C4: fld     dword ptr [esi+20h]
0x7888C7: fstp    [esp+60h+var_58]; float
0x7888CB: fld     dword ptr [esi+28h]
0x7888CE: fstp    [esp+60h+var_5C]; float
0x7888D2: fstp    [esp+60h+var_60]; float
0x7888D5: push    ebp; int
0x7888D6: fld     [esp+64h+var_1C]
0x7888DA: push    ecx
0x7888DB: fld     st
0x7888DD: fld1
0x7888DF: fsubrp  st(1), st
0x7888E1: fstp    [esp+68h+var_1C]
0x7888E5: fld     [esp+68h+var_1C]
0x7888E9: fsub    st, st(1)
0x7888EB: fxch    st(3)
0x7888ED: fdivrp  st(2), st
0x7888EF: fxch    st(1)
0x7888F1: fstp    [esp+68h+var_1C]
0x7888F5: fld     [esp+68h+var_1C]
0x7888F9: fmulp   st(2), st
0x7888FB: faddp   st(1), st
0x7888FD: fstp    [esp+68h+var_1C]
0x788901: fld     [esp+68h+var_1C]
0x788905: fstp    [esp+68h+var_68]; float
0x788908: call    sub_787220
0x78890D: movzx   eax, word ptr [esi+54h]
0x788911: mov     ecx, eax
0x788913: sub     ecx, [esp+68h+var_28]
0x788917: sub     eax, [esp+68h+var_24]
0x78891B: sub     ecx, 1
0x78891E: sub     eax, 1
0x788921: movzx   ecx, cx
0x788924: movzx   edx, ax
0x788927: movsx   eax, cx
0x78892A: add     esp, 28h
0x78892D: cmp     eax, ebx
0x78892F: jl      short loc_78893A
0x788931: sub     ecx, ebp
0x788933: movsx   eax, cx
0x788936: cmp     eax, ebx
0x788938: jge     short loc_788931
0x78893A: movsx   eax, dx
0x78893D: cmp     eax, ebx
0x78893F: jl      short loc_78894A
0x788941: sub     edx, ebp
0x788943: movsx   eax, dx
0x788946: cmp     eax, ebx
0x788948: jge     short loc_788941
0x78894A: test    [esp+40h+arg_4], 20h
0x78894F: jz      loc_7889D8
0x788955: fld     [esp+40h+arg_0]
0x788959: mov     byte ptr [edi+0F0h], 1
0x788960: fld     [esp+40h+var_2C]
0x788964: fcompp
0x788966: fnstsw  ax
0x788968: test    ah, 41h
0x78896B: jnz     short loc_78898D
0x78896D: mov     edx, [esi+4Ch]
0x788970: movsx   ecx, cx
0x788973: shl     ecx, 5
0x788976: add     ecx, [edx+0Ch]
0x788979: mov     [edi+0F4h], ecx
0x78897F: movzx   eax, byte ptr [esi+44h]
0x788983: mov     [esp+40h+arg_0], eax
0x788987: fild    [esp+40h+arg_0]
0x78898B: jmp     short loc_7889AB
0x78898D: movsx   ecx, dx
0x788990: mov     edx, [esi+4Ch]
0x788993: shl     ecx, 5
0x788996: add     ecx, [edx+0Ch]
0x788999: mov     [edi+0F4h], ecx
0x78899F: movzx   eax, byte ptr [esi+44h]
0x7889A3: mov     [esp+40h+arg_0], eax
0x7889A7: fild    [esp+40h+arg_0]
0x7889AB: fstp    [esp+40h+arg_0]
0x7889AF: pop     ebp
0x7889B0: fld     [esp+3Ch+arg_0]
0x7889B4: pop     ebx
0x7889B5: fld     st
0x7889B7: mov     byte ptr [edi+104h], 0
0x7889BE: fsubr   qword ptr ds:0A3DDD8h
0x7889C4: fmul    [esp+38h+var_30]
0x7889C8: faddp   st(1), st
0x7889CA: fstp    dword ptr [edi+0FCh]
0x7889D0: pop     edi
0x7889D1: pop     esi
0x7889D2: add     esp, 30h
0x7889D5: retn    8
0x7889D8: mov     eax, [esi+4Ch]
0x7889DB: xor     ebx, ebx
0x7889DD: cmp     eax, ebx
0x7889DF: jz      short loc_7889F2
0x7889E1: movsx   ebp, cx
0x7889E4: shl     ebp, 5
0x7889E7: add     ebp, [eax+0Ch]
0x7889EA: mov     [edi+0F4h], ebp
0x7889F0: jmp     short loc_7889F8
0x7889F2: mov     [edi+0F4h], ebx
0x7889F8: fld     [esp+40h+arg_0]
0x7889FC: mov     [edi+100h], cx
0x788A03: mov     ecx, [edi+0F8h]
0x788A09: fld     st
0x788A0B: fld     qword ptr ds:0A3DDD8h
0x788A11: mov     [edi+10Ch], ecx
0x788A17: fld     st
0x788A19: fsubrp  st(2), st
0x788A1B: fld     [esp+40h+var_30]
0x788A1F: fld     st
0x788A21: fmulp   st(3), st
0x788A23: fxch    st(2)
0x788A25: faddp   st(3), st
0x788A27: fxch    st(2)
0x788A29: fstp    dword ptr [edi+0FCh]
0x788A2F: mov     esi, [esi+4Ch]
0x788A32: cmp     esi, ebx
0x788A34: jz      short loc_788A47
0x788A36: movsx   eax, dx
0x788A39: shl     eax, 5
0x788A3C: add     eax, [esi+0Ch]
0x788A3F: mov     [edi+108h], eax
0x788A45: jmp     short loc_788A4D
0x788A47: mov     [edi+108h], ebx
0x788A4D: fld     [esp+40h+var_2C]
0x788A51: mov     [edi+114h], dx
0x788A58: fld     st
0x788A5A: mov     byte ptr [edi+104h], 1
0x788A61: fsubp   st(3), st
0x788A63: pop     ebp
0x788A64: fxch    st(2)
0x788A66: fmulp   st(1), st
0x788A68: faddp   st(1), st
0x788A6A: fstp    dword ptr [edi+110h]
0x788A70: pop     ebx
0x788A71: pop     edi
0x788A72: pop     esi
0x788A73: add     esp, 30h
0x788A76: retn    8
