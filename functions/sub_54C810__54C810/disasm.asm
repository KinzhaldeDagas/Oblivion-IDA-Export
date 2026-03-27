0x54C810: sub     esp, 10h
0x54C813: push    esi
0x54C814: push    edi
0x54C815: mov     edi, [esp+18h+arg_4]
0x54C819: xor     esi, esi
0x54C81B: test    edi, edi
0x54C81D: jz      loc_54C9AE
0x54C823: push    ebp
0x54C824: mov     ebp, [esp+1Ch+arg_8]
0x54C828: test    ebp, ebp
0x54C82A: jz      loc_54C9AD
0x54C830: push    ebx
0x54C831: mov     ebx, [esp+20h+arg_C]
0x54C835: test    ebx, ebx
0x54C837: jz      loc_54C9AC
0x54C83D: mov     eax, [edi]
0x54C83F: fld     [esp+20h+arg_0]
0x54C843: mov     edx, [eax+0Ch]
0x54C846: fstp    [esp+20h+var_8]
0x54C84A: mov     ecx, edi
0x54C84C: call    edx
0x54C84E: fcomp   [esp+20h+var_8]
0x54C852: fnstsw  ax
0x54C854: test    ah, 41h
0x54C857: jz      loc_54C9AC
0x54C85D: mov     eax, [edi]
0x54C85F: fldz
0x54C861: mov     edx, [eax+0Ch]
0x54C864: fstp    dword ptr [esp+20h+var_8]
0x54C868: mov     ecx, edi
0x54C86A: call    edx
0x54C86C: fstp    dword ptr [esp+20h+var_10]
0x54C870: mov     edi, [ebp+4]
0x54C873: fld     dword ptr [esp+20h+var_10]
0x54C877: test    edi, edi
0x54C879: jz      loc_54C974
0x54C87F: mov     ebp, esi
0x54C881: mov     esi, [edi+8]
0x54C884: test    esi, esi
0x54C886: jz      short loc_54C8A1
0x54C888: mov     eax, [esi]
0x54C88A: fstp    dword ptr [esp+20h+var_8]
0x54C88E: mov     edx, [eax+0Ch]
0x54C891: mov     ecx, esi
0x54C893: call    edx
0x54C895: fadd    dword ptr [esp+20h+var_10]
0x54C899: fstp    dword ptr [esp+20h+var_10]
0x54C89D: fld     dword ptr [esp+20h+var_10]
0x54C8A1: fld     [esp+20h+arg_0]
0x54C8A5: fcom    st(1)
0x54C8A7: fnstsw  ax
0x54C8A9: test    ah, 41h
0x54C8AC: jnp     short loc_54C8BB
0x54C8AE: mov     edi, [edi]
0x54C8B0: fstp    st
0x54C8B2: test    edi, edi
0x54C8B4: jnz     short loc_54C87F
0x54C8B6: jmp     loc_54C974
0x54C8BB: test    esi, esi
0x54C8BD: jz      loc_54C972
0x54C8C3: test    ebp, ebp
0x54C8C5: fstp    st(1)
0x54C8C7: jz      short loc_54C8CF
0x54C8C9: mov     [esp+20h+arg_4], ebp
0x54C8CD: jmp     short loc_54C8D7
0x54C8CF: mov     eax, [esp+20h+arg_4]
0x54C8D3: mov     [esp+20h+arg_4], eax
0x54C8D7: fsub    dword ptr [esp+20h+var_8]
0x54C8DB: mov     edx, [esi]
0x54C8DD: mov     ebp, [ebx]
0x54C8DF: mov     eax, [edx+0Ch]
0x54C8E2: mov     ecx, esi
0x54C8E4: fstp    [esp+20h+var_10]
0x54C8E8: add     ebp, 18h
0x54C8EB: call    eax
0x54C8ED: fdivr   [esp+20h+var_10]
0x54C8F1: mov     edx, [ebp+0]
0x54C8F4: push    ecx
0x54C8F5: mov     ecx, [esp+24h+arg_4]
0x54C8F9: fstp    dword ptr [esp+24h+var_8]
0x54C8FD: fld     dword ptr [esp+24h+var_8]
0x54C901: fstp    [esp+24h+var_24]
0x54C904: push    esi
0x54C905: push    ecx
0x54C906: mov     ecx, ebx
0x54C908: call    edx
0x54C90A: cmp     [esp+20h+arg_10], 0
0x54C90F: jnz     loc_54C9AC
0x54C915: fld     [esp+20h+var_10]
0x54C919: mov     eax, [ebx]
0x54C91B: mov     edx, [eax+10h]
0x54C91E: fstp    [esp+20h+arg_4]
0x54C922: fld     [esp+20h+arg_4]
0x54C926: push    ecx
0x54C927: mov     ecx, ebx
0x54C929: fstp    [esp+24h+var_24]
0x54C92C: call    edx
0x54C92E: mov     ebp, [esi]
0x54C930: mov     eax, [ebp+0Ch]
0x54C933: mov     ecx, esi
0x54C935: call    eax
0x54C937: fstp    [esp+20h+var_8]
0x54C93B: mov     edx, [ebx]
0x54C93D: mov     eax, [edx+0Ch]
0x54C940: mov     ecx, ebx
0x54C942: call    eax
0x54C944: fsubr   [esp+20h+var_8]
0x54C948: mov     edx, [ebp+10h]
0x54C94B: push    ecx
0x54C94C: fstp    [esp+24h+arg_4]
0x54C950: mov     ecx, esi
0x54C952: fld     [esp+24h+arg_4]
0x54C956: fstp    [esp+24h+var_24]
0x54C959: call    edx
0x54C95B: mov     ecx, [esp+20h+arg_8]
0x54C95F: lea     eax, [esp+20h+arg_C]
0x54C963: push    eax
0x54C964: push    edi
0x54C965: call    sub_589640
0x54C96A: pop     ebx
0x54C96B: pop     ebp
0x54C96C: pop     edi
0x54C96D: pop     esi
0x54C96E: add     esp, 10h
0x54C971: retn
0x54C972: fstp    st
0x54C974: cmp     [esp+20h+arg_10], 0
0x54C979: jnz     short loc_54C9AA
0x54C97B: fsubr   [esp+20h+arg_0]
0x54C97F: mov     edx, [ebx]
0x54C981: mov     eax, [edx+10h]
0x54C984: push    ecx
0x54C985: fstp    [esp+24h+arg_4]
0x54C989: mov     ecx, ebx
0x54C98B: fld     [esp+24h+arg_4]
0x54C98F: fstp    [esp+24h+var_24]
0x54C992: call    eax
0x54C994: lea     ecx, [esp+20h+arg_C]
0x54C998: push    ecx
0x54C999: mov     ecx, [esp+24h+arg_8]
0x54C99D: call    sub_5B1E20
0x54C9A2: pop     ebx
0x54C9A3: pop     ebp
0x54C9A4: pop     edi
0x54C9A5: pop     esi
0x54C9A6: add     esp, 10h
0x54C9A9: retn
0x54C9AA: fstp    st
0x54C9AC: pop     ebx
0x54C9AD: pop     ebp
0x54C9AE: pop     edi
0x54C9AF: pop     esi
0x54C9B0: add     esp, 10h
0x54C9B3: retn
