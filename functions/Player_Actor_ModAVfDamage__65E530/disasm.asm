0x65E530: cmp     byte ptr ds:0B3BB06h, 0
0x65E537: fld     [esp+arg_4]
0x65E53B: push    esi
0x65E53C: mov     esi, [esp+4+a2]
0x65E540: push    edi
0x65E541: mov     edi, ecx
0x65E543: jz      short loc_65E55A
0x65E545: fldz
0x65E547: fcomp   st(1)
0x65E549: fnstsw  ax
0x65E54B: test    ah, 41h
0x65E54E: jnz     short loc_65E55A
0x65E550: cmp     esi, 8
0x65E553: jl      short loc_65E55A
0x65E555: cmp     esi, 0Ah
0x65E558: jle     short loc_65E5D4
0x65E55A: push    ebx
0x65E55B: mov     ebx, [esp+0Ch+arg_8]
0x65E55F: push    ebx; int
0x65E560: push    ecx
0x65E561: fstp    [esp+14h+var_14]; float
0x65E564: push    esi; int
0x65E565: call    sub_5E02D0
0x65E56A: fstp    [esp+0Ch+arg_4]
0x65E56E: fld     [esp+0Ch+arg_4]
0x65E572: push    0
0x65E574: push    ecx
0x65E575: fstp    [esp+14h+var_14]
0x65E578: push    esi
0x65E579: push    2
0x65E57B: mov     ecx, edi
0x65E57D: call    Player_ModAVModifierf
0x65E582: push    esi; a2
0x65E583: call    sub_57A6F0
0x65E588: add     esp, 4
0x65E58B: cmp     esi, 8
0x65E58E: jnz     short loc_65E5C4
0x65E590: fldz
0x65E592: fld     [esp+0Ch+arg_4]
0x65E596: fcom    st(1)
0x65E598: fnstsw  ax
0x65E59A: fstp    st(1)
0x65E59C: test    ah, 5
0x65E59F: jp      short loc_65E5C2
0x65E5A1: mov     eax, [edi]
0x65E5A3: mov     edx, [eax+3B8h]
0x65E5A9: push    ecx
0x65E5AA: fstp    [esp+10h+var_10]
0x65E5AD: push    ebx
0x65E5AE: mov     ecx, edi
0x65E5B0: call    edx
0x65E5B2: push    0
0x65E5B4: push    esi
0x65E5B5: mov     ecx, edi
0x65E5B7: call    sub_5E2670
0x65E5BC: pop     ebx
0x65E5BD: pop     edi
0x65E5BE: pop     esi
0x65E5BF: retn    0Ch
0x65E5C2: fstp    st
0x65E5C4: push    0
0x65E5C6: push    esi
0x65E5C7: mov     ecx, edi
0x65E5C9: call    sub_5E2670
0x65E5CE: pop     ebx
0x65E5CF: pop     edi
0x65E5D0: pop     esi
0x65E5D1: retn    0Ch
0x65E5D4: pop     edi
0x65E5D5: fstp    st
0x65E5D7: pop     esi
0x65E5D8: retn    0Ch
